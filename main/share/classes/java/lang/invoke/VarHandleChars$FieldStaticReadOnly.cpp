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

namespace java {
	namespace lang {
		namespace invoke {

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
	$useLocalObjectStack();
	$var($Optional, fieldTypeRef, $nc($Character::TYPE)->describeConstable());
	if (!$nc(fieldTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($Field, staticField, $VarHandles::getStaticFieldFromBaseAndOffset(this->base, this->fieldOffset, $Character::TYPE));
	$var($Optional, receiverTypeRef, $nc($nc(staticField)->getDeclaringClass())->describeConstable());
	if (!$nc(receiverTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($ClassDesc, var$0, $cast($ClassDesc, receiverTypeRef->get()));
	$var($String, var$1, staticField->getName());
	return $Optional::of($($VarHandle$VarHandleDesc::ofStaticField(var$0, var$1, $$cast($ClassDesc, fieldTypeRef->get()))));
}

$MethodType* VarHandleChars$FieldStaticReadOnly::accessModeTypeUncached($VarHandle$AccessType* at) {
	return $nc(at)->accessModeType(nullptr, $Character::TYPE, $$new($ClassArray, 0));
}

char16_t VarHandleChars$FieldStaticReadOnly::get($VarHandle* ob) {
	$init(VarHandleChars$FieldStaticReadOnly);
	$var(VarHandleChars$FieldStaticReadOnly, handle, $cast(VarHandleChars$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getChar($nc(handle)->base, $nc(handle)->fieldOffset);
}

char16_t VarHandleChars$FieldStaticReadOnly::getVolatile($VarHandle* ob) {
	$init(VarHandleChars$FieldStaticReadOnly);
	$var(VarHandleChars$FieldStaticReadOnly, handle, $cast(VarHandleChars$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getCharVolatile($nc(handle)->base, $nc(handle)->fieldOffset);
}

char16_t VarHandleChars$FieldStaticReadOnly::getOpaque($VarHandle* ob) {
	$init(VarHandleChars$FieldStaticReadOnly);
	$var(VarHandleChars$FieldStaticReadOnly, handle, $cast(VarHandleChars$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getCharOpaque($nc(handle)->base, $nc(handle)->fieldOffset);
}

char16_t VarHandleChars$FieldStaticReadOnly::getAcquire($VarHandle* ob) {
	$init(VarHandleChars$FieldStaticReadOnly);
	$var(VarHandleChars$FieldStaticReadOnly, handle, $cast(VarHandleChars$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getCharAcquire($nc(handle)->base, $nc(handle)->fieldOffset);
}

void VarHandleChars$FieldStaticReadOnly::clinit$($Class* clazz) {
	$assignStatic(VarHandleChars$FieldStaticReadOnly::FORM, $new($VarForm, VarHandleChars$FieldStaticReadOnly::class$, nullptr, $Character::TYPE, $$new($ClassArray, 0)));
}

VarHandleChars$FieldStaticReadOnly::VarHandleChars$FieldStaticReadOnly() {
}

$Class* VarHandleChars$FieldStaticReadOnly::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"base", "Ljava/lang/Object;", nullptr, $FINAL, $field(VarHandleChars$FieldStaticReadOnly, base)},
		{"fieldOffset", "J", nullptr, $FINAL, $field(VarHandleChars$FieldStaticReadOnly, fieldOffset)},
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleChars$FieldStaticReadOnly, FORM)},
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
		{"<init>", "(Ljava/lang/Object;J)V", nullptr, 0, $method(VarHandleChars$FieldStaticReadOnly, init$, void, Object$*, int64_t)},
		{"<init>", "(Ljava/lang/Object;JLjava/lang/invoke/VarForm;Z)V", nullptr, $PROTECTED, $method(VarHandleChars$FieldStaticReadOnly, init$, void, Object$*, int64_t, $VarForm*, bool)},
		{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(VarHandleChars$FieldStaticReadOnly, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
		{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC, $virtualMethod(VarHandleChars$FieldStaticReadOnly, describeConstable, $Optional*)},
		{"get", "(Ljava/lang/invoke/VarHandle;)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldStaticReadOnly, get, char16_t, $VarHandle*), nullptr, nullptr, getmethodAnnotations$$},
		{"getAcquire", "(Ljava/lang/invoke/VarHandle;)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldStaticReadOnly, getAcquire, char16_t, $VarHandle*), nullptr, nullptr, getAcquiremethodAnnotations$$},
		{"getOpaque", "(Ljava/lang/invoke/VarHandle;)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldStaticReadOnly, getOpaque, char16_t, $VarHandle*), nullptr, nullptr, getOpaquemethodAnnotations$$},
		{"getVolatile", "(Ljava/lang/invoke/VarHandle;)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldStaticReadOnly, getVolatile, char16_t, $VarHandle*), nullptr, nullptr, getVolatilemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleChars$FieldStaticReadOnly;", nullptr, $PUBLIC, $virtualMethod(VarHandleChars$FieldStaticReadOnly, withInvokeBehavior, VarHandleChars$FieldStaticReadOnly*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleChars$FieldStaticReadOnly;", nullptr, $PUBLIC, $virtualMethod(VarHandleChars$FieldStaticReadOnly, withInvokeExactBehavior, VarHandleChars$FieldStaticReadOnly*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleChars$FieldStaticReadOnly", "java.lang.invoke.VarHandleChars", "FieldStaticReadOnly", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.invoke.VarHandleChars$FieldStaticReadOnly",
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
	$loadClass(VarHandleChars$FieldStaticReadOnly, name, initialize, &classInfo$$, VarHandleChars$FieldStaticReadOnly::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleChars$FieldStaticReadOnly);
	});
	return class$;
}

$Class* VarHandleChars$FieldStaticReadOnly::class$ = nullptr;

		} // invoke
	} // lang
} // java