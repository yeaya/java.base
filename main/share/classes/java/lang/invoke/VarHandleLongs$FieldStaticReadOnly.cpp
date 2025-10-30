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
using $VarHandleLongs = ::java::lang::invoke::VarHandleLongs;
using $VarHandles = ::java::lang::invoke::VarHandles;
using $Field = ::java::lang::reflect::Field;
using $Optional = ::java::util::Optional;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleLongs$FieldStaticReadOnly_MethodAnnotations_get4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldStaticReadOnly_MethodAnnotations_getAcquire5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldStaticReadOnly_MethodAnnotations_getOpaque6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldStaticReadOnly_MethodAnnotations_getVolatile7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleLongs$FieldStaticReadOnly_FieldInfo_[] = {
	{"base", "Ljava/lang/Object;", nullptr, $FINAL, $field(VarHandleLongs$FieldStaticReadOnly, base)},
	{"fieldOffset", "J", nullptr, $FINAL, $field(VarHandleLongs$FieldStaticReadOnly, fieldOffset)},
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleLongs$FieldStaticReadOnly, FORM)},
	{}
};

$MethodInfo _VarHandleLongs$FieldStaticReadOnly_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;J)V", nullptr, 0, $method(static_cast<void(VarHandleLongs$FieldStaticReadOnly::*)(Object$*,int64_t)>(&VarHandleLongs$FieldStaticReadOnly::init$))},
	{"<init>", "(Ljava/lang/Object;JLjava/lang/invoke/VarForm;Z)V", nullptr, $PROTECTED, $method(static_cast<void(VarHandleLongs$FieldStaticReadOnly::*)(Object$*,int64_t,$VarForm*,bool)>(&VarHandleLongs$FieldStaticReadOnly::init$))},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL},
	{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC},
	{"get", "(Ljava/lang/invoke/VarHandle;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*)>(&VarHandleLongs$FieldStaticReadOnly::get)), nullptr, nullptr, _VarHandleLongs$FieldStaticReadOnly_MethodAnnotations_get4},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*)>(&VarHandleLongs$FieldStaticReadOnly::getAcquire)), nullptr, nullptr, _VarHandleLongs$FieldStaticReadOnly_MethodAnnotations_getAcquire5},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*)>(&VarHandleLongs$FieldStaticReadOnly::getOpaque)), nullptr, nullptr, _VarHandleLongs$FieldStaticReadOnly_MethodAnnotations_getOpaque6},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*)>(&VarHandleLongs$FieldStaticReadOnly::getVolatile)), nullptr, nullptr, _VarHandleLongs$FieldStaticReadOnly_MethodAnnotations_getVolatile7},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleLongs$FieldStaticReadOnly;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleLongs$FieldStaticReadOnly;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleLongs$FieldStaticReadOnly_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleLongs$FieldStaticReadOnly", "java.lang.invoke.VarHandleLongs", "FieldStaticReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleLongs$FieldStaticReadOnly_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.VarHandleLongs$FieldStaticReadOnly",
	"java.lang.invoke.VarHandle",
	nullptr,
	_VarHandleLongs$FieldStaticReadOnly_FieldInfo_,
	_VarHandleLongs$FieldStaticReadOnly_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleLongs$FieldStaticReadOnly_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleLongs"
};

$Object* allocate$VarHandleLongs$FieldStaticReadOnly($Class* clazz) {
	return $of($alloc(VarHandleLongs$FieldStaticReadOnly));
}

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
	$useLocalCurrentObjectStackCache();
	$init($Long);
	$var($Optional, fieldTypeRef, $nc($Long::TYPE)->describeConstable());
	if (!$nc(fieldTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($Field, staticField, $VarHandles::getStaticFieldFromBaseAndOffset(this->base, this->fieldOffset, $Long::TYPE));
	$var($Optional, receiverTypeRef, $nc($nc(staticField)->getDeclaringClass())->describeConstable());
	if (!$nc(receiverTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	$var($ClassDesc, var$0, $cast($ClassDesc, $nc(receiverTypeRef)->get()));
	$var($String, var$1, staticField->getName());
	return $Optional::of($($VarHandle$VarHandleDesc::ofStaticField(var$0, var$1, $cast($ClassDesc, $($nc(fieldTypeRef)->get())))));
}

$MethodType* VarHandleLongs$FieldStaticReadOnly::accessModeTypeUncached($VarHandle$AccessType* at) {
	$init($Long);
	return $nc(at)->accessModeType(nullptr, $Long::TYPE, $$new($ClassArray, 0));
}

int64_t VarHandleLongs$FieldStaticReadOnly::get($VarHandle* ob) {
	$init(VarHandleLongs$FieldStaticReadOnly);
	$var(VarHandleLongs$FieldStaticReadOnly, handle, $cast(VarHandleLongs$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getLong($nc(handle)->base, handle->fieldOffset);
}

int64_t VarHandleLongs$FieldStaticReadOnly::getVolatile($VarHandle* ob) {
	$init(VarHandleLongs$FieldStaticReadOnly);
	$var(VarHandleLongs$FieldStaticReadOnly, handle, $cast(VarHandleLongs$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getLongVolatile($nc(handle)->base, handle->fieldOffset);
}

int64_t VarHandleLongs$FieldStaticReadOnly::getOpaque($VarHandle* ob) {
	$init(VarHandleLongs$FieldStaticReadOnly);
	$var(VarHandleLongs$FieldStaticReadOnly, handle, $cast(VarHandleLongs$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getLongOpaque($nc(handle)->base, handle->fieldOffset);
}

int64_t VarHandleLongs$FieldStaticReadOnly::getAcquire($VarHandle* ob) {
	$init(VarHandleLongs$FieldStaticReadOnly);
	$var(VarHandleLongs$FieldStaticReadOnly, handle, $cast(VarHandleLongs$FieldStaticReadOnly, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getLongAcquire($nc(handle)->base, handle->fieldOffset);
}

void clinit$VarHandleLongs$FieldStaticReadOnly($Class* class$) {
	$init($Long);
	$assignStatic(VarHandleLongs$FieldStaticReadOnly::FORM, $new($VarForm, VarHandleLongs$FieldStaticReadOnly::class$, nullptr, $Long::TYPE, $$new($ClassArray, 0)));
}

VarHandleLongs$FieldStaticReadOnly::VarHandleLongs$FieldStaticReadOnly() {
}

$Class* VarHandleLongs$FieldStaticReadOnly::load$($String* name, bool initialize) {
	$loadClass(VarHandleLongs$FieldStaticReadOnly, name, initialize, &_VarHandleLongs$FieldStaticReadOnly_ClassInfo_, clinit$VarHandleLongs$FieldStaticReadOnly, allocate$VarHandleLongs$FieldStaticReadOnly);
	return class$;
}

$Class* VarHandleLongs$FieldStaticReadOnly::class$ = nullptr;

		} // invoke
	} // lang
} // java