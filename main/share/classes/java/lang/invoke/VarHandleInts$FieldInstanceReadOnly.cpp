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
using $Objects = ::java::util::Objects;
using $Optional = ::java::util::Optional;

namespace java {
	namespace lang {
		namespace invoke {

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
	return $nc(at)->accessModeType(this->receiverType, $Integer::TYPE, $$new($ClassArray, 0));
}

$Optional* VarHandleInts$FieldInstanceReadOnly::describeConstable() {
	$useLocalObjectStack();
	$var($Optional, receiverTypeRef, $nc(this->receiverType)->describeConstable());
	$var($Optional, fieldTypeRef, $nc($Integer::TYPE)->describeConstable());
	bool var$0 = !$nc(receiverTypeRef)->isPresent();
	if (var$0 || !$nc(fieldTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($String, name, $$nc($VarHandles::getFieldFromReceiverAndOffset(this->receiverType, this->fieldOffset, $Integer::TYPE))->getName());
	$var($ClassDesc, var$1, $cast($ClassDesc, receiverTypeRef->get()));
	return $Optional::of($($VarHandle$VarHandleDesc::ofField(var$1, name, $$cast($ClassDesc, $nc(fieldTypeRef)->get()))));
}

int32_t VarHandleInts$FieldInstanceReadOnly::get($VarHandle* ob, Object$* holder) {
	$init(VarHandleInts$FieldInstanceReadOnly);
	$useLocalObjectStack();
	$var(VarHandleInts$FieldInstanceReadOnly, handle, $cast(VarHandleInts$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getInt($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

int32_t VarHandleInts$FieldInstanceReadOnly::getVolatile($VarHandle* ob, Object$* holder) {
	$init(VarHandleInts$FieldInstanceReadOnly);
	$useLocalObjectStack();
	$var(VarHandleInts$FieldInstanceReadOnly, handle, $cast(VarHandleInts$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getIntVolatile($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

int32_t VarHandleInts$FieldInstanceReadOnly::getOpaque($VarHandle* ob, Object$* holder) {
	$init(VarHandleInts$FieldInstanceReadOnly);
	$useLocalObjectStack();
	$var(VarHandleInts$FieldInstanceReadOnly, handle, $cast(VarHandleInts$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getIntOpaque($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

int32_t VarHandleInts$FieldInstanceReadOnly::getAcquire($VarHandle* ob, Object$* holder) {
	$init(VarHandleInts$FieldInstanceReadOnly);
	$useLocalObjectStack();
	$var(VarHandleInts$FieldInstanceReadOnly, handle, $cast(VarHandleInts$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getIntAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

void VarHandleInts$FieldInstanceReadOnly::clinit$($Class* clazz) {
	$assignStatic(VarHandleInts$FieldInstanceReadOnly::FORM, $new($VarForm, VarHandleInts$FieldInstanceReadOnly::class$, $Object::class$, $Integer::TYPE, $$new($ClassArray, 0)));
}

VarHandleInts$FieldInstanceReadOnly::VarHandleInts$FieldInstanceReadOnly() {
}

$Class* VarHandleInts$FieldInstanceReadOnly::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fieldOffset", "J", nullptr, $FINAL, $field(VarHandleInts$FieldInstanceReadOnly, fieldOffset)},
		{"receiverType", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(VarHandleInts$FieldInstanceReadOnly, receiverType)},
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleInts$FieldInstanceReadOnly, FORM)},
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
		{"<init>", "(Ljava/lang/Class;J)V", "(Ljava/lang/Class<*>;J)V", 0, $method(VarHandleInts$FieldInstanceReadOnly, init$, void, $Class*, int64_t)},
		{"<init>", "(Ljava/lang/Class;JLjava/lang/invoke/VarForm;Z)V", "(Ljava/lang/Class<*>;JLjava/lang/invoke/VarForm;Z)V", $PROTECTED, $method(VarHandleInts$FieldInstanceReadOnly, init$, void, $Class*, int64_t, $VarForm*, bool)},
		{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(VarHandleInts$FieldInstanceReadOnly, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
		{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC, $virtualMethod(VarHandleInts$FieldInstanceReadOnly, describeConstable, $Optional*)},
		{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)I", nullptr, $STATIC, $staticMethod(VarHandleInts$FieldInstanceReadOnly, get, int32_t, $VarHandle*, Object$*), nullptr, nullptr, getmethodAnnotations$$},
		{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)I", nullptr, $STATIC, $staticMethod(VarHandleInts$FieldInstanceReadOnly, getAcquire, int32_t, $VarHandle*, Object$*), nullptr, nullptr, getAcquiremethodAnnotations$$},
		{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)I", nullptr, $STATIC, $staticMethod(VarHandleInts$FieldInstanceReadOnly, getOpaque, int32_t, $VarHandle*, Object$*), nullptr, nullptr, getOpaquemethodAnnotations$$},
		{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)I", nullptr, $STATIC, $staticMethod(VarHandleInts$FieldInstanceReadOnly, getVolatile, int32_t, $VarHandle*, Object$*), nullptr, nullptr, getVolatilemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleInts$FieldInstanceReadOnly;", nullptr, $PUBLIC, $virtualMethod(VarHandleInts$FieldInstanceReadOnly, withInvokeBehavior, VarHandleInts$FieldInstanceReadOnly*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleInts$FieldInstanceReadOnly;", nullptr, $PUBLIC, $virtualMethod(VarHandleInts$FieldInstanceReadOnly, withInvokeExactBehavior, VarHandleInts$FieldInstanceReadOnly*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleInts$FieldInstanceReadOnly", "java.lang.invoke.VarHandleInts", "FieldInstanceReadOnly", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.invoke.VarHandleInts$FieldInstanceReadOnly",
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
		"java.lang.invoke.VarHandleInts"
	};
	$loadClass(VarHandleInts$FieldInstanceReadOnly, name, initialize, &classInfo$$, VarHandleInts$FieldInstanceReadOnly::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleInts$FieldInstanceReadOnly);
	});
	return class$;
}

$Class* VarHandleInts$FieldInstanceReadOnly::class$ = nullptr;

		} // invoke
	} // lang
} // java