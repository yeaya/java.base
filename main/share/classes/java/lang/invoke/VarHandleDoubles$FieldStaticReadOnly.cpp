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
using $VarHandleDoubles = ::java::lang::invoke::VarHandleDoubles;
using $VarHandles = ::java::lang::invoke::VarHandles;
using $Field = ::java::lang::reflect::Field;
using $Optional = ::java::util::Optional;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleDoubles$FieldStaticReadOnly_MethodAnnotations_get4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$FieldStaticReadOnly_MethodAnnotations_getAcquire5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$FieldStaticReadOnly_MethodAnnotations_getOpaque6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$FieldStaticReadOnly_MethodAnnotations_getVolatile7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleDoubles$FieldStaticReadOnly_FieldInfo_[] = {
	{"base", "Ljava/lang/Object;", nullptr, $FINAL, $field(VarHandleDoubles$FieldStaticReadOnly, base)},
	{"fieldOffset", "J", nullptr, $FINAL, $field(VarHandleDoubles$FieldStaticReadOnly, fieldOffset)},
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleDoubles$FieldStaticReadOnly, FORM)},
	{}
};

$MethodInfo _VarHandleDoubles$FieldStaticReadOnly_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;J)V", nullptr, 0, $method(static_cast<void(VarHandleDoubles$FieldStaticReadOnly::*)(Object$*,int64_t)>(&VarHandleDoubles$FieldStaticReadOnly::init$))},
	{"<init>", "(Ljava/lang/Object;JLjava/lang/invoke/VarForm;Z)V", nullptr, $PROTECTED, $method(static_cast<void(VarHandleDoubles$FieldStaticReadOnly::*)(Object$*,int64_t,$VarForm*,bool)>(&VarHandleDoubles$FieldStaticReadOnly::init$))},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL},
	{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC},
	{"get", "(Ljava/lang/invoke/VarHandle;)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*)>(&VarHandleDoubles$FieldStaticReadOnly::get)), nullptr, nullptr, _VarHandleDoubles$FieldStaticReadOnly_MethodAnnotations_get4},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*)>(&VarHandleDoubles$FieldStaticReadOnly::getAcquire)), nullptr, nullptr, _VarHandleDoubles$FieldStaticReadOnly_MethodAnnotations_getAcquire5},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*)>(&VarHandleDoubles$FieldStaticReadOnly::getOpaque)), nullptr, nullptr, _VarHandleDoubles$FieldStaticReadOnly_MethodAnnotations_getOpaque6},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*)>(&VarHandleDoubles$FieldStaticReadOnly::getVolatile)), nullptr, nullptr, _VarHandleDoubles$FieldStaticReadOnly_MethodAnnotations_getVolatile7},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleDoubles$FieldStaticReadOnly;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleDoubles$FieldStaticReadOnly;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleDoubles$FieldStaticReadOnly_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleDoubles$FieldStaticReadOnly", "java.lang.invoke.VarHandleDoubles", "FieldStaticReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleDoubles$FieldStaticReadOnly_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.VarHandleDoubles$FieldStaticReadOnly",
	"java.lang.invoke.VarHandle",
	nullptr,
	_VarHandleDoubles$FieldStaticReadOnly_FieldInfo_,
	_VarHandleDoubles$FieldStaticReadOnly_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleDoubles$FieldStaticReadOnly_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleDoubles"
};

$Object* allocate$VarHandleDoubles$FieldStaticReadOnly($Class* clazz) {
	return $of($alloc(VarHandleDoubles$FieldStaticReadOnly));
}

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
	$useLocalCurrentObjectStackCache();
	$init($Double);
	$var($Optional, fieldTypeRef, $nc($Double::TYPE)->describeConstable());
	if (!$nc(fieldTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($Field, staticField, $VarHandles::getStaticFieldFromBaseAndOffset(this->base, this->fieldOffset, $Double::TYPE));
	$var($Optional, receiverTypeRef, $nc($nc(staticField)->getDeclaringClass())->describeConstable());
	if (!$nc(receiverTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($ClassDesc, var$0, $cast($ClassDesc, $nc(receiverTypeRef)->get()));
	$var($String, var$1, staticField->getName());
	return $Optional::of($($VarHandle$VarHandleDesc::ofStaticField(var$0, var$1, $cast($ClassDesc, $($nc(fieldTypeRef)->get())))));
}

$MethodType* VarHandleDoubles$FieldStaticReadOnly::accessModeTypeUncached($VarHandle$AccessType* at) {
	$init($Double);
	return $nc(at)->accessModeType(nullptr, $Double::TYPE, $$new($ClassArray, 0));
}

double VarHandleDoubles$FieldStaticReadOnly::get($VarHandle* ob) {
	$init(VarHandleDoubles$FieldStaticReadOnly);
	$var(VarHandleDoubles$FieldStaticReadOnly, handle, $cast(VarHandleDoubles$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getDouble($nc(handle)->base, handle->fieldOffset);
}

double VarHandleDoubles$FieldStaticReadOnly::getVolatile($VarHandle* ob) {
	$init(VarHandleDoubles$FieldStaticReadOnly);
	$var(VarHandleDoubles$FieldStaticReadOnly, handle, $cast(VarHandleDoubles$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getDoubleVolatile($nc(handle)->base, handle->fieldOffset);
}

double VarHandleDoubles$FieldStaticReadOnly::getOpaque($VarHandle* ob) {
	$init(VarHandleDoubles$FieldStaticReadOnly);
	$var(VarHandleDoubles$FieldStaticReadOnly, handle, $cast(VarHandleDoubles$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getDoubleOpaque($nc(handle)->base, handle->fieldOffset);
}

double VarHandleDoubles$FieldStaticReadOnly::getAcquire($VarHandle* ob) {
	$init(VarHandleDoubles$FieldStaticReadOnly);
	$var(VarHandleDoubles$FieldStaticReadOnly, handle, $cast(VarHandleDoubles$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getDoubleAcquire($nc(handle)->base, handle->fieldOffset);
}

void clinit$VarHandleDoubles$FieldStaticReadOnly($Class* class$) {
	$init($Double);
	$assignStatic(VarHandleDoubles$FieldStaticReadOnly::FORM, $new($VarForm, VarHandleDoubles$FieldStaticReadOnly::class$, nullptr, $Double::TYPE, $$new($ClassArray, 0)));
}

VarHandleDoubles$FieldStaticReadOnly::VarHandleDoubles$FieldStaticReadOnly() {
}

$Class* VarHandleDoubles$FieldStaticReadOnly::load$($String* name, bool initialize) {
	$loadClass(VarHandleDoubles$FieldStaticReadOnly, name, initialize, &_VarHandleDoubles$FieldStaticReadOnly_ClassInfo_, clinit$VarHandleDoubles$FieldStaticReadOnly, allocate$VarHandleDoubles$FieldStaticReadOnly);
	return class$;
}

$Class* VarHandleDoubles$FieldStaticReadOnly::class$ = nullptr;

		} // invoke
	} // lang
} // java