#include <java/lang/invoke/VarHandleBytes$FieldStaticReadOnly.h>

#include <java/lang/constant/ClassDesc.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle$VarHandleDesc.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleBytes.h>
#include <java/lang/invoke/VarHandles.h>
#include <java/lang/reflect/Field.h>
#include <java/util/Optional.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef FORM
#undef TYPE
#undef UNSAFE

using $Byte = ::java::lang::Byte;
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
using $VarHandles = ::java::lang::invoke::VarHandles;
using $Field = ::java::lang::reflect::Field;
using $Optional = ::java::util::Optional;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleBytes$FieldStaticReadOnly_MethodAnnotations_get4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldStaticReadOnly_MethodAnnotations_getAcquire5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldStaticReadOnly_MethodAnnotations_getOpaque6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldStaticReadOnly_MethodAnnotations_getVolatile7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleBytes$FieldStaticReadOnly_FieldInfo_[] = {
	{"base", "Ljava/lang/Object;", nullptr, $FINAL, $field(VarHandleBytes$FieldStaticReadOnly, base)},
	{"fieldOffset", "J", nullptr, $FINAL, $field(VarHandleBytes$FieldStaticReadOnly, fieldOffset)},
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleBytes$FieldStaticReadOnly, FORM)},
	{}
};

$MethodInfo _VarHandleBytes$FieldStaticReadOnly_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;J)V", nullptr, 0, $method(static_cast<void(VarHandleBytes$FieldStaticReadOnly::*)(Object$*,int64_t)>(&VarHandleBytes$FieldStaticReadOnly::init$))},
	{"<init>", "(Ljava/lang/Object;JLjava/lang/invoke/VarForm;Z)V", nullptr, $PROTECTED, $method(static_cast<void(VarHandleBytes$FieldStaticReadOnly::*)(Object$*,int64_t,$VarForm*,bool)>(&VarHandleBytes$FieldStaticReadOnly::init$))},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL},
	{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC},
	{"get", "(Ljava/lang/invoke/VarHandle;)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*)>(&VarHandleBytes$FieldStaticReadOnly::get)), nullptr, nullptr, _VarHandleBytes$FieldStaticReadOnly_MethodAnnotations_get4},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*)>(&VarHandleBytes$FieldStaticReadOnly::getAcquire)), nullptr, nullptr, _VarHandleBytes$FieldStaticReadOnly_MethodAnnotations_getAcquire5},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*)>(&VarHandleBytes$FieldStaticReadOnly::getOpaque)), nullptr, nullptr, _VarHandleBytes$FieldStaticReadOnly_MethodAnnotations_getOpaque6},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*)>(&VarHandleBytes$FieldStaticReadOnly::getVolatile)), nullptr, nullptr, _VarHandleBytes$FieldStaticReadOnly_MethodAnnotations_getVolatile7},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleBytes$FieldStaticReadOnly;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleBytes$FieldStaticReadOnly;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleBytes$FieldStaticReadOnly_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleBytes$FieldStaticReadOnly", "java.lang.invoke.VarHandleBytes", "FieldStaticReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleBytes$FieldStaticReadOnly_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.VarHandleBytes$FieldStaticReadOnly",
	"java.lang.invoke.VarHandle",
	nullptr,
	_VarHandleBytes$FieldStaticReadOnly_FieldInfo_,
	_VarHandleBytes$FieldStaticReadOnly_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleBytes$FieldStaticReadOnly_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleBytes"
};

$Object* allocate$VarHandleBytes$FieldStaticReadOnly($Class* clazz) {
	return $of($alloc(VarHandleBytes$FieldStaticReadOnly));
}

$VarForm* VarHandleBytes$FieldStaticReadOnly::FORM = nullptr;

void VarHandleBytes$FieldStaticReadOnly::init$(Object$* base, int64_t fieldOffset) {
	VarHandleBytes$FieldStaticReadOnly::init$(base, fieldOffset, VarHandleBytes$FieldStaticReadOnly::FORM, false);
}

