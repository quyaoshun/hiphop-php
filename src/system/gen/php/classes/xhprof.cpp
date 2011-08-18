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

#include <php/classes/xhprof.h>
#include <php/classes/xhprof.fws.h>

// Dependencies
#include <runtime/ext/ext.h>
#include <runtime/eval/eval.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: classes/xhprof.php line 6 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(XhprofFrame)
const InstanceOfInfo c_XhprofFrame::s_instanceof_table[] = {
  {0x3D290BF933ED12FDLL,1,"XhprofFrame",&cw_XhprofFrame},
};
const int c_XhprofFrame::s_instanceof_index[] = {
  1,
  -1,0,
};
ObjectData *c_XhprofFrame::cloneImpl() {
  ObjectData *obj = coo_XhprofFrame();
  c_XhprofFrame::cloneSet(obj);
  return obj;
}
void c_XhprofFrame::cloneSet(ObjectData *cl) {
  c_XhprofFrame *clone = static_cast<c_XhprofFrame*>(cl);
  ObjectData::cloneSet(clone);
}
CallInfo c_XhprofFrame::ci___destruct((void*)&c_XhprofFrame::i___destruct, (void*)&c_XhprofFrame::ifa___destruct, 0, 4, 0x0000000000000000LL);
CallInfo c_XhprofFrame::ci___construct((void*)&c_XhprofFrame::i___construct, (void*)&c_XhprofFrame::ifa___construct, 1, 4, 0x0000000000000000LL);
Variant c_XhprofFrame::i___destruct(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___destruct, coo_XhprofFrame);
  }
  c_XhprofFrame *self ATTRIBUTE_UNUSED (static_cast<c_XhprofFrame*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("XhprofFrame::__destruct", 0, 1);
  return (self->t___destruct());
}
Variant c_XhprofFrame::i___construct(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___construct, coo_XhprofFrame);
  }
  c_XhprofFrame *self ATTRIBUTE_UNUSED (static_cast<c_XhprofFrame*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("XhprofFrame::__construct", count, 1, 1, 2);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0((ad->getValue(pos)));
    return (self->t___construct(arg0), null);
  }
}
Variant c_XhprofFrame::ifa___destruct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___destruct, coo_XhprofFrame);
  }
  c_XhprofFrame *self ATTRIBUTE_UNUSED (static_cast<c_XhprofFrame*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("XhprofFrame::__destruct", 0, 1);
  return (self->t___destruct());
}
Variant c_XhprofFrame::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_XhprofFrame);
  }
  c_XhprofFrame *self ATTRIBUTE_UNUSED (static_cast<c_XhprofFrame*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("XhprofFrame::__construct", count, 1, 1, 2);
  CVarRef arg0(a0);
  return (self->t___construct(arg0), null);
}
const MethodCallInfoTable c_XhprofFrame::s_call_info_table[] = {
  { 0x7F974836AACC1EF3LL, 1, 10, "__destruct", &c_XhprofFrame::ci___destruct },
  { 0x0D31D0AC229C615FLL, 0, 11, "__construct", &c_XhprofFrame::ci___construct },
  { 0, 1, 0, 0 }
};
const int c_XhprofFrame::s_call_info_index[] = {
  3,
  -1,-1,-1,0,
};
c_XhprofFrame *c_XhprofFrame::create(CVarRef v_name) {
  CountableHelper h(this);
  init();
  t___construct(v_name);
  return this;
}
void c_XhprofFrame::dynConstruct(CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count != 1)) throw_wrong_arguments("XhprofFrame::__construct", count, 1, 1, 2);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0((ad->getValue(pos)));
    (t___construct(arg0));
  }
}
void c_XhprofFrame::getConstructor(MethodCallPackage &mcp) {
  mcp.ci = &c_XhprofFrame::ci___construct;
  mcp.obj = this;
}
const ObjectStaticCallbacks cw_XhprofFrame = {
  (ObjectData*(*)(ObjectData*))coo_XhprofFrame,
  c_XhprofFrame::s_call_info_table,c_XhprofFrame::s_call_info_index,
  c_XhprofFrame::s_instanceof_table,c_XhprofFrame::s_instanceof_index,
  &c_XhprofFrame::s_class_name,
  0,0,0
};
/* SRC: classes/xhprof.php line 7 */
void c_XhprofFrame::t___construct(Variant v_name) {
  bool oldInCtor = gasInCtor(true);
  x_xhprof_frame_begin(toString(v_name));
  gasInCtor(oldInCtor);
}
namespace hphp_impl_splitter {}
/* SRC: classes/xhprof.php line 10 */
Variant c_XhprofFrame::t___destruct() {
  setInDtor();
  x_xhprof_frame_end();
  return null;
}
namespace hphp_impl_splitter {}
ObjectData *coo_XhprofFrame() {
  return NEWOBJ(c_XhprofFrame)();
}

///////////////////////////////////////////////////////////////////////////////
}
