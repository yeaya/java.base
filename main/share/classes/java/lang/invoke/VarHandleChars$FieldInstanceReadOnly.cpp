#include <java/lang/invoke/VarHandleChars$FieldInstanceReadOnly.h>
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
#include <java/util/Objects.h>
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
using $Objects = ::java::util::Objects;
using $Optional = ::java::util::Optional;

namespace java {
	namespace lang {
		namespace invoke {

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
	return $nc(at)->accessModeType(this->receiverType, $Character::TYPE, $$new($ClassArray, 0));
}

$Optional* VarHandleChars$FieldInstanceReadOnly::describeConstable() {
	$useLocalObjectStack();
	$var($Optional, receiverTypeRef, $nc(this->receiverType)->describeConstable());
	$var($Optional, fieldTypeRef, $nc($Character::TYPE)->describeConstable());
	bool var$0 = !$nc(receiverTypeRef)->isPresent();
	if (var$0 || !$nc(fieldTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($String, name, $$nc($VarHandles::getFieldFromReceiverAndOffset(this->receiverType, this->fieldOffset, $Character::TYPE))->getName());
	$var($ClassDesc, var$1, $cast($ClassDesc, receiverTypeRef->get()));
	return $Optional::of($($VarHandle$VarHandleDesc::ofField(var$1, name, $$cast($ClassDesc, $nc(fieldTypeRef)->get()))));
}

char16_t VarHandleChars$FieldInstanceReadOnly::get($VarHandle* ob, Object$* holder) {
	$init(VarHandleChars$FieldInstanceReadOnly);
	$useLocalObjectStack();
	$var(VarHandleChars$FieldInstanceReadOnly, handle, $cast(VarHandleChars$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getChar($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

char16_t VarHandleChars$FieldInstanceReadOnly::getVolatile($VarHandle* ob, Object$* holder) {
	$init(VarHandleChars$FieldInstanceReadOnly);
	$useLocalObjectStack();
	$var(VarHandleChars$FieldInstanceReadOnly, handle, $cast(VarHandleChars$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getCharVolatile($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

char16_t VarHandleChars$FieldInstanceReadOnly::getOpaque($VarHandle* ob, Object$* holder) {
	$init(VarHandleChars$FieldInstanceReadOnly);
	$useLocalObjectStack();
	$var(VarHandleChars$FieldInstanceReadOnly, handle, $cast(VarHandleChars$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getCharOpaque($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

char16_t VarHandleChars$FieldInstanceReadOnly::getAcquire($VarHandle* ob, Object$* holder) {
	$init(VarHandleChars$FieldInstanceReadOnly);
	$useLocalObjectStack();
	$var(VarHandleChars$FieldInstanceReadOnly, handle, $cast(VarHandleChars$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getCharAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

void VarHandleChars$FieldInstanceReadOnly::clinit$($Class* clazz) {
	$assignStatic(VarHandleChars$FieldInstanceReadOnly::FORM, $new($VarForm, VarHandleChars$FieldInstanceReadOnly::class$, $Object::class$, $Character::TYPE, $$new($ClassArray, 0)));
}

VarHandleChars$FieldInstanceReadOnly::VarHandleChars$FieldInstanceReadOnly() {
}

$Class* VarHandleChars$FieldInstanceReadOnly::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fieldOffset", "J", nullptr, $FINAL, $field(VarHandleChars$FieldInstanceReadOnly, fieldOffset)},
		{"receiverType", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(VarHandleChars$FieldInstanceReadOnly, receiverType)},
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleChars$FieldInstanceReadOnly, FORM)},
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
		{"<init>", "(Ljava/lang/Class;J)V", "(Ljava/lang/Class<*>;J)V", 0, $method(VarHandleChars$FieldInstanceReadOnly, init$, void, $Class*, int64_t)},
		{"<init>", "(Ljava/lang/Class;JLjava/lang/invoke/VarForm;Z)V", "(Ljava/lang/Class<*>;JLjava/lang/invoke/VarForm;Z)V", $PROTECTED, $method(VarHandleChars$FieldInstanceReadOnly, init$, void, $Class*, int64_t, $VarForm*, bool)},
		{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(VarHandleChars$FieldInstanceReadOnly, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
		{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC, $virtualMethod(VarHandleChars$FieldInstanceReadOnly, describeConstable, $Optional*)},
		{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadOnly, get, char16_t, $VarHandle*, Object$*), nullptr, nullptr, getmethodAnnotations$$},
		{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadOnly, getAcquire, char16_t, $VarHandle*, Object$*), nullptr, nullptr, getAcquiremethodAnnotations$$},
		{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadOnly, getOpaque, char16_t, $VarHandle*, Object$*), nullptr, nullptr, getOpaquemethodAnnotations$$},
		{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadOnly, getVolatile, char16_t, $VarHandle*, Object$*), nullptr, nullptr, getVolatilemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleChars$FieldInstanceReadOnly;", nullptr, $PUBLIC, $virtualMethod(VarHandleChars$FieldInstanceReadOnly, withInvokeBehavior, VarHandleChars$FieldInstanceReadOnly*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleChars$FieldInstanceReadOnly;", nullptr, $PUBLIC, $virtualMethod(VarHandleChars$FieldInstanceReadOnly, withInvokeExactBehavior, VarHandleChars$FieldInstanceReadOnly*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleChars$FieldInstanceReadOnly", "java.lang.invoke.VarHandleChars", "FieldInstanceReadOnly", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.invoke.VarHandleChars$FieldInstanceReadOnly",
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
		"java.lang.invoke.VarHandleChars"
	};
	$loadClass(VarHandleChars$FieldInstanceReadOnly, name, initialize, &classInfo$$, VarHandleChars$FieldInstanceReadOnly::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleChars$FieldInstanceReadOnly);
	});
	return class$;
}

$Class* VarHandleChars$FieldInstanceReadOnly::class$ = nullptr;

		} // invoke
	} // lang
} // java