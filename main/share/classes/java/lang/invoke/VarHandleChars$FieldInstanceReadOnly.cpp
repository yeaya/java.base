#include <java/lang/invoke/VarHandleChars$FieldInstanceReadOnly.h>

#include <java/lang/Array.h>
#include <java/lang/Character.h>
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
#include <java/lang/invoke/VarHandleChars.h>
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

using $Character = ::java::lang::Character;
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
using $VarHandleChars = ::java::lang::invoke::VarHandleChars;
using $VarHandles = ::java::lang::invoke::VarHandles;
using $Field = ::java::lang::reflect::Field;
using $Objects = ::java::util::Objects;
using $Optional = ::java::util::Optional;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleChars$FieldInstanceReadOnly_MethodAnnotations_get4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldInstanceReadOnly_MethodAnnotations_getAcquire5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldInstanceReadOnly_MethodAnnotations_getOpaque6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldInstanceReadOnly_MethodAnnotations_getVolatile7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleChars$FieldInstanceReadOnly_FieldInfo_[] = {
	{"fieldOffset", "J", nullptr, $FINAL, $field(VarHandleChars$FieldInstanceReadOnly, fieldOffset)},
	{"receiverType", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(VarHandleChars$FieldInstanceReadOnly, receiverType)},
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleChars$FieldInstanceReadOnly, FORM)},
	{}
};

$MethodInfo _VarHandleChars$FieldInstanceReadOnly_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;J)V", "(Ljava/lang/Class<*>;J)V", 0, $method(static_cast<void(VarHandleChars$FieldInstanceReadOnly::*)($Class*,int64_t)>(&VarHandleChars$FieldInstanceReadOnly::init$))},
	{"<init>", "(Ljava/lang/Class;JLjava/lang/invoke/VarForm;Z)V", "(Ljava/lang/Class<*>;JLjava/lang/invoke/VarForm;Z)V", $PROTECTED, $method(static_cast<void(VarHandleChars$FieldInstanceReadOnly::*)($Class*,int64_t,$VarForm*,bool)>(&VarHandleChars$FieldInstanceReadOnly::init$))},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL},
	{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC},
	{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,Object$*)>(&VarHandleChars$FieldInstanceReadOnly::get)), nullptr, nullptr, _VarHandleChars$FieldInstanceReadOnly_MethodAnnotations_get4},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,Object$*)>(&VarHandleChars$FieldInstanceReadOnly::getAcquire)), nullptr, nullptr, _VarHandleChars$FieldInstanceReadOnly_MethodAnnotations_getAcquire5},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,Object$*)>(&VarHandleChars$FieldInstanceReadOnly::getOpaque)), nullptr, nullptr, _VarHandleChars$FieldInstanceReadOnly_MethodAnnotations_getOpaque6},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,Object$*)>(&VarHandleChars$FieldInstanceReadOnly::getVolatile)), nullptr, nullptr, _VarHandleChars$FieldInstanceReadOnly_MethodAnnotations_getVolatile7},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleChars$FieldInstanceReadOnly;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleChars$FieldInstanceReadOnly;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleChars$FieldInstanceReadOnly_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleChars$FieldInstanceReadOnly", "java.lang.invoke.VarHandleChars", "FieldInstanceReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleChars$FieldInstanceReadOnly_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.VarHandleChars$FieldInstanceReadOnly",
	"java.lang.invoke.VarHandle",
	nullptr,
	_VarHandleChars$FieldInstanceReadOnly_FieldInfo_,
	_VarHandleChars$FieldInstanceReadOnly_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleChars$FieldInstanceReadOnly_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleChars"
};

$Object* allocate$VarHandleChars$FieldInstanceReadOnly($Class* clazz) {
	return $of($alloc(VarHandleChars$FieldInstanceReadOnly));
}

$VarForm* VarHandleChars$FieldInstanceReadOnly::FORM = nullptr;

void VarHandleChars$FieldInstanceReadOnly::init$($Class* receiverType, int64_t fieldOffset) {
	VarHandleChars$FieldInstanceReadOnly::init$(receiverType, fieldOffset, VarHandleChars$FieldInstanceReadOnly::FORM, false);
}

