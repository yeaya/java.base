#include <java/lang/invoke/VarHandleShorts$FieldStaticReadOnly.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/constant/ClassDesc.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle$VarHandleDesc.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleShorts.h>
#include <java/lang/invoke/VarHandles.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Optional.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef FORM
#undef TYPE
#undef UNSAFE

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $ClassDesc = ::java::lang::constant::ClassDesc;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodType = ::java::lang::invoke::MethodType;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandle$AccessType = ::java::lang::invoke::VarHandle$AccessType;
using $VarHandle$VarHandleDesc = ::java::lang::invoke::VarHandle$VarHandleDesc;
using $VarHandleShorts = ::java::lang::invoke::VarHandleShorts;
using $VarHandles = ::java::lang::invoke::VarHandles;
using $Field = ::java::lang::reflect::Field;
using $Optional = ::java::util::Optional;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleShorts$FieldStaticReadOnly_MethodAnnotations_get4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldStaticReadOnly_MethodAnnotations_getAcquire5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldStaticReadOnly_MethodAnnotations_getOpaque6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldStaticReadOnly_MethodAnnotations_getVolatile7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleShorts$FieldStaticReadOnly_FieldInfo_[] = {
	{"base", "Ljava/lang/Object;", nullptr, $FINAL, $field(VarHandleShorts$FieldStaticReadOnly, base)},
	{"fieldOffset", "J", nullptr, $FINAL, $field(VarHandleShorts$FieldStaticReadOnly, fieldOffset)},
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleShorts$FieldStaticReadOnly, FORM)},
	{}
};

$MethodInfo _VarHandleShorts$FieldStaticReadOnly_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;J)V", nullptr, 0, $method(static_cast<void(VarHandleShorts$FieldStaticReadOnly::*)(Object$*,int64_t)>(&VarHandleShorts$FieldStaticReadOnly::init$))},
	{"<init>", "(Ljava/lang/Object;JLjava/lang/invoke/VarForm;Z)V", nullptr, $PROTECTED, $method(static_cast<void(VarHandleShorts$FieldStaticReadOnly::*)(Object$*,int64_t,$VarForm*,bool)>(&VarHandleShorts$FieldStaticReadOnly::init$))},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL},
	{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC},
	{"get", "(Ljava/lang/invoke/VarHandle;)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*)>(&VarHandleShorts$FieldStaticReadOnly::get)), nullptr, nullptr, _VarHandleShorts$FieldStaticReadOnly_MethodAnnotations_get4},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*)>(&VarHandleShorts$FieldStaticReadOnly::getAcquire)), nullptr, nullptr, _VarHandleShorts$FieldStaticReadOnly_MethodAnnotations_getAcquire5},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*)>(&VarHandleShorts$FieldStaticReadOnly::getOpaque)), nullptr, nullptr, _VarHandleShorts$FieldStaticReadOnly_MethodAnnotations_getOpaque6},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*)>(&VarHandleShorts$FieldStaticReadOnly::getVolatile)), nullptr, nullptr, _VarHandleShorts$FieldStaticReadOnly_MethodAnnotations_getVolatile7},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleShorts$FieldStaticReadOnly;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleShorts$FieldStaticReadOnly;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleShorts$FieldStaticReadOnly_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleShorts$FieldStaticReadOnly", "java.lang.invoke.VarHandleShorts", "FieldStaticReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleShorts$FieldStaticReadOnly_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.VarHandleShorts$FieldStaticReadOnly",
	"java.lang.invoke.VarHandle",
	nullptr,
	_VarHandleShorts$FieldStaticReadOnly_FieldInfo_,
	_VarHandleShorts$FieldStaticReadOnly_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleShorts$FieldStaticReadOnly_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleShorts"
};

$Object* allocate$VarHandleShorts$FieldStaticReadOnly($Class* clazz) {
	return $of($alloc(VarHandleShorts$FieldStaticReadOnly));
}

$VarForm* VarHandleShorts$FieldStaticReadOnly::FORM = nullptr;

void VarHandleShorts$FieldStaticReadOnly::init$(Object$* base, int64_t fieldOffset) {
	VarHandleShorts$FieldStaticReadOnly::init$(base, fieldOffset, VarHandleShorts$FieldStaticReadOnly::FORM, false);
}

