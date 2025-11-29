#include <java/lang/invoke/VarHandleShorts$FieldInstanceReadOnly.h>

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
#include <java/util/Objects.h>
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
using $Objects = ::java::util::Objects;
using $Optional = ::java::util::Optional;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleShorts$FieldInstanceReadOnly_MethodAnnotations_get4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldInstanceReadOnly_MethodAnnotations_getAcquire5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldInstanceReadOnly_MethodAnnotations_getOpaque6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldInstanceReadOnly_MethodAnnotations_getVolatile7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleShorts$FieldInstanceReadOnly_FieldInfo_[] = {
	{"fieldOffset", "J", nullptr, $FINAL, $field(VarHandleShorts$FieldInstanceReadOnly, fieldOffset)},
	{"receiverType", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(VarHandleShorts$FieldInstanceReadOnly, receiverType)},
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleShorts$FieldInstanceReadOnly, FORM)},
	{}
};

$MethodInfo _VarHandleShorts$FieldInstanceReadOnly_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;J)V", "(Ljava/lang/Class<*>;J)V", 0, $method(static_cast<void(VarHandleShorts$FieldInstanceReadOnly::*)($Class*,int64_t)>(&VarHandleShorts$FieldInstanceReadOnly::init$))},
	{"<init>", "(Ljava/lang/Class;JLjava/lang/invoke/VarForm;Z)V", "(Ljava/lang/Class<*>;JLjava/lang/invoke/VarForm;Z)V", $PROTECTED, $method(static_cast<void(VarHandleShorts$FieldInstanceReadOnly::*)($Class*,int64_t,$VarForm*,bool)>(&VarHandleShorts$FieldInstanceReadOnly::init$))},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL},
	{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC},
	{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*,Object$*)>(&VarHandleShorts$FieldInstanceReadOnly::get)), nullptr, nullptr, _VarHandleShorts$FieldInstanceReadOnly_MethodAnnotations_get4},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*,Object$*)>(&VarHandleShorts$FieldInstanceReadOnly::getAcquire)), nullptr, nullptr, _VarHandleShorts$FieldInstanceReadOnly_MethodAnnotations_getAcquire5},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*,Object$*)>(&VarHandleShorts$FieldInstanceReadOnly::getOpaque)), nullptr, nullptr, _VarHandleShorts$FieldInstanceReadOnly_MethodAnnotations_getOpaque6},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*,Object$*)>(&VarHandleShorts$FieldInstanceReadOnly::getVolatile)), nullptr, nullptr, _VarHandleShorts$FieldInstanceReadOnly_MethodAnnotations_getVolatile7},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleShorts$FieldInstanceReadOnly;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleShorts$FieldInstanceReadOnly;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleShorts$FieldInstanceReadOnly_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleShorts$FieldInstanceReadOnly", "java.lang.invoke.VarHandleShorts", "FieldInstanceReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleShorts$FieldInstanceReadOnly_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.VarHandleShorts$FieldInstanceReadOnly",
	"java.lang.invoke.VarHandle",
	nullptr,
	_VarHandleShorts$FieldInstanceReadOnly_FieldInfo_,
	_VarHandleShorts$FieldInstanceReadOnly_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleShorts$FieldInstanceReadOnly_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleShorts"
};

$Object* allocate$VarHandleShorts$FieldInstanceReadOnly($Class* clazz) {
	return $of($alloc(VarHandleShorts$FieldInstanceReadOnly));
}

$VarForm* VarHandleShorts$FieldInstanceReadOnly::FORM = nullptr;

void VarHandleShorts$FieldInstanceReadOnly::init$($Class* receiverType, int64_t fieldOffset) {
	VarHandleShorts$FieldInstanceReadOnly::init$(receiverType, fieldOffset, VarHandleShorts$FieldInstanceReadOnly::FORM, false);
}

void VarHandleShorts$FieldInstanceReadOnly::init$($Class* receiverType, int64_t fieldOffset, $VarForm* form, bool exact) {
	$VarHandle::init$(form, exact);
	this->fieldOffset = fieldOffset;
	$set(this, receiverType, receiverType);
}

