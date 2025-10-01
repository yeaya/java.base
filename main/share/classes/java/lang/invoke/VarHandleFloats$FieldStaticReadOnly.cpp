#include <java/lang/invoke/VarHandleFloats$FieldStaticReadOnly.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/constant/ClassDesc.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle$VarHandleDesc.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleFloats.h>
#include <java/lang/invoke/VarHandles.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Optional.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef FORM
#undef UNSAFE
#undef TYPE

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClassDesc = ::java::lang::constant::ClassDesc;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodType = ::java::lang::invoke::MethodType;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandle$AccessType = ::java::lang::invoke::VarHandle$AccessType;
using $VarHandle$VarHandleDesc = ::java::lang::invoke::VarHandle$VarHandleDesc;
using $VarHandleFloats = ::java::lang::invoke::VarHandleFloats;
using $VarHandles = ::java::lang::invoke::VarHandles;
using $Field = ::java::lang::reflect::Field;
using $Optional = ::java::util::Optional;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleFloats$FieldStaticReadOnly_MethodAnnotations_get4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$FieldStaticReadOnly_MethodAnnotations_getAcquire5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$FieldStaticReadOnly_MethodAnnotations_getOpaque6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$FieldStaticReadOnly_MethodAnnotations_getVolatile7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleFloats$FieldStaticReadOnly_FieldInfo_[] = {
	{"base", "Ljava/lang/Object;", nullptr, $FINAL, $field(VarHandleFloats$FieldStaticReadOnly, base)},
	{"fieldOffset", "J", nullptr, $FINAL, $field(VarHandleFloats$FieldStaticReadOnly, fieldOffset)},
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleFloats$FieldStaticReadOnly, FORM)},
	{}
};

$MethodInfo _VarHandleFloats$FieldStaticReadOnly_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;J)V", nullptr, 0, $method(static_cast<void(VarHandleFloats$FieldStaticReadOnly::*)(Object$*,int64_t)>(&VarHandleFloats$FieldStaticReadOnly::init$))},
	{"<init>", "(Ljava/lang/Object;JLjava/lang/invoke/VarForm;Z)V", nullptr, $PROTECTED, $method(static_cast<void(VarHandleFloats$FieldStaticReadOnly::*)(Object$*,int64_t,$VarForm*,bool)>(&VarHandleFloats$FieldStaticReadOnly::init$))},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL},
	{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC},
	{"get", "(Ljava/lang/invoke/VarHandle;)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*)>(&VarHandleFloats$FieldStaticReadOnly::get)), nullptr, nullptr, _VarHandleFloats$FieldStaticReadOnly_MethodAnnotations_get4},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*)>(&VarHandleFloats$FieldStaticReadOnly::getAcquire)), nullptr, nullptr, _VarHandleFloats$FieldStaticReadOnly_MethodAnnotations_getAcquire5},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*)>(&VarHandleFloats$FieldStaticReadOnly::getOpaque)), nullptr, nullptr, _VarHandleFloats$FieldStaticReadOnly_MethodAnnotations_getOpaque6},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*)>(&VarHandleFloats$FieldStaticReadOnly::getVolatile)), nullptr, nullptr, _VarHandleFloats$FieldStaticReadOnly_MethodAnnotations_getVolatile7},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleFloats$FieldStaticReadOnly;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleFloats$FieldStaticReadOnly;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleFloats$FieldStaticReadOnly_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleFloats$FieldStaticReadOnly", "java.lang.invoke.VarHandleFloats", "FieldStaticReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleFloats$FieldStaticReadOnly_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.VarHandleFloats$FieldStaticReadOnly",
	"java.lang.invoke.VarHandle",
	nullptr,
	_VarHandleFloats$FieldStaticReadOnly_FieldInfo_,
	_VarHandleFloats$FieldStaticReadOnly_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleFloats$FieldStaticReadOnly_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleFloats"
};

$Object* allocate$VarHandleFloats$FieldStaticReadOnly($Class* clazz) {
	return $of($alloc(VarHandleFloats$FieldStaticReadOnly));
}

$VarForm* VarHandleFloats$FieldStaticReadOnly::FORM = nullptr;

void VarHandleFloats$FieldStaticReadOnly::init$(Object$* base, int64_t fieldOffset) {
	VarHandleFloats$FieldStaticReadOnly::init$(base, fieldOffset, VarHandleFloats$FieldStaticReadOnly::FORM, false);
}

