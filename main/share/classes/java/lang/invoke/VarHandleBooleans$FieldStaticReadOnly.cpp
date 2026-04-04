#include <java/lang/invoke/VarHandleBooleans$FieldStaticReadOnly.h>
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
using $Optional = ::java::util::Optional;

namespace java {
	namespace lang {
		namespace invoke {

$VarForm* VarHandleBooleans$FieldStaticReadOnly::FORM = nullptr;

void VarHandleBooleans$FieldStaticReadOnly::init$(Object$* base, int64_t fieldOffset) {
	VarHandleBooleans$FieldStaticReadOnly::init$(base, fieldOffset, VarHandleBooleans$FieldStaticReadOnly::FORM, false);
}

void VarHandleBooleans$FieldStaticReadOnly::init$(Object$* base, int64_t fieldOffset, $VarForm* form, bool exact) {
	$VarHandle::init$(form, exact);
	$set(this, base, base);
	this->fieldOffset = fieldOffset;
}

VarHandleBooleans$FieldStaticReadOnly* VarHandleBooleans$FieldStaticReadOnly::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleBooleans$FieldStaticReadOnly, this->base, this->fieldOffset, this->vform, true);
}

VarHandleBooleans$FieldStaticReadOnly* VarHandleBooleans$FieldStaticReadOnly::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleBooleans$FieldStaticReadOnly, this->base, this->fieldOffset, this->vform, false);
}

$Optional* VarHandleBooleans$FieldStaticReadOnly::describeConstable() {
	$useLocalObjectStack();
	$var($Optional, fieldTypeRef, $nc($Boolean::TYPE)->describeConstable());
	if (!$nc(fieldTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($Field, staticField, $VarHandles::getStaticFieldFromBaseAndOffset(this->base, this->fieldOffset, $Boolean::TYPE));
	$var($Optional, receiverTypeRef, $nc($nc(staticField)->getDeclaringClass())->describeConstable());
	if (!$nc(receiverTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($ClassDesc, var$0, $cast($ClassDesc, receiverTypeRef->get()));
	$var($String, var$1, staticField->getName());
	return $Optional::of($($VarHandle$VarHandleDesc::ofStaticField(var$0, var$1, $$cast($ClassDesc, fieldTypeRef->get()))));
}

$MethodType* VarHandleBooleans$FieldStaticReadOnly::accessModeTypeUncached($VarHandle$AccessType* at) {
	return $nc(at)->accessModeType(nullptr, $Boolean::TYPE, $$new($ClassArray, 0));
}

bool VarHandleBooleans$FieldStaticReadOnly::get($VarHandle* ob) {
	$init(VarHandleBooleans$FieldStaticReadOnly);
	$var(VarHandleBooleans$FieldStaticReadOnly, handle, $cast(VarHandleBooleans$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getBoolean($nc(handle)->base, $nc(handle)->fieldOffset);
}

bool VarHandleBooleans$FieldStaticReadOnly::getVolatile($VarHandle* ob) {
	$init(VarHandleBooleans$FieldStaticReadOnly);
	$var(VarHandleBooleans$FieldStaticReadOnly, handle, $cast(VarHandleBooleans$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getBooleanVolatile($nc(handle)->base, $nc(handle)->fieldOffset);
}

bool VarHandleBooleans$FieldStaticReadOnly::getOpaque($VarHandle* ob) {
	$init(VarHandleBooleans$FieldStaticReadOnly);
	$var(VarHandleBooleans$FieldStaticReadOnly, handle, $cast(VarHandleBooleans$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getBooleanOpaque($nc(handle)->base, $nc(handle)->fieldOffset);
}

bool VarHandleBooleans$FieldStaticReadOnly::getAcquire($VarHandle* ob) {
	$init(VarHandleBooleans$FieldStaticReadOnly);
	$var(VarHandleBooleans$FieldStaticReadOnly, handle, $cast(VarHandleBooleans$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getBooleanAcquire($nc(handle)->base, $nc(handle)->fieldOffset);
}

void VarHandleBooleans$FieldStaticReadOnly::clinit$($Class* clazz) {
	$assignStatic(VarHandleBooleans$FieldStaticReadOnly::FORM, $new($VarForm, VarHandleBooleans$FieldStaticReadOnly::class$, nullptr, $Boolean::TYPE, $$new($ClassArray, 0)));
}

VarHandleBooleans$FieldStaticReadOnly::VarHandleBooleans$FieldStaticReadOnly() {
}

$Class* VarHandleBooleans$FieldStaticReadOnly::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"base", "Ljava/lang/Object;", nullptr, $FINAL, $field(VarHandleBooleans$FieldStaticReadOnly, base)},
		{"fieldOffset", "J", nullptr, $FINAL, $field(VarHandleBooleans$FieldStaticReadOnly, fieldOffset)},
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleBooleans$FieldStaticReadOnly, FORM)},
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
		{"<init>", "(Ljava/lang/Object;J)V", nullptr, 0, $method(VarHandleBooleans$FieldStaticReadOnly, init$, void, Object$*, int64_t)},
		{"<init>", "(Ljava/lang/Object;JLjava/lang/invoke/VarForm;Z)V", nullptr, $PROTECTED, $method(VarHandleBooleans$FieldStaticReadOnly, init$, void, Object$*, int64_t, $VarForm*, bool)},
		{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(VarHandleBooleans$FieldStaticReadOnly, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
		{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC, $virtualMethod(VarHandleBooleans$FieldStaticReadOnly, describeConstable, $Optional*)},
		{"get", "(Ljava/lang/invoke/VarHandle;)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldStaticReadOnly, get, bool, $VarHandle*), nullptr, nullptr, getmethodAnnotations$$},
		{"getAcquire", "(Ljava/lang/invoke/VarHandle;)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldStaticReadOnly, getAcquire, bool, $VarHandle*), nullptr, nullptr, getAcquiremethodAnnotations$$},
		{"getOpaque", "(Ljava/lang/invoke/VarHandle;)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldStaticReadOnly, getOpaque, bool, $VarHandle*), nullptr, nullptr, getOpaquemethodAnnotations$$},
		{"getVolatile", "(Ljava/lang/invoke/VarHandle;)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldStaticReadOnly, getVolatile, bool, $VarHandle*), nullptr, nullptr, getVolatilemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleBooleans$FieldStaticReadOnly;", nullptr, $PUBLIC, $virtualMethod(VarHandleBooleans$FieldStaticReadOnly, withInvokeBehavior, VarHandleBooleans$FieldStaticReadOnly*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleBooleans$FieldStaticReadOnly;", nullptr, $PUBLIC, $virtualMethod(VarHandleBooleans$FieldStaticReadOnly, withInvokeExactBehavior, VarHandleBooleans$FieldStaticReadOnly*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleBooleans$FieldStaticReadOnly", "java.lang.invoke.VarHandleBooleans", "FieldStaticReadOnly", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.invoke.VarHandleBooleans$FieldStaticReadOnly",
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
		"java.lang.invoke.VarHandleBooleans"
	};
	$loadClass(VarHandleBooleans$FieldStaticReadOnly, name, initialize, &classInfo$$, VarHandleBooleans$FieldStaticReadOnly::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleBooleans$FieldStaticReadOnly);
	});
	return class$;
}

$Class* VarHandleBooleans$FieldStaticReadOnly::class$ = nullptr;

		} // invoke
	} // lang
} // java