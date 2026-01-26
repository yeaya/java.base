#include <java/lang/invoke/VarHandleInts$FieldInstanceReadOnly.h>

#include <java/lang/constant/ClassDesc.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle$VarHandleDesc.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleInts.h>
#include <java/lang/invoke/VarHandles.h>
#include <java/lang/reflect/Field.h>
#include <java/util/Objects.h>
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
using $Integer = ::java::lang::Integer;
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
using $Objects = ::java::util::Objects;
using $Optional = ::java::util::Optional;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleInts$FieldInstanceReadOnly_MethodAnnotations_get4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldInstanceReadOnly_MethodAnnotations_getAcquire5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldInstanceReadOnly_MethodAnnotations_getOpaque6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldInstanceReadOnly_MethodAnnotations_getVolatile7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleInts$FieldInstanceReadOnly_FieldInfo_[] = {
	{"fieldOffset", "J", nullptr, $FINAL, $field(VarHandleInts$FieldInstanceReadOnly, fieldOffset)},
	{"receiverType", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(VarHandleInts$FieldInstanceReadOnly, receiverType)},
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleInts$FieldInstanceReadOnly, FORM)},
	{}
};

$MethodInfo _VarHandleInts$FieldInstanceReadOnly_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;J)V", "(Ljava/lang/Class<*>;J)V", 0, $method(VarHandleInts$FieldInstanceReadOnly, init$, void, $Class*, int64_t)},
	{"<init>", "(Ljava/lang/Class;JLjava/lang/invoke/VarForm;Z)V", "(Ljava/lang/Class<*>;JLjava/lang/invoke/VarForm;Z)V", $PROTECTED, $method(VarHandleInts$FieldInstanceReadOnly, init$, void, $Class*, int64_t, $VarForm*, bool)},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(VarHandleInts$FieldInstanceReadOnly, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
	{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC, $virtualMethod(VarHandleInts$FieldInstanceReadOnly, describeConstable, $Optional*)},
	{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)I", nullptr, $STATIC, $staticMethod(VarHandleInts$FieldInstanceReadOnly, get, int32_t, $VarHandle*, Object$*), nullptr, nullptr, _VarHandleInts$FieldInstanceReadOnly_MethodAnnotations_get4},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)I", nullptr, $STATIC, $staticMethod(VarHandleInts$FieldInstanceReadOnly, getAcquire, int32_t, $VarHandle*, Object$*), nullptr, nullptr, _VarHandleInts$FieldInstanceReadOnly_MethodAnnotations_getAcquire5},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)I", nullptr, $STATIC, $staticMethod(VarHandleInts$FieldInstanceReadOnly, getOpaque, int32_t, $VarHandle*, Object$*), nullptr, nullptr, _VarHandleInts$FieldInstanceReadOnly_MethodAnnotations_getOpaque6},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)I", nullptr, $STATIC, $staticMethod(VarHandleInts$FieldInstanceReadOnly, getVolatile, int32_t, $VarHandle*, Object$*), nullptr, nullptr, _VarHandleInts$FieldInstanceReadOnly_MethodAnnotations_getVolatile7},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleInts$FieldInstanceReadOnly;", nullptr, $PUBLIC, $virtualMethod(VarHandleInts$FieldInstanceReadOnly, withInvokeBehavior, VarHandleInts$FieldInstanceReadOnly*)},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleInts$FieldInstanceReadOnly;", nullptr, $PUBLIC, $virtualMethod(VarHandleInts$FieldInstanceReadOnly, withInvokeExactBehavior, VarHandleInts$FieldInstanceReadOnly*)},
	{}
};

$InnerClassInfo _VarHandleInts$FieldInstanceReadOnly_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleInts$FieldInstanceReadOnly", "java.lang.invoke.VarHandleInts", "FieldInstanceReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleInts$FieldInstanceReadOnly_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.VarHandleInts$FieldInstanceReadOnly",
	"java.lang.invoke.VarHandle",
	nullptr,
	_VarHandleInts$FieldInstanceReadOnly_FieldInfo_,
	_VarHandleInts$FieldInstanceReadOnly_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleInts$FieldInstanceReadOnly_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleInts"
};

$Object* allocate$VarHandleInts$FieldInstanceReadOnly($Class* clazz) {
	return $of($alloc(VarHandleInts$FieldInstanceReadOnly));
}

$VarForm* VarHandleInts$FieldInstanceReadOnly::FORM = nullptr;