void VarHandleShorts$FieldStaticReadOnly::init$(Object$* base, int64_t fieldOffset, $VarForm* form, bool exact) {
	$VarHandle::init$(form, exact);
	$set(this, base, base);
	this->fieldOffset = fieldOffset;
}

VarHandleShorts$FieldStaticReadOnly* VarHandleShorts$FieldStaticReadOnly::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleShorts$FieldStaticReadOnly, this->base, this->fieldOffset, this->vform, true);
}

VarHandleShorts$FieldStaticReadOnly* VarHandleShorts$FieldStaticReadOnly::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleShorts$FieldStaticReadOnly, this->base, this->fieldOffset, this->vform, false);
}

$Optional* VarHandleShorts$FieldStaticReadOnly::describeConstable() {
	$init($Short);
	$var($Optional, fieldTypeRef, $nc($Short::TYPE)->describeConstable());
	if (!$nc(fieldTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($Field, staticField, $VarHandles::getStaticFieldFromBaseAndOffset(this->base, this->fieldOffset, $Short::TYPE));
	$var($Optional, receiverTypeRef, $nc($nc(staticField)->getDeclaringClass())->describeConstable());
	if (!$nc(receiverTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($ClassDesc, var$0, $cast($ClassDesc, $nc(receiverTypeRef)->get()));
	$var($String, var$1, staticField->getName());
	return $Optional::of($($VarHandle$VarHandleDesc::ofStaticField(var$0, var$1, $cast($ClassDesc, $($nc(fieldTypeRef)->get())))));
}

$MethodType* VarHandleShorts$FieldStaticReadOnly::accessModeTypeUncached($VarHandle$AccessType* at) {
	$init($Short);
	return $nc(at)->accessModeType(nullptr, $Short::TYPE, $$new($ClassArray, 0));
}

int16_t VarHandleShorts$FieldStaticReadOnly::get($VarHandle* ob) {
	$init(VarHandleShorts$FieldStaticReadOnly);
	$var(VarHandleShorts$FieldStaticReadOnly, handle, $cast(VarHandleShorts$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getShort($nc(handle)->base, handle->fieldOffset);
}

int16_t VarHandleShorts$FieldStaticReadOnly::getVolatile($VarHandle* ob) {
	$init(VarHandleShorts$FieldStaticReadOnly);
	$var(VarHandleShorts$FieldStaticReadOnly, handle, $cast(VarHandleShorts$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getShortVolatile($nc(handle)->base, handle->fieldOffset);
}

int16_t VarHandleShorts$FieldStaticReadOnly::getOpaque($VarHandle* ob) {
	$init(VarHandleShorts$FieldStaticReadOnly);
	$var(VarHandleShorts$FieldStaticReadOnly, handle, $cast(VarHandleShorts$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getShortOpaque($nc(handle)->base, handle->fieldOffset);
}

int16_t VarHandleShorts$FieldStaticReadOnly::getAcquire($VarHandle* ob) {
	$init(VarHandleShorts$FieldStaticReadOnly);
	$var(VarHandleShorts$FieldStaticReadOnly, handle, $cast(VarHandleShorts$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getShortAcquire($nc(handle)->base, handle->fieldOffset);
}

void clinit$VarHandleShorts$FieldStaticReadOnly($Class* class$) {
	$init($Short);
	$assignStatic(VarHandleShorts$FieldStaticReadOnly::FORM, $new($VarForm, VarHandleShorts$FieldStaticReadOnly::class$, nullptr, $Short::TYPE, $$new($ClassArray, 0)));
}

VarHandleShorts$FieldStaticReadOnly::VarHandleShorts$FieldStaticReadOnly() {
}

$Class* VarHandleShorts$FieldStaticReadOnly::load$($String* name, bool initialize) {
	$loadClass(VarHandleShorts$FieldStaticReadOnly, name, initialize, &_VarHandleShorts$FieldStaticReadOnly_ClassInfo_, clinit$VarHandleShorts$FieldStaticReadOnly, allocate$VarHandleShorts$FieldStaticReadOnly);
	return class$;
}

$Class* VarHandleShorts$FieldStaticReadOnly::class$ = nullptr;

		} // invoke
	} // lang
} // java