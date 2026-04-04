#include <java/lang/invoke/VarHandleLongs$FieldInstanceReadOnly.h>
#include <java/lang/constant/ClassDesc.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle$VarHandleDesc.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleLongs.h>
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
using $Long = ::java::lang::Long;
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

$VarForm* VarHandleLongs$FieldInstanceReadOnly::FORM = nullptr;

void VarHandleLongs$FieldInstanceReadOnly::init$($Class* receiverType, int64_t fieldOffset) {
	VarHandleLongs$FieldInstanceReadOnly::init$(receiverType, fieldOffset, VarHandleLongs$FieldInstanceReadOnly::FORM, false);
}

void VarHandleLongs$FieldInstanceReadOnly::init$($Class* receiverType, int64_t fieldOffset, $VarForm* form, bool exact) {
	$VarHandle::init$(form, exact);
	this->fieldOffset = fieldOffset;
	$set(this, receiverType, receiverType);
}

VarHandleLongs$FieldInstanceReadOnly* VarHandleLongs$FieldInstanceReadOnly::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleLongs$FieldInstanceReadOnly, this->receiverType, this->fieldOffset, this->vform, true);
}

VarHandleLongs$FieldInstanceReadOnly* VarHandleLongs$FieldInstanceReadOnly::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleLongs$FieldInstanceReadOnly, this->receiverType, this->fieldOffset, this->vform, false);
}

$MethodType* VarHandleLongs$FieldInstanceReadOnly::accessModeTypeUncached($VarHandle$AccessType* at) {
	return $nc(at)->accessModeType(this->receiverType, $Long::TYPE, $$new($ClassArray, 0));
}

$Optional* VarHandleLongs$FieldInstanceReadOnly::describeConstable() {
	$useLocalObjectStack();
	$var($Optional, receiverTypeRef, $nc(this->receiverType)->describeConstable());
	$var($Optional, fieldTypeRef, $nc($Long::TYPE)->describeConstable());
	bool var$0 = !$nc(receiverTypeRef)->isPresent();
	if (var$0 || !$nc(fieldTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($String, name, $$nc($VarHandles::getFieldFromReceiverAndOffset(this->receiverType, this->fieldOffset, $Long::TYPE))->getName());
	$var($ClassDesc, var$1, $cast($ClassDesc, receiverTypeRef->get()));
	return $Optional::of($($VarHandle$VarHandleDesc::ofField(var$1, name, $$cast($ClassDesc, $nc(fieldTypeRef)->get()))));
}

int64_t VarHandleLongs$FieldInstanceReadOnly::get($VarHandle* ob, Object$* holder) {
	$init(VarHandleLongs$FieldInstanceReadOnly);
	$useLocalObjectStack();
	$var(VarHandleLongs$FieldInstanceReadOnly, handle, $cast(VarHandleLongs$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getLong($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

int64_t VarHandleLongs$FieldInstanceReadOnly::getVolatile($VarHandle* ob, Object$* holder) {
	$init(VarHandleLongs$FieldInstanceReadOnly);
	$useLocalObjectStack();
	$var(VarHandleLongs$FieldInstanceReadOnly, handle, $cast(VarHandleLongs$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getLongVolatile($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

int64_t VarHandleLongs$FieldInstanceReadOnly::getOpaque($VarHandle* ob, Object$* holder) {
	$init(VarHandleLongs$FieldInstanceReadOnly);
	$useLocalObjectStack();
	$var(VarHandleLongs$FieldInstanceReadOnly, handle, $cast(VarHandleLongs$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getLongOpaque($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

int64_t VarHandleLongs$FieldInstanceReadOnly::getAcquire($VarHandle* ob, Object$* holder) {
	$init(VarHandleLongs$FieldInstanceReadOnly);
	$useLocalObjectStack();
	$var(VarHandleLongs$FieldInstanceReadOnly, handle, $cast(VarHandleLongs$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getLongAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

void VarHandleLongs$FieldInstanceReadOnly::clinit$($Class* clazz) {
	$assignStatic(VarHandleLongs$FieldInstanceReadOnly::FORM, $new($VarForm, VarHandleLongs$FieldInstanceReadOnly::class$, $Object::class$, $Long::TYPE, $$new($ClassArray, 0)));
}

VarHandleLongs$FieldInstanceReadOnly::VarHandleLongs$FieldInstanceReadOnly() {
}

$Class* VarHandleLongs$FieldInstanceReadOnly::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fieldOffset", "J", nullptr, $FINAL, $field(VarHandleLongs$FieldInstanceReadOnly, fieldOffset)},
		{"receiverType", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(VarHandleLongs$FieldInstanceReadOnly, receiverType)},
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleLongs$FieldInstanceReadOnly, FORM)},
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
		{"<init>", "(Ljava/lang/Class;J)V", "(Ljava/lang/Class<*>;J)V", 0, $method(VarHandleLongs$FieldInstanceReadOnly, init$, void, $Class*, int64_t)},
		{"<init>", "(Ljava/lang/Class;JLjava/lang/invoke/VarForm;Z)V", "(Ljava/lang/Class<*>;JLjava/lang/invoke/VarForm;Z)V", $PROTECTED, $method(VarHandleLongs$FieldInstanceReadOnly, init$, void, $Class*, int64_t, $VarForm*, bool)},
		{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(VarHandleLongs$FieldInstanceReadOnly, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
		{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC, $virtualMethod(VarHandleLongs$FieldInstanceReadOnly, describeConstable, $Optional*)},
		{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldInstanceReadOnly, get, int64_t, $VarHandle*, Object$*), nullptr, nullptr, getmethodAnnotations$$},
		{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldInstanceReadOnly, getAcquire, int64_t, $VarHandle*, Object$*), nullptr, nullptr, getAcquiremethodAnnotations$$},
		{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldInstanceReadOnly, getOpaque, int64_t, $VarHandle*, Object$*), nullptr, nullptr, getOpaquemethodAnnotations$$},
		{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldInstanceReadOnly, getVolatile, int64_t, $VarHandle*, Object$*), nullptr, nullptr, getVolatilemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleLongs$FieldInstanceReadOnly;", nullptr, $PUBLIC, $virtualMethod(VarHandleLongs$FieldInstanceReadOnly, withInvokeBehavior, VarHandleLongs$FieldInstanceReadOnly*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleLongs$FieldInstanceReadOnly;", nullptr, $PUBLIC, $virtualMethod(VarHandleLongs$FieldInstanceReadOnly, withInvokeExactBehavior, VarHandleLongs$FieldInstanceReadOnly*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleLongs$FieldInstanceReadOnly", "java.lang.invoke.VarHandleLongs", "FieldInstanceReadOnly", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.invoke.VarHandleLongs$FieldInstanceReadOnly",
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
		"java.lang.invoke.VarHandleLongs"
	};
	$loadClass(VarHandleLongs$FieldInstanceReadOnly, name, initialize, &classInfo$$, VarHandleLongs$FieldInstanceReadOnly::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleLongs$FieldInstanceReadOnly);
	});
	return class$;
}

$Class* VarHandleLongs$FieldInstanceReadOnly::class$ = nullptr;

		} // invoke
	} // lang
} // java