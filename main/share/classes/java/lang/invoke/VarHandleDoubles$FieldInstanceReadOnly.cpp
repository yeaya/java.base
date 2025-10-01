#include <java/lang/invoke/VarHandleDoubles$FieldInstanceReadOnly.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/constant/ClassDesc.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle$VarHandleDesc.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleDoubles.h>
#include <java/lang/invoke/VarHandles.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <java/util/Optional.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef FORM
#undef UNSAFE
#undef TYPE

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
using $Objects = ::java::util::Objects;
using $Optional = ::java::util::Optional;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleDoubles$FieldInstanceReadOnly_MethodAnnotations_get4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$FieldInstanceReadOnly_MethodAnnotations_getAcquire5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$FieldInstanceReadOnly_MethodAnnotations_getOpaque6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$FieldInstanceReadOnly_MethodAnnotations_getVolatile7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleDoubles$FieldInstanceReadOnly_FieldInfo_[] = {
	{"fieldOffset", "J", nullptr, $FINAL, $field(VarHandleDoubles$FieldInstanceReadOnly, fieldOffset)},
	{"receiverType", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(VarHandleDoubles$FieldInstanceReadOnly, receiverType)},
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleDoubles$FieldInstanceReadOnly, FORM)},
	{}
};

$MethodInfo _VarHandleDoubles$FieldInstanceReadOnly_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;J)V", "(Ljava/lang/Class<*>;J)V", 0, $method(static_cast<void(VarHandleDoubles$FieldInstanceReadOnly::*)($Class*,int64_t)>(&VarHandleDoubles$FieldInstanceReadOnly::init$))},
	{"<init>", "(Ljava/lang/Class;JLjava/lang/invoke/VarForm;Z)V", "(Ljava/lang/Class<*>;JLjava/lang/invoke/VarForm;Z)V", $PROTECTED, $method(static_cast<void(VarHandleDoubles$FieldInstanceReadOnly::*)($Class*,int64_t,$VarForm*,bool)>(&VarHandleDoubles$FieldInstanceReadOnly::init$))},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL},
	{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC},
	{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*)>(&VarHandleDoubles$FieldInstanceReadOnly::get)), nullptr, nullptr, _VarHandleDoubles$FieldInstanceReadOnly_MethodAnnotations_get4},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*)>(&VarHandleDoubles$FieldInstanceReadOnly::getAcquire)), nullptr, nullptr, _VarHandleDoubles$FieldInstanceReadOnly_MethodAnnotations_getAcquire5},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*)>(&VarHandleDoubles$FieldInstanceReadOnly::getOpaque)), nullptr, nullptr, _VarHandleDoubles$FieldInstanceReadOnly_MethodAnnotations_getOpaque6},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*)>(&VarHandleDoubles$FieldInstanceReadOnly::getVolatile)), nullptr, nullptr, _VarHandleDoubles$FieldInstanceReadOnly_MethodAnnotations_getVolatile7},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleDoubles$FieldInstanceReadOnly;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleDoubles$FieldInstanceReadOnly;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleDoubles$FieldInstanceReadOnly_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleDoubles$FieldInstanceReadOnly", "java.lang.invoke.VarHandleDoubles", "FieldInstanceReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleDoubles$FieldInstanceReadOnly_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.VarHandleDoubles$FieldInstanceReadOnly",
	"java.lang.invoke.VarHandle",
	nullptr,
	_VarHandleDoubles$FieldInstanceReadOnly_FieldInfo_,
	_VarHandleDoubles$FieldInstanceReadOnly_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleDoubles$FieldInstanceReadOnly_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleDoubles"
};

$Object* allocate$VarHandleDoubles$FieldInstanceReadOnly($Class* clazz) {
	return $of($alloc(VarHandleDoubles$FieldInstanceReadOnly));
}

$VarForm* VarHandleDoubles$FieldInstanceReadOnly::FORM = nullptr;

void VarHandleDoubles$FieldInstanceReadOnly::init$($Class* receiverType, int64_t fieldOffset) {
	VarHandleDoubles$FieldInstanceReadOnly::init$(receiverType, fieldOffset, VarHandleDoubles$FieldInstanceReadOnly::FORM, false);
}

