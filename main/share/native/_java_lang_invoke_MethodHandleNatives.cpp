/*
 * Copyright (c) 2025, Yao Yuan <yeaya@163.com>. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.  This file as subject to the
 * "Classpath" exception in the LICENSE file that accompanied this code.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include <java/lang/Class.h>
#include <java/lang/Long.h>
#include <java/lang/String.h>
#include <java/lang/InternalError.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/MemberName.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/ResolvedMethodName.h>
#include <java/lang/invoke/MethodHandleNatives$CallSiteContext.h>
#include <java/lang/invoke/MethodHandleNatives$Constants.h>

#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Modifier.h>

#include <jcpp.h>

using namespace ::java::lang;
using namespace ::java::lang::invoke;
using namespace ::java::lang::reflect;

#include <stdlib.h>
#include <string.h>

#include "jni.h"
#include "_jni_util.h"
#include "jvm.h"
#include "TimeZone_md.h"

enum {
	MN_IS_METHOD = 0x00010000, // method (not constructor)
	MN_IS_CONSTRUCTOR = 0x00020000, // constructor
	MN_IS_FIELD = 0x00040000, // field
	MN_IS_TYPE = 0x00080000, // nested type
	MN_CALLER_SENSITIVE = 0x00100000, // @CallerSensitive annotation detected
	MN_TRUSTED_FINAL = 0x00200000, // trusted final field
	MN_REFERENCE_KIND_SHIFT = 24, // refKind
	MN_REFERENCE_KIND_MASK = 0x0F000000 >> MN_REFERENCE_KIND_SHIFT,
	// The SEARCH_* bits are not for MN.flags but for the matchFlags argument of MHN.getMembers:
	MN_SEARCH_SUPERCLASSES = 0x00100000, // walk super classes
	MN_SEARCH_INTERFACES = 0x00200000, // walk implemented interfaces
	MN_NESTMATE_CLASS = 0x00000001,
	MN_HIDDEN_CLASS = 0x00000002,
	MN_STRONG_LOADER_LINK = 0x00000004,
	MN_ACCESS_VM_ANNOTATIONS = 0x00000008,
	// Lookup modes
	MN_MODULE_MODE = 0x00000010,
	MN_UNCONDITIONAL_MODE = 0x00000020,
	MN_TRUSTED_MODE = -1
};

static int64_t find_member_field_offset(::java::lang::invoke::MemberName* mname, bool must_be_static) {
	if (mname == nullptr || mname->clazz == nullptr) {
		$throwNew(InternalError, "mname not resolved"_s);
	} else {
		int32_t flags = mname->flags;
		if ((flags & MemberName::IS_FIELD) != 0 &&
			(must_be_static
				? (flags & Modifier::STATIC) != 0
				: (flags & Modifier::STATIC) == 0)) {

			int64_t vmindex = mname->vmindex;
			return (int64_t)vmindex;
		}
	}
	if (must_be_static) {
		$throwNew(InternalError, "static field required"_s);
	} else {
		$throwNew(InternalError, "non-static field required"_s);
	}
	return 0;
}

void _Java_java_lang_invoke_MethodHandleNatives_registerNatives() {
}

#define assert

/* JVM_CONSTANT_MethodHandle subtypes */
// enum {
// 	JVM_REF_getField = 1,
// 	JVM_REF_getStatic = 2,
// 	JVM_REF_putField = 3,
// 	JVM_REF_putStatic = 4,
// 	JVM_REF_invokeVirtual = 5,
// 	JVM_REF_invokeStatic = 6,
// 	JVM_REF_invokeSpecial = 7,
// 	JVM_REF_newInvokeSpecial = 8,
// 	JVM_REF_invokeInterface = 9
// };

