#include <java/lang/invoke/VarHandleBytes$FieldInstanceReadOnly.h>

#include <java/lang/Array.h>
#include <java/lang/Byte.h>
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
#include <java/lang/invoke/VarHandleBytes.h>
#include <java/lang/invoke/VarHandles.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <java/util/Optional.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef FORM
#undef UNSAFE
#undef TYPE

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
using $VarHandleBytes = ::java::lang::invoke::VarHandleBytes;
using $VarHandles = ::java::lang::invoke::VarHandles;
using $Field = ::java::lang::reflect::Field;
using $Objects = ::java::util::Objects;
using $Optional = ::java::util::Optional;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleBytes$FieldInstanceReadOnly_MethodAnnotations_get4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldInstanceReadOnly_MethodAnnotations_getAcquire5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldInstanceReadOnly_MethodAnnotations_getOpaque6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldInstanceReadOnly_MethodAnnotations_getVolatile7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleBytes$FieldInstanceReadOnly_FieldInfo_[] = {
	{"fieldOffset", "J", nullptr, $FINAL, $field(VarHandleBytes$FieldInstanceReadOnly, fieldOffset)},
	{"receiverType", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(VarHandleBytes$FieldInstanceReadOnly, receiverType)},
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleBytes$FieldInstanceReadOnly, FORM)},
	{}
};

$MethodInfo _VarHandleBytes$FieldInstanceReadOnly_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;J)V", "(Ljava/lang/Class<*>;J)V", 0, $method(static_cast<void(VarHandleBytes$FieldInstanceReadOnly::*)($Class*,int64_t)>(&VarHandleBytes$FieldInstanceReadOnly::init$))},
	{"<init>", "(Ljava/lang/Class;JLjava/lang/invoke/VarForm;Z)V", "(Ljava/lang/Class<*>;JLjava/lang/invoke/VarForm;Z)V", $PROTECTED, $method(static_cast<void(VarHandleBytes$FieldInstanceReadOnly::*)($Class*,int64_t,$VarForm*,bool)>(&VarHandleBytes$FieldInstanceReadOnly::init$))},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL},
	{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC},
	{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*)>(&VarHandleBytes$FieldInstanceReadOnly::get)), nullptr, nullptr, _VarHandleBytes$FieldInstanceReadOnly_MethodAnnotations_get4},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*)>(&VarHandleBytes$FieldInstanceReadOnly::getAcquire)), nullptr, nullptr, _VarHandleBytes$FieldInstanceReadOnly_MethodAnnotations_getAcquire5},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*)>(&VarHandleBytes$FieldInstanceReadOnly::getOpaque)), nullptr, nullptr, _VarHandleBytes$FieldInstanceReadOnly_MethodAnnotations_getOpaque6},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*)>(&VarHandleBytes$FieldInstanceReadOnly::getVolatile)), nullptr, nullptr, _VarHandleBytes$FieldInstanceReadOnly_MethodAnnotations_getVolatile7},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleBytes$FieldInstanceReadOnly;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleBytes$FieldInstanceReadOnly;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleBytes$FieldInstanceReadOnly_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleBytes$FieldInstanceReadOnly", "java.lang.invoke.VarHandleBytes", "FieldInstanceReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleBytes$FieldInstanceReadOnly_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.VarHandleBytes$FieldInstanceReadOnly",
	"java.lang.invoke.VarHandle",
	nullptr,
	_VarHandleBytes$FieldInstanceReadOnly_FieldInfo_,
	_VarHandleBytes$FieldInstanceReadOnly_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleBytes$FieldInstanceReadOnly_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleBytes"
};

$Object* allocate$VarHandleBytes$FieldInstanceReadOnly($Class* clazz) {
	return $of($alloc(VarHandleBytes$FieldInstanceReadOnly));
}

$VarForm* VarHandleBytes$FieldInstanceReadOnly::FORM = nullptr;

void VarHandleBytes$FieldInstanceReadOnly::init$($Class* receiverType, int64_t fieldOffset) {
	VarHandleBytes$FieldInstanceReadOnly::init$(receiverType, fieldOffset, VarHandleBytes$FieldInstanceReadOnly::FORM, false);
}

