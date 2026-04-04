#include <java/lang/invoke/VarHandleBytes$FieldStaticReadOnly.h>
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
using $Field = ::java::lang::reflect::Field;
using $Optional = ::java::util::Optional;

namespace java {
	namespace lang {
		namespace invoke {

$VarForm* VarHandleBytes$FieldStaticReadOnly::FORM = nullptr;

void VarHandleBytes$FieldStaticReadOnly::init$(Object$* base, int64_t fieldOffset) {
	VarHandleBytes$FieldStaticReadOnly::init$(base, fieldOffset, VarHandleBytes$FieldStaticReadOnly::FORM, false);
}

void VarHandleBytes$FieldStaticReadOnly::init$(Object$* base, int64_t fieldOffset, $VarForm* form, bool exact) {
	$VarHandle::init$(form, exact);
	$set(this, base, base);
	this->fieldOffset = fieldOffset;
}

VarHandleBytes$FieldStaticReadOnly* VarHandleBytes$FieldStaticReadOnly::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleBytes$FieldStaticReadOnly, this->base, this->fieldOffset, this->vform, true);
}

VarHandleBytes$FieldStaticReadOnly* VarHandleBytes$FieldStaticReadOnly::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleBytes$FieldStaticReadOnly, this->base, this->fieldOffset, this->vform, false);
}

$Optional* VarHandleBytes$FieldStaticReadOnly::describeConstable() {
	$useLocalObjectStack();
	$var($Optional, fieldTypeRef, $nc($Byte::TYPE)->describeConstable());
	if (!$nc(fieldTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($Field, staticField, $VarHandles::getStaticFieldFromBaseAndOffset(this->base, this->fieldOffset, $Byte::TYPE));
	$var($Optional, receiverTypeRef, $nc($nc(staticField)->getDeclaringClass())->describeConstable());
	if (!$nc(receiverTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($ClassDesc, var$0, $cast($ClassDesc, receiverTypeRef->get()));
	$var($String, var$1, staticField->getName());
	return $Optional::of($($VarHandle$VarHandleDesc::ofStaticField(var$0, var$1, $$cast($ClassDesc, fieldTypeRef->get()))));
}

$MethodType* VarHandleBytes$FieldStaticReadOnly::accessModeTypeUncached($VarHandle$AccessType* at) {
	return $nc(at)->accessModeType(nullptr, $Byte::TYPE, $$new($ClassArray, 0));
}

int8_t VarHandleBytes$FieldStaticReadOnly::get($VarHandle* ob) {
	$init(VarHandleBytes$FieldStaticReadOnly);
	$var(VarHandleBytes$FieldStaticReadOnly, handle, $cast(VarHandleBytes$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getByte($nc(handle)->base, $nc(handle)->fieldOffset);
}

int8_t VarHandleBytes$FieldStaticReadOnly::getVolatile($VarHandle* ob) {
	$init(VarHandleBytes$FieldStaticReadOnly);
	$var(VarHandleBytes$FieldStaticReadOnly, handle, $cast(VarHandleBytes$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getByteVolatile($nc(handle)->base, $nc(handle)->fieldOffset);
}

int8_t VarHandleBytes$FieldStaticReadOnly::getOpaque($VarHandle* ob) {
	$init(VarHandleBytes$FieldStaticReadOnly);
	$var(VarHandleBytes$FieldStaticReadOnly, handle, $cast(VarHandleBytes$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getByteOpaque($nc(handle)->base, $nc(handle)->fieldOffset);
}

int8_t VarHandleBytes$FieldStaticReadOnly::getAcquire($VarHandle* ob) {
	$init(VarHandleBytes$FieldStaticReadOnly);
	$var(VarHandleBytes$FieldStaticReadOnly, handle, $cast(VarHandleBytes$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getByteAcquire($nc(handle)->base, $nc(handle)->fieldOffset);
}

void VarHandleBytes$FieldStaticReadOnly::clinit$($Class* clazz) {
	$assignStatic(VarHandleBytes$FieldStaticReadOnly::FORM, $new($VarForm, VarHandleBytes$FieldStaticReadOnly::class$, nullptr, $Byte::TYPE, $$new($ClassArray, 0)));
}

VarHandleBytes$FieldStaticReadOnly::VarHandleBytes$FieldStaticReadOnly() {
}

$Class* VarHandleBytes$FieldStaticReadOnly::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"base", "Ljava/lang/Object;", nullptr, $FINAL, $field(VarHandleBytes$FieldStaticReadOnly, base)},
		{"fieldOffset", "J", nullptr, $FINAL, $field(VarHandleBytes$FieldStaticReadOnly, fieldOffset)},
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleBytes$FieldStaticReadOnly, FORM)},
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
		{"<init>", "(Ljava/lang/Object;J)V", nullptr, 0, $method(VarHandleBytes$FieldStaticReadOnly, init$, void, Object$*, int64_t)},
		{"<init>", "(Ljava/lang/Object;JLjava/lang/invoke/VarForm;Z)V", nullptr, $PROTECTED, $method(VarHandleBytes$FieldStaticReadOnly, init$, void, Object$*, int64_t, $VarForm*, bool)},
		{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(VarHandleBytes$FieldStaticReadOnly, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
		{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC, $virtualMethod(VarHandleBytes$FieldStaticReadOnly, describeConstable, $Optional*)},
		{"get", "(Ljava/lang/invoke/VarHandle;)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldStaticReadOnly, get, int8_t, $VarHandle*), nullptr, nullptr, getmethodAnnotations$$},
		{"getAcquire", "(Ljava/lang/invoke/VarHandle;)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldStaticReadOnly, getAcquire, int8_t, $VarHandle*), nullptr, nullptr, getAcquiremethodAnnotations$$},
		{"getOpaque", "(Ljava/lang/invoke/VarHandle;)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldStaticReadOnly, getOpaque, int8_t, $VarHandle*), nullptr, nullptr, getOpaquemethodAnnotations$$},
		{"getVolatile", "(Ljava/lang/invoke/VarHandle;)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldStaticReadOnly, getVolatile, int8_t, $VarHandle*), nullptr, nullptr, getVolatilemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleBytes$FieldStaticReadOnly;", nullptr, $PUBLIC, $virtualMethod(VarHandleBytes$FieldStaticReadOnly, withInvokeBehavior, VarHandleBytes$FieldStaticReadOnly*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleBytes$FieldStaticReadOnly;", nullptr, $PUBLIC, $virtualMethod(VarHandleBytes$FieldStaticReadOnly, withInvokeExactBehavior, VarHandleBytes$FieldStaticReadOnly*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleBytes$FieldStaticReadOnly", "java.lang.invoke.VarHandleBytes", "FieldStaticReadOnly", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.invoke.VarHandleBytes$FieldStaticReadOnly",
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
	$loadClass(VarHandleBytes$FieldStaticReadOnly, name, initialize, &classInfo$$, VarHandleBytes$FieldStaticReadOnly::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleBytes$FieldStaticReadOnly);
	});
	return class$;
}

$Class* VarHandleBytes$FieldStaticReadOnly::class$ = nullptr;

		} // invoke
	} // lang
} // java