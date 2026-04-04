#include <java/lang/invoke/VarHandleFloats$FieldStaticReadOnly.h>
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
using $Optional = ::java::util::Optional;

namespace java {
	namespace lang {
		namespace invoke {

$VarForm* VarHandleFloats$FieldStaticReadOnly::FORM = nullptr;

void VarHandleFloats$FieldStaticReadOnly::init$(Object$* base, int64_t fieldOffset) {
	VarHandleFloats$FieldStaticReadOnly::init$(base, fieldOffset, VarHandleFloats$FieldStaticReadOnly::FORM, false);
}

void VarHandleFloats$FieldStaticReadOnly::init$(Object$* base, int64_t fieldOffset, $VarForm* form, bool exact) {
	$VarHandle::init$(form, exact);
	$set(this, base, base);
	this->fieldOffset = fieldOffset;
}

VarHandleFloats$FieldStaticReadOnly* VarHandleFloats$FieldStaticReadOnly::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleFloats$FieldStaticReadOnly, this->base, this->fieldOffset, this->vform, true);
}

VarHandleFloats$FieldStaticReadOnly* VarHandleFloats$FieldStaticReadOnly::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleFloats$FieldStaticReadOnly, this->base, this->fieldOffset, this->vform, false);
}

$Optional* VarHandleFloats$FieldStaticReadOnly::describeConstable() {
	$useLocalObjectStack();
	$var($Optional, fieldTypeRef, $nc($Float::TYPE)->describeConstable());
	if (!$nc(fieldTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($Field, staticField, $VarHandles::getStaticFieldFromBaseAndOffset(this->base, this->fieldOffset, $Float::TYPE));
	$var($Optional, receiverTypeRef, $nc($nc(staticField)->getDeclaringClass())->describeConstable());
	if (!$nc(receiverTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($ClassDesc, var$0, $cast($ClassDesc, receiverTypeRef->get()));
	$var($String, var$1, staticField->getName());
	return $Optional::of($($VarHandle$VarHandleDesc::ofStaticField(var$0, var$1, $$cast($ClassDesc, fieldTypeRef->get()))));
}

$MethodType* VarHandleFloats$FieldStaticReadOnly::accessModeTypeUncached($VarHandle$AccessType* at) {
	return $nc(at)->accessModeType(nullptr, $Float::TYPE, $$new($ClassArray, 0));
}

float VarHandleFloats$FieldStaticReadOnly::get($VarHandle* ob) {
	$init(VarHandleFloats$FieldStaticReadOnly);
	$var(VarHandleFloats$FieldStaticReadOnly, handle, $cast(VarHandleFloats$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getFloat($nc(handle)->base, $nc(handle)->fieldOffset);
}

float VarHandleFloats$FieldStaticReadOnly::getVolatile($VarHandle* ob) {
	$init(VarHandleFloats$FieldStaticReadOnly);
	$var(VarHandleFloats$FieldStaticReadOnly, handle, $cast(VarHandleFloats$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getFloatVolatile($nc(handle)->base, $nc(handle)->fieldOffset);
}

float VarHandleFloats$FieldStaticReadOnly::getOpaque($VarHandle* ob) {
	$init(VarHandleFloats$FieldStaticReadOnly);
	$var(VarHandleFloats$FieldStaticReadOnly, handle, $cast(VarHandleFloats$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getFloatOpaque($nc(handle)->base, $nc(handle)->fieldOffset);
}

float VarHandleFloats$FieldStaticReadOnly::getAcquire($VarHandle* ob) {
	$init(VarHandleFloats$FieldStaticReadOnly);
	$var(VarHandleFloats$FieldStaticReadOnly, handle, $cast(VarHandleFloats$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getFloatAcquire($nc(handle)->base, $nc(handle)->fieldOffset);
}

void VarHandleFloats$FieldStaticReadOnly::clinit$($Class* clazz) {
	$assignStatic(VarHandleFloats$FieldStaticReadOnly::FORM, $new($VarForm, VarHandleFloats$FieldStaticReadOnly::class$, nullptr, $Float::TYPE, $$new($ClassArray, 0)));
}

VarHandleFloats$FieldStaticReadOnly::VarHandleFloats$FieldStaticReadOnly() {
}

$Class* VarHandleFloats$FieldStaticReadOnly::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"base", "Ljava/lang/Object;", nullptr, $FINAL, $field(VarHandleFloats$FieldStaticReadOnly, base)},
		{"fieldOffset", "J", nullptr, $FINAL, $field(VarHandleFloats$FieldStaticReadOnly, fieldOffset)},
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleFloats$FieldStaticReadOnly, FORM)},
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
		{"<init>", "(Ljava/lang/Object;J)V", nullptr, 0, $method(VarHandleFloats$FieldStaticReadOnly, init$, void, Object$*, int64_t)},
		{"<init>", "(Ljava/lang/Object;JLjava/lang/invoke/VarForm;Z)V", nullptr, $PROTECTED, $method(VarHandleFloats$FieldStaticReadOnly, init$, void, Object$*, int64_t, $VarForm*, bool)},
		{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(VarHandleFloats$FieldStaticReadOnly, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
		{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC, $virtualMethod(VarHandleFloats$FieldStaticReadOnly, describeConstable, $Optional*)},
		{"get", "(Ljava/lang/invoke/VarHandle;)F", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldStaticReadOnly, get, float, $VarHandle*), nullptr, nullptr, getmethodAnnotations$$},
		{"getAcquire", "(Ljava/lang/invoke/VarHandle;)F", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldStaticReadOnly, getAcquire, float, $VarHandle*), nullptr, nullptr, getAcquiremethodAnnotations$$},
		{"getOpaque", "(Ljava/lang/invoke/VarHandle;)F", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldStaticReadOnly, getOpaque, float, $VarHandle*), nullptr, nullptr, getOpaquemethodAnnotations$$},
		{"getVolatile", "(Ljava/lang/invoke/VarHandle;)F", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldStaticReadOnly, getVolatile, float, $VarHandle*), nullptr, nullptr, getVolatilemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleFloats$FieldStaticReadOnly;", nullptr, $PUBLIC, $virtualMethod(VarHandleFloats$FieldStaticReadOnly, withInvokeBehavior, VarHandleFloats$FieldStaticReadOnly*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleFloats$FieldStaticReadOnly;", nullptr, $PUBLIC, $virtualMethod(VarHandleFloats$FieldStaticReadOnly, withInvokeExactBehavior, VarHandleFloats$FieldStaticReadOnly*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleFloats$FieldStaticReadOnly", "java.lang.invoke.VarHandleFloats", "FieldStaticReadOnly", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.invoke.VarHandleFloats$FieldStaticReadOnly",
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
		"java.lang.invoke.VarHandleFloats"
	};
	$loadClass(VarHandleFloats$FieldStaticReadOnly, name, initialize, &classInfo$$, VarHandleFloats$FieldStaticReadOnly::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleFloats$FieldStaticReadOnly);
	});
	return class$;
}

$Class* VarHandleFloats$FieldStaticReadOnly::class$ = nullptr;

		} // invoke
	} // lang
} // java