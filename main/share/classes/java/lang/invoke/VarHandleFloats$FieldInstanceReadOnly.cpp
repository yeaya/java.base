#include <java/lang/invoke/VarHandleFloats$FieldInstanceReadOnly.h>

#include <java/lang/constant/ClassDesc.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle$VarHandleDesc.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleFloats.h>
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
using $VarHandles = ::java::lang::invoke::VarHandles;
using $Field = ::java::lang::reflect::Field;
using $Objects = ::java::util::Objects;
using $Optional = ::java::util::Optional;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleFloats$FieldInstanceReadOnly_MethodAnnotations_get4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$FieldInstanceReadOnly_MethodAnnotations_getAcquire5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$FieldInstanceReadOnly_MethodAnnotations_getOpaque6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$FieldInstanceReadOnly_MethodAnnotations_getVolatile7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleFloats$FieldInstanceReadOnly_FieldInfo_[] = {
	{"fieldOffset", "J", nullptr, $FINAL, $field(VarHandleFloats$FieldInstanceReadOnly, fieldOffset)},
	{"receiverType", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(VarHandleFloats$FieldInstanceReadOnly, receiverType)},
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleFloats$FieldInstanceReadOnly, FORM)},
	{}
};

$MethodInfo _VarHandleFloats$FieldInstanceReadOnly_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;J)V", "(Ljava/lang/Class<*>;J)V", 0, $method(VarHandleFloats$FieldInstanceReadOnly, init$, void, $Class*, int64_t)},
	{"<init>", "(Ljava/lang/Class;JLjava/lang/invoke/VarForm;Z)V", "(Ljava/lang/Class<*>;JLjava/lang/invoke/VarForm;Z)V", $PROTECTED, $method(VarHandleFloats$FieldInstanceReadOnly, init$, void, $Class*, int64_t, $VarForm*, bool)},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(VarHandleFloats$FieldInstanceReadOnly, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
	{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC, $virtualMethod(VarHandleFloats$FieldInstanceReadOnly, describeConstable, $Optional*)},
	{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)F", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldInstanceReadOnly, get, float, $VarHandle*, Object$*), nullptr, nullptr, _VarHandleFloats$FieldInstanceReadOnly_MethodAnnotations_get4},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)F", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldInstanceReadOnly, getAcquire, float, $VarHandle*, Object$*), nullptr, nullptr, _VarHandleFloats$FieldInstanceReadOnly_MethodAnnotations_getAcquire5},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)F", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldInstanceReadOnly, getOpaque, float, $VarHandle*, Object$*), nullptr, nullptr, _VarHandleFloats$FieldInstanceReadOnly_MethodAnnotations_getOpaque6},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)F", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldInstanceReadOnly, getVolatile, float, $VarHandle*, Object$*), nullptr, nullptr, _VarHandleFloats$FieldInstanceReadOnly_MethodAnnotations_getVolatile7},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleFloats$FieldInstanceReadOnly;", nullptr, $PUBLIC, $virtualMethod(VarHandleFloats$FieldInstanceReadOnly, withInvokeBehavior, VarHandleFloats$FieldInstanceReadOnly*)},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleFloats$FieldInstanceReadOnly;", nullptr, $PUBLIC, $virtualMethod(VarHandleFloats$FieldInstanceReadOnly, withInvokeExactBehavior, VarHandleFloats$FieldInstanceReadOnly*)},
	{}
};

$InnerClassInfo _VarHandleFloats$FieldInstanceReadOnly_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleFloats$FieldInstanceReadOnly", "java.lang.invoke.VarHandleFloats", "FieldInstanceReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleFloats$FieldInstanceReadOnly_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.VarHandleFloats$FieldInstanceReadOnly",
	"java.lang.invoke.VarHandle",
	nullptr,
	_VarHandleFloats$FieldInstanceReadOnly_FieldInfo_,
	_VarHandleFloats$FieldInstanceReadOnly_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleFloats$FieldInstanceReadOnly_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleFloats"
};

$Object* allocate$VarHandleFloats$FieldInstanceReadOnly($Class* clazz) {
	return $of($alloc(VarHandleFloats$FieldInstanceReadOnly));
}

$VarForm* VarHandleFloats$FieldInstanceReadOnly::FORM = nullptr;

