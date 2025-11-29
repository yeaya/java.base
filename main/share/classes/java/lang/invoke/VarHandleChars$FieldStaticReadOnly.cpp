#include <java/lang/invoke/VarHandleChars$FieldStaticReadOnly.h>

#include <java/lang/constant/ClassDesc.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle$VarHandleDesc.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleChars.h>
#include <java/lang/invoke/VarHandles.h>
#include <java/lang/reflect/Field.h>
#include <java/util/Optional.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef FORM
#undef TYPE
#undef UNSAFE

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
using $VarHandles = ::java::lang::invoke::VarHandles;
using $Field = ::java::lang::reflect::Field;
using $Optional = ::java::util::Optional;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleChars$FieldStaticReadOnly_MethodAnnotations_get4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldStaticReadOnly_MethodAnnotations_getAcquire5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldStaticReadOnly_MethodAnnotations_getOpaque6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldStaticReadOnly_MethodAnnotations_getVolatile7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleChars$FieldStaticReadOnly_FieldInfo_[] = {
	{"base", "Ljava/lang/Object;", nullptr, $FINAL, $field(VarHandleChars$FieldStaticReadOnly, base)},
	{"fieldOffset", "J", nullptr, $FINAL, $field(VarHandleChars$FieldStaticReadOnly, fieldOffset)},
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleChars$FieldStaticReadOnly, FORM)},
	{}
};

$MethodInfo _VarHandleChars$FieldStaticReadOnly_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;J)V", nullptr, 0, $method(static_cast<void(VarHandleChars$FieldStaticReadOnly::*)(Object$*,int64_t)>(&VarHandleChars$FieldStaticReadOnly::init$))},
	{"<init>", "(Ljava/lang/Object;JLjava/lang/invoke/VarForm;Z)V", nullptr, $PROTECTED, $method(static_cast<void(VarHandleChars$FieldStaticReadOnly::*)(Object$*,int64_t,$VarForm*,bool)>(&VarHandleChars$FieldStaticReadOnly::init$))},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL},
	{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC},
	{"get", "(Ljava/lang/invoke/VarHandle;)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*)>(&VarHandleChars$FieldStaticReadOnly::get)), nullptr, nullptr, _VarHandleChars$FieldStaticReadOnly_MethodAnnotations_get4},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*)>(&VarHandleChars$FieldStaticReadOnly::getAcquire)), nullptr, nullptr, _VarHandleChars$FieldStaticReadOnly_MethodAnnotations_getAcquire5},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*)>(&VarHandleChars$FieldStaticReadOnly::getOpaque)), nullptr, nullptr, _VarHandleChars$FieldStaticReadOnly_MethodAnnotations_getOpaque6},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*)>(&VarHandleChars$FieldStaticReadOnly::getVolatile)), nullptr, nullptr, _VarHandleChars$FieldStaticReadOnly_MethodAnnotations_getVolatile7},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleChars$FieldStaticReadOnly;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleChars$FieldStaticReadOnly;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleChars$FieldStaticReadOnly_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleChars$FieldStaticReadOnly", "java.lang.invoke.VarHandleChars", "FieldStaticReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleChars$FieldStaticReadOnly_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.VarHandleChars$FieldStaticReadOnly",
	"java.lang.invoke.VarHandle",
	nullptr,
	_VarHandleChars$FieldStaticReadOnly_FieldInfo_,
	_VarHandleChars$FieldStaticReadOnly_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleChars$FieldStaticReadOnly_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleChars"
};

$Object* allocate$VarHandleChars$FieldStaticReadOnly($Class* clazz) {
	return $of($alloc(VarHandleChars$FieldStaticReadOnly));
}

$VarForm* VarHandleChars$FieldStaticReadOnly::FORM = nullptr;

void VarHandleChars$FieldStaticReadOnly::init$(Object$* base, int64_t fieldOffset) {
	VarHandleChars$FieldStaticReadOnly::init$(base, fieldOffset, VarHandleChars$FieldStaticReadOnly::FORM, false);
}