// decoding CONSTANT_MethodHandle constants
enum { JVM_REF_MIN = JVM_REF_getField, JVM_REF_MAX = JVM_REF_invokeInterface };
static bool ref_kind_is_valid(int ref_kind) {
	return (ref_kind >= JVM_REF_MIN && ref_kind <= JVM_REF_MAX);
}
static bool ref_kind_is_field(int ref_kind) {
	assert(ref_kind_is_valid(ref_kind), "");
	return (ref_kind <= JVM_REF_putStatic);
}
static bool ref_kind_is_getter(int ref_kind) {
	assert(ref_kind_is_valid(ref_kind), "");
	return (ref_kind <= JVM_REF_getStatic);
}
static bool ref_kind_is_setter(int ref_kind) {
	return ref_kind_is_field(ref_kind) && !ref_kind_is_getter(ref_kind);
}
static bool ref_kind_is_method(int ref_kind) {
	return !ref_kind_is_field(ref_kind) && (ref_kind != JVM_REF_newInvokeSpecial);
}
static bool ref_kind_has_receiver(int ref_kind) {
	assert(ref_kind_is_valid(ref_kind), "");
	return (ref_kind & 1) != 0;
}


MemberName* init_field_MemberName(::java::lang::invoke::MemberName* mname, Field* fd, bool is_setter) {
	int32_t flags = fd->modifiers & Modifier::FIELD_MODIFIERS;
	flags |= MemberName::IS_FIELD | ((fd->isStatic() ? JVM_REF_getStatic : JVM_REF_getField) << MN_REFERENCE_KIND_SHIFT);
	if (fd->isTrustedFinal()) {
		flags |= MemberName::TRUSTED_FINAL;
	}
	if (is_setter) {
		flags += ((JVM_REF_putField - JVM_REF_getField) << MN_REFERENCE_KIND_SHIFT);
	}
	int64_t vmindex = fd->getOffsetof();//  determines the field uniquely when combined with static bit

	mname->flags = flags;
	$set(mname, method, nullptr);
	mname->vmindex = vmindex;
	$set(mname, clazz, fd->clazz);
	return mname;// mname();
}

enum VtableIndexFlag {
	// Valid vtable indexes are non-negative (>= 0).
	// These few negative values are used as sentinels.
	itable_index_max = -10, // first itable index, growing downward
	pending_itable_index = -9,  // itable index will be assigned
	invalid_vtable_index = -4,  // distinct from any valid vtable index
	garbage_vtable_index = -3,  // not yet linked; no vtable layout yet
	nonvirtual_vtable_index = -2   // there is no need for vtable dispatch
	// 6330203 Note:  Do not use -1, which was overloaded with many meanings.
};

MemberName* init_method_MemberName(::java::lang::invoke::MemberName* mname, Method* method) {
	int32_t flags = method->modifiers & Modifier::METHOD_MODIFIERS;// JVM_RECOGNIZED_METHOD_MODIFIERS);
	int32_t vmindex = VtableIndexFlag::invalid_vtable_index;
	flags |= MemberName::IS_METHOD;
	if ((flags & Modifier::STATIC) != 0) {
		flags |= MethodHandleNatives$Constants::REF_invokeStatic << MethodHandleNatives$Constants::MN_REFERENCE_KIND_SHIFT; // TODO
	} else {
		flags |= MethodHandleNatives$Constants::REF_invokeVirtual << MethodHandleNatives$Constants::MN_REFERENCE_KIND_SHIFT; // TODO
	}

	mname->flags = flags;
	$var(ResolvedMethodName, rmn, $new<ResolvedMethodName>());
	$set(rmn, vmtarget, method);
	$set(rmn, vmholder, method->clazz);
	$set(mname, method, rmn);
	mname->vmindex = vmindex;
	$set(mname, clazz, method->clazz);
	return mname;
}

MemberName* init_constructor_MemberName(::java::lang::invoke::MemberName* mname, Constructor* constructor) {
	int32_t flags = constructor->modifiers & Modifier::METHOD_MODIFIERS;// JVM_RECOGNIZED_METHOD_MODIFIERS);
	int32_t vmindex = VtableIndexFlag::invalid_vtable_index;
	flags |= MemberName::IS_CONSTRUCTOR;
	flags |= MethodHandleNatives$Constants::REF_invokeSpecial << MethodHandleNatives$Constants::MN_REFERENCE_KIND_SHIFT; // TODO

	mname->flags = flags;
	$var(ResolvedMethodName, rmn, $new<ResolvedMethodName>());
	$set(rmn, vmtarget, constructor);
	$set(rmn, vmholder, constructor->clazz);
	$set(mname, method, rmn);

	//	_assign(mname->method, nullptr); // TODO
	mname->vmindex = vmindex;
	$set(mname, clazz, constructor->clazz);
	return mname;
}

