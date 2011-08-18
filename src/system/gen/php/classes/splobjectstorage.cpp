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

#include <php/classes/splobjectstorage.h>
#include <php/classes/splobjectstorage.fws.h>

// Dependencies
#include <php/classes/iterator.h>
#include <runtime/ext/ext.h>
#include <runtime/eval/eval.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: classes/splobjectstorage.php line 12 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(SplObjectStorage)
const InstanceOfInfo c_SplObjectStorage::s_instanceof_table[] = {
  {0x795F86375EE263D1LL,0,"Countable",(const ObjectStaticCallbacks*)2},
  {0x66679538C5E6F0A1LL,1,"Traversable",(const ObjectStaticCallbacks*)2},
  {0x0636A5F84AF9D29ELL,1,"Iterator",(const ObjectStaticCallbacks*)2},
  {0x5BA243B9FBA7A64FLL,1,"SplObjectStorage",&cw_SplObjectStorage},
};
const int c_SplObjectStorage::s_instanceof_index[] = {
  7,
  -1,0,-1,-1,-1,-1,2,3,

};
ObjectData *c_SplObjectStorage::cloneImpl() {
  ObjectData *obj = coo_SplObjectStorage();
  c_SplObjectStorage::cloneSet(obj);
  return obj;
}
void c_SplObjectStorage::cloneSet(ObjectData *cl) {
  c_SplObjectStorage *clone = static_cast<c_SplObjectStorage*>(cl);
  ObjectData::cloneSet(clone);
  clone->m_storage.setWithRef(m_storage);
  clone->m_index = m_index;
}
CallInfo c_SplObjectStorage::ci_next((void*)&c_SplObjectStorage::i_next, (void*)&c_SplObjectStorage::ifa_next, 0, 4, 0x0000000000000000LL);
CallInfo c_SplObjectStorage::ci_detach((void*)&c_SplObjectStorage::i_detach, (void*)&c_SplObjectStorage::ifa_detach, 1, 4, 0x0000000000000000LL);
CallInfo c_SplObjectStorage::ci_attach((void*)&c_SplObjectStorage::i_attach, (void*)&c_SplObjectStorage::ifa_attach, 1, 4, 0x0000000000000000LL);
CallInfo c_SplObjectStorage::ci_count((void*)&c_SplObjectStorage::i_count, (void*)&c_SplObjectStorage::ifa_count, 0, 4, 0x0000000000000000LL);
CallInfo c_SplObjectStorage::ci_key((void*)&c_SplObjectStorage::i_key, (void*)&c_SplObjectStorage::ifa_key, 0, 4, 0x0000000000000000LL);
CallInfo c_SplObjectStorage::ci_valid((void*)&c_SplObjectStorage::i_valid, (void*)&c_SplObjectStorage::ifa_valid, 0, 4, 0x0000000000000000LL);
CallInfo c_SplObjectStorage::ci_contains((void*)&c_SplObjectStorage::i_contains, (void*)&c_SplObjectStorage::ifa_contains, 1, 4, 0x0000000000000000LL);
CallInfo c_SplObjectStorage::ci_current((void*)&c_SplObjectStorage::i_current, (void*)&c_SplObjectStorage::ifa_current, 0, 4, 0x0000000000000000LL);
CallInfo c_SplObjectStorage::ci_rewind((void*)&c_SplObjectStorage::i_rewind, (void*)&c_SplObjectStorage::ifa_rewind, 0, 4, 0x0000000000000000LL);
Variant c_SplObjectStorage::i_next(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_next, coo_SplObjectStorage);
  }
  c_SplObjectStorage *self ATTRIBUTE_UNUSED (static_cast<c_SplObjectStorage*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplObjectStorage::next", 0, 1);
  return (self->t_next(), null);
}
Variant c_SplObjectStorage::i_detach(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_detach, coo_SplObjectStorage);
  }
  c_SplObjectStorage *self ATTRIBUTE_UNUSED (static_cast<c_SplObjectStorage*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("SplObjectStorage::detach", count, 1, 1, 1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0((ad->getValue(pos)));
    return (self->t_detach(arg0), null);
  }
}
Variant c_SplObjectStorage::i_attach(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_attach, coo_SplObjectStorage);
  }
  c_SplObjectStorage *self ATTRIBUTE_UNUSED (static_cast<c_SplObjectStorage*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("SplObjectStorage::attach", count, 1, 1, 1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0((ad->getValue(pos)));
    return (self->t_attach(arg0), null);
  }
}
Variant c_SplObjectStorage::i_count(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_count, coo_SplObjectStorage);
  }
  c_SplObjectStorage *self ATTRIBUTE_UNUSED (static_cast<c_SplObjectStorage*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplObjectStorage::count", 0, 1);
  return (self->t_count());
}
Variant c_SplObjectStorage::i_key(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_key, coo_SplObjectStorage);
  }
  c_SplObjectStorage *self ATTRIBUTE_UNUSED (static_cast<c_SplObjectStorage*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplObjectStorage::key", 0, 1);
  return (self->t_key());
}
Variant c_SplObjectStorage::i_valid(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_valid, coo_SplObjectStorage);
  }
  c_SplObjectStorage *self ATTRIBUTE_UNUSED (static_cast<c_SplObjectStorage*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplObjectStorage::valid", 0, 1);
  return (self->t_valid());
}
Variant c_SplObjectStorage::i_contains(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_contains, coo_SplObjectStorage);
  }
  c_SplObjectStorage *self ATTRIBUTE_UNUSED (static_cast<c_SplObjectStorage*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("SplObjectStorage::contains", count, 1, 1, 1);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0((ad->getValue(pos)));
    return (self->t_contains(arg0));
  }
}
Variant c_SplObjectStorage::i_current(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_current, coo_SplObjectStorage);
  }
  c_SplObjectStorage *self ATTRIBUTE_UNUSED (static_cast<c_SplObjectStorage*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplObjectStorage::current", 0, 1);
  return (self->t_current());
}
Variant c_SplObjectStorage::i_rewind(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i_rewind, coo_SplObjectStorage);
  }
  c_SplObjectStorage *self ATTRIBUTE_UNUSED (static_cast<c_SplObjectStorage*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplObjectStorage::rewind", 0, 1);
  return (self->t_rewind(), null);
}
Variant c_SplObjectStorage::ifa_next(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_next, coo_SplObjectStorage);
  }
  c_SplObjectStorage *self ATTRIBUTE_UNUSED (static_cast<c_SplObjectStorage*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplObjectStorage::next", 0, 1);
  return (self->t_next(), null);
}
Variant c_SplObjectStorage::ifa_detach(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_detach, coo_SplObjectStorage);
  }
  c_SplObjectStorage *self ATTRIBUTE_UNUSED (static_cast<c_SplObjectStorage*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("SplObjectStorage::detach", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_detach(arg0), null);
}
Variant c_SplObjectStorage::ifa_attach(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_attach, coo_SplObjectStorage);
  }
  c_SplObjectStorage *self ATTRIBUTE_UNUSED (static_cast<c_SplObjectStorage*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("SplObjectStorage::attach", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_attach(arg0), null);
}
Variant c_SplObjectStorage::ifa_count(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_count, coo_SplObjectStorage);
  }
  c_SplObjectStorage *self ATTRIBUTE_UNUSED (static_cast<c_SplObjectStorage*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplObjectStorage::count", 0, 1);
  return (self->t_count());
}
Variant c_SplObjectStorage::ifa_key(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_key, coo_SplObjectStorage);
  }
  c_SplObjectStorage *self ATTRIBUTE_UNUSED (static_cast<c_SplObjectStorage*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplObjectStorage::key", 0, 1);
  return (self->t_key());
}
Variant c_SplObjectStorage::ifa_valid(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_valid, coo_SplObjectStorage);
  }
  c_SplObjectStorage *self ATTRIBUTE_UNUSED (static_cast<c_SplObjectStorage*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplObjectStorage::valid", 0, 1);
  return (self->t_valid());
}
Variant c_SplObjectStorage::ifa_contains(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_contains, coo_SplObjectStorage);
  }
  c_SplObjectStorage *self ATTRIBUTE_UNUSED (static_cast<c_SplObjectStorage*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("SplObjectStorage::contains", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_contains(arg0));
}
Variant c_SplObjectStorage::ifa_current(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_current, coo_SplObjectStorage);
  }
  c_SplObjectStorage *self ATTRIBUTE_UNUSED (static_cast<c_SplObjectStorage*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplObjectStorage::current", 0, 1);
  return (self->t_current());
}
Variant c_SplObjectStorage::ifa_rewind(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_rewind, coo_SplObjectStorage);
  }
  c_SplObjectStorage *self ATTRIBUTE_UNUSED (static_cast<c_SplObjectStorage*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("SplObjectStorage::rewind", 0, 1);
  return (self->t_rewind(), null);
}
const MethodCallInfoTable c_SplObjectStorage::s_call_info_table[] = {
  { 0x6413CB5154808C44LL, 1, 5, "valid", &c_SplObjectStorage::ci_valid },
  { 0x1670096FDE27AF6ALL, 1, 6, "rewind", &c_SplObjectStorage::ci_rewind },
  { 0x62DD82BFEB88A4ACLL, 1, 6, "attach", &c_SplObjectStorage::ci_attach },
  { 0x5CEFA5A265104D10LL, 1, 5, "count", &c_SplObjectStorage::ci_count },
  { 0x61B94551FA22D290LL, 0, 8, "contains", &c_SplObjectStorage::ci_contains },
  { 0x56EDB60C824E8C51LL, 1, 3, "key", &c_SplObjectStorage::ci_key },
  { 0x3C7D0AC0EBA9A695LL, 1, 6, "detach", &c_SplObjectStorage::ci_detach },
  { 0x3C6D50F3BB8102B8LL, 1, 4, "next", &c_SplObjectStorage::ci_next },
  { 0x5B3A4A72846B21DCLL, 1, 7, "current", &c_SplObjectStorage::ci_current },
  { 0, 1, 0, 0 }
};
const int c_SplObjectStorage::s_call_info_index[] = {
  31,
  -1,-1,-1,-1,0,-1,-1,-1,
  -1,-1,1,-1,2,-1,-1,-1,
  3,5,-1,-1,-1,6,-1,-1,
  7,-1,-1,-1,8,-1,-1,-1,

};
const ObjectStaticCallbacks cw_SplObjectStorage = {
  (ObjectData*(*)(ObjectData*))coo_SplObjectStorage,
  c_SplObjectStorage::s_call_info_table,c_SplObjectStorage::s_call_info_index,
  c_SplObjectStorage::s_instanceof_table,c_SplObjectStorage::s_instanceof_index,
  &c_SplObjectStorage::s_class_name,
  &c_SplObjectStorage::os_prop_table,0,0
};
void c_SplObjectStorage::init() {
  m_storage = s_sys_sa00000000;
}
/* SRC: classes/splobjectstorage.php line 24 */
void c_SplObjectStorage::t_rewind() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::rewind);
  x_rewind(toObject(m_storage));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splobjectstorage.php line 37 */