void VarHandleChars$FieldStaticReadOnly::init$(Object$* base, int64_t fieldOffset, $VarForm* form, bool exact) {
	$VarHandle::init$(form, exact);
	$set(this, base, base);
	this->fieldOffset = fieldOffset;
}

VarHandleChars$FieldStaticReadOnly* VarHandleChars$FieldStaticReadOnly::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleChars$FieldStaticReadOnly, this->base, this->fieldOffset, this->vform, true);
}

VarHandleChars$FieldStaticReadOnly* VarHandleChars$FieldStaticReadOnly::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleChars$FieldStaticReadOnly, this->base, this->fieldOffset, this->vform, false);
}

$Optional* VarHandleChars$FieldStaticReadOnly::describeConstable() {
	$useLocalCurrentObjectStackCache();
	$init($Character);
	$var($Optional, fieldTypeRef, $nc($Character::TYPE)->describeConstable());
	if (!$nc(fieldTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($Field, staticField, $VarHandles::getStaticFieldFromBaseAndOffset(this->base, this->fieldOffset, $Character::TYPE));
	$var($Optional, receiverTypeRef, $nc($nc(staticField)->getDeclaringClass())->describeConstable());
	if (!$nc(receiverTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($ClassDesc, var$0, $cast($ClassDesc, $nc(receiverTypeRef)->get()));
	$var($String, var$1, staticField->getName());
	return $Optional::of($($VarHandle$VarHandleDesc::ofStaticField(var$0, var$1, $cast($ClassDesc, $($nc(fieldTypeRef)->get())))));
}

$MethodType* VarHandleChars$FieldStaticReadOnly::accessModeTypeUncached($VarHandle$AccessType* at) {
	$init($Character);
	return $nc(at)->accessModeType(nullptr, $Character::TYPE, $$new($ClassArray, 0));
}

char16_t VarHandleChars$FieldStaticReadOnly::get($VarHandle* ob) {
	$init(VarHandleChars$FieldStaticReadOnly);
	$var(VarHandleChars$FieldStaticReadOnly, handle, $cast(VarHandleChars$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getChar($nc(handle)->base, handle->fieldOffset);
}

char16_t VarHandleChars$FieldStaticReadOnly::getVolatile($VarHandle* ob) {
	$init(VarHandleChars$FieldStaticReadOnly);
	$var(VarHandleChars$FieldStaticReadOnly, handle, $cast(VarHandleChars$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getCharVolatile($nc(handle)->base, handle->fieldOffset);
}

char16_t VarHandleChars$FieldStaticReadOnly::getOpaque($VarHandle* ob) {
	$init(VarHandleChars$FieldStaticReadOnly);
	$var(VarHandleChars$FieldStaticReadOnly, handle, $cast(VarHandleChars$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getCharOpaque($nc(handle)->base, handle->fieldOffset);
}

char16_t VarHandleChars$FieldStaticReadOnly::getAcquire($VarHandle* ob) {
	$init(VarHandleChars$FieldStaticReadOnly);
	$var(VarHandleChars$FieldStaticReadOnly, handle, $cast(VarHandleChars$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getCharAcquire($nc(handle)->base, handle->fieldOffset);
}

void clinit$VarHandleChars$FieldStaticReadOnly($Class* class$) {
	$init($Character);
	$assignStatic(VarHandleChars$FieldStaticReadOnly::FORM, $new($VarForm, VarHandleChars$FieldStaticReadOnly::class$, nullptr, $Character::TYPE, $$new($ClassArray, 0)));
}

VarHandleChars$FieldStaticReadOnly::VarHandleChars$FieldStaticReadOnly() {
}

$Class* VarHandleChars$FieldStaticReadOnly::load$($String* name, bool initialize) {
	$loadClass(VarHandleChars$FieldStaticReadOnly, name, initialize, &_VarHandleChars$FieldStaticReadOnly_ClassInfo_, clinit$VarHandleChars$FieldStaticReadOnly, allocate$VarHandleChars$FieldStaticReadOnly);
	return class$;
}

$Class* VarHandleChars$FieldStaticReadOnly::class$ = nullptr;

		} // invoke
	} // lang
} // java