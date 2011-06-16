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

#include <php/classes/soapfault.h>
#include <php/classes/soapfault.fws.h>

// Dependencies
#include <php/classes/exception.h>
#include <runtime/ext/ext.h>
#include <runtime/eval/eval.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: classes/soapfault.php line 3 */
#ifndef OMIT_JUMP_TABLE_CLASS_STATIC_GETINIT_SoapFault
Variant c_SoapFault::os_getInit(CStrRef s) {
  DECLARE_SYSTEM_GLOBALS(g);
  int64 hash = s->hash();
  switch (hash & 15) {
    case 1:
      HASH_RETURN_NAMSTR(0x223FBAE23D3926D1LL, NAMSTR(s_sys_ssb9540e00, "faultcodens"),
                         null, 11);
      break;
    case 2:
      HASH_RETURN_NAMSTR(0x6AB66433A5A06842LL, NAMSTR(s_sys_ss5b7cf41f, "faultactor"),
                         null, 10);
      HASH_RETURN_NAMSTR(0x3B9257D5A7BFC952LL, NAMSTR(s_sys_ss2235bf3d, "detail"),
                         null, 6);
      break;
    case 7:
      HASH_RETURN_NAMSTR(0x7F0FEC816F538D87LL, NAMSTR(s_sys_ss40793385, "headerfault"),
                         null, 11);
      break;
    case 9:
      HASH_RETURN_NAMSTR(0x6C2E2F7FE9DC8A09LL, NAMSTR(s_sys_ssee3a4fdd, "_name"),
                         null, 5);
      break;
    case 13:
      HASH_RETURN_NAMSTR(0x58CB312B3F4C8D8DLL, NAMSTR(s_sys_ssff0553c0, "faultcode"),
                         null, 9);
      HASH_RETURN_NAMSTR(0x6CDD9F7B80D687ADLL, NAMSTR(s_sys_ssff4490ec, "faultstring"),
                         null, 11);
      break;
    default:
      break;
  }
  return c_Exception::os_getInit(s);
}
#endif // OMIT_JUMP_TABLE_CLASS_STATIC_GETINIT_SoapFault
#ifndef OMIT_JUMP_TABLE_CLASS_STATIC_GET_SoapFault
Variant c_SoapFault::os_get(CStrRef s) {
  return c_Exception::os_get(s);
}
#endif // OMIT_JUMP_TABLE_CLASS_STATIC_GET_SoapFault
#ifndef OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_SoapFault
Variant &c_SoapFault::os_lval(CStrRef s) {
  return c_Exception::os_lval(s);
}
#endif // OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_SoapFault
#ifndef OMIT_JUMP_TABLE_CLASS_GETARRAY_SoapFault
void c_SoapFault::o_getArray(Array &props, bool pubOnly) const {
  if (isInitialized(m_faultcode)) props.lvalAt(NAMSTR(s_sys_ssff0553c0, "faultcode"), AccessFlags::Key).setWithRef(m_faultcode);
  if (isInitialized(m_faultcodens)) props.lvalAt(NAMSTR(s_sys_ssb9540e00, "faultcodens"), AccessFlags::Key).setWithRef(m_faultcodens);
  if (isInitialized(m_faultstring)) props.lvalAt(NAMSTR(s_sys_ssff4490ec, "faultstring"), AccessFlags::Key).setWithRef(m_faultstring);
  if (isInitialized(m_faultactor)) props.lvalAt(NAMSTR(s_sys_ss5b7cf41f, "faultactor"), AccessFlags::Key).setWithRef(m_faultactor);
  if (isInitialized(m_detail)) props.lvalAt(NAMSTR(s_sys_ss2235bf3d, "detail"), AccessFlags::Key).setWithRef(m_detail);
  if (isInitialized(m__name)) props.lvalAt(NAMSTR(s_sys_ssee3a4fdd, "_name"), AccessFlags::Key).setWithRef(m__name);
  if (isInitialized(m_headerfault)) props.lvalAt(NAMSTR(s_sys_ss40793385, "headerfault"), AccessFlags::Key).setWithRef(m_headerfault);
  c_Exception::o_getArray(props, pubOnly);
}
#endif // OMIT_JUMP_TABLE_CLASS_GETARRAY_SoapFault
#ifndef OMIT_JUMP_TABLE_CLASS_SETARRAY_SoapFault
void c_SoapFault::o_setArray(CArrRef props) {
  c_Exception::o_setArray(props);
}
#endif // OMIT_JUMP_TABLE_CLASS_SETARRAY_SoapFault
#ifndef OMIT_JUMP_TABLE_CLASS_realProp_SoapFault
Variant * c_SoapFault::o_realProp(CStrRef prop, int flags, CStrRef context) const {
  return o_realPropPublic(prop, flags);
}
#endif // OMIT_JUMP_TABLE_CLASS_realProp_SoapFault
#ifndef OMIT_JUMP_TABLE_CLASS_realProp_PUBLIC_SoapFault
Variant * c_SoapFault::o_realPropPublic(CStrRef s, int flags) const {
  int64 hash = s->hash();
  switch (hash & 15) {
    case 1:
      HASH_REALPROP_NAMSTR(0x223FBAE23D3926D1LL, NAMSTR(s_sys_ssb9540e00, "faultcodens"), 11, faultcodens);
      break;
    case 2:
      HASH_REALPROP_NAMSTR(0x6AB66433A5A06842LL, NAMSTR(s_sys_ss5b7cf41f, "faultactor"), 10, faultactor);
      HASH_REALPROP_NAMSTR(0x3B9257D5A7BFC952LL, NAMSTR(s_sys_ss2235bf3d, "detail"), 6, detail);
      break;
    case 7:
      HASH_REALPROP_NAMSTR(0x7F0FEC816F538D87LL, NAMSTR(s_sys_ss40793385, "headerfault"), 11, headerfault);
      break;
    case 9:
      HASH_REALPROP_NAMSTR(0x6C2E2F7FE9DC8A09LL, NAMSTR(s_sys_ssee3a4fdd, "_name"), 5, _name);
      break;
    case 13:
      HASH_REALPROP_NAMSTR(0x58CB312B3F4C8D8DLL, NAMSTR(s_sys_ssff0553c0, "faultcode"), 9, faultcode);
      HASH_REALPROP_NAMSTR(0x6CDD9F7B80D687ADLL, NAMSTR(s_sys_ssff4490ec, "faultstring"), 11, faultstring);
      break;
    default:
      break;
  }
  return c_Exception::o_realPropPublic(s, flags);
}
#endif // OMIT_JUMP_TABLE_CLASS_realProp_PUBLIC_SoapFault
#ifndef OMIT_JUMP_TABLE_CLASS_realProp_PRIVATE_SoapFault
Variant * c_SoapFault::o_realPropPrivate(CStrRef s, int flags) const {
  return o_realPropPublic(s, flags);
}
#endif // OMIT_JUMP_TABLE_CLASS_realProp_PRIVATE_SoapFault
#ifndef OMIT_JUMP_TABLE_CLASS_CONSTANT_SoapFault
Variant c_SoapFault::os_constant(const char *s) {
  return c_Exception::os_constant(s);
}
#endif // OMIT_JUMP_TABLE_CLASS_CONSTANT_SoapFault
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(SoapFault)
bool c_SoapFault::o_instanceof(CStrRef s) const {
  int64 hash = s->hash();
  switch (hash & 3) {
    case 0:
      HASH_INSTANCEOF(0x47D93E6F80B66A94LL, NAMSTR(s_sys_sseacf71c9, "Exception"));
      break;
    case 1:
      HASH_INSTANCEOF(0x32E5C767255D2515LL, NAMSTR(s_sys_ss01cbd710, "SoapFault"));
      break;
    default:
      break;
  }
  return false;
}
ObjectData *c_SoapFault::cloneImpl() {
  ObjectData *obj = coo_SoapFault();
  c_SoapFault::cloneSet(obj);
  return obj;
}
void c_SoapFault::cloneSet(ObjectData *cl) {
  c_SoapFault *clone = static_cast<c_SoapFault*>(cl);
  c_Exception::cloneSet(clone);
  clone->m_faultcode.setWithRef(m_faultcode);
  clone->m_faultcodens.setWithRef(m_faultcodens);
  clone->m_faultstring.setWithRef(m_faultstring);
  clone->m_faultactor.setWithRef(m_faultactor);
  clone->m_detail.setWithRef(m_detail);
  clone->m__name.setWithRef(m__name);
  clone->m_headerfault.setWithRef(m_headerfault);
}
CallInfo c_SoapFault::ci___tostring((void*)&c_SoapFault::i___tostring, (void*)&c_SoapFault::ifa___tostring, 0, 4, 0x0000000000000000LL);
CallInfo c_SoapFault::ci___construct((void*)&c_SoapFault::i___construct, (void*)&c_SoapFault::ifa___construct, 6, 4, 0x0000000000000000LL);
Variant c_SoapFault::i___tostring(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___tostring, coo_SoapFault);
  }
  c_SoapFault *self ATTRIBUTE_UNUSED (static_cast<c_SoapFault*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SoapFault::__toString", 0, 1);
  return (self->t___tostring());
}
Variant c_SoapFault::i___construct(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___construct, coo_SoapFault);
  }
  c_SoapFault *self ATTRIBUTE_UNUSED (static_cast<c_SoapFault*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2 || count > 6)) return throw_wrong_arguments("SoapFault::__construct", count, 2, 6, 2);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0((ad->getValue(pos)));
    CVarRef arg1((ad->getValue(pos = ad->iter_advance(pos))));
    if (count <= 2) return (self->t___construct(arg0, arg1), null);
    CVarRef arg2((ad->getValue(pos = ad->iter_advance(pos))));
    if (count <= 3) return (self->t___construct(arg0, arg1, arg2), null);
    CVarRef arg3((ad->getValue(pos = ad->iter_advance(pos))));
    if (count <= 4) return (self->t___construct(arg0, arg1, arg2, arg3), null);
    CVarRef arg4((ad->getValue(pos = ad->iter_advance(pos))));
    if (count <= 5) return (self->t___construct(arg0, arg1, arg2, arg3, arg4), null);
    CVarRef arg5((ad->getValue(pos = ad->iter_advance(pos))));
    return (self->t___construct(arg0, arg1, arg2, arg3, arg4, arg5), null);
  }
}
Variant c_SoapFault::ifa___tostring(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___tostring, coo_SoapFault);
  }
  c_SoapFault *self ATTRIBUTE_UNUSED (static_cast<c_SoapFault*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SoapFault::__toString", 0, 1);
  return (self->t___tostring());
}
Variant c_SoapFault::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_SoapFault);
  }
  c_SoapFault *self ATTRIBUTE_UNUSED (static_cast<c_SoapFault*>(mcp.obj));
  if (UNLIKELY(count < 2)) return throw_wrong_arguments("SoapFault::__construct", count, 2, 6, 2);
  CVarRef arg0(a0);
  CVarRef arg1(a1);
  if (count <= 2) return (self->t___construct(arg0, arg1), null);
  CVarRef arg2(a2);
  if (count <= 3) return (self->t___construct(arg0, arg1, arg2), null);
  CVarRef arg3(a3);
  if (count <= 4) return (self->t___construct(arg0, arg1, arg2, arg3), null);
  CVarRef arg4(a4);
  if (count <= 5) return (self->t___construct(arg0, arg1, arg2, arg3, arg4), null);
  CVarRef arg5(a5);
  return (self->t___construct(arg0, arg1, arg2, arg3, arg4, arg5), null);
}
bool c_SoapFault::os_get_call_info(MethodCallPackage &mcp, int64 hash) {
  CStrRef s ATTRIBUTE_UNUSED (*mcp.name);
  if (hash < 0) hash = s->hash();
  switch (hash & 3) {
    case 3:
      HASH_GUARD_LITSTR(0x642C2D2994B34A13LL, NAMSTR(s_sys_ss6974a1cc, "__toString")) {
        mcp.ci = &c_SoapFault::ci___tostring;
        return true;
      }
      HASH_GUARD_LITSTR(0x0D31D0AC229C615FLL, NAMSTR(s_sys_ssa1b87da7, "__construct")) {
        mcp.ci = &c_SoapFault::ci___construct;
        return true;
      }
      break;
    default:
      break;
  }
  return c_Exception::os_get_call_info(mcp, hash);
}
bool c_SoapFault::o_get_call_info(MethodCallPackage &mcp, int64 hash) {
  mcp.obj = this;
  return os_get_call_info(mcp, hash);
}
c_SoapFault *c_SoapFault::create(CVarRef v_code, CVarRef v_message, CVarRef v_actor //  = null_variant
, CVarRef v_detail //  = null_variant
, CVarRef v_name //  = null_variant
, CVarRef v_header //  = null_variant
) {
  CountableHelper h(this);
  init();
  t___construct(v_code, v_message, v_actor, v_detail, v_name, v_header);
  return this;
}
void c_SoapFault::dynConstruct(CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count < 2 || count > 6)) throw_wrong_arguments("SoapFault::__construct", count, 2, 6, 2);
  do {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0((ad->getValue(pos)));
    CVarRef arg1((ad->getValue(pos = ad->iter_advance(pos))));
    if (count <= 2) {
      (t___construct(arg0, arg1));
      break;
    }
    CVarRef arg2((ad->getValue(pos = ad->iter_advance(pos))));
    if (count <= 3) {
      (t___construct(arg0, arg1, arg2));
      break;
    }
    CVarRef arg3((ad->getValue(pos = ad->iter_advance(pos))));
    if (count <= 4) {
      (t___construct(arg0, arg1, arg2, arg3));
      break;
    }
    CVarRef arg4((ad->getValue(pos = ad->iter_advance(pos))));
    if (count <= 5) {
      (t___construct(arg0, arg1, arg2, arg3, arg4));
      break;
    }
    CVarRef arg5((ad->getValue(pos = ad->iter_advance(pos))));
    (t___construct(arg0, arg1, arg2, arg3, arg4, arg5));
  } while (false);
}
void c_SoapFault::getConstructor(MethodCallPackage &mcp) {
  mcp.ci = &c_SoapFault::ci___construct;
  mcp.obj = this;
}
struct ObjectStaticCallbacks cw_SoapFault = {
  c_SoapFault::os_getInit,
  c_SoapFault::os_get,
  c_SoapFault::os_lval,
  c_SoapFault::os_invoke,
  c_SoapFault::os_constant,
  c_SoapFault::os_get_call_info
};
/* SRC: classes/soapfault.php line 12 */
void c_SoapFault::t___construct(Variant v_code, Variant v_message, Variant v_actor //  = null
, Variant v_detail //  = null
, Variant v_name //  = null
, Variant v_header //  = null
) {
  INSTANCE_METHOD_INJECTION_BUILTIN(SoapFault, SoapFault::__construct);
  bool oldInCtor = gasInCtor(true);
  Variant v_fault_ns;
  Variant v_fault_code;
  int64 v_SOAP_1_1 = 0;
  int64 v_SOAP_1_2 = 0;
  String v_SOAP_1_1_ENV_NAMESPACE;
  String v_SOAP_1_2_ENV_NAMESPACE;
  int64 v_soap_version = 0;

  setNull(v_fault_ns);
  setNull(v_fault_code);
  if (x_is_string(v_code)) {
    {
      v_fault_code.assignVal(v_code);
    }
  }
  else {
    bool tmp0;
    {
      bool tmp1 = (x_is_array(v_code));
      if (tmp1) {
        int tmp2((x_count(v_code)));
        tmp1 = (equal(tmp2, 2LL));
      }
      tmp0 = (tmp1);
    }
    if (tmp0) {
      {
        {
          const Variant &tmp0((x_array_values(v_code)));
          v_code.assignVal(tmp0);
        }
        {
          const Variant &tmp0((v_code.rvalAt(0LL, AccessFlags::Error)));
          v_fault_ns.assignVal(tmp0);
        }
        {
          const Variant &tmp0((v_code.rvalAt(1LL, AccessFlags::Error)));
          v_fault_code.assignVal(tmp0);
        }
        if ((!(x_is_string(v_fault_ns)) || !(x_is_string(v_fault_code)))) {
          {
            x_hphp_throw_fatal_error(NAMSTR(s_sys_ss78960b67, "Invalid fault code"));
            {
              gasInCtor(oldInCtor);
              return;
            }
          }
        }
      }
    }
    else {
      {
        x_hphp_throw_fatal_error(NAMSTR(s_sys_ss78960b67, "Invalid fault code"));
        {
          gasInCtor(oldInCtor);
          return;
        }
      }
    }
  }
  m_faultcodens.assignVal(v_fault_ns);
  m_faultcode.assignVal(v_fault_code);
  if (empty(m_faultcode)) {
    {
      x_hphp_throw_fatal_error(NAMSTR(s_sys_ss78960b67, "Invalid fault code"));
      {
        gasInCtor(oldInCtor);
        return;
      }
    }
  }
  {
    Variant tmp0((m_message.assignVal(v_message)));
    m_faultstring.assignVal(tmp0);
  }
  m_faultactor.assignVal(v_actor);
  m_detail.assignVal(v_detail);
  m__name.assignVal(v_name);
  m_headerfault.assignVal(v_header);
  v_SOAP_1_1 = 1LL;
  v_SOAP_1_2 = 2LL;
  v_SOAP_1_1_ENV_NAMESPACE = NAMSTR(s_sys_ss3f0eec1a, "http://schemas.xmlsoap.org/soap/envelope/");
  v_SOAP_1_2_ENV_NAMESPACE = NAMSTR(s_sys_ssb0600dcf, "http://www.w3.org/2003/05/soap-envelope");
  {
    int64 tmp0((x__soap_active_version()));
    v_soap_version = tmp0;
  }
  if (empty(m_faultcodens)) {
    {
      if (equal(v_soap_version, v_SOAP_1_1)) {
        {
          if ((((equal(m_faultcode, NAMSTR(s_sys_ss971ea9d1, "Client")) || equal(m_faultcode, NAMSTR(s_sys_ss95d41015, "Server"))) || equal(m_faultcode, NAMSTR(s_sys_ssb7f9ce9a, "VersionMismatch"))) || equal(m_faultcode, NAMSTR(s_sys_ssf93fc318, "MustUnderstand")))) {
            {
              m_faultcodens = v_SOAP_1_1_ENV_NAMESPACE;
            }
          }
        }
      }
      else if (equal(v_soap_version, v_SOAP_1_2)) {
        {
          if (equal(m_faultcode, NAMSTR(s_sys_ss971ea9d1, "Client"))) {
            {
              m_faultcode = NAMSTR(s_sys_ssa8d233c8, "Sender");
              m_faultcodens = v_SOAP_1_2_ENV_NAMESPACE;
            }
          }
          else if (equal(m_faultcode, NAMSTR(s_sys_ss95d41015, "Server"))) {
            {
              m_faultcode = NAMSTR(s_sys_ss47955b0c, "Receiver");
              m_faultcodens = v_SOAP_1_2_ENV_NAMESPACE;
            }
          }
          else if (((equal(m_faultcode, NAMSTR(s_sys_ssb7f9ce9a, "VersionMismatch")) || equal(m_faultcode, NAMSTR(s_sys_ssf93fc318, "MustUnderstand"))) || equal(m_faultcode, NAMSTR(s_sys_ss3ff88d3e, "DataEncodingUnknown")))) {
            {
              m_faultcodens = v_SOAP_1_2_ENV_NAMESPACE;
            }
          }
        }
      }
    }
  }
  gasInCtor(oldInCtor);
}
namespace hphp_impl_splitter {}
/* SRC: classes/soapfault.php line 73 */
String c_SoapFault::t___tostring() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SoapFault, SoapFault::__toString);
  return concat4(NAMSTR(s_sys_ss5d507d08, "SoapFault exception: ["), toString(m_faultcode), NAMSTR(s_sys_ss0a81fd6d, "] "), toString(m_faultstring));
}
namespace hphp_impl_splitter {}
ObjectData *coo_SoapFault() {
  return NEWOBJ(c_SoapFault)();
}
Variant pm_php$classes$soapfault_php(bool incOnce /* = false */, LVariableTable* variables /* = NULL */, Globals *globals /* = get_globals() */) {
  PSEUDOMAIN_INJECTION_BUILTIN(run_init::classes/soapfault.php, pm_php$classes$soapfault_php);
  LVariableTable *gVariables ATTRIBUTE_UNUSED = (LVariableTable *)g;
  return true;
}
namespace hphp_impl_splitter {}

///////////////////////////////////////////////////////////////////////////////
}
