#include <java/lang/invoke/VarHandleReferences$FieldInstanceReadOnly.h>
#include <java/lang/constant/ClassDesc.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle$VarHandleDesc.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleReferences.h>
#include <java/lang/invoke/VarHandles.h>
#include <java/lang/reflect/Field.h>
#include <java/util/Objects.h>
#include <java/util/Optional.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef FORM
#undef UNSAFE

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

$VarForm* VarHandleReferences$FieldInstanceReadOnly::FORM = nullptr;

void VarHandleReferences$FieldInstanceReadOnly::init$($Class* receiverType, int64_t fieldOffset, $Class* fieldType) {
	VarHandleReferences$FieldInstanceReadOnly::init$(receiverType, fieldOffset, fieldType, VarHandleReferences$FieldInstanceReadOnly::FORM, false);
}

void VarHandleReferences$FieldInstanceReadOnly::init$($Class* receiverType, int64_t fieldOffset, $Class* fieldType, $VarForm* form, bool exact) {
	$VarHandle::init$(form, exact);
	this->fieldOffset = fieldOffset;
	$set(this, receiverType, receiverType);
	$set(this, fieldType, fieldType);
}

VarHandleReferences$FieldInstanceReadOnly* VarHandleReferences$FieldInstanceReadOnly::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleReferences$FieldInstanceReadOnly, this->receiverType, this->fieldOffset, this->fieldType, this->vform, true);
}

VarHandleReferences$FieldInstanceReadOnly* VarHandleReferences$FieldInstanceReadOnly::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleReferences$FieldInstanceReadOnly, this->receiverType, this->fieldOffset, this->fieldType, this->vform, false);
}

$MethodType* VarHandleReferences$FieldInstanceReadOnly::accessModeTypeUncached($VarHandle$AccessType* at) {
	return $nc(at)->accessModeType(this->receiverType, this->fieldType, $$new($ClassArray, 0));
}

