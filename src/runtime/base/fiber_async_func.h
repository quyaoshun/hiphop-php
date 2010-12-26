/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef __HPHP_FIBER_H__
#define __HPHP_FIBER_H__

#include <runtime/base/complex_types.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

class FiberAsyncFunc {
public:
  // These values have to be consistent with what's in system/globals/
  // constants.php, which was generated by bin/gen_constants.php
  enum Strategy {
    GlobalStateIgnore    = 0,
    GlobalStateOverwrite = 1,
    GlobalStateSkip      = 2,
    GlobalStateResolve   = 3,
  };

public:
  /**
   * Restart fiber job dispatcher. This is needed for any fiber job to run.
   * Otherwise, everything runs in single thread.
   */
  static void Restart();

  /**
   * hphp_session_exit() tells fiber engine that current request is complete,
   * and do not try to access any leftover SmartAllocated pointers.
   */
  static void OnRequestExit();

  /**
   * Stop fiber job dispatcher.
   */
  static void Stop();

  /**
   * Disable fiber job dispatcher.
   */
  static void Disable();

  /**
   * Whether current thread is a fiber.
   */
  static bool IsFiberThread();

public:

  /**
   * Create an asynchronous function call. This always returns a handle.
   */
  static Object Start(CVarRef function, CArrRef params);

  /**
   * Query if some async calls are finished. If msTimeout is -1, non-blocking,
   * 0, wait forever, positive number, wait for at most that many milli-
   * seconds.
   */
  static Array Status(CArrRef funcs, int msTimeout);

  /**
   * Get results of an async call. This is blocking until task is finished.
   */
  static Variant Result(CObjRef func, Strategy default_strategy,
                        CVarRef additional_strategies);
};

///////////////////////////////////////////////////////////////////////////////
}

#endif // __HPHP_FIBER_H__