Object* init_MemberName(::java::lang::invoke::MemberName* mname, Object$* target$OBJ) {
	Object* target = (Object*)target$OBJ;
	// This method is used from java.lang.invoke.MemberName constructors.
	// It fills in the new MemberName from a java.lang.reflect.Member.
	//oop target_oop = target();
//	Klass* target_klass = target_oop->klass();
	$var(Class, target_klass, target->getClass());
	if (target_klass == Field::class$) {
		$var(Field, field, $cast<Field>(target));
		//	oop clazz = java_lang_reflect_Field::clazz(target_oop); // fd.field_holder()
		//	Class* clazz = _from_obj(Field, target)->clazz;
		//	int slot = java_lang_reflect_Field::slot(target_oop);  // fd.index()
		int32_t slot = $fcast<Field>(target)->slot;
		//	Klass* k = java_lang_Class::as_Klass(clazz);
		if (Field::class$ != nullptr) {// && k->is_instance_klass()) {
			//	fieldDescriptor fd(InstanceKlass::cast(k), slot);
			$var(MemberName, mname2, init_field_MemberName(mname, field, false));
			if (mname2 != NULL) {
				// Since we have the reified name and type handy, add them to the result.
			//	if (java_lang_invoke_MemberName::name(mname2) == NULL)
				//	java_lang_invoke_MemberName::set_name(mname2, java_lang_reflect_Field::name(target_oop));
				if (mname2->name == nullptr) {
					$set(mname2, name, field->name);
				}
				//		if (java_lang_invoke_MemberName::type(mname2) == NULL)
					//		java_lang_invoke_MemberName::set_type(mname2, java_lang_reflect_Field::type(target_oop));
				if (mname2->type == nullptr) {
					$set(mname2, type, field->type);
				}
			}
			return $fcast<Object>(mname2);
		}
	} else if (target_klass == Method::class$) {//vmClasses::reflect_Method_klass()) {
		//	oop clazz = java_lang_reflect_Method::clazz(target_oop);
		$var(Method, method, $cast<Method>(target));

		//	Class* clazz = _from_obj(Method, target)->clazz;

		//	int slot = java_lang_reflect_Method::slot(target_oop);
		//	Klass* k = java_lang_Class::as_Klass(clazz);
		if (Method::class$ != NULL) {// && k->is_instance_klass()) {
			//	Method* m = InstanceKlass::cast(k)->method_with_idnum(slot);
			//	if (m == NULL || is_signature_polymorphic(m->intrinsic_id()))
			//		return NULL;			// do not resolve unless there is a concrete signature
			//	CallInfo info(m, k, CHECK_NULL);
			return $fcast<Object>(init_method_MemberName(mname, method));
		}
	} else if (target_klass == Constructor::class$) {//vmClasses::reflect_Constructor_klass()) {
		$var(Constructor, constructor, $cast<Constructor>(target));

		//	oop clazz = java_lang_reflect_Constructor::clazz(target_oop);
		//	int slot = java_lang_reflect_Constructor::slot(target_oop);
		//	Klass* k = java_lang_Class::as_Klass(clazz);
		//	if (k != NULL && k->is_instance_klass()) {
			//	Method* m = InstanceKlass::cast(k)->method_with_idnum(slot);
				//if (m == NULL)  return NULL;
			//	CallInfo info(m, k, CHECK_NULL);
		return $fcast<Object>(init_constructor_MemberName(mname, constructor));
		//	}
	}
	return NULL;
}

void _Java_java_lang_invoke_MethodHandleNatives_init(::java::lang::invoke::MemberName* mname, Object* target) {
	if (mname == nullptr) {
		$throwNew(InternalError, "mname is null"_s);
	}
	if (target == nullptr) {
		$throwNew(InternalError, "target is null"_s);
	}
	//	Handle mname(THREAD, JNIHandles::resolve_non_null(mname_jh));
		//Handle target(THREAD, JNIHandles::resolve_non_null(target_jh));
	init_MemberName(mname, target);
}

void _Java_java_lang_invoke_MethodHandleNatives_clearCallSiteContext(::java::lang::invoke::MethodHandleNatives$CallSiteContext* context) {
}

