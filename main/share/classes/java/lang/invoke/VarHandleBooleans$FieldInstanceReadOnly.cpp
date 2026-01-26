#include <java/lang/invoke/VarHandleBooleans$FieldInstanceReadOnly.h>

#include <java/lang/constant/ClassDesc.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle$VarHandleDesc.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleBooleans.h>
#include <java/lang/invoke/VarHandles.h>
#include <java/lang/reflect/Field.h>
#include <java/util/Objects.h>
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
using $VarHandles = ::java::lang::invoke::VarHandles;
using $Field = ::java::lang::reflect::Field;
using $Objects = ::java::util::Objects;
using $Optional = ::java::util::Optional;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleBooleans$FieldInstanceReadOnly_MethodAnnotations_get4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldInstanceReadOnly_MethodAnnotations_getAcquire5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldInstanceReadOnly_MethodAnnotations_getOpaque6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldInstanceReadOnly_MethodAnnotations_getVolatile7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleBooleans$FieldInstanceReadOnly_FieldInfo_[] = {
	{"fieldOffset", "J", nullptr, $FINAL, $field(VarHandleBooleans$FieldInstanceReadOnly, fieldOffset)},
	{"receiverType", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(VarHandleBooleans$FieldInstanceReadOnly, receiverType)},
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleBooleans$FieldInstanceReadOnly, FORM)},
	{}
};

$MethodInfo _VarHandleBooleans$FieldInstanceReadOnly_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;J)V", "(Ljava/lang/Class<*>;J)V", 0, $method(VarHandleBooleans$FieldInstanceReadOnly, init$, void, $Class*, int64_t)},
	{"<init>", "(Ljava/lang/Class;JLjava/lang/invoke/VarForm;Z)V", "(Ljava/lang/Class<*>;JLjava/lang/invoke/VarForm;Z)V", $PROTECTED, $method(VarHandleBooleans$FieldInstanceReadOnly, init$, void, $Class*, int64_t, $VarForm*, bool)},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(VarHandleBooleans$FieldInstanceReadOnly, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
	{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC, $virtualMethod(VarHandleBooleans$FieldInstanceReadOnly, describeConstable, $Optional*)},
	{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldInstanceReadOnly, get, bool, $VarHandle*, Object$*), nullptr, nullptr, _VarHandleBooleans$FieldInstanceReadOnly_MethodAnnotations_get4},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldInstanceReadOnly, getAcquire, bool, $VarHandle*, Object$*), nullptr, nullptr, _VarHandleBooleans$FieldInstanceReadOnly_MethodAnnotations_getAcquire5},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldInstanceReadOnly, getOpaque, bool, $VarHandle*, Object$*), nullptr, nullptr, _VarHandleBooleans$FieldInstanceReadOnly_MethodAnnotations_getOpaque6},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldInstanceReadOnly, getVolatile, bool, $VarHandle*, Object$*), nullptr, nullptr, _VarHandleBooleans$FieldInstanceReadOnly_MethodAnnotations_getVolatile7},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleBooleans$FieldInstanceReadOnly;", nullptr, $PUBLIC, $virtualMethod(VarHandleBooleans$FieldInstanceReadOnly, withInvokeBehavior, VarHandleBooleans$FieldInstanceReadOnly*)},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleBooleans$FieldInstanceReadOnly;", nullptr, $PUBLIC, $virtualMethod(VarHandleBooleans$FieldInstanceReadOnly, withInvokeExactBehavior, VarHandleBooleans$FieldInstanceReadOnly*)},
	{}
};

$InnerClassInfo _VarHandleBooleans$FieldInstanceReadOnly_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleBooleans$FieldInstanceReadOnly", "java.lang.invoke.VarHandleBooleans", "FieldInstanceReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleBooleans$FieldInstanceReadOnly_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.VarHandleBooleans$FieldInstanceReadOnly",
	"java.lang.invoke.VarHandle",
	nullptr,
	_VarHandleBooleans$FieldInstanceReadOnly_FieldInfo_,
	_VarHandleBooleans$FieldInstanceReadOnly_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleBooleans$FieldInstanceReadOnly_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleBooleans"
};

$Object* allocate$VarHandleBooleans$FieldInstanceReadOnly($Class* clazz) {
	return $of($alloc(VarHandleBooleans$FieldInstanceReadOnly));
}

$VarForm* VarHandleBooleans$FieldInstanceReadOnly::FORM = nullptr;

