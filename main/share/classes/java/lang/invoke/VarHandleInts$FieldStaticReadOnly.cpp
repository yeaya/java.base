#include <java/lang/invoke/VarHandleInts$FieldStaticReadOnly.h>

#include <java/lang/constant/ClassDesc.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle$VarHandleDesc.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleInts.h>
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
using $Integer = ::java::lang::Integer;
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
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleInts$FieldStaticReadOnly_MethodAnnotations_get4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldStaticReadOnly_MethodAnnotations_getAcquire5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldStaticReadOnly_MethodAnnotations_getOpaque6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldStaticReadOnly_MethodAnnotations_getVolatile7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleInts$FieldStaticReadOnly_FieldInfo_[] = {
	{"base", "Ljava/lang/Object;", nullptr, $FINAL, $field(VarHandleInts$FieldStaticReadOnly, base)},
	{"fieldOffset", "J", nullptr, $FINAL, $field(VarHandleInts$FieldStaticReadOnly, fieldOffset)},
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleInts$FieldStaticReadOnly, FORM)},
	{}
};

$MethodInfo _VarHandleInts$FieldStaticReadOnly_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;J)V", nullptr, 0, $method(VarHandleInts$FieldStaticReadOnly, init$, void, Object$*, int64_t)},
	{"<init>", "(Ljava/lang/Object;JLjava/lang/invoke/VarForm;Z)V", nullptr, $PROTECTED, $method(VarHandleInts$FieldStaticReadOnly, init$, void, Object$*, int64_t, $VarForm*, bool)},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(VarHandleInts$FieldStaticReadOnly, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
	{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC, $virtualMethod(VarHandleInts$FieldStaticReadOnly, describeConstable, $Optional*)},
	{"get", "(Ljava/lang/invoke/VarHandle;)I", nullptr, $STATIC, $staticMethod(VarHandleInts$FieldStaticReadOnly, get, int32_t, $VarHandle*), nullptr, nullptr, _VarHandleInts$FieldStaticReadOnly_MethodAnnotations_get4},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;)I", nullptr, $STATIC, $staticMethod(VarHandleInts$FieldStaticReadOnly, getAcquire, int32_t, $VarHandle*), nullptr, nullptr, _VarHandleInts$FieldStaticReadOnly_MethodAnnotations_getAcquire5},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;)I", nullptr, $STATIC, $staticMethod(VarHandleInts$FieldStaticReadOnly, getOpaque, int32_t, $VarHandle*), nullptr, nullptr, _VarHandleInts$FieldStaticReadOnly_MethodAnnotations_getOpaque6},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;)I", nullptr, $STATIC, $staticMethod(VarHandleInts$FieldStaticReadOnly, getVolatile, int32_t, $VarHandle*), nullptr, nullptr, _VarHandleInts$FieldStaticReadOnly_MethodAnnotations_getVolatile7},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleInts$FieldStaticReadOnly;", nullptr, $PUBLIC, $virtualMethod(VarHandleInts$FieldStaticReadOnly, withInvokeBehavior, VarHandleInts$FieldStaticReadOnly*)},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleInts$FieldStaticReadOnly;", nullptr, $PUBLIC, $virtualMethod(VarHandleInts$FieldStaticReadOnly, withInvokeExactBehavior, VarHandleInts$FieldStaticReadOnly*)},
	{}
};

$InnerClassInfo _VarHandleInts$FieldStaticReadOnly_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleInts$FieldStaticReadOnly", "java.lang.invoke.VarHandleInts", "FieldStaticReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleInts$FieldStaticReadOnly_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.VarHandleInts$FieldStaticReadOnly",
	"java.lang.invoke.VarHandle",
	nullptr,
	_VarHandleInts$FieldStaticReadOnly_FieldInfo_,
	_VarHandleInts$FieldStaticReadOnly_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleInts$FieldStaticReadOnly_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleInts"
};

$Object* allocate$VarHandleInts$FieldStaticReadOnly($Class* clazz) {
	return $of($alloc(VarHandleInts$FieldStaticReadOnly));
}

$VarForm* VarHandleInts$FieldStaticReadOnly::FORM = nullptr;

void VarHandleInts$FieldStaticReadOnly::init$(Object$* base, int64_t fieldOffset) {
	VarHandleInts$FieldStaticReadOnly::init$(base, fieldOffset, VarHandleInts$FieldStaticReadOnly::FORM, false);
}

