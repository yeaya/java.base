#include <java/lang/invoke/VarHandleBytes$FieldInstanceReadOnly.h>
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
#include <java/util/Objects.h>
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
using $Objects = ::java::util::Objects;
using $Optional = ::java::util::Optional;

namespace java {
	namespace lang {
		namespace invoke {

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
	return $nc(at)->accessModeType(this->receiverType, $Byte::TYPE, $$new($ClassArray, 0));
}

$Optional* VarHandleBytes$FieldInstanceReadOnly::describeConstable() {
	$useLocalObjectStack();
	$var($Optional, receiverTypeRef, $nc(this->receiverType)->describeConstable());
	$var($Optional, fieldTypeRef, $nc($Byte::TYPE)->describeConstable());
	bool var$0 = !$nc(receiverTypeRef)->isPresent();
	if (var$0 || !$nc(fieldTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($String, name, $$nc($VarHandles::getFieldFromReceiverAndOffset(this->receiverType, this->fieldOffset, $Byte::TYPE))->getName());
	$var($ClassDesc, var$1, $cast($ClassDesc, receiverTypeRef->get()));
	return $Optional::of($($VarHandle$VarHandleDesc::ofField(var$1, name, $$cast($ClassDesc, $nc(fieldTypeRef)->get()))));
}

int8_t VarHandleBytes$FieldInstanceReadOnly::get($VarHandle* ob, Object$* holder) {
	$init(VarHandleBytes$FieldInstanceReadOnly);
	$useLocalObjectStack();
	$var(VarHandleBytes$FieldInstanceReadOnly, handle, $cast(VarHandleBytes$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getByte($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

int8_t VarHandleBytes$FieldInstanceReadOnly::getVolatile($VarHandle* ob, Object$* holder) {
	$init(VarHandleBytes$FieldInstanceReadOnly);
	$useLocalObjectStack();
	$var(VarHandleBytes$FieldInstanceReadOnly, handle, $cast(VarHandleBytes$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getByteVolatile($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

int8_t VarHandleBytes$FieldInstanceReadOnly::getOpaque($VarHandle* ob, Object$* holder) {
	$init(VarHandleBytes$FieldInstanceReadOnly);
	$useLocalObjectStack();
	$var(VarHandleBytes$FieldInstanceReadOnly, handle, $cast(VarHandleBytes$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getByteOpaque($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

int8_t VarHandleBytes$FieldInstanceReadOnly::getAcquire($VarHandle* ob, Object$* holder) {
	$init(VarHandleBytes$FieldInstanceReadOnly);
	$useLocalObjectStack();
	$var(VarHandleBytes$FieldInstanceReadOnly, handle, $cast(VarHandleBytes$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getByteAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

void VarHandleBytes$FieldInstanceReadOnly::clinit$($Class* clazz) {
	$assignStatic(VarHandleBytes$FieldInstanceReadOnly::FORM, $new($VarForm, VarHandleBytes$FieldInstanceReadOnly::class$, $Object::class$, $Byte::TYPE, $$new($ClassArray, 0)));
}

VarHandleBytes$FieldInstanceReadOnly::VarHandleBytes$FieldInstanceReadOnly() {
}

$Class* VarHandleBytes$FieldInstanceReadOnly::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fieldOffset", "J", nullptr, $FINAL, $field(VarHandleBytes$FieldInstanceReadOnly, fieldOffset)},
		{"receiverType", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(VarHandleBytes$FieldInstanceReadOnly, receiverType)},
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleBytes$FieldInstanceReadOnly, FORM)},
		{}
	};
	$CompoundAttribute getmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;J)V", "(Ljava/lang/Class<*>;J)V", 0, $method(VarHandleBytes$FieldInstanceReadOnly, init$, void, $Class*, int64_t)},
		{"<init>", "(Ljava/lang/Class;JLjava/lang/invoke/VarForm;Z)V", "(Ljava/lang/Class<*>;JLjava/lang/invoke/VarForm;Z)V", $PROTECTED, $method(VarHandleBytes$FieldInstanceReadOnly, init$, void, $Class*, int64_t, $VarForm*, bool)},
		{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(VarHandleBytes$FieldInstanceReadOnly, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
		{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC, $virtualMethod(VarHandleBytes$FieldInstanceReadOnly, describeConstable, $Optional*)},
		{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldInstanceReadOnly, get, int8_t, $VarHandle*, Object$*), nullptr, nullptr, getmethodAnnotations$$},
		{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldInstanceReadOnly, getAcquire, int8_t, $VarHandle*, Object$*), nullptr, nullptr, getAcquiremethodAnnotations$$},
		{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldInstanceReadOnly, getOpaque, int8_t, $VarHandle*, Object$*), nullptr, nullptr, getOpaquemethodAnnotations$$},
		{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldInstanceReadOnly, getVolatile, int8_t, $VarHandle*, Object$*), nullptr, nullptr, getVolatilemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleBytes$FieldInstanceReadOnly;", nullptr, $PUBLIC, $virtualMethod(VarHandleBytes$FieldInstanceReadOnly, withInvokeBehavior, VarHandleBytes$FieldInstanceReadOnly*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleBytes$FieldInstanceReadOnly;", nullptr, $PUBLIC, $virtualMethod(VarHandleBytes$FieldInstanceReadOnly, withInvokeExactBehavior, VarHandleBytes$FieldInstanceReadOnly*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleBytes$FieldInstanceReadOnly", "java.lang.invoke.VarHandleBytes", "FieldInstanceReadOnly", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.invoke.VarHandleBytes$FieldInstanceReadOnly",
		"java.lang.invoke.VarHandle",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.VarHandleBytes"
	};
	$loadClass(VarHandleBytes$FieldInstanceReadOnly, name, initialize, &classInfo$$, VarHandleBytes$FieldInstanceReadOnly::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleBytes$FieldInstanceReadOnly);
	});
	return class$;
}

$Class* VarHandleBytes$FieldInstanceReadOnly::class$ = nullptr;

		} // invoke
	} // lang
} // java