VarHandleShorts$FieldInstanceReadOnly* VarHandleShorts$FieldInstanceReadOnly::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleShorts$FieldInstanceReadOnly, this->receiverType, this->fieldOffset, this->vform, true);
}

VarHandleShorts$FieldInstanceReadOnly* VarHandleShorts$FieldInstanceReadOnly::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleShorts$FieldInstanceReadOnly, this->receiverType, this->fieldOffset, this->vform, false);
}

$MethodType* VarHandleShorts$FieldInstanceReadOnly::accessModeTypeUncached($VarHandle$AccessType* at) {
	$init($Short);
	return $nc(at)->accessModeType(this->receiverType, $Short::TYPE, $$new($ClassArray, 0));
}

$Optional* VarHandleShorts$FieldInstanceReadOnly::describeConstable() {
	$useLocalCurrentObjectStackCache();
	$var($Optional, receiverTypeRef, $nc(this->receiverType)->describeConstable());
	$init($Short);
	$var($Optional, fieldTypeRef, $nc($Short::TYPE)->describeConstable());
	bool var$0 = !$nc(receiverTypeRef)->isPresent();
	if (var$0 || !$nc(fieldTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($String, name, $nc($($VarHandles::getFieldFromReceiverAndOffset(this->receiverType, this->fieldOffset, $Short::TYPE)))->getName());
	$var($ClassDesc, var$1, $cast($ClassDesc, $nc(receiverTypeRef)->get()));
	$var($String, var$2, name);
	return $Optional::of($($VarHandle$VarHandleDesc::ofField(var$1, var$2, $cast($ClassDesc, $($nc(fieldTypeRef)->get())))));
}

int16_t VarHandleShorts$FieldInstanceReadOnly::get($VarHandle* ob, Object$* holder) {
	$init(VarHandleShorts$FieldInstanceReadOnly);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleShorts$FieldInstanceReadOnly, handle, $cast(VarHandleShorts$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getShort($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

int16_t VarHandleShorts$FieldInstanceReadOnly::getVolatile($VarHandle* ob, Object$* holder) {
	$init(VarHandleShorts$FieldInstanceReadOnly);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleShorts$FieldInstanceReadOnly, handle, $cast(VarHandleShorts$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getShortVolatile($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

int16_t VarHandleShorts$FieldInstanceReadOnly::getOpaque($VarHandle* ob, Object$* holder) {
	$init(VarHandleShorts$FieldInstanceReadOnly);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleShorts$FieldInstanceReadOnly, handle, $cast(VarHandleShorts$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getShortOpaque($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

int16_t VarHandleShorts$FieldInstanceReadOnly::getAcquire($VarHandle* ob, Object$* holder) {
	$init(VarHandleShorts$FieldInstanceReadOnly);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleShorts$FieldInstanceReadOnly, handle, $cast(VarHandleShorts$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getShortAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

void clinit$VarHandleShorts$FieldInstanceReadOnly($Class* class$) {
	$init($Short);
	$assignStatic(VarHandleShorts$FieldInstanceReadOnly::FORM, $new($VarForm, VarHandleShorts$FieldInstanceReadOnly::class$, $Object::class$, $Short::TYPE, $$new($ClassArray, 0)));
}

VarHandleShorts$FieldInstanceReadOnly::VarHandleShorts$FieldInstanceReadOnly() {
}

$Class* VarHandleShorts$FieldInstanceReadOnly::load$($String* name, bool initialize) {
	$loadClass(VarHandleShorts$FieldInstanceReadOnly, name, initialize, &_VarHandleShorts$FieldInstanceReadOnly_ClassInfo_, clinit$VarHandleShorts$FieldInstanceReadOnly, allocate$VarHandleShorts$FieldInstanceReadOnly);
	return class$;
}

$Class* VarHandleShorts$FieldInstanceReadOnly::class$ = nullptr;

		} // invoke
	} // lang
} // java