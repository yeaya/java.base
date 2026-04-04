#include <java/lang/invoke/VarHandleShorts$FieldStaticReadOnly.h>
#include <java/lang/constant/ClassDesc.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle$VarHandleDesc.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleShorts.h>
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
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
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

$VarForm* VarHandleShorts$FieldStaticReadOnly::FORM = nullptr;

void VarHandleShorts$FieldStaticReadOnly::init$(Object$* base, int64_t fieldOffset) {
	VarHandleShorts$FieldStaticReadOnly::init$(base, fieldOffset, VarHandleShorts$FieldStaticReadOnly::FORM, false);
}

void VarHandleShorts$FieldStaticReadOnly::init$(Object$* base, int64_t fieldOffset, $VarForm* form, bool exact) {
	$VarHandle::init$(form, exact);
	$set(this, base, base);
	this->fieldOffset = fieldOffset;
}

VarHandleShorts$FieldStaticReadOnly* VarHandleShorts$FieldStaticReadOnly::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleShorts$FieldStaticReadOnly, this->base, this->fieldOffset, this->vform, true);
}

VarHandleShorts$FieldStaticReadOnly* VarHandleShorts$FieldStaticReadOnly::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleShorts$FieldStaticReadOnly, this->base, this->fieldOffset, this->vform, false);
}

$Optional* VarHandleShorts$FieldStaticReadOnly::describeConstable() {
	$useLocalObjectStack();
	$var($Optional, fieldTypeRef, $nc($Short::TYPE)->describeConstable());
	if (!$nc(fieldTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($Field, staticField, $VarHandles::getStaticFieldFromBaseAndOffset(this->base, this->fieldOffset, $Short::TYPE));
	$var($Optional, receiverTypeRef, $nc($nc(staticField)->getDeclaringClass())->describeConstable());
	if (!$nc(receiverTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($ClassDesc, var$0, $cast($ClassDesc, receiverTypeRef->get()));
	$var($String, var$1, staticField->getName());
	return $Optional::of($($VarHandle$VarHandleDesc::ofStaticField(var$0, var$1, $$cast($ClassDesc, fieldTypeRef->get()))));
}

$MethodType* VarHandleShorts$FieldStaticReadOnly::accessModeTypeUncached($VarHandle$AccessType* at) {
	return $nc(at)->accessModeType(nullptr, $Short::TYPE, $$new($ClassArray, 0));
}

int16_t VarHandleShorts$FieldStaticReadOnly::get($VarHandle* ob) {
	$init(VarHandleShorts$FieldStaticReadOnly);
	$var(VarHandleShorts$FieldStaticReadOnly, handle, $cast(VarHandleShorts$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getShort($nc(handle)->base, $nc(handle)->fieldOffset);
}

int16_t VarHandleShorts$FieldStaticReadOnly::getVolatile($VarHandle* ob) {
	$init(VarHandleShorts$FieldStaticReadOnly);
	$var(VarHandleShorts$FieldStaticReadOnly, handle, $cast(VarHandleShorts$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getShortVolatile($nc(handle)->base, $nc(handle)->fieldOffset);
}

int16_t VarHandleShorts$FieldStaticReadOnly::getOpaque($VarHandle* ob) {
	$init(VarHandleShorts$FieldStaticReadOnly);
	$var(VarHandleShorts$FieldStaticReadOnly, handle, $cast(VarHandleShorts$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getShortOpaque($nc(handle)->base, $nc(handle)->fieldOffset);
}

int16_t VarHandleShorts$FieldStaticReadOnly::getAcquire($VarHandle* ob) {
	$init(VarHandleShorts$FieldStaticReadOnly);
	$var(VarHandleShorts$FieldStaticReadOnly, handle, $cast(VarHandleShorts$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getShortAcquire($nc(handle)->base, $nc(handle)->fieldOffset);
}

void VarHandleShorts$FieldStaticReadOnly::clinit$($Class* clazz) {
	$assignStatic(VarHandleShorts$FieldStaticReadOnly::FORM, $new($VarForm, VarHandleShorts$FieldStaticReadOnly::class$, nullptr, $Short::TYPE, $$new($ClassArray, 0)));
}

VarHandleShorts$FieldStaticReadOnly::VarHandleShorts$FieldStaticReadOnly() {
}

$Class* VarHandleShorts$FieldStaticReadOnly::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"base", "Ljava/lang/Object;", nullptr, $FINAL, $field(VarHandleShorts$FieldStaticReadOnly, base)},
		{"fieldOffset", "J", nullptr, $FINAL, $field(VarHandleShorts$FieldStaticReadOnly, fieldOffset)},
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleShorts$FieldStaticReadOnly, FORM)},
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
		{"<init>", "(Ljava/lang/Object;J)V", nullptr, 0, $method(VarHandleShorts$FieldStaticReadOnly, init$, void, Object$*, int64_t)},
		{"<init>", "(Ljava/lang/Object;JLjava/lang/invoke/VarForm;Z)V", nullptr, $PROTECTED, $method(VarHandleShorts$FieldStaticReadOnly, init$, void, Object$*, int64_t, $VarForm*, bool)},
		{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(VarHandleShorts$FieldStaticReadOnly, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
		{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC, $virtualMethod(VarHandleShorts$FieldStaticReadOnly, describeConstable, $Optional*)},
		{"get", "(Ljava/lang/invoke/VarHandle;)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadOnly, get, int16_t, $VarHandle*), nullptr, nullptr, getmethodAnnotations$$},
		{"getAcquire", "(Ljava/lang/invoke/VarHandle;)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadOnly, getAcquire, int16_t, $VarHandle*), nullptr, nullptr, getAcquiremethodAnnotations$$},
		{"getOpaque", "(Ljava/lang/invoke/VarHandle;)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadOnly, getOpaque, int16_t, $VarHandle*), nullptr, nullptr, getOpaquemethodAnnotations$$},
		{"getVolatile", "(Ljava/lang/invoke/VarHandle;)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadOnly, getVolatile, int16_t, $VarHandle*), nullptr, nullptr, getVolatilemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleShorts$FieldStaticReadOnly;", nullptr, $PUBLIC, $virtualMethod(VarHandleShorts$FieldStaticReadOnly, withInvokeBehavior, VarHandleShorts$FieldStaticReadOnly*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleShorts$FieldStaticReadOnly;", nullptr, $PUBLIC, $virtualMethod(VarHandleShorts$FieldStaticReadOnly, withInvokeExactBehavior, VarHandleShorts$FieldStaticReadOnly*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleShorts$FieldStaticReadOnly", "java.lang.invoke.VarHandleShorts", "FieldStaticReadOnly", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.invoke.VarHandleShorts$FieldStaticReadOnly",
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
		"java.lang.invoke.VarHandleShorts"
	};
	$loadClass(VarHandleShorts$FieldStaticReadOnly, name, initialize, &classInfo$$, VarHandleShorts$FieldStaticReadOnly::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleShorts$FieldStaticReadOnly);
	});
	return class$;
}

$Class* VarHandleShorts$FieldStaticReadOnly::class$ = nullptr;

		} // invoke
	} // lang
} // java