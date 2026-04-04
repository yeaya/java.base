#include <java/lang/invoke/VarHandleLongs$FieldStaticReadOnly.h>
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
using $Field = ::java::lang::reflect::Field;
using $Optional = ::java::util::Optional;

namespace java {
	namespace lang {
		namespace invoke {

$VarForm* VarHandleLongs$FieldStaticReadOnly::FORM = nullptr;

void VarHandleLongs$FieldStaticReadOnly::init$(Object$* base, int64_t fieldOffset) {
	VarHandleLongs$FieldStaticReadOnly::init$(base, fieldOffset, VarHandleLongs$FieldStaticReadOnly::FORM, false);
}

void VarHandleLongs$FieldStaticReadOnly::init$(Object$* base, int64_t fieldOffset, $VarForm* form, bool exact) {
	$VarHandle::init$(form, exact);
	$set(this, base, base);
	this->fieldOffset = fieldOffset;
}

VarHandleLongs$FieldStaticReadOnly* VarHandleLongs$FieldStaticReadOnly::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleLongs$FieldStaticReadOnly, this->base, this->fieldOffset, this->vform, true);
}

VarHandleLongs$FieldStaticReadOnly* VarHandleLongs$FieldStaticReadOnly::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleLongs$FieldStaticReadOnly, this->base, this->fieldOffset, this->vform, false);
}

$Optional* VarHandleLongs$FieldStaticReadOnly::describeConstable() {
	$useLocalObjectStack();
	$var($Optional, fieldTypeRef, $nc($Long::TYPE)->describeConstable());
	if (!$nc(fieldTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($Field, staticField, $VarHandles::getStaticFieldFromBaseAndOffset(this->base, this->fieldOffset, $Long::TYPE));
	$var($Optional, receiverTypeRef, $nc($nc(staticField)->getDeclaringClass())->describeConstable());
	if (!$nc(receiverTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($ClassDesc, var$0, $cast($ClassDesc, receiverTypeRef->get()));
	$var($String, var$1, staticField->getName());
	return $Optional::of($($VarHandle$VarHandleDesc::ofStaticField(var$0, var$1, $$cast($ClassDesc, fieldTypeRef->get()))));
}

$MethodType* VarHandleLongs$FieldStaticReadOnly::accessModeTypeUncached($VarHandle$AccessType* at) {
	return $nc(at)->accessModeType(nullptr, $Long::TYPE, $$new($ClassArray, 0));
}

int64_t VarHandleLongs$FieldStaticReadOnly::get($VarHandle* ob) {
	$init(VarHandleLongs$FieldStaticReadOnly);
	$var(VarHandleLongs$FieldStaticReadOnly, handle, $cast(VarHandleLongs$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getLong($nc(handle)->base, $nc(handle)->fieldOffset);
}

int64_t VarHandleLongs$FieldStaticReadOnly::getVolatile($VarHandle* ob) {
	$init(VarHandleLongs$FieldStaticReadOnly);
	$var(VarHandleLongs$FieldStaticReadOnly, handle, $cast(VarHandleLongs$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getLongVolatile($nc(handle)->base, $nc(handle)->fieldOffset);
}

int64_t VarHandleLongs$FieldStaticReadOnly::getOpaque($VarHandle* ob) {
	$init(VarHandleLongs$FieldStaticReadOnly);
	$var(VarHandleLongs$FieldStaticReadOnly, handle, $cast(VarHandleLongs$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getLongOpaque($nc(handle)->base, $nc(handle)->fieldOffset);
}

int64_t VarHandleLongs$FieldStaticReadOnly::getAcquire($VarHandle* ob) {
	$init(VarHandleLongs$FieldStaticReadOnly);
	$var(VarHandleLongs$FieldStaticReadOnly, handle, $cast(VarHandleLongs$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getLongAcquire($nc(handle)->base, $nc(handle)->fieldOffset);
}

void VarHandleLongs$FieldStaticReadOnly::clinit$($Class* clazz) {
	$assignStatic(VarHandleLongs$FieldStaticReadOnly::FORM, $new($VarForm, VarHandleLongs$FieldStaticReadOnly::class$, nullptr, $Long::TYPE, $$new($ClassArray, 0)));
}

VarHandleLongs$FieldStaticReadOnly::VarHandleLongs$FieldStaticReadOnly() {
}

$Class* VarHandleLongs$FieldStaticReadOnly::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"base", "Ljava/lang/Object;", nullptr, $FINAL, $field(VarHandleLongs$FieldStaticReadOnly, base)},
		{"fieldOffset", "J", nullptr, $FINAL, $field(VarHandleLongs$FieldStaticReadOnly, fieldOffset)},
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleLongs$FieldStaticReadOnly, FORM)},
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
		{"<init>", "(Ljava/lang/Object;J)V", nullptr, 0, $method(VarHandleLongs$FieldStaticReadOnly, init$, void, Object$*, int64_t)},
		{"<init>", "(Ljava/lang/Object;JLjava/lang/invoke/VarForm;Z)V", nullptr, $PROTECTED, $method(VarHandleLongs$FieldStaticReadOnly, init$, void, Object$*, int64_t, $VarForm*, bool)},
		{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(VarHandleLongs$FieldStaticReadOnly, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
		{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC, $virtualMethod(VarHandleLongs$FieldStaticReadOnly, describeConstable, $Optional*)},
		{"get", "(Ljava/lang/invoke/VarHandle;)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldStaticReadOnly, get, int64_t, $VarHandle*), nullptr, nullptr, getmethodAnnotations$$},
		{"getAcquire", "(Ljava/lang/invoke/VarHandle;)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldStaticReadOnly, getAcquire, int64_t, $VarHandle*), nullptr, nullptr, getAcquiremethodAnnotations$$},
		{"getOpaque", "(Ljava/lang/invoke/VarHandle;)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldStaticReadOnly, getOpaque, int64_t, $VarHandle*), nullptr, nullptr, getOpaquemethodAnnotations$$},
		{"getVolatile", "(Ljava/lang/invoke/VarHandle;)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldStaticReadOnly, getVolatile, int64_t, $VarHandle*), nullptr, nullptr, getVolatilemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleLongs$FieldStaticReadOnly;", nullptr, $PUBLIC, $virtualMethod(VarHandleLongs$FieldStaticReadOnly, withInvokeBehavior, VarHandleLongs$FieldStaticReadOnly*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleLongs$FieldStaticReadOnly;", nullptr, $PUBLIC, $virtualMethod(VarHandleLongs$FieldStaticReadOnly, withInvokeExactBehavior, VarHandleLongs$FieldStaticReadOnly*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleLongs$FieldStaticReadOnly", "java.lang.invoke.VarHandleLongs", "FieldStaticReadOnly", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.invoke.VarHandleLongs$FieldStaticReadOnly",
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
	$loadClass(VarHandleLongs$FieldStaticReadOnly, name, initialize, &classInfo$$, VarHandleLongs$FieldStaticReadOnly::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleLongs$FieldStaticReadOnly);
	});
	return class$;
}

$Class* VarHandleLongs$FieldStaticReadOnly::class$ = nullptr;

		} // invoke
	} // lang
} // java