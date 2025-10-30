#include <java/lang/invoke/VarHandleReferences$FieldStaticReadOnly.h>

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
using $VarHandleReferences = ::java::lang::invoke::VarHandleReferences;
using $VarHandles = ::java::lang::invoke::VarHandles;
using $Field = ::java::lang::reflect::Field;
using $Optional = ::java::util::Optional;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleReferences$FieldStaticReadOnly_MethodAnnotations_get4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$FieldStaticReadOnly_MethodAnnotations_getAcquire5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$FieldStaticReadOnly_MethodAnnotations_getOpaque6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$FieldStaticReadOnly_MethodAnnotations_getVolatile7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleReferences$FieldStaticReadOnly_FieldInfo_[] = {
	{"base", "Ljava/lang/Object;", nullptr, $FINAL, $field(VarHandleReferences$FieldStaticReadOnly, base)},
	{"fieldOffset", "J", nullptr, $FINAL, $field(VarHandleReferences$FieldStaticReadOnly, fieldOffset)},
	{"fieldType", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(VarHandleReferences$FieldStaticReadOnly, fieldType)},
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleReferences$FieldStaticReadOnly, FORM)},
	{}
};

$MethodInfo _VarHandleReferences$FieldStaticReadOnly_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;JLjava/lang/Class;)V", "(Ljava/lang/Object;JLjava/lang/Class<*>;)V", 0, $method(static_cast<void(VarHandleReferences$FieldStaticReadOnly::*)(Object$*,int64_t,$Class*)>(&VarHandleReferences$FieldStaticReadOnly::init$))},
	{"<init>", "(Ljava/lang/Object;JLjava/lang/Class;Ljava/lang/invoke/VarForm;Z)V", "(Ljava/lang/Object;JLjava/lang/Class<*>;Ljava/lang/invoke/VarForm;Z)V", $PROTECTED, $method(static_cast<void(VarHandleReferences$FieldStaticReadOnly::*)(Object$*,int64_t,$Class*,$VarForm*,bool)>(&VarHandleReferences$FieldStaticReadOnly::init$))},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL},
	{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC},
	{"get", "(Ljava/lang/invoke/VarHandle;)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)($VarHandle*)>(&VarHandleReferences$FieldStaticReadOnly::get)), nullptr, nullptr, _VarHandleReferences$FieldStaticReadOnly_MethodAnnotations_get4},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)($VarHandle*)>(&VarHandleReferences$FieldStaticReadOnly::getAcquire)), nullptr, nullptr, _VarHandleReferences$FieldStaticReadOnly_MethodAnnotations_getAcquire5},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)($VarHandle*)>(&VarHandleReferences$FieldStaticReadOnly::getOpaque)), nullptr, nullptr, _VarHandleReferences$FieldStaticReadOnly_MethodAnnotations_getOpaque6},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)($VarHandle*)>(&VarHandleReferences$FieldStaticReadOnly::getVolatile)), nullptr, nullptr, _VarHandleReferences$FieldStaticReadOnly_MethodAnnotations_getVolatile7},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleReferences$FieldStaticReadOnly;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleReferences$FieldStaticReadOnly;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleReferences$FieldStaticReadOnly_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleReferences$FieldStaticReadOnly", "java.lang.invoke.VarHandleReferences", "FieldStaticReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleReferences$FieldStaticReadOnly_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.VarHandleReferences$FieldStaticReadOnly",
	"java.lang.invoke.VarHandle",
	nullptr,
	_VarHandleReferences$FieldStaticReadOnly_FieldInfo_,
	_VarHandleReferences$FieldStaticReadOnly_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleReferences$FieldStaticReadOnly_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleReferences"
};

$Object* allocate$VarHandleReferences$FieldStaticReadOnly($Class* clazz) {
	return $of($alloc(VarHandleReferences$FieldStaticReadOnly));
}

$VarForm* VarHandleReferences$FieldStaticReadOnly::FORM = nullptr;

void VarHandleReferences$FieldStaticReadOnly::init$(Object$* base, int64_t fieldOffset, $Class* fieldType) {
	VarHandleReferences$FieldStaticReadOnly::init$(base, fieldOffset, fieldType, VarHandleReferences$FieldStaticReadOnly::FORM, false);
}