void VarHandleFloats$FieldStaticReadOnly::init$(Object$* base, int64_t fieldOffset, $VarForm* form, bool exact) {
	$VarHandle::init$(form, exact);
	$set(this, base, base);
	this->fieldOffset = fieldOffset;
}

VarHandleFloats$FieldStaticReadOnly* VarHandleFloats$FieldStaticReadOnly::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleFloats$FieldStaticReadOnly, this->base, this->fieldOffset, this->vform, true);
}

VarHandleFloats$FieldStaticReadOnly* VarHandleFloats$FieldStaticReadOnly::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleFloats$FieldStaticReadOnly, this->base, this->fieldOffset, this->vform, false);
}

$Optional* VarHandleFloats$FieldStaticReadOnly::describeConstable() {
	$init($Float);
	$var($Optional, fieldTypeRef, $nc($Float::TYPE)->describeConstable());
	if (!$nc(fieldTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($Field, staticField, $VarHandles::getStaticFieldFromBaseAndOffset(this->base, this->fieldOffset, $Float::TYPE));
	$var($Optional, receiverTypeRef, $nc($nc(staticField)->getDeclaringClass())->describeConstable());
	if (!$nc(receiverTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($ClassDesc, var$0, $cast($ClassDesc, $nc(receiverTypeRef)->get()));
	$var($String, var$1, staticField->getName());
	return $Optional::of($($VarHandle$VarHandleDesc::ofStaticField(var$0, var$1, $cast($ClassDesc, $($nc(fieldTypeRef)->get())))));
}

$MethodType* VarHandleFloats$FieldStaticReadOnly::accessModeTypeUncached($VarHandle$AccessType* at) {
	$init($Float);
	return $nc(at)->accessModeType(nullptr, $Float::TYPE, $$new($ClassArray, 0));
}

float VarHandleFloats$FieldStaticReadOnly::get($VarHandle* ob) {
	$init(VarHandleFloats$FieldStaticReadOnly);
	$var(VarHandleFloats$FieldStaticReadOnly, handle, $cast(VarHandleFloats$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getFloat($nc(handle)->base, handle->fieldOffset);
}

float VarHandleFloats$FieldStaticReadOnly::getVolatile($VarHandle* ob) {
	$init(VarHandleFloats$FieldStaticReadOnly);
	$var(VarHandleFloats$FieldStaticReadOnly, handle, $cast(VarHandleFloats$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getFloatVolatile($nc(handle)->base, handle->fieldOffset);
}

float VarHandleFloats$FieldStaticReadOnly::getOpaque($VarHandle* ob) {
	$init(VarHandleFloats$FieldStaticReadOnly);
	$var(VarHandleFloats$FieldStaticReadOnly, handle, $cast(VarHandleFloats$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getFloatOpaque($nc(handle)->base, handle->fieldOffset);
}

float VarHandleFloats$FieldStaticReadOnly::getAcquire($VarHandle* ob) {
	$init(VarHandleFloats$FieldStaticReadOnly);
	$var(VarHandleFloats$FieldStaticReadOnly, handle, $cast(VarHandleFloats$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getFloatAcquire($nc(handle)->base, handle->fieldOffset);
}

void clinit$VarHandleFloats$FieldStaticReadOnly($Class* class$) {
	$init($Float);
	$assignStatic(VarHandleFloats$FieldStaticReadOnly::FORM, $new($VarForm, VarHandleFloats$FieldStaticReadOnly::class$, nullptr, $Float::TYPE, $$new($ClassArray, 0)));
}

VarHandleFloats$FieldStaticReadOnly::VarHandleFloats$FieldStaticReadOnly() {
}

$Class* VarHandleFloats$FieldStaticReadOnly::load$($String* name, bool initialize) {
	$loadClass(VarHandleFloats$FieldStaticReadOnly, name, initialize, &_VarHandleFloats$FieldStaticReadOnly_ClassInfo_, clinit$VarHandleFloats$FieldStaticReadOnly, allocate$VarHandleFloats$FieldStaticReadOnly);
	return class$;
}

$Class* VarHandleFloats$FieldStaticReadOnly::class$ = nullptr;

		} // invoke
	} // lang
} // java