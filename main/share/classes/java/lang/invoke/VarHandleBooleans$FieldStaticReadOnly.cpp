#include <java/lang/invoke/VarHandleBooleans$FieldStaticReadOnly.h>

#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
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
#include <java/lang/invoke/VarHandleBooleans.h>
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

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClassDesc = ::java::lang::constant::ClassDesc;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodType = ::java::lang::invoke::MethodType;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandle$AccessType = ::java::lang::invoke::VarHandle$AccessType;
using $VarHandle$VarHandleDesc = ::java::lang::invoke::VarHandle$VarHandleDesc;
using $VarHandleBooleans = ::java::lang::invoke::VarHandleBooleans;
using $VarHandles = ::java::lang::invoke::VarHandles;
using $Field = ::java::lang::reflect::Field;
using $Optional = ::java::util::Optional;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleBooleans$FieldStaticReadOnly_MethodAnnotations_get4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldStaticReadOnly_MethodAnnotations_getAcquire5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldStaticReadOnly_MethodAnnotations_getOpaque6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldStaticReadOnly_MethodAnnotations_getVolatile7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleBooleans$FieldStaticReadOnly_FieldInfo_[] = {
	{"base", "Ljava/lang/Object;", nullptr, $FINAL, $field(VarHandleBooleans$FieldStaticReadOnly, base)},
	{"fieldOffset", "J", nullptr, $FINAL, $field(VarHandleBooleans$FieldStaticReadOnly, fieldOffset)},
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleBooleans$FieldStaticReadOnly, FORM)},
	{}
};

$MethodInfo _VarHandleBooleans$FieldStaticReadOnly_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;J)V", nullptr, 0, $method(static_cast<void(VarHandleBooleans$FieldStaticReadOnly::*)(Object$*,int64_t)>(&VarHandleBooleans$FieldStaticReadOnly::init$))},
	{"<init>", "(Ljava/lang/Object;JLjava/lang/invoke/VarForm;Z)V", nullptr, $PROTECTED, $method(static_cast<void(VarHandleBooleans$FieldStaticReadOnly::*)(Object$*,int64_t,$VarForm*,bool)>(&VarHandleBooleans$FieldStaticReadOnly::init$))},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL},
	{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC},
	{"get", "(Ljava/lang/invoke/VarHandle;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*)>(&VarHandleBooleans$FieldStaticReadOnly::get)), nullptr, nullptr, _VarHandleBooleans$FieldStaticReadOnly_MethodAnnotations_get4},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*)>(&VarHandleBooleans$FieldStaticReadOnly::getAcquire)), nullptr, nullptr, _VarHandleBooleans$FieldStaticReadOnly_MethodAnnotations_getAcquire5},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*)>(&VarHandleBooleans$FieldStaticReadOnly::getOpaque)), nullptr, nullptr, _VarHandleBooleans$FieldStaticReadOnly_MethodAnnotations_getOpaque6},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*)>(&VarHandleBooleans$FieldStaticReadOnly::getVolatile)), nullptr, nullptr, _VarHandleBooleans$FieldStaticReadOnly_MethodAnnotations_getVolatile7},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleBooleans$FieldStaticReadOnly;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleBooleans$FieldStaticReadOnly;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleBooleans$FieldStaticReadOnly_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleBooleans$FieldStaticReadOnly", "java.lang.invoke.VarHandleBooleans", "FieldStaticReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleBooleans$FieldStaticReadOnly_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.VarHandleBooleans$FieldStaticReadOnly",
	"java.lang.invoke.VarHandle",
	nullptr,
	_VarHandleBooleans$FieldStaticReadOnly_FieldInfo_,
	_VarHandleBooleans$FieldStaticReadOnly_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleBooleans$FieldStaticReadOnly_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleBooleans"
};

$Object* allocate$VarHandleBooleans$FieldStaticReadOnly($Class* clazz) {
	return $of($alloc(VarHandleBooleans$FieldStaticReadOnly));
}

$VarForm* VarHandleBooleans$FieldStaticReadOnly::FORM = nullptr;

void VarHandleBooleans$FieldStaticReadOnly::init$(Object$* base, int64_t fieldOffset) {
	VarHandleBooleans$FieldStaticReadOnly::init$(base, fieldOffset, VarHandleBooleans$FieldStaticReadOnly::FORM, false);
}