void _Java_java_lang_invoke_MethodHandleNatives_copyOutBootstrapArguments(::java::lang::Class* caller, $ints* indexInfo, int32_t start, int32_t end,
	$ObjectArray* buf, int32_t pos, bool resolve, Object* ifNotAvailable) {
}

// Conversely, a member name which is only initialized from JVM internals
// may have null defc, name, and type fields.
// Resolving it plants a vmtarget/vmindex in it,
// which refers directly to JVM internals.
enum { _suppress_defc = 1, _suppress_name = 2, _suppress_type = 4 };
void expand_MemberName(::java::lang::invoke::MemberName* mname, int suppress) {
	//	assert(java_lang_invoke_MemberName::is_instance(mname()), "");

	bool have_defc = mname->clazz != nullptr;// (java_lang_invoke_MemberName::clazz(mname()) != NULL);
	bool have_name = mname->name != nullptr;// (java_lang_invoke_MemberName::name(mname()) != NULL);
	bool have_type = mname->type != nullptr;// (java_lang_invoke_MemberName::type(mname()) != NULL);
	//	int flags = java_lang_invoke_MemberName::flags(mname());
	int32_t flags = mname->flags;
	if (suppress != 0) {
		if (suppress & _suppress_defc)  have_defc = true;
		if (suppress & _suppress_name)  have_name = true;
		if (suppress & _suppress_type)  have_type = true;
	}

	if (have_defc && have_name && have_type)  return;  // nothing needed
	int32_t ALL_KINDS = MemberName::IS_METHOD | MemberName::IS_CONSTRUCTOR | MemberName::IS_FIELD | MemberName::IS_TYPE;
	switch (flags & ALL_KINDS) {
	case MemberName::IS_METHOD:
	case MemberName::IS_CONSTRUCTOR:
	{
		//	Method* vmtarget = java_lang_invoke_MemberName::vmtarget(mname());
		Executable* vmtarget = mname->method->vmtarget;
		if (vmtarget == NULL) {
			$throwNew(IllegalArgumentException, "nothing to expand"_s);
		}
		//	methodHandle m(THREAD, vmtarget);
	//		DEBUG_ONLY(vmtarget = NULL);  // safety
		Class* defc = $of(vmtarget)->getClass();
		if (!have_defc) {
			$set(mname, clazz, defc);
		}
		if (!have_name) {
			//not java_lang_String::create_from_symbol; let's intern member names
		//	oop name = StringTable::intern(m->name(), CHECK);
		//	java_lang_invoke_MemberName::set_name(mname(), name);
			if (defc == Method::class$) {
				Method* method = static_cast<Method*>(vmtarget);
				$set(mname, name, method->getName());
			} else if (defc == Constructor::class$) {
				$set(mname, name, $cstr("<init>"));
			}
			//	_assign(mname->name, vmtarget->name);
		}
		if (!have_type) {
			$set(mname, type, defc);
		}
		return;
	}
	case MemberName::IS_FIELD:
	{
		//	$var(Field ,field, )
		//	oop clazz = java_lang_invoke_MemberName::clazz(mname());
		$var(Class, clazz, mname->class$);
		if (mname->class$ == NULL) {
			//	THROW_MSG(vmSymbols::java_lang_IllegalArgumentException(), "nothing to expand (as field)");
			$throwNew(IllegalArgumentException, "nothing to expand (as field)"_s);
		}
		//	InstanceKlass* defc = InstanceKlass::cast(java_lang_Class::as_Klass(clazz));
		//	DEBUG_ONLY(clazz = NULL);  // safety
		//	int vmindex = java_lang_invoke_MemberName::vmindex(mname());
		int64_t vmindex = mname->vmindex;
		bool is_static = ((flags & Modifier::STATIC) != 0); //  JVM_ACC_STATIC
		//	fieldDescriptor fd; // find_field initializes fd if found
		//	if (!defc->find_field_from_offset(vmindex, is_static, &fd))
		//		break;				  // cannot expand
		if (!have_name) {
			//not java_lang_String::create_from_symbol; let's intern member names
		//	oop name = StringTable::intern(fd.name(), CHECK);
		//	java_lang_invoke_MemberName::set_name(mname(), name);
		//	_assign(mname->name, )
		}
		//	if (!have_type) {
		//		// If it is a primitive field type, don't mess with short strings like "I".
		//		Handle type(THREAD, field_signature_type_or_null(fd.signature()));
		//		if (type.is_null()) {
		//			type = java_lang_String::create_from_symbol(fd.signature(), CHECK);
		//		}
		//		java_lang_invoke_MemberName::set_type(mname(), type());
		//	}
		return;
	}
	}
	//	THROW_MSG(vmSymbols::java_lang_InternalError(), "unrecognized MemberName format");
	$throwNew(InternalError, "unrecognized MemberName format"_s);
}