void VarHandleDoubles$FieldInstanceReadOnly::init$($Class* receiverType, int64_t fieldOffset, $VarForm* form, bool exact) {
	$VarHandle::init$(form, exact);
	this->fieldOffset = fieldOffset;
	$set(this, receiverType, receiverType);
}

VarHandleDoubles$FieldInstanceReadOnly* VarHandleDoubles$FieldInstanceReadOnly::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleDoubles$FieldInstanceReadOnly, this->receiverType, this->fieldOffset, this->vform, true);
}

VarHandleDoubles$FieldInstanceReadOnly* VarHandleDoubles$FieldInstanceReadOnly::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleDoubles$FieldInstanceReadOnly, this->receiverType, this->fieldOffset, this->vform, false);
}

$MethodType* VarHandleDoubles$FieldInstanceReadOnly::accessModeTypeUncached($VarHandle$AccessType* at) {
	$init($Double);
	return $nc(at)->accessModeType(this->receiverType, $Double::TYPE, $$new($ClassArray, 0));
}

$Optional* VarHandleDoubles$FieldInstanceReadOnly::describeConstable() {
	$var($Optional, receiverTypeRef, $nc(this->receiverType)->describeConstable());
	$init($Double);
	$var($Optional, fieldTypeRef, $nc($Double::TYPE)->describeConstable());
	bool var$0 = !$nc(receiverTypeRef)->isPresent();
	if (var$0 || !$nc(fieldTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($String, name, $nc($($VarHandles::getFieldFromReceiverAndOffset(this->receiverType, this->fieldOffset, $Double::TYPE)))->getName());
	$var($ClassDesc, var$1, $cast($ClassDesc, $nc(receiverTypeRef)->get()));
	$var($String, var$2, name);
	return $Optional::of($($VarHandle$VarHandleDesc::ofField(var$1, var$2, $cast($ClassDesc, $($nc(fieldTypeRef)->get())))));
}

double VarHandleDoubles$FieldInstanceReadOnly::get($VarHandle* ob, Object$* holder) {
	$init(VarHandleDoubles$FieldInstanceReadOnly);
	$var(VarHandleDoubles$FieldInstanceReadOnly, handle, $cast(VarHandleDoubles$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getDouble($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

double VarHandleDoubles$FieldInstanceReadOnly::getVolatile($VarHandle* ob, Object$* holder) {
	$init(VarHandleDoubles$FieldInstanceReadOnly);
	$var(VarHandleDoubles$FieldInstanceReadOnly, handle, $cast(VarHandleDoubles$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getDoubleVolatile($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

double VarHandleDoubles$FieldInstanceReadOnly::getOpaque($VarHandle* ob, Object$* holder) {
	$init(VarHandleDoubles$FieldInstanceReadOnly);
	$var(VarHandleDoubles$FieldInstanceReadOnly, handle, $cast(VarHandleDoubles$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getDoubleOpaque($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

double VarHandleDoubles$FieldInstanceReadOnly::getAcquire($VarHandle* ob, Object$* holder) {
	$init(VarHandleDoubles$FieldInstanceReadOnly);
	$var(VarHandleDoubles$FieldInstanceReadOnly, handle, $cast(VarHandleDoubles$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getDoubleAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

void clinit$VarHandleDoubles$FieldInstanceReadOnly($Class* class$) {
	$load($Object);
	$init($Double);
	$assignStatic(VarHandleDoubles$FieldInstanceReadOnly::FORM, $new($VarForm, VarHandleDoubles$FieldInstanceReadOnly::class$, $Object::class$, $Double::TYPE, $$new($ClassArray, 0)));
}

VarHandleDoubles$FieldInstanceReadOnly::VarHandleDoubles$FieldInstanceReadOnly() {
}

$Class* VarHandleDoubles$FieldInstanceReadOnly::load$($String* name, bool initialize) {
	$loadClass(VarHandleDoubles$FieldInstanceReadOnly, name, initialize, &_VarHandleDoubles$FieldInstanceReadOnly_ClassInfo_, clinit$VarHandleDoubles$FieldInstanceReadOnly, allocate$VarHandleDoubles$FieldInstanceReadOnly);
	return class$;
}

$Class* VarHandleDoubles$FieldInstanceReadOnly::class$ = nullptr;

		} // invoke
	} // lang
} // java