void VarHandleChars$FieldInstanceReadOnly::init$($Class* receiverType, int64_t fieldOffset, $VarForm* form, bool exact) {
	$VarHandle::init$(form, exact);
	this->fieldOffset = fieldOffset;
	$set(this, receiverType, receiverType);
}

VarHandleChars$FieldInstanceReadOnly* VarHandleChars$FieldInstanceReadOnly::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleChars$FieldInstanceReadOnly, this->receiverType, this->fieldOffset, this->vform, true);
}

VarHandleChars$FieldInstanceReadOnly* VarHandleChars$FieldInstanceReadOnly::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleChars$FieldInstanceReadOnly, this->receiverType, this->fieldOffset, this->vform, false);
}

$MethodType* VarHandleChars$FieldInstanceReadOnly::accessModeTypeUncached($VarHandle$AccessType* at) {
	$init($Character);
	return $nc(at)->accessModeType(this->receiverType, $Character::TYPE, $$new($ClassArray, 0));
}

$Optional* VarHandleChars$FieldInstanceReadOnly::describeConstable() {
	$var($Optional, receiverTypeRef, $nc(this->receiverType)->describeConstable());
	$init($Character);
	$var($Optional, fieldTypeRef, $nc($Character::TYPE)->describeConstable());
	bool var$0 = !$nc(receiverTypeRef)->isPresent();
	if (var$0 || !$nc(fieldTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($String, name, $nc($($VarHandles::getFieldFromReceiverAndOffset(this->receiverType, this->fieldOffset, $Character::TYPE)))->getName());
	$var($ClassDesc, var$1, $cast($ClassDesc, $nc(receiverTypeRef)->get()));
	$var($String, var$2, name);
	return $Optional::of($($VarHandle$VarHandleDesc::ofField(var$1, var$2, $cast($ClassDesc, $($nc(fieldTypeRef)->get())))));
}

char16_t VarHandleChars$FieldInstanceReadOnly::get($VarHandle* ob, Object$* holder) {
	$init(VarHandleChars$FieldInstanceReadOnly);
	$var(VarHandleChars$FieldInstanceReadOnly, handle, $cast(VarHandleChars$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getChar($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

char16_t VarHandleChars$FieldInstanceReadOnly::getVolatile($VarHandle* ob, Object$* holder) {
	$init(VarHandleChars$FieldInstanceReadOnly);
	$var(VarHandleChars$FieldInstanceReadOnly, handle, $cast(VarHandleChars$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getCharVolatile($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

char16_t VarHandleChars$FieldInstanceReadOnly::getOpaque($VarHandle* ob, Object$* holder) {
	$init(VarHandleChars$FieldInstanceReadOnly);
	$var(VarHandleChars$FieldInstanceReadOnly, handle, $cast(VarHandleChars$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getCharOpaque($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

char16_t VarHandleChars$FieldInstanceReadOnly::getAcquire($VarHandle* ob, Object$* holder) {
	$init(VarHandleChars$FieldInstanceReadOnly);
	$var(VarHandleChars$FieldInstanceReadOnly, handle, $cast(VarHandleChars$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getCharAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

void clinit$VarHandleChars$FieldInstanceReadOnly($Class* class$) {
	$load($Object);
	$init($Character);
	$assignStatic(VarHandleChars$FieldInstanceReadOnly::FORM, $new($VarForm, VarHandleChars$FieldInstanceReadOnly::class$, $Object::class$, $Character::TYPE, $$new($ClassArray, 0)));
}

VarHandleChars$FieldInstanceReadOnly::VarHandleChars$FieldInstanceReadOnly() {
}

$Class* VarHandleChars$FieldInstanceReadOnly::load$($String* name, bool initialize) {
	$loadClass(VarHandleChars$FieldInstanceReadOnly, name, initialize, &_VarHandleChars$FieldInstanceReadOnly_ClassInfo_, clinit$VarHandleChars$FieldInstanceReadOnly, allocate$VarHandleChars$FieldInstanceReadOnly);
	return class$;
}

$Class* VarHandleChars$FieldInstanceReadOnly::class$ = nullptr;

		} // invoke
	} // lang
} // java