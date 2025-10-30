#include <java/lang/invoke/VarHandleLongs$FieldInstanceReadOnly.h>

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
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClassDesc = ::java::lang::constant::ClassDesc;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodType = ::java::lang::invoke::MethodType;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandle$AccessType = ::java::lang::invoke::VarHandle$AccessType;
using $VarHandle$VarHandleDesc = ::java::lang::invoke::VarHandle$VarHandleDesc;
using $VarHandleLongs = ::java::lang::invoke::VarHandleLongs;
using $VarHandles = ::java::lang::invoke::VarHandles;
using $Field = ::java::lang::reflect::Field;
using $Objects = ::java::util::Objects;
using $Optional = ::java::util::Optional;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleLongs$FieldInstanceReadOnly_MethodAnnotations_get4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldInstanceReadOnly_MethodAnnotations_getAcquire5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldInstanceReadOnly_MethodAnnotations_getOpaque6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldInstanceReadOnly_MethodAnnotations_getVolatile7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleLongs$FieldInstanceReadOnly_FieldInfo_[] = {
	{"fieldOffset", "J", nullptr, $FINAL, $field(VarHandleLongs$FieldInstanceReadOnly, fieldOffset)},
	{"receiverType", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(VarHandleLongs$FieldInstanceReadOnly, receiverType)},
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleLongs$FieldInstanceReadOnly, FORM)},
	{}
};

$MethodInfo _VarHandleLongs$FieldInstanceReadOnly_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;J)V", "(Ljava/lang/Class<*>;J)V", 0, $method(static_cast<void(VarHandleLongs$FieldInstanceReadOnly::*)($Class*,int64_t)>(&VarHandleLongs$FieldInstanceReadOnly::init$))},
	{"<init>", "(Ljava/lang/Class;JLjava/lang/invoke/VarForm;Z)V", "(Ljava/lang/Class<*>;JLjava/lang/invoke/VarForm;Z)V", $PROTECTED, $method(static_cast<void(VarHandleLongs$FieldInstanceReadOnly::*)($Class*,int64_t,$VarForm*,bool)>(&VarHandleLongs$FieldInstanceReadOnly::init$))},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL},
	{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC},
	{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*)>(&VarHandleLongs$FieldInstanceReadOnly::get)), nullptr, nullptr, _VarHandleLongs$FieldInstanceReadOnly_MethodAnnotations_get4},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*)>(&VarHandleLongs$FieldInstanceReadOnly::getAcquire)), nullptr, nullptr, _VarHandleLongs$FieldInstanceReadOnly_MethodAnnotations_getAcquire5},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*)>(&VarHandleLongs$FieldInstanceReadOnly::getOpaque)), nullptr, nullptr, _VarHandleLongs$FieldInstanceReadOnly_MethodAnnotations_getOpaque6},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*)>(&VarHandleLongs$FieldInstanceReadOnly::getVolatile)), nullptr, nullptr, _VarHandleLongs$FieldInstanceReadOnly_MethodAnnotations_getVolatile7},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleLongs$FieldInstanceReadOnly;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleLongs$FieldInstanceReadOnly;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleLongs$FieldInstanceReadOnly_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleLongs$FieldInstanceReadOnly", "java.lang.invoke.VarHandleLongs", "FieldInstanceReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleLongs$FieldInstanceReadOnly_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.VarHandleLongs$FieldInstanceReadOnly",
	"java.lang.invoke.VarHandle",
	nullptr,
	_VarHandleLongs$FieldInstanceReadOnly_FieldInfo_,
	_VarHandleLongs$FieldInstanceReadOnly_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleLongs$FieldInstanceReadOnly_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleLongs"
};

$Object* allocate$VarHandleLongs$FieldInstanceReadOnly($Class* clazz) {
	return $of($alloc(VarHandleLongs$FieldInstanceReadOnly));
}

$VarForm* VarHandleLongs$FieldInstanceReadOnly::FORM = nullptr;

void VarHandleLongs$FieldInstanceReadOnly::init$($Class* receiverType, int64_t fieldOffset) {
	VarHandleLongs$FieldInstanceReadOnly::init$(receiverType, fieldOffset, VarHandleLongs$FieldInstanceReadOnly::FORM, false);
}

