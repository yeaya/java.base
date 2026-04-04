#include <java/lang/invoke/VarHandleDoubles$FieldStaticReadOnly.h>
#include <java/lang/constant/ClassDesc.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle$VarHandleDesc.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleDoubles.h>
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
using $Double = ::java::lang::Double;
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

$VarForm* VarHandleDoubles$FieldStaticReadOnly::FORM = nullptr;

void VarHandleDoubles$FieldStaticReadOnly::init$(Object$* base, int64_t fieldOffset) {
	VarHandleDoubles$FieldStaticReadOnly::init$(base, fieldOffset, VarHandleDoubles$FieldStaticReadOnly::FORM, false);
}

void VarHandleDoubles$FieldStaticReadOnly::init$(Object$* base, int64_t fieldOffset, $VarForm* form, bool exact) {
	$VarHandle::init$(form, exact);
	$set(this, base, base);
	this->fieldOffset = fieldOffset;
}

VarHandleDoubles$FieldStaticReadOnly* VarHandleDoubles$FieldStaticReadOnly::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleDoubles$FieldStaticReadOnly, this->base, this->fieldOffset, this->vform, true);
}

VarHandleDoubles$FieldStaticReadOnly* VarHandleDoubles$FieldStaticReadOnly::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleDoubles$FieldStaticReadOnly, this->base, this->fieldOffset, this->vform, false);
}

$Optional* VarHandleDoubles$FieldStaticReadOnly::describeConstable() {
	$useLocalObjectStack();
	$var($Optional, fieldTypeRef, $nc($Double::TYPE)->describeConstable());
	if (!$nc(fieldTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($Field, staticField, $VarHandles::getStaticFieldFromBaseAndOffset(this->base, this->fieldOffset, $Double::TYPE));
	$var($Optional, receiverTypeRef, $nc($nc(staticField)->getDeclaringClass())->describeConstable());
	if (!$nc(receiverTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($ClassDesc, var$0, $cast($ClassDesc, receiverTypeRef->get()));
	$var($String, var$1, staticField->getName());
	return $Optional::of($($VarHandle$VarHandleDesc::ofStaticField(var$0, var$1, $$cast($ClassDesc, fieldTypeRef->get()))));
}

$MethodType* VarHandleDoubles$FieldStaticReadOnly::accessModeTypeUncached($VarHandle$AccessType* at) {
	return $nc(at)->accessModeType(nullptr, $Double::TYPE, $$new($ClassArray, 0));
}

double VarHandleDoubles$FieldStaticReadOnly::get($VarHandle* ob) {
	$init(VarHandleDoubles$FieldStaticReadOnly);
	$var(VarHandleDoubles$FieldStaticReadOnly, handle, $cast(VarHandleDoubles$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getDouble($nc(handle)->base, $nc(handle)->fieldOffset);
}

double VarHandleDoubles$FieldStaticReadOnly::getVolatile($VarHandle* ob) {
	$init(VarHandleDoubles$FieldStaticReadOnly);
	$var(VarHandleDoubles$FieldStaticReadOnly, handle, $cast(VarHandleDoubles$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getDoubleVolatile($nc(handle)->base, $nc(handle)->fieldOffset);
}

double VarHandleDoubles$FieldStaticReadOnly::getOpaque($VarHandle* ob) {
	$init(VarHandleDoubles$FieldStaticReadOnly);
	$var(VarHandleDoubles$FieldStaticReadOnly, handle, $cast(VarHandleDoubles$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getDoubleOpaque($nc(handle)->base, $nc(handle)->fieldOffset);
}

double VarHandleDoubles$FieldStaticReadOnly::getAcquire($VarHandle* ob) {
	$init(VarHandleDoubles$FieldStaticReadOnly);
	$var(VarHandleDoubles$FieldStaticReadOnly, handle, $cast(VarHandleDoubles$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getDoubleAcquire($nc(handle)->base, $nc(handle)->fieldOffset);
}

void VarHandleDoubles$FieldStaticReadOnly::clinit$($Class* clazz) {
	$assignStatic(VarHandleDoubles$FieldStaticReadOnly::FORM, $new($VarForm, VarHandleDoubles$FieldStaticReadOnly::class$, nullptr, $Double::TYPE, $$new($ClassArray, 0)));
}

VarHandleDoubles$FieldStaticReadOnly::VarHandleDoubles$FieldStaticReadOnly() {
}

$Class* VarHandleDoubles$FieldStaticReadOnly::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"base", "Ljava/lang/Object;", nullptr, $FINAL, $field(VarHandleDoubles$FieldStaticReadOnly, base)},
		{"fieldOffset", "J", nullptr, $FINAL, $field(VarHandleDoubles$FieldStaticReadOnly, fieldOffset)},
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleDoubles$FieldStaticReadOnly, FORM)},
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
		{"<init>", "(Ljava/lang/Object;J)V", nullptr, 0, $method(VarHandleDoubles$FieldStaticReadOnly, init$, void, Object$*, int64_t)},
		{"<init>", "(Ljava/lang/Object;JLjava/lang/invoke/VarForm;Z)V", nullptr, $PROTECTED, $method(VarHandleDoubles$FieldStaticReadOnly, init$, void, Object$*, int64_t, $VarForm*, bool)},
		{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(VarHandleDoubles$FieldStaticReadOnly, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
		{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC, $virtualMethod(VarHandleDoubles$FieldStaticReadOnly, describeConstable, $Optional*)},
		{"get", "(Ljava/lang/invoke/VarHandle;)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldStaticReadOnly, get, double, $VarHandle*), nullptr, nullptr, getmethodAnnotations$$},
		{"getAcquire", "(Ljava/lang/invoke/VarHandle;)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldStaticReadOnly, getAcquire, double, $VarHandle*), nullptr, nullptr, getAcquiremethodAnnotations$$},
		{"getOpaque", "(Ljava/lang/invoke/VarHandle;)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldStaticReadOnly, getOpaque, double, $VarHandle*), nullptr, nullptr, getOpaquemethodAnnotations$$},
		{"getVolatile", "(Ljava/lang/invoke/VarHandle;)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldStaticReadOnly, getVolatile, double, $VarHandle*), nullptr, nullptr, getVolatilemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleDoubles$FieldStaticReadOnly;", nullptr, $PUBLIC, $virtualMethod(VarHandleDoubles$FieldStaticReadOnly, withInvokeBehavior, VarHandleDoubles$FieldStaticReadOnly*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleDoubles$FieldStaticReadOnly;", nullptr, $PUBLIC, $virtualMethod(VarHandleDoubles$FieldStaticReadOnly, withInvokeExactBehavior, VarHandleDoubles$FieldStaticReadOnly*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleDoubles$FieldStaticReadOnly", "java.lang.invoke.VarHandleDoubles", "FieldStaticReadOnly", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.invoke.VarHandleDoubles$FieldStaticReadOnly",
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
		"java.lang.invoke.VarHandleDoubles"
	};
	$loadClass(VarHandleDoubles$FieldStaticReadOnly, name, initialize, &classInfo$$, VarHandleDoubles$FieldStaticReadOnly::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleDoubles$FieldStaticReadOnly);
	});
	return class$;
}

$Class* VarHandleDoubles$FieldStaticReadOnly::class$ = nullptr;

		} // invoke
	} // lang
} // java