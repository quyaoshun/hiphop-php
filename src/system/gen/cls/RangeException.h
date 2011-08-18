/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
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
// @generated by HipHop Compiler

#ifndef __GENERATED_cls_RangeException_h509e241f__
#define __GENERATED_cls_RangeException_h509e241f__

#include <cls/RangeException.fw.h>
#include <cls/RuntimeException.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/exception.php line 259 */
FORWARD_DECLARE_CLASS(RangeException);
extern const ObjectStaticCallbacks cw_RangeException;
class c_RangeException : public c_RuntimeException {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_COMMON_NO_SWEEP(RangeException, RangeException)

  // DECLARE_STATIC_PROP_OPS
  public:

  // DECLARE_COMMON_INVOKE
  static const int s_call_info_table = 0;
  static const int s_call_info_index = 0;

  public:
};
ObjectData *coo_RangeException() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_RangeException_h509e241f__