void VarHandleBytes$FieldStaticReadOnly::init$(Object$* base, int64_t fieldOffset, $VarForm* form, bool exact) {
	$VarHandle::init$(form, exact);
	$set(this, base, base);
	this->fieldOffset = fieldOffset;
}

VarHandleBytes$FieldStaticReadOnly* VarHandleBytes$FieldStaticReadOnly::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleBytes$FieldStaticReadOnly, this->base, this->fieldOffset, this->vform, true);
}

VarHandleBytes$FieldStaticReadOnly* VarHandleBytes$FieldStaticReadOnly::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleBytes$FieldStaticReadOnly, this->base, this->fieldOffset, this->vform, false);
}

$Optional* VarHandleBytes$FieldStaticReadOnly::describeConstable() {
	$useLocalCurrentObjectStackCache();
	$init($Byte);
	$var($Optional, fieldTypeRef, $nc($Byte::TYPE)->describeConstable());
	if (!$nc(fieldTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($Field, staticField, $VarHandles::getStaticFieldFromBaseAndOffset(this->base, this->fieldOffset, $Byte::TYPE));
	$var($Optional, receiverTypeRef, $nc($nc(staticField)->getDeclaringClass())->describeConstable());
	if (!$nc(receiverTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($ClassDesc, var$0, $cast($ClassDesc, $nc(receiverTypeRef)->get()));
	$var($String, var$1, staticField->getName());
	return $Optional::of($($VarHandle$VarHandleDesc::ofStaticField(var$0, var$1, $cast($ClassDesc, $($nc(fieldTypeRef)->get())))));
}

$MethodType* VarHandleBytes$FieldStaticReadOnly::accessModeTypeUncached($VarHandle$AccessType* at) {
	$init($Byte);
	return $nc(at)->accessModeType(nullptr, $Byte::TYPE, $$new($ClassArray, 0));
}

int8_t VarHandleBytes$FieldStaticReadOnly::get($VarHandle* ob) {
	$init(VarHandleBytes$FieldStaticReadOnly);
	$var(VarHandleBytes$FieldStaticReadOnly, handle, $cast(VarHandleBytes$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getByte($nc(handle)->base, handle->fieldOffset);
}

int8_t VarHandleBytes$FieldStaticReadOnly::getVolatile($VarHandle* ob) {
	$init(VarHandleBytes$FieldStaticReadOnly);
	$var(VarHandleBytes$FieldStaticReadOnly, handle, $cast(VarHandleBytes$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getByteVolatile($nc(handle)->base, handle->fieldOffset);
}

int8_t VarHandleBytes$FieldStaticReadOnly::getOpaque($VarHandle* ob) {
	$init(VarHandleBytes$FieldStaticReadOnly);
	$var(VarHandleBytes$FieldStaticReadOnly, handle, $cast(VarHandleBytes$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getByteOpaque($nc(handle)->base, handle->fieldOffset);
}

int8_t VarHandleBytes$FieldStaticReadOnly::getAcquire($VarHandle* ob) {
	$init(VarHandleBytes$FieldStaticReadOnly);
	$var(VarHandleBytes$FieldStaticReadOnly, handle, $cast(VarHandleBytes$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getByteAcquire($nc(handle)->base, handle->fieldOffset);
}

void clinit$VarHandleBytes$FieldStaticReadOnly($Class* class$) {
	$init($Byte);
	$assignStatic(VarHandleBytes$FieldStaticReadOnly::FORM, $new($VarForm, VarHandleBytes$FieldStaticReadOnly::class$, nullptr, $Byte::TYPE, $$new($ClassArray, 0)));
}

VarHandleBytes$FieldStaticReadOnly::VarHandleBytes$FieldStaticReadOnly() {
}

$Class* VarHandleBytes$FieldStaticReadOnly::load$($String* name, bool initialize) {
	$loadClass(VarHandleBytes$FieldStaticReadOnly, name, initialize, &_VarHandleBytes$FieldStaticReadOnly_ClassInfo_, clinit$VarHandleBytes$FieldStaticReadOnly, allocate$VarHandleBytes$FieldStaticReadOnly);
	return class$;
}

$Class* VarHandleBytes$FieldStaticReadOnly::class$ = nullptr;

		} // invoke
	} // lang
} // java