void VarHandleInts$FieldInstanceReadOnly::init$($Class* receiverType, int64_t fieldOffset) {
	VarHandleInts$FieldInstanceReadOnly::init$(receiverType, fieldOffset, VarHandleInts$FieldInstanceReadOnly::FORM, false);
}

void VarHandleInts$FieldInstanceReadOnly::init$($Class* receiverType, int64_t fieldOffset, $VarForm* form, bool exact) {
	$VarHandle::init$(form, exact);
	this->fieldOffset = fieldOffset;
	$set(this, receiverType, receiverType);
}

VarHandleInts$FieldInstanceReadOnly* VarHandleInts$FieldInstanceReadOnly::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleInts$FieldInstanceReadOnly, this->receiverType, this->fieldOffset, this->vform, true);
}

VarHandleInts$FieldInstanceReadOnly* VarHandleInts$FieldInstanceReadOnly::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleInts$FieldInstanceReadOnly, this->receiverType, this->fieldOffset, this->vform, false);
}

$MethodType* VarHandleInts$FieldInstanceReadOnly::accessModeTypeUncached($VarHandle$AccessType* at) {
	$init($Integer);
	return $nc(at)->accessModeType(this->receiverType, $Integer::TYPE, $$new($ClassArray, 0));
}

$Optional* VarHandleInts$FieldInstanceReadOnly::describeConstable() {
	$useLocalCurrentObjectStackCache();
	$var($Optional, receiverTypeRef, $nc(this->receiverType)->describeConstable());
	$init($Integer);
	$var($Optional, fieldTypeRef, $nc($Integer::TYPE)->describeConstable());
	bool var$0 = !$nc(receiverTypeRef)->isPresent();
	if (var$0 || !$nc(fieldTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($String, name, $nc($($VarHandles::getFieldFromReceiverAndOffset(this->receiverType, this->fieldOffset, $Integer::TYPE)))->getName());
	$var($ClassDesc, var$1, $cast($ClassDesc, $nc(receiverTypeRef)->get()));
	$var($String, var$2, name);
	return $Optional::of($($VarHandle$VarHandleDesc::ofField(var$1, var$2, $cast($ClassDesc, $($nc(fieldTypeRef)->get())))));
}

int32_t VarHandleInts$FieldInstanceReadOnly::get($VarHandle* ob, Object$* holder) {
	$init(VarHandleInts$FieldInstanceReadOnly);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleInts$FieldInstanceReadOnly, handle, $cast(VarHandleInts$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getInt($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

int32_t VarHandleInts$FieldInstanceReadOnly::getVolatile($VarHandle* ob, Object$* holder) {
	$init(VarHandleInts$FieldInstanceReadOnly);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleInts$FieldInstanceReadOnly, handle, $cast(VarHandleInts$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getIntVolatile($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

int32_t VarHandleInts$FieldInstanceReadOnly::getOpaque($VarHandle* ob, Object$* holder) {
	$init(VarHandleInts$FieldInstanceReadOnly);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleInts$FieldInstanceReadOnly, handle, $cast(VarHandleInts$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getIntOpaque($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

int32_t VarHandleInts$FieldInstanceReadOnly::getAcquire($VarHandle* ob, Object$* holder) {
	$init(VarHandleInts$FieldInstanceReadOnly);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleInts$FieldInstanceReadOnly, handle, $cast(VarHandleInts$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getIntAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

void clinit$VarHandleInts$FieldInstanceReadOnly($Class* class$) {
	$init($Integer);
	$assignStatic(VarHandleInts$FieldInstanceReadOnly::FORM, $new($VarForm, VarHandleInts$FieldInstanceReadOnly::class$, $Object::class$, $Integer::TYPE, $$new($ClassArray, 0)));
}

VarHandleInts$FieldInstanceReadOnly::VarHandleInts$FieldInstanceReadOnly() {
}

$Class* VarHandleInts$FieldInstanceReadOnly::load$($String* name, bool initialize) {
	$loadClass(VarHandleInts$FieldInstanceReadOnly, name, initialize, &_VarHandleInts$FieldInstanceReadOnly_ClassInfo_, clinit$VarHandleInts$FieldInstanceReadOnly, allocate$VarHandleInts$FieldInstanceReadOnly);
	return class$;
}

$Class* VarHandleInts$FieldInstanceReadOnly::class$ = nullptr;

		} // invoke
	} // lang
} // java