void VarHandleBytes$FieldInstanceReadOnly::init$($Class* receiverType, int64_t fieldOffset, $VarForm* form, bool exact) {
	$VarHandle::init$(form, exact);
	this->fieldOffset = fieldOffset;
	$set(this, receiverType, receiverType);
}

VarHandleBytes$FieldInstanceReadOnly* VarHandleBytes$FieldInstanceReadOnly::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleBytes$FieldInstanceReadOnly, this->receiverType, this->fieldOffset, this->vform, true);
}

VarHandleBytes$FieldInstanceReadOnly* VarHandleBytes$FieldInstanceReadOnly::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleBytes$FieldInstanceReadOnly, this->receiverType, this->fieldOffset, this->vform, false);
}

$MethodType* VarHandleBytes$FieldInstanceReadOnly::accessModeTypeUncached($VarHandle$AccessType* at) {
	$init($Byte);
	return $nc(at)->accessModeType(this->receiverType, $Byte::TYPE, $$new($ClassArray, 0));
}

$Optional* VarHandleBytes$FieldInstanceReadOnly::describeConstable() {
	$var($Optional, receiverTypeRef, $nc(this->receiverType)->describeConstable());
	$init($Byte);
	$var($Optional, fieldTypeRef, $nc($Byte::TYPE)->describeConstable());
	bool var$0 = !$nc(receiverTypeRef)->isPresent();
	if (var$0 || !$nc(fieldTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($String, name, $nc($($VarHandles::getFieldFromReceiverAndOffset(this->receiverType, this->fieldOffset, $Byte::TYPE)))->getName());
	$var($ClassDesc, var$1, $cast($ClassDesc, $nc(receiverTypeRef)->get()));
	$var($String, var$2, name);
	return $Optional::of($($VarHandle$VarHandleDesc::ofField(var$1, var$2, $cast($ClassDesc, $($nc(fieldTypeRef)->get())))));
}

int8_t VarHandleBytes$FieldInstanceReadOnly::get($VarHandle* ob, Object$* holder) {
	$init(VarHandleBytes$FieldInstanceReadOnly);
	$var(VarHandleBytes$FieldInstanceReadOnly, handle, $cast(VarHandleBytes$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getByte($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

int8_t VarHandleBytes$FieldInstanceReadOnly::getVolatile($VarHandle* ob, Object$* holder) {
	$init(VarHandleBytes$FieldInstanceReadOnly);
	$var(VarHandleBytes$FieldInstanceReadOnly, handle, $cast(VarHandleBytes$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getByteVolatile($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

int8_t VarHandleBytes$FieldInstanceReadOnly::getOpaque($VarHandle* ob, Object$* holder) {
	$init(VarHandleBytes$FieldInstanceReadOnly);
	$var(VarHandleBytes$FieldInstanceReadOnly, handle, $cast(VarHandleBytes$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getByteOpaque($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

int8_t VarHandleBytes$FieldInstanceReadOnly::getAcquire($VarHandle* ob, Object$* holder) {
	$init(VarHandleBytes$FieldInstanceReadOnly);
	$var(VarHandleBytes$FieldInstanceReadOnly, handle, $cast(VarHandleBytes$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getByteAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

void clinit$VarHandleBytes$FieldInstanceReadOnly($Class* class$) {
	$load($Object);
	$init($Byte);
	$assignStatic(VarHandleBytes$FieldInstanceReadOnly::FORM, $new($VarForm, VarHandleBytes$FieldInstanceReadOnly::class$, $Object::class$, $Byte::TYPE, $$new($ClassArray, 0)));
}

VarHandleBytes$FieldInstanceReadOnly::VarHandleBytes$FieldInstanceReadOnly() {
}

$Class* VarHandleBytes$FieldInstanceReadOnly::load$($String* name, bool initialize) {
	$loadClass(VarHandleBytes$FieldInstanceReadOnly, name, initialize, &_VarHandleBytes$FieldInstanceReadOnly_ClassInfo_, clinit$VarHandleBytes$FieldInstanceReadOnly, allocate$VarHandleBytes$FieldInstanceReadOnly);
	return class$;
}

$Class* VarHandleBytes$FieldInstanceReadOnly::class$ = nullptr;

		} // invoke
	} // lang
} // java