bool c_SplObjectStorage::t_valid() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::valid);
  {
    const Variant &tmp0((x_key(ref(m_storage))));
    return !same(tmp0, false);
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/splobjectstorage.php line 50 */
int64 c_SplObjectStorage::t_key() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::key);
  return m_index;
}
namespace hphp_impl_splitter {}
/* SRC: classes/splobjectstorage.php line 62 */
Variant c_SplObjectStorage::t_current() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::current);
  return x_current(ref(m_storage));
}
namespace hphp_impl_splitter {}
/* SRC: classes/splobjectstorage.php line 74 */
void c_SplObjectStorage::t_next() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::next);
  x_next(ref(m_storage));
  m_index++;
}
namespace hphp_impl_splitter {}
/* SRC: classes/splobjectstorage.php line 87 */
int c_SplObjectStorage::t_count() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::count);
  return x_count(m_storage);
}
namespace hphp_impl_splitter {}
/* SRC: classes/splobjectstorage.php line 102 */
bool c_SplObjectStorage::t_contains(CVarRef v_obj) {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::contains);
  Variant v_object;

  if (x_is_object(v_obj)) {
    {
      {
        LOOP_COUNTER(1);
        Variant map2 = m_storage;
        for (ArrayIter iter3 = map2.begin(s_class_name, true); !iter3.end(); iter3.next()) {
          LOOP_COUNTER_CHECK(1);
          iter3.second(v_object);
          {
            if (same(v_object, v_obj)) {
              {
                return true;
              }
            }
          }
        }
      }
    }
  }
  return false;
}
namespace hphp_impl_splitter {}
/* SRC: classes/splobjectstorage.php line 124 */
void c_SplObjectStorage::t_attach(CVarRef v_obj) {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::attach);
  {
    bool tmp0;
    {
      bool tmp1 = (x_is_object(v_obj));
      if (tmp1) {
        bool tmp2((t_contains(v_obj)));
        tmp1 = (!(tmp2));
      }
      tmp0 = (tmp1);
    }
    if (tmp0) {
      {
        m_storage.append((v_obj));
      }
    }
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/splobjectstorage.php line 140 */
void c_SplObjectStorage::t_detach(CVarRef v_obj) {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::detach);
  Primitive v_idx = 0;
  Variant v_object;

  if (x_is_object(v_obj)) {
    {
      {
        LOOP_COUNTER(1);
        Variant map2 = m_storage;
        for (ArrayIter iter3 = map2.begin(s_class_name, true); !iter3.end(); iter3.next()) {
          LOOP_COUNTER_CHECK(1);
          iter3.second(v_object);
          v_idx.assignVal(iter3.first());
          {
            if (same(v_object, v_obj)) {
              {
                m_storage.weakRemove(v_idx);
                {
                  MethodCallPackage mcp0;
                  mcp0.methodCall((GET_THIS_VALID()), NAMSTR(s_sys_ss941ca25f, "rewind"), 0x1670096FDE27AF6ALL);
                  const CallInfo *cit0 ATTRIBUTE_UNUSED = mcp0.ci;
                  (mcp0.bindClass(fi)->getMeth0Args())(mcp0, 0);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
}
namespace hphp_impl_splitter {}
ObjectData *coo_SplObjectStorage() {
  return NEWOBJ(c_SplObjectStorage)();
}

// Class tables
static const int64 cpt_static_inits[] = {
  (int64)&s_sys_sva00000000,
  (int64)&NAMVAR(s_sys_svif01bca90, 0LL),
};
static const ClassPropTableEntry cpt_table_entries[] = {
  {0x17AC96477E2B6DC3LL,1,0,18,65,10,GET_PROPERTY_OFFSET(c_SplObjectStorage, m_storage),&NAMSTR(s_sys_ss78cb1b27, "\000SplObjectStorage\000storage") },
  {0x4B27521443880CAELL,0,1,18,65,4,GET_PROPERTY_OFFSET(c_SplObjectStorage, m_index),&NAMSTR(s_sys_ssef33be8d, "\000SplObjectStorage\000index") },

};
static const int cpt_hash_entries[] = {
  // SplObjectStorage hash
  -1,-1,-1,0,-1,-1,1,-1,
  // SplObjectStorage lists
  0,1,-1,
  -1,
  -1,
};
const ClassPropTable c_SplObjectStorage::os_prop_table = {
  7,0,-1,-1,-1,-1,11,0,
  cpt_hash_entries+0,0,cpt_table_entries+0,cpt_static_inits
};

///////////////////////////////////////////////////////////////////////////////
}