void VarHandleInts$FieldStaticReadOnly::init$(Object$* base, int64_t fieldOffset, $VarForm* form, bool exact) {
	$VarHandle::init$(form, exact);
	$set(this, base, base);
	this->fieldOffset = fieldOffset;
}

VarHandleInts$FieldStaticReadOnly* VarHandleInts$FieldStaticReadOnly::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleInts$FieldStaticReadOnly, this->base, this->fieldOffset, this->vform, true);
}

VarHandleInts$FieldStaticReadOnly* VarHandleInts$FieldStaticReadOnly::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleInts$FieldStaticReadOnly, this->base, this->fieldOffset, this->vform, false);
}

$Optional* VarHandleInts$FieldStaticReadOnly::describeConstable() {
	$useLocalCurrentObjectStackCache();
	$init($Integer);
	$var($Optional, fieldTypeRef, $nc($Integer::TYPE)->describeConstable());
	if (!$nc(fieldTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($Field, staticField, $VarHandles::getStaticFieldFromBaseAndOffset(this->base, this->fieldOffset, $Integer::TYPE));
	$var($Optional, receiverTypeRef, $nc($nc(staticField)->getDeclaringClass())->describeConstable());
	if (!$nc(receiverTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($ClassDesc, var$0, $cast($ClassDesc, $nc(receiverTypeRef)->get()));
	$var($String, var$1, staticField->getName());
	return $Optional::of($($VarHandle$VarHandleDesc::ofStaticField(var$0, var$1, $cast($ClassDesc, $($nc(fieldTypeRef)->get())))));
}

$MethodType* VarHandleInts$FieldStaticReadOnly::accessModeTypeUncached($VarHandle$AccessType* at) {
	$init($Integer);
	return $nc(at)->accessModeType(nullptr, $Integer::TYPE, $$new($ClassArray, 0));
}

int32_t VarHandleInts$FieldStaticReadOnly::get($VarHandle* ob) {
	$init(VarHandleInts$FieldStaticReadOnly);
	$var(VarHandleInts$FieldStaticReadOnly, handle, $cast(VarHandleInts$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getInt($nc(handle)->base, handle->fieldOffset);
}

int32_t VarHandleInts$FieldStaticReadOnly::getVolatile($VarHandle* ob) {
	$init(VarHandleInts$FieldStaticReadOnly);
	$var(VarHandleInts$FieldStaticReadOnly, handle, $cast(VarHandleInts$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getIntVolatile($nc(handle)->base, handle->fieldOffset);
}

int32_t VarHandleInts$FieldStaticReadOnly::getOpaque($VarHandle* ob) {
	$init(VarHandleInts$FieldStaticReadOnly);
	$var(VarHandleInts$FieldStaticReadOnly, handle, $cast(VarHandleInts$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getIntOpaque($nc(handle)->base, handle->fieldOffset);
}

int32_t VarHandleInts$FieldStaticReadOnly::getAcquire($VarHandle* ob) {
	$init(VarHandleInts$FieldStaticReadOnly);
	$var(VarHandleInts$FieldStaticReadOnly, handle, $cast(VarHandleInts$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getIntAcquire($nc(handle)->base, handle->fieldOffset);
}

void clinit$VarHandleInts$FieldStaticReadOnly($Class* class$) {
	$init($Integer);
	$assignStatic(VarHandleInts$FieldStaticReadOnly::FORM, $new($VarForm, VarHandleInts$FieldStaticReadOnly::class$, nullptr, $Integer::TYPE, $$new($ClassArray, 0)));
}

VarHandleInts$FieldStaticReadOnly::VarHandleInts$FieldStaticReadOnly() {
}

$Class* VarHandleInts$FieldStaticReadOnly::load$($String* name, bool initialize) {
	$loadClass(VarHandleInts$FieldStaticReadOnly, name, initialize, &_VarHandleInts$FieldStaticReadOnly_ClassInfo_, clinit$VarHandleInts$FieldStaticReadOnly, allocate$VarHandleInts$FieldStaticReadOnly);
	return class$;
}

$Class* VarHandleInts$FieldStaticReadOnly::class$ = nullptr;

		} // invoke
	} // lang
} // java