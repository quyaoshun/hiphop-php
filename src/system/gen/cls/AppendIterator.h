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

#ifndef __GENERATED_cls_AppendIterator_h34b70f7d__
#define __GENERATED_cls_AppendIterator_h34b70f7d__

#include <cls/AppendIterator.fw.h>
#include <cls/OuterIterator.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/iterator.php line 697 */
FORWARD_DECLARE_CLASS(AppendIterator);
class c_AppendIterator : public ExtObjectData {
  public:

  // Properties
  Variant m_iterators;

  // Class Map
  virtual bool o_instanceof(CStrRef s) const;
  DECLARE_CLASS_COMMON_NO_SWEEP(AppendIterator, AppendIterator)
  DECLARE_INVOKE_EX(AppendIterator, AppendIterator, ObjectData)

  // DECLARE_STATIC_PROP_OPS
  public:
  static Variant os_getInit(CStrRef s);
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GET_AppendIterator 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_AppendIterator 1
  #define OMIT_JUMP_TABLE_CLASS_CONSTANT_AppendIterator 1

  // DECLARE_INSTANCE_PROP_OPS
  public:
  virtual const ClassPropTable *o_getClassPropTable() const;
  virtual Variant *o_realProp(CStrRef s, int flags,
                              CStrRef context = null_string) const;
  Variant *o_realPropPrivate(CStrRef s, int flags) const;

  // DECLARE_INSTANCE_PUBLIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_realProp_PUBLIC_AppendIterator 1

  // DECLARE_COMMON_INVOKE
  static bool os_get_call_info(MethodCallPackage &mcp, int64 hash = -1);
  #define OMIT_JUMP_TABLE_CLASS_STATIC_INVOKE_AppendIterator 1
  virtual bool o_get_call_info(MethodCallPackage &mcp, int64 hash = -1);

  public:
  c_AppendIterator(ObjectData* r = NULL) : m_iterators(Variant::nullInit) {
    setAttribute(HasCall);
  }
  Variant doCall(Variant v_name, Variant v_arguments, bool fatal);
  public: void t___construct();
  public: c_AppendIterator *create();
  public: void dynConstruct(CArrRef params);
  public: void getConstructor(MethodCallPackage &mcp);
  public: void t_append(CVarRef v_it);
  public: Variant t_getinneriterator();
  public: void t_rewind();
  public: bool t_valid();
  public: Variant t_current();
  public: Variant t_key();
  public: void t_next();
  public: Variant t___call(Variant v_func, Variant v_params);
  DECLARE_METHOD_INVOKE_HELPERS(next);
  DECLARE_METHOD_INVOKE_HELPERS(key);
  DECLARE_METHOD_INVOKE_HELPERS(valid);
  DECLARE_METHOD_INVOKE_HELPERS(getinneriterator);
  DECLARE_METHOD_INVOKE_HELPERS(append);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(current);
  DECLARE_METHOD_INVOKE_HELPERS(__call);
  DECLARE_METHOD_INVOKE_HELPERS(rewind);
};
extern struct ObjectStaticCallbacks cw_AppendIterator;
ObjectData *coo_AppendIterator() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_AppendIterator_h34b70f7d__