void VarHandleBooleans$FieldInstanceReadOnly::init$($Class* receiverType, int64_t fieldOffset) {
	VarHandleBooleans$FieldInstanceReadOnly::init$(receiverType, fieldOffset, VarHandleBooleans$FieldInstanceReadOnly::FORM, false);
}

void VarHandleBooleans$FieldInstanceReadOnly::init$($Class* receiverType, int64_t fieldOffset, $VarForm* form, bool exact) {
	$VarHandle::init$(form, exact);
	this->fieldOffset = fieldOffset;
	$set(this, receiverType, receiverType);
}

VarHandleBooleans$FieldInstanceReadOnly* VarHandleBooleans$FieldInstanceReadOnly::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleBooleans$FieldInstanceReadOnly, this->receiverType, this->fieldOffset, this->vform, true);
}

VarHandleBooleans$FieldInstanceReadOnly* VarHandleBooleans$FieldInstanceReadOnly::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleBooleans$FieldInstanceReadOnly, this->receiverType, this->fieldOffset, this->vform, false);
}

$MethodType* VarHandleBooleans$FieldInstanceReadOnly::accessModeTypeUncached($VarHandle$AccessType* at) {
	$init($Boolean);
	return $nc(at)->accessModeType(this->receiverType, $Boolean::TYPE, $$new($ClassArray, 0));
}

$Optional* VarHandleBooleans$FieldInstanceReadOnly::describeConstable() {
	$useLocalCurrentObjectStackCache();
	$var($Optional, receiverTypeRef, $nc(this->receiverType)->describeConstable());
	$init($Boolean);
	$var($Optional, fieldTypeRef, $nc($Boolean::TYPE)->describeConstable());
	bool var$0 = !$nc(receiverTypeRef)->isPresent();
	if (var$0 || !$nc(fieldTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($String, name, $nc($($VarHandles::getFieldFromReceiverAndOffset(this->receiverType, this->fieldOffset, $Boolean::TYPE)))->getName());
	$var($ClassDesc, var$1, $cast($ClassDesc, $nc(receiverTypeRef)->get()));
	$var($String, var$2, name);
	return $Optional::of($($VarHandle$VarHandleDesc::ofField(var$1, var$2, $cast($ClassDesc, $($nc(fieldTypeRef)->get())))));
}

bool VarHandleBooleans$FieldInstanceReadOnly::get($VarHandle* ob, Object$* holder) {
	$init(VarHandleBooleans$FieldInstanceReadOnly);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBooleans$FieldInstanceReadOnly, handle, $cast(VarHandleBooleans$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getBoolean($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

bool VarHandleBooleans$FieldInstanceReadOnly::getVolatile($VarHandle* ob, Object$* holder) {
	$init(VarHandleBooleans$FieldInstanceReadOnly);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBooleans$FieldInstanceReadOnly, handle, $cast(VarHandleBooleans$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getBooleanVolatile($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

bool VarHandleBooleans$FieldInstanceReadOnly::getOpaque($VarHandle* ob, Object$* holder) {
	$init(VarHandleBooleans$FieldInstanceReadOnly);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBooleans$FieldInstanceReadOnly, handle, $cast(VarHandleBooleans$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getBooleanOpaque($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

bool VarHandleBooleans$FieldInstanceReadOnly::getAcquire($VarHandle* ob, Object$* holder) {
	$init(VarHandleBooleans$FieldInstanceReadOnly);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBooleans$FieldInstanceReadOnly, handle, $cast(VarHandleBooleans$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getBooleanAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

void clinit$VarHandleBooleans$FieldInstanceReadOnly($Class* class$) {
	$init($Boolean);
	$assignStatic(VarHandleBooleans$FieldInstanceReadOnly::FORM, $new($VarForm, VarHandleBooleans$FieldInstanceReadOnly::class$, $Object::class$, $Boolean::TYPE, $$new($ClassArray, 0)));
}

VarHandleBooleans$FieldInstanceReadOnly::VarHandleBooleans$FieldInstanceReadOnly() {
}

$Class* VarHandleBooleans$FieldInstanceReadOnly::load$($String* name, bool initialize) {
	$loadClass(VarHandleBooleans$FieldInstanceReadOnly, name, initialize, &_VarHandleBooleans$FieldInstanceReadOnly_ClassInfo_, clinit$VarHandleBooleans$FieldInstanceReadOnly, allocate$VarHandleBooleans$FieldInstanceReadOnly);
	return class$;
}

$Class* VarHandleBooleans$FieldInstanceReadOnly::class$ = nullptr;

		} // invoke
	} // lang
} // java