void VarHandleFloats$FieldInstanceReadOnly::init$($Class* receiverType, int64_t fieldOffset) {
	VarHandleFloats$FieldInstanceReadOnly::init$(receiverType, fieldOffset, VarHandleFloats$FieldInstanceReadOnly::FORM, false);
}

void VarHandleFloats$FieldInstanceReadOnly::init$($Class* receiverType, int64_t fieldOffset, $VarForm* form, bool exact) {
	$VarHandle::init$(form, exact);
	this->fieldOffset = fieldOffset;
	$set(this, receiverType, receiverType);
}

VarHandleFloats$FieldInstanceReadOnly* VarHandleFloats$FieldInstanceReadOnly::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleFloats$FieldInstanceReadOnly, this->receiverType, this->fieldOffset, this->vform, true);
}

VarHandleFloats$FieldInstanceReadOnly* VarHandleFloats$FieldInstanceReadOnly::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleFloats$FieldInstanceReadOnly, this->receiverType, this->fieldOffset, this->vform, false);
}

$MethodType* VarHandleFloats$FieldInstanceReadOnly::accessModeTypeUncached($VarHandle$AccessType* at) {
	$init($Float);
	return $nc(at)->accessModeType(this->receiverType, $Float::TYPE, $$new($ClassArray, 0));
}

$Optional* VarHandleFloats$FieldInstanceReadOnly::describeConstable() {
	$useLocalCurrentObjectStackCache();
	$var($Optional, receiverTypeRef, $nc(this->receiverType)->describeConstable());
	$init($Float);
	$var($Optional, fieldTypeRef, $nc($Float::TYPE)->describeConstable());
	bool var$0 = !$nc(receiverTypeRef)->isPresent();
	if (var$0 || !$nc(fieldTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($String, name, $nc($($VarHandles::getFieldFromReceiverAndOffset(this->receiverType, this->fieldOffset, $Float::TYPE)))->getName());
	$var($ClassDesc, var$1, $cast($ClassDesc, $nc(receiverTypeRef)->get()));
	$var($String, var$2, name);
	return $Optional::of($($VarHandle$VarHandleDesc::ofField(var$1, var$2, $cast($ClassDesc, $($nc(fieldTypeRef)->get())))));
}

float VarHandleFloats$FieldInstanceReadOnly::get($VarHandle* ob, Object$* holder) {
	$init(VarHandleFloats$FieldInstanceReadOnly);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleFloats$FieldInstanceReadOnly, handle, $cast(VarHandleFloats$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getFloat($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

float VarHandleFloats$FieldInstanceReadOnly::getVolatile($VarHandle* ob, Object$* holder) {
	$init(VarHandleFloats$FieldInstanceReadOnly);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleFloats$FieldInstanceReadOnly, handle, $cast(VarHandleFloats$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getFloatVolatile($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

float VarHandleFloats$FieldInstanceReadOnly::getOpaque($VarHandle* ob, Object$* holder) {
	$init(VarHandleFloats$FieldInstanceReadOnly);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleFloats$FieldInstanceReadOnly, handle, $cast(VarHandleFloats$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getFloatOpaque($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

float VarHandleFloats$FieldInstanceReadOnly::getAcquire($VarHandle* ob, Object$* holder) {
	$init(VarHandleFloats$FieldInstanceReadOnly);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleFloats$FieldInstanceReadOnly, handle, $cast(VarHandleFloats$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getFloatAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

void clinit$VarHandleFloats$FieldInstanceReadOnly($Class* class$) {
	$init($Float);
	$assignStatic(VarHandleFloats$FieldInstanceReadOnly::FORM, $new($VarForm, VarHandleFloats$FieldInstanceReadOnly::class$, $Object::class$, $Float::TYPE, $$new($ClassArray, 0)));
}

VarHandleFloats$FieldInstanceReadOnly::VarHandleFloats$FieldInstanceReadOnly() {
}

$Class* VarHandleFloats$FieldInstanceReadOnly::load$($String* name, bool initialize) {
	$loadClass(VarHandleFloats$FieldInstanceReadOnly, name, initialize, &_VarHandleFloats$FieldInstanceReadOnly_ClassInfo_, clinit$VarHandleFloats$FieldInstanceReadOnly, allocate$VarHandleFloats$FieldInstanceReadOnly);
	return class$;
}

$Class* VarHandleFloats$FieldInstanceReadOnly::class$ = nullptr;

		} // invoke
	} // lang
} // java