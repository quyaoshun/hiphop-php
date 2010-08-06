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
// @generated by HipHop Compiler

#ifndef __GENERATED_cls_recursivedirectoryiterator_h__
#define __GENERATED_cls_recursivedirectoryiterator_h__

#include <cls/directoryiterator.h>
#include <cls/recursiveiterator.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/iterator.php line 210 */
class c_recursivedirectoryiterator : public c_directoryiterator {
  BEGIN_CLASS_MAP(recursivedirectoryiterator)
    PARENT_CLASS(directoryiterator)
    PARENT_CLASS(iterator)
    PARENT_CLASS(recursiveiterator)
    PARENT_CLASS(seekableiterator)
    PARENT_CLASS(splfileinfo)
    PARENT_CLASS(traversable)
  END_CLASS_MAP(recursivedirectoryiterator)
  DECLARE_CLASS_COMMON(recursivedirectoryiterator, RecursiveDirectoryIterator)
  DECLARE_INVOKE_EX(recursivedirectoryiterator, RecursiveDirectoryIterator, directoryiterator)

  // DECLARE_STATIC_PROP_OPS
  public:
#define OMIT_JUMP_TABLE_CLASS_STATIC_GETINIT_recursivedirectoryiterator 1
#define OMIT_JUMP_TABLE_CLASS_STATIC_GET_recursivedirectoryiterator 1
#define OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_recursivedirectoryiterator 1
  static Variant os_constant(const char *s);

  // DECLARE_INSTANCE_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_GETARRAY_recursivedirectoryiterator 1
  #define OMIT_JUMP_TABLE_CLASS_SETARRAY_recursivedirectoryiterator 1
  #define OMIT_JUMP_TABLE_CLASS_exists_recursivedirectoryiterator 1
  #define OMIT_JUMP_TABLE_CLASS_exists_PRIVATE_recursivedirectoryiterator 1
  #define OMIT_JUMP_TABLE_CLASS_get_recursivedirectoryiterator 1
  #define OMIT_JUMP_TABLE_CLASS_get_PRIVATE_recursivedirectoryiterator 1
  #define OMIT_JUMP_TABLE_CLASS_set_recursivedirectoryiterator 1
  #define OMIT_JUMP_TABLE_CLASS_set_PRIVATE_recursivedirectoryiterator 1
  #define OMIT_JUMP_TABLE_CLASS_lval_recursivedirectoryiterator 1
  #define OMIT_JUMP_TABLE_CLASS_lval_PRIVATE_recursivedirectoryiterator 1

  // DECLARE_INSTANCE_PUBLIC_PROP_OPS
  public:
#define OMIT_JUMP_TABLE_CLASS_exists_PUBLIC_recursivedirectoryiterator 1
#define OMIT_JUMP_TABLE_CLASS_get_PUBLIC_recursivedirectoryiterator 1
#define OMIT_JUMP_TABLE_CLASS_set_PUBLIC_recursivedirectoryiterator 1
#define OMIT_JUMP_TABLE_CLASS_lval_PUBLIC_recursivedirectoryiterator 1

  // DECLARE_COMMON_INVOKE
#define OMIT_JUMP_TABLE_CLASS_STATIC_INVOKE_recursivedirectoryiterator 1
  virtual Variant o_invoke(MethodIndex methodIndex, const char *s,CArrRef ps, int64 h,
                           bool f = true);
  virtual Variant o_invoke_few_args(MethodIndex methodIndex, const char *s, int64 h,
                                    int count,
                                    INVOKE_FEW_ARGS_DECL_ARGS);

  public:
  DECLARE_INVOKES_FROM_EVAL
  void init();
  public: void t___construct(Variant v_path, Variant v_flags = 16LL /* recursivedirectoryiterator::CURRENT_AS_FILEINFO */);
  public: c_recursivedirectoryiterator *create(Variant v_path, Variant v_flags = 16LL /* recursivedirectoryiterator::CURRENT_AS_FILEINFO */);
  public: ObjectData *dynCreate(CArrRef params, bool init = true);
  public: void dynConstruct(CArrRef params);
  public: void dynConstructFromEval(Eval::VariableEnvironment &env, const Eval::FunctionCallExpression *call);
  public: Variant t_current();
  public: Variant t_key();
  public: Variant t_next();
  public: Variant t_rewind();
  public: Variant t_seek(CVarRef v_position);
  public: String t___tostring();
  public: bool t_valid();
  public: bool t_haschildren();
  public: Object t_getchildren();
  public: String t_getsubpath();
  public: String t_getsubpathname();
};
extern struct ObjectStaticCallbacks cw_recursivedirectoryiterator;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_recursivedirectoryiterator_h__
