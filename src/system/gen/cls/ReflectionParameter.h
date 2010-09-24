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

#ifndef __GENERATED_cls_ReflectionParameter_h178d2c14__
#define __GENERATED_cls_ReflectionParameter_h178d2c14__

#include <cls/Reflector.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/reflection.php line 46 */
class c_ReflectionParameter : public ExtObjectData {
  public:

  // Properties
  Variant m_info;

  // Class Map
  virtual bool o_instanceof(CStrRef s) const;
  DECLARE_CLASS_COMMON(ReflectionParameter, ReflectionParameter)
  DECLARE_INVOKE_EX(ReflectionParameter, ReflectionParameter, ObjectData)

  // DECLARE_STATIC_PROP_OPS
  public:
  static Variant os_getInit(CStrRef s);
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GET_ReflectionParameter 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_ReflectionParameter 1
  #define OMIT_JUMP_TABLE_CLASS_CONSTANT_ReflectionParameter 1

  // DECLARE_INSTANCE_PROP_OPS
  public:
  virtual void o_getArray(Array &props) const;
  #define OMIT_JUMP_TABLE_CLASS_SETARRAY_ReflectionParameter 1
  #define OMIT_JUMP_TABLE_CLASS_realProp_ReflectionParameter 1
  #define OMIT_JUMP_TABLE_CLASS_realProp_PRIVATE_ReflectionParameter 1

  // DECLARE_INSTANCE_PUBLIC_PROP_OPS
  public:
  virtual Variant *o_realPropPublic(CStrRef s, int flags) const;

  // DECLARE_COMMON_INVOKE
  static bool os_get_call_info(MethodCallPackage &mcp, int64 hash = -1);
  #define OMIT_JUMP_TABLE_CLASS_STATIC_INVOKE_ReflectionParameter 1
  virtual bool o_get_call_info(MethodCallPackage &mcp, int64 hash = -1);

  public:
  DECLARE_INVOKES_FROM_EVAL
  void init();
  public: void t___construct(Variant v_func, Variant v_param);
  public: c_ReflectionParameter *create(Variant v_func, Variant v_param);
  public: ObjectData *dynCreate(CArrRef params, bool init = true);
  public: void dynConstruct(CArrRef params);
  public: void getConstructor(MethodCallPackage &mcp);
  public: void dynConstructFromEval(Eval::VariableEnvironment &env, const Eval::FunctionCallExpression *call);
  public: String t___tostring();
  public: static Variant ti_export(const char* cls, CVarRef v_func, CVarRef v_param, CVarRef v_ret);
  public: Variant t_getname();
  public: Variant t_ispassedbyreference();
  public: Variant t_getdeclaringclass();
  public: Variant t_getclass();
  public: bool t_isarray();
  public: Variant t_allowsnull();
  public: bool t_isoptional();
  public: bool t_isdefaultvalueavailable();
  public: Variant t_getdefaultvalue();
  public: Variant t_getposition();
  public: static Variant t_export(CVarRef v_func, CVarRef v_param, CVarRef v_ret) { return ti_export("ReflectionParameter", v_func, v_param, v_ret); }
  DECLARE_METHOD_INVOKE_HELPERS(__tostring);
  DECLARE_METHOD_INVOKE_HELPERS(getdeclaringclass);
  DECLARE_METHOD_INVOKE_HELPERS(isdefaultvalueavailable);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(getclass);
  DECLARE_METHOD_INVOKE_HELPERS(export);
  DECLARE_METHOD_INVOKE_HELPERS(allowsnull);
  DECLARE_METHOD_INVOKE_HELPERS(getposition);
  DECLARE_METHOD_INVOKE_HELPERS(isarray);
  DECLARE_METHOD_INVOKE_HELPERS(isoptional);
  DECLARE_METHOD_INVOKE_HELPERS(getdefaultvalue);
  DECLARE_METHOD_INVOKE_HELPERS(getname);
  DECLARE_METHOD_INVOKE_HELPERS(ispassedbyreference);
};
extern struct ObjectStaticCallbacks cw_ReflectionParameter;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_ReflectionParameter_h178d2c14__