void VarHandleBooleans$FieldStaticReadOnly::init$(Object$* base, int64_t fieldOffset, $VarForm* form, bool exact) {
	$VarHandle::init$(form, exact);
	$set(this, base, base);
	this->fieldOffset = fieldOffset;
}

VarHandleBooleans$FieldStaticReadOnly* VarHandleBooleans$FieldStaticReadOnly::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleBooleans$FieldStaticReadOnly, this->base, this->fieldOffset, this->vform, true);
}

VarHandleBooleans$FieldStaticReadOnly* VarHandleBooleans$FieldStaticReadOnly::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleBooleans$FieldStaticReadOnly, this->base, this->fieldOffset, this->vform, false);
}

$Optional* VarHandleBooleans$FieldStaticReadOnly::describeConstable() {
	$useLocalCurrentObjectStackCache();
	$init($Boolean);
	$var($Optional, fieldTypeRef, $nc($Boolean::TYPE)->describeConstable());
	if (!$nc(fieldTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($Field, staticField, $VarHandles::getStaticFieldFromBaseAndOffset(this->base, this->fieldOffset, $Boolean::TYPE));
	$var($Optional, receiverTypeRef, $nc($nc(staticField)->getDeclaringClass())->describeConstable());
	if (!$nc(receiverTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($ClassDesc, var$0, $cast($ClassDesc, $nc(receiverTypeRef)->get()));
	$var($String, var$1, staticField->getName());
	return $Optional::of($($VarHandle$VarHandleDesc::ofStaticField(var$0, var$1, $cast($ClassDesc, $($nc(fieldTypeRef)->get())))));
}

$MethodType* VarHandleBooleans$FieldStaticReadOnly::accessModeTypeUncached($VarHandle$AccessType* at) {
	$init($Boolean);
	return $nc(at)->accessModeType(nullptr, $Boolean::TYPE, $$new($ClassArray, 0));
}

bool VarHandleBooleans$FieldStaticReadOnly::get($VarHandle* ob) {
	$init(VarHandleBooleans$FieldStaticReadOnly);
	$var(VarHandleBooleans$FieldStaticReadOnly, handle, $cast(VarHandleBooleans$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getBoolean($nc(handle)->base, handle->fieldOffset);
}

bool VarHandleBooleans$FieldStaticReadOnly::getVolatile($VarHandle* ob) {
	$init(VarHandleBooleans$FieldStaticReadOnly);
	$var(VarHandleBooleans$FieldStaticReadOnly, handle, $cast(VarHandleBooleans$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getBooleanVolatile($nc(handle)->base, handle->fieldOffset);
}

bool VarHandleBooleans$FieldStaticReadOnly::getOpaque($VarHandle* ob) {
	$init(VarHandleBooleans$FieldStaticReadOnly);
	$var(VarHandleBooleans$FieldStaticReadOnly, handle, $cast(VarHandleBooleans$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getBooleanOpaque($nc(handle)->base, handle->fieldOffset);
}

bool VarHandleBooleans$FieldStaticReadOnly::getAcquire($VarHandle* ob) {
	$init(VarHandleBooleans$FieldStaticReadOnly);
	$var(VarHandleBooleans$FieldStaticReadOnly, handle, $cast(VarHandleBooleans$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getBooleanAcquire($nc(handle)->base, handle->fieldOffset);
}

void clinit$VarHandleBooleans$FieldStaticReadOnly($Class* class$) {
	$init($Boolean);
	$assignStatic(VarHandleBooleans$FieldStaticReadOnly::FORM, $new($VarForm, VarHandleBooleans$FieldStaticReadOnly::class$, nullptr, $Boolean::TYPE, $$new($ClassArray, 0)));
}

VarHandleBooleans$FieldStaticReadOnly::VarHandleBooleans$FieldStaticReadOnly() {
}

$Class* VarHandleBooleans$FieldStaticReadOnly::load$($String* name, bool initialize) {
	$loadClass(VarHandleBooleans$FieldStaticReadOnly, name, initialize, &_VarHandleBooleans$FieldStaticReadOnly_ClassInfo_, clinit$VarHandleBooleans$FieldStaticReadOnly, allocate$VarHandleBooleans$FieldStaticReadOnly);
	return class$;
}

$Class* VarHandleBooleans$FieldStaticReadOnly::class$ = nullptr;

		} // invoke
	} // lang
} // java