void _Java_java_lang_invoke_MethodHandleNatives_expand(::java::lang::invoke::MemberName* self) {
	expand_MemberName(self, 0);
}

::java::lang::Object* _Java_java_lang_invoke_MethodHandleNatives_getMemberVMInfo(::java::lang::invoke::MemberName* mname) {
	if (mname == nullptr)  return nullptr;
	//Handle mname(THREAD, JNIHandles::resolve_non_null(mname_jh));
	int64_t vmindex = mname->vmindex;// java_lang_invoke_MemberName::vmindex(mname());
	$var($Array<Object>, result, $new<$Array<Object>>(2));// = oopFactory::new_objArray_handle(vmClasses::Object_klass(), 2, CHECK_NULL);
	jvalue vmindex_value; vmindex_value.j = (long)vmindex;
	//	oop x = java_lang_boxing_object::create(T_LONG, &vmindex_value, CHECK_NULL);
	$var(Long, xl, Long::valueOf(vmindex));
	//result->obj_at_put(0, x);
	result->set(0, xl);

	$var(Object, x, nullptr);
	int flags = mname->flags;// java_lang_invoke_MemberName::flags(mname());
	if ((flags & MemberName::IS_FIELD) != 0) {
		//	x = java_lang_invoke_MemberName::clazz(mname());
		$assign(x, mname->clazz);
	} else {
		//	Method* vmtarget = java_lang_invoke_MemberName::vmtarget(mname());
		//	assert(vmtarget != NULL && vmtarget->is_method(), "vmtarget is only method");
		//	x = mname();
		$assign(x, mname);
	}
	//result->obj_at_put(1, x);
	result->set(1, x);

	return result;// JNIHandles::make_local(THREAD, result());
}

int32_t _Java_java_lang_invoke_MethodHandleNatives_getMembers(::java::lang::Class* defc, ::java::lang::String* matchName, ::java::lang::String* matchSig, int32_t matchFlags,
	::java::lang::Class* caller, int32_t skip, $Array<::java::lang::invoke::MemberName>* results) {
	return 0;
}

int32_t _Java_java_lang_invoke_MethodHandleNatives_getNamedCon(int32_t which, $ObjectArray* name) {
	return 0;
}