void VarHandleReferences$FieldStaticReadOnly::init$(Object$* base, int64_t fieldOffset, $Class* fieldType, $VarForm* form, bool exact) {
	$VarHandle::init$(form, exact);
	$set(this, base, base);
	this->fieldOffset = fieldOffset;
	$set(this, fieldType, fieldType);
}

VarHandleReferences$FieldStaticReadOnly* VarHandleReferences$FieldStaticReadOnly::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleReferences$FieldStaticReadOnly, this->base, this->fieldOffset, this->fieldType, this->vform, true);
}

VarHandleReferences$FieldStaticReadOnly* VarHandleReferences$FieldStaticReadOnly::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleReferences$FieldStaticReadOnly, this->base, this->fieldOffset, this->fieldType, this->vform, false);
}

$Optional* VarHandleReferences$FieldStaticReadOnly::describeConstable() {
	$useLocalCurrentObjectStackCache();
	$var($Optional, fieldTypeRef, $nc(this->fieldType)->describeConstable());
	if (!$nc(fieldTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($Field, staticField, $VarHandles::getStaticFieldFromBaseAndOffset(this->base, this->fieldOffset, this->fieldType));
	$var($Optional, receiverTypeRef, $nc($nc(staticField)->getDeclaringClass())->describeConstable());
	if (!$nc(receiverTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($ClassDesc, var$0, $cast($ClassDesc, $nc(receiverTypeRef)->get()));
	$var($String, var$1, staticField->getName());
	return $Optional::of($($VarHandle$VarHandleDesc::ofStaticField(var$0, var$1, $cast($ClassDesc, $($nc(fieldTypeRef)->get())))));
}

$MethodType* VarHandleReferences$FieldStaticReadOnly::accessModeTypeUncached($VarHandle$AccessType* at) {
	return $nc(at)->accessModeType(nullptr, this->fieldType, $$new($ClassArray, 0));
}

$Object* VarHandleReferences$FieldStaticReadOnly::get($VarHandle* ob) {
	$init(VarHandleReferences$FieldStaticReadOnly);
	$var(VarHandleReferences$FieldStaticReadOnly, handle, $cast(VarHandleReferences$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $of($nc($MethodHandleStatics::UNSAFE)->getReference($nc(handle)->base, handle->fieldOffset));
}

$Object* VarHandleReferences$FieldStaticReadOnly::getVolatile($VarHandle* ob) {
	$init(VarHandleReferences$FieldStaticReadOnly);
	$var(VarHandleReferences$FieldStaticReadOnly, handle, $cast(VarHandleReferences$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $of($nc($MethodHandleStatics::UNSAFE)->getReferenceVolatile($nc(handle)->base, handle->fieldOffset));
}

$Object* VarHandleReferences$FieldStaticReadOnly::getOpaque($VarHandle* ob) {
	$init(VarHandleReferences$FieldStaticReadOnly);
	$var(VarHandleReferences$FieldStaticReadOnly, handle, $cast(VarHandleReferences$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $of($nc($MethodHandleStatics::UNSAFE)->getReferenceOpaque($nc(handle)->base, handle->fieldOffset));
}

$Object* VarHandleReferences$FieldStaticReadOnly::getAcquire($VarHandle* ob) {
	$init(VarHandleReferences$FieldStaticReadOnly);
	$var(VarHandleReferences$FieldStaticReadOnly, handle, $cast(VarHandleReferences$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $of($nc($MethodHandleStatics::UNSAFE)->getReferenceAcquire($nc(handle)->base, handle->fieldOffset));
}

void clinit$VarHandleReferences$FieldStaticReadOnly($Class* class$) {
	$assignStatic(VarHandleReferences$FieldStaticReadOnly::FORM, $new($VarForm, VarHandleReferences$FieldStaticReadOnly::class$, nullptr, $Object::class$, $$new($ClassArray, 0)));
}

VarHandleReferences$FieldStaticReadOnly::VarHandleReferences$FieldStaticReadOnly() {
}

$Class* VarHandleReferences$FieldStaticReadOnly::load$($String* name, bool initialize) {
	$loadClass(VarHandleReferences$FieldStaticReadOnly, name, initialize, &_VarHandleReferences$FieldStaticReadOnly_ClassInfo_, clinit$VarHandleReferences$FieldStaticReadOnly, allocate$VarHandleReferences$FieldStaticReadOnly);
	return class$;
}

$Class* VarHandleReferences$FieldStaticReadOnly::class$ = nullptr;

		} // invoke
	} // lang
} // java