$Optional* VarHandleReferences$FieldInstanceReadOnly::describeConstable() {
	$useLocalObjectStack();
	$var($Optional, receiverTypeRef, $nc(this->receiverType)->describeConstable());
	$var($Optional, fieldTypeRef, $nc(this->fieldType)->describeConstable());
	bool var$0 = !$nc(receiverTypeRef)->isPresent();
	if (var$0 || !$nc(fieldTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($String, name, $$nc($VarHandles::getFieldFromReceiverAndOffset(this->receiverType, this->fieldOffset, this->fieldType))->getName());
	$var($ClassDesc, var$1, $cast($ClassDesc, receiverTypeRef->get()));
	return $Optional::of($($VarHandle$VarHandleDesc::ofField(var$1, name, $$cast($ClassDesc, $nc(fieldTypeRef)->get()))));
}

$Object* VarHandleReferences$FieldInstanceReadOnly::get($VarHandle* ob, Object$* holder) {
	$init(VarHandleReferences$FieldInstanceReadOnly);
	$useLocalObjectStack();
	$var(VarHandleReferences$FieldInstanceReadOnly, handle, $cast(VarHandleReferences$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getReference($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

$Object* VarHandleReferences$FieldInstanceReadOnly::getVolatile($VarHandle* ob, Object$* holder) {
	$init(VarHandleReferences$FieldInstanceReadOnly);
	$useLocalObjectStack();
	$var(VarHandleReferences$FieldInstanceReadOnly, handle, $cast(VarHandleReferences$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getReferenceVolatile($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

$Object* VarHandleReferences$FieldInstanceReadOnly::getOpaque($VarHandle* ob, Object$* holder) {
	$init(VarHandleReferences$FieldInstanceReadOnly);
	$useLocalObjectStack();
	$var(VarHandleReferences$FieldInstanceReadOnly, handle, $cast(VarHandleReferences$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getReferenceOpaque($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

$Object* VarHandleReferences$FieldInstanceReadOnly::getAcquire($VarHandle* ob, Object$* holder) {
	$init(VarHandleReferences$FieldInstanceReadOnly);
	$useLocalObjectStack();
	$var(VarHandleReferences$FieldInstanceReadOnly, handle, $cast(VarHandleReferences$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getReferenceAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

void VarHandleReferences$FieldInstanceReadOnly::clinit$($Class* clazz) {
	$assignStatic(VarHandleReferences$FieldInstanceReadOnly::FORM, $new($VarForm, VarHandleReferences$FieldInstanceReadOnly::class$, $Object::class$, $Object::class$, $$new($ClassArray, 0)));
}

VarHandleReferences$FieldInstanceReadOnly::VarHandleReferences$FieldInstanceReadOnly() {
}

$Class* VarHandleReferences$FieldInstanceReadOnly::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fieldOffset", "J", nullptr, $FINAL, $field(VarHandleReferences$FieldInstanceReadOnly, fieldOffset)},
		{"receiverType", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(VarHandleReferences$FieldInstanceReadOnly, receiverType)},
		{"fieldType", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(VarHandleReferences$FieldInstanceReadOnly, fieldType)},
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleReferences$FieldInstanceReadOnly, FORM)},
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
		{"<init>", "(Ljava/lang/Class;JLjava/lang/Class;)V", "(Ljava/lang/Class<*>;JLjava/lang/Class<*>;)V", 0, $method(VarHandleReferences$FieldInstanceReadOnly, init$, void, $Class*, int64_t, $Class*)},
		{"<init>", "(Ljava/lang/Class;JLjava/lang/Class;Ljava/lang/invoke/VarForm;Z)V", "(Ljava/lang/Class<*>;JLjava/lang/Class<*>;Ljava/lang/invoke/VarForm;Z)V", $PROTECTED, $method(VarHandleReferences$FieldInstanceReadOnly, init$, void, $Class*, int64_t, $Class*, $VarForm*, bool)},
		{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(VarHandleReferences$FieldInstanceReadOnly, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
		{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC, $virtualMethod(VarHandleReferences$FieldInstanceReadOnly, describeConstable, $Optional*)},
		{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(VarHandleReferences$FieldInstanceReadOnly, get, $Object*, $VarHandle*, Object$*), nullptr, nullptr, getmethodAnnotations$$},
		{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(VarHandleReferences$FieldInstanceReadOnly, getAcquire, $Object*, $VarHandle*, Object$*), nullptr, nullptr, getAcquiremethodAnnotations$$},
		{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(VarHandleReferences$FieldInstanceReadOnly, getOpaque, $Object*, $VarHandle*, Object$*), nullptr, nullptr, getOpaquemethodAnnotations$$},
		{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(VarHandleReferences$FieldInstanceReadOnly, getVolatile, $Object*, $VarHandle*, Object$*), nullptr, nullptr, getVolatilemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleReferences$FieldInstanceReadOnly;", nullptr, $PUBLIC, $virtualMethod(VarHandleReferences$FieldInstanceReadOnly, withInvokeBehavior, VarHandleReferences$FieldInstanceReadOnly*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleReferences$FieldInstanceReadOnly;", nullptr, $PUBLIC, $virtualMethod(VarHandleReferences$FieldInstanceReadOnly, withInvokeExactBehavior, VarHandleReferences$FieldInstanceReadOnly*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleReferences$FieldInstanceReadOnly", "java.lang.invoke.VarHandleReferences", "FieldInstanceReadOnly", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.invoke.VarHandleReferences$FieldInstanceReadOnly",
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
		"java.lang.invoke.VarHandleReferences"
	};
	$loadClass(VarHandleReferences$FieldInstanceReadOnly, name, initialize, &classInfo$$, VarHandleReferences$FieldInstanceReadOnly::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleReferences$FieldInstanceReadOnly);
	});
	return class$;
}

$Class* VarHandleReferences$FieldInstanceReadOnly::class$ = nullptr;

		} // invoke
	} // lang
} // java