// An unresolved member name is a mere symbolic reference.
// Resolving it plants a vmtarget/vmindex in it,
// which refers directly to JVM internals.
MemberName* resolve_MemberName(::java::lang::invoke::MemberName* mname, Class* caller, int lookup_mode,
	bool speculative_resolve) {
	//Handle empty;
	//sMemberName empty;
	//assert(java_lang_invoke_MemberName::is_instance(mname()), "");

	Executable* vmtarget = mname->method != nullptr ? mname->method->vmtarget : nullptr;
	//if (java_lang_invoke_MemberName::vmtarget(mname()) != NULL) {
	if (vmtarget != nullptr) {
		// Already resolved.
	//	DEBUG_ONLY(int vmindex = java_lang_invoke_MemberName::vmindex(mname()));
	//	assert(vmindex >= Method::nonvirtual_vtable_index, "");
		return mname;
	}

	//	Handle defc_oop(THREAD, java_lang_invoke_MemberName::clazz(mname()));
	$var(Class, defc_oop, mname->clazz);
	//	Handle name_str(THREAD, java_lang_invoke_MemberName::name(mname()));
	$var(String, name_str, mname->name);
	//	Handle type_str(THREAD, java_lang_invoke_MemberName::type(mname()));
	$var(Object, type_str, mname->type);
	int flags = mname->flags;// java_lang_invoke_MemberName::flags(mname());
	int ref_kind = (flags >> MethodHandleNatives$Constants::MN_REFERENCE_KIND_SHIFT) & MethodHandleNatives$Constants::MN_REFERENCE_KIND_MASK;
	//	if (!ref_kind_is_valid(ref_kind)) {
	//		THROW_MSG_(vmSymbols::java_lang_InternalError(), "obsolete MemberName format", empty);
	//	}

		//DEBUG_ONLY(int old_vmindex);
	//	assert((old_vmindex = java_lang_invoke_MemberName::vmindex(mname())) == 0, "clean input");

	if (defc_oop == nullptr || name_str == nullptr || type_str == nullptr) {
		$throwNew(IllegalArgumentException, "nothing to resolve"_s);
	}
	// Time to do the lookup.
	int32_t ALL_KINDS = MemberName::IS_METHOD | MemberName::IS_CONSTRUCTOR | MemberName::IS_FIELD | MemberName::IS_TYPE;

	switch (flags & ALL_KINDS) {
	case MemberName::IS_METHOD:
	{
		//	Method* result = nullptr; // TODO

		$var(MethodType, mt, $cast<MethodType>(type_str));
		$var(Method, result, defc_oop->getMethodEx(name_str, $nullcheck(mt)->ptypes$));
		if (result == nullptr) {
			//_assign(result, defc_oop->getMethodEx(name_str, mt->ptypes));
			return nullptr;
		}
		$var(MemberName, mname2, init_method_MemberName(mname, result));
		//	return Handle(THREAD, mname2);
		return mname2;
	}
	case MemberName::IS_CONSTRUCTOR:
	{
		//	Method* result = nullptr; // TODO

		::java::lang::invoke::MethodType* mtype = dynamic_cast<::java::lang::invoke::MethodType*>(mname->type);
		$var(::java::lang::reflect::Constructor, constructor, mname->clazz->getConstructor0(mtype->ptypes$, ::java::lang::reflect::Member::DECLARED));
		$var(MemberName, mname2, init_constructor_MemberName(mname, constructor));
		//	return Handle(THREAD, mname2);
		return mname2;
	}
	case MemberName::IS_FIELD:
	{
		int ref_kind = (flags >> MN_REFERENCE_KIND_SHIFT) & MN_REFERENCE_KIND_MASK;

		$var(::java::lang::reflect::Field, Field, mname->clazz->getDeclaredField(name_str));
		$var(MemberName, mname2, init_field_MemberName(mname, Field, ref_kind_is_setter(ref_kind)));
		return mname2;
	}
	default:
		//	THROW_MSG_(vmSymbols::java_lang_InternalError(), "unrecognized MemberName format", empty);
		$throwNew(InternalError, "unrecognized MemberName format"_s);
	}

	return nullptr;
}

int64_t _Java_java_lang_invoke_MethodHandleNatives_objectFieldOffset(::java::lang::invoke::MemberName* self) {
	return find_member_field_offset(self, false);
}

::java::lang::invoke::MemberName* _Java_java_lang_invoke_MethodHandleNatives_resolve(::java::lang::invoke::MemberName* mname, ::java::lang::Class* caller, int32_t lookupMode,
	bool speculativeResolve) {
	if (mname == nullptr) {
		$throwNew(InternalError, "mname is null"_s);
	}

	$var(MemberName, resolved, resolve_MemberName(mname, caller, lookupMode,
		speculativeResolve));

	return resolved;
}

void _Java_java_lang_invoke_MethodHandleNatives_setCallSiteTargetNormal(::java::lang::invoke::CallSite* site, ::java::lang::invoke::MethodHandle* target) {
	site->setTarget(target);
}

void _Java_java_lang_invoke_MethodHandleNatives_setCallSiteTargetVolatile(::java::lang::invoke::CallSite* site, ::java::lang::invoke::MethodHandle* target) {
	site->setTargetVolatile(target);
}

::java::lang::Object* _Java_java_lang_invoke_MethodHandleNatives_staticFieldBase(::java::lang::invoke::MemberName* self) {
	return 0;
}

int64_t _Java_java_lang_invoke_MethodHandleNatives_staticFieldOffset(::java::lang::invoke::MemberName* self) {
	return find_member_field_offset(self, true);
}