void VarHandleLongs$FieldInstanceReadOnly::init$($Class* receiverType, int64_t fieldOffset, $VarForm* form, bool exact) {
	$VarHandle::init$(form, exact);
	this->fieldOffset = fieldOffset;
	$set(this, receiverType, receiverType);
}

VarHandleLongs$FieldInstanceReadOnly* VarHandleLongs$FieldInstanceReadOnly::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleLongs$FieldInstanceReadOnly, this->receiverType, this->fieldOffset, this->vform, true);
}

VarHandleLongs$FieldInstanceReadOnly* VarHandleLongs$FieldInstanceReadOnly::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleLongs$FieldInstanceReadOnly, this->receiverType, this->fieldOffset, this->vform, false);
}

$MethodType* VarHandleLongs$FieldInstanceReadOnly::accessModeTypeUncached($VarHandle$AccessType* at) {
	$init($Long);
	return $nc(at)->accessModeType(this->receiverType, $Long::TYPE, $$new($ClassArray, 0));
}

$Optional* VarHandleLongs$FieldInstanceReadOnly::describeConstable() {
	$useLocalCurrentObjectStackCache();
	$var($Optional, receiverTypeRef, $nc(this->receiverType)->describeConstable());
	$init($Long);
	$var($Optional, fieldTypeRef, $nc($Long::TYPE)->describeConstable());
	bool var$0 = !$nc(receiverTypeRef)->isPresent();
	if (var$0 || !$nc(fieldTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($String, name, $nc($($VarHandles::getFieldFromReceiverAndOffset(this->receiverType, this->fieldOffset, $Long::TYPE)))->getName());
	$var($ClassDesc, var$1, $cast($ClassDesc, $nc(receiverTypeRef)->get()));
	$var($String, var$2, name);
	return $Optional::of($($VarHandle$VarHandleDesc::ofField(var$1, var$2, $cast($ClassDesc, $($nc(fieldTypeRef)->get())))));
}

int64_t VarHandleLongs$FieldInstanceReadOnly::get($VarHandle* ob, Object$* holder) {
	$init(VarHandleLongs$FieldInstanceReadOnly);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleLongs$FieldInstanceReadOnly, handle, $cast(VarHandleLongs$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getLong($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

int64_t VarHandleLongs$FieldInstanceReadOnly::getVolatile($VarHandle* ob, Object$* holder) {
	$init(VarHandleLongs$FieldInstanceReadOnly);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleLongs$FieldInstanceReadOnly, handle, $cast(VarHandleLongs$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getLongVolatile($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

int64_t VarHandleLongs$FieldInstanceReadOnly::getOpaque($VarHandle* ob, Object$* holder) {
	$init(VarHandleLongs$FieldInstanceReadOnly);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleLongs$FieldInstanceReadOnly, handle, $cast(VarHandleLongs$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getLongOpaque($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

int64_t VarHandleLongs$FieldInstanceReadOnly::getAcquire($VarHandle* ob, Object$* holder) {
	$init(VarHandleLongs$FieldInstanceReadOnly);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleLongs$FieldInstanceReadOnly, handle, $cast(VarHandleLongs$FieldInstanceReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getLongAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset);
}

void clinit$VarHandleLongs$FieldInstanceReadOnly($Class* class$) {
	$init($Long);
	$assignStatic(VarHandleLongs$FieldInstanceReadOnly::FORM, $new($VarForm, VarHandleLongs$FieldInstanceReadOnly::class$, $Object::class$, $Long::TYPE, $$new($ClassArray, 0)));
}

VarHandleLongs$FieldInstanceReadOnly::VarHandleLongs$FieldInstanceReadOnly() {
}

$Class* VarHandleLongs$FieldInstanceReadOnly::load$($String* name, bool initialize) {
	$loadClass(VarHandleLongs$FieldInstanceReadOnly, name, initialize, &_VarHandleLongs$FieldInstanceReadOnly_ClassInfo_, clinit$VarHandleLongs$FieldInstanceReadOnly, allocate$VarHandleLongs$FieldInstanceReadOnly);
	return class$;
}

$Class* VarHandleLongs$FieldInstanceReadOnly::class$ = nullptr;

		} // invoke
	} // lang
} // java