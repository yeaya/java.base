#include <java/lang/invoke/VarHandleBytes$FieldStaticReadWrite.h>

#include <java/lang/Array.h>
#include <java/lang/Byte.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleBytes$FieldStaticReadOnly.h>
#include <java/lang/invoke/VarHandleBytes.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef FORM
#undef TYPE
#undef UNSAFE

using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandleBytes = ::java::lang::invoke::VarHandleBytes;
using $VarHandleBytes$FieldStaticReadOnly = ::java::lang::invoke::VarHandleBytes$FieldStaticReadOnly;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_compareAndExchange2[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_compareAndExchangeAcquire3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_compareAndExchangeRelease4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_compareAndSet5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_getAndAdd6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_getAndAddAcquire7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_getAndAddRelease8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseAnd9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseAndAcquire10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseAndRelease11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseOr12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseOrAcquire13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseOrRelease14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseXor15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseXorAcquire16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseXorRelease17[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_getAndSet18[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_getAndSetAcquire19[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_getAndSetRelease20[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_set21[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_setOpaque22[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_setRelease23[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_setVolatile24[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSet25[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetAcquire26[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetPlain27[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetRelease28[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleBytes$FieldStaticReadWrite_FieldInfo_[] = {
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleBytes$FieldStaticReadWrite, FORM)},
	{}
};

$MethodInfo _VarHandleBytes$FieldStaticReadWrite_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;J)V", nullptr, 0, $method(static_cast<void(VarHandleBytes$FieldStaticReadWrite::*)(Object$*,int64_t)>(&VarHandleBytes$FieldStaticReadWrite::init$))},
	{"<init>", "(Ljava/lang/Object;JZ)V", nullptr, $PRIVATE, $method(static_cast<void(VarHandleBytes$FieldStaticReadWrite::*)(Object$*,int64_t,bool)>(&VarHandleBytes$FieldStaticReadWrite::init$))},
	{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;BB)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,int8_t,int8_t)>(&VarHandleBytes$FieldStaticReadWrite::compareAndExchange)), nullptr, nullptr, _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_compareAndExchange2},
	{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;BB)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,int8_t,int8_t)>(&VarHandleBytes$FieldStaticReadWrite::compareAndExchangeAcquire)), nullptr, nullptr, _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_compareAndExchangeAcquire3},
	{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;BB)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,int8_t,int8_t)>(&VarHandleBytes$FieldStaticReadWrite::compareAndExchangeRelease)), nullptr, nullptr, _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_compareAndExchangeRelease4},
	{"compareAndSet", "(Ljava/lang/invoke/VarHandle;BB)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,int8_t,int8_t)>(&VarHandleBytes$FieldStaticReadWrite::compareAndSet)), nullptr, nullptr, _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_compareAndSet5},
	{"getAndAdd", "(Ljava/lang/invoke/VarHandle;B)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,int8_t)>(&VarHandleBytes$FieldStaticReadWrite::getAndAdd)), nullptr, nullptr, _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_getAndAdd6},
	{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;B)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,int8_t)>(&VarHandleBytes$FieldStaticReadWrite::getAndAddAcquire)), nullptr, nullptr, _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_getAndAddAcquire7},
	{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;B)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,int8_t)>(&VarHandleBytes$FieldStaticReadWrite::getAndAddRelease)), nullptr, nullptr, _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_getAndAddRelease8},
	{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;B)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,int8_t)>(&VarHandleBytes$FieldStaticReadWrite::getAndBitwiseAnd)), nullptr, nullptr, _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseAnd9},
	{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;B)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,int8_t)>(&VarHandleBytes$FieldStaticReadWrite::getAndBitwiseAndAcquire)), nullptr, nullptr, _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseAndAcquire10},
	{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;B)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,int8_t)>(&VarHandleBytes$FieldStaticReadWrite::getAndBitwiseAndRelease)), nullptr, nullptr, _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseAndRelease11},
	{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;B)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,int8_t)>(&VarHandleBytes$FieldStaticReadWrite::getAndBitwiseOr)), nullptr, nullptr, _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseOr12},
	{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;B)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,int8_t)>(&VarHandleBytes$FieldStaticReadWrite::getAndBitwiseOrAcquire)), nullptr, nullptr, _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseOrAcquire13},
	{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;B)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,int8_t)>(&VarHandleBytes$FieldStaticReadWrite::getAndBitwiseOrRelease)), nullptr, nullptr, _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseOrRelease14},
	{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;B)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,int8_t)>(&VarHandleBytes$FieldStaticReadWrite::getAndBitwiseXor)), nullptr, nullptr, _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseXor15},
	{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;B)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,int8_t)>(&VarHandleBytes$FieldStaticReadWrite::getAndBitwiseXorAcquire)), nullptr, nullptr, _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseXorAcquire16},
	{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;B)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,int8_t)>(&VarHandleBytes$FieldStaticReadWrite::getAndBitwiseXorRelease)), nullptr, nullptr, _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseXorRelease17},
	{"getAndSet", "(Ljava/lang/invoke/VarHandle;B)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,int8_t)>(&VarHandleBytes$FieldStaticReadWrite::getAndSet)), nullptr, nullptr, _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_getAndSet18},
	{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;B)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,int8_t)>(&VarHandleBytes$FieldStaticReadWrite::getAndSetAcquire)), nullptr, nullptr, _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_getAndSetAcquire19},
	{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;B)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,int8_t)>(&VarHandleBytes$FieldStaticReadWrite::getAndSetRelease)), nullptr, nullptr, _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_getAndSetRelease20},
	{"set", "(Ljava/lang/invoke/VarHandle;B)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,int8_t)>(&VarHandleBytes$FieldStaticReadWrite::set)), nullptr, nullptr, _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_set21},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;B)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,int8_t)>(&VarHandleBytes$FieldStaticReadWrite::setOpaque)), nullptr, nullptr, _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_setOpaque22},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;B)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,int8_t)>(&VarHandleBytes$FieldStaticReadWrite::setRelease)), nullptr, nullptr, _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_setRelease23},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;B)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,int8_t)>(&VarHandleBytes$FieldStaticReadWrite::setVolatile)), nullptr, nullptr, _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_setVolatile24},
	{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;BB)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,int8_t,int8_t)>(&VarHandleBytes$FieldStaticReadWrite::weakCompareAndSet)), nullptr, nullptr, _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSet25},
	{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;BB)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,int8_t,int8_t)>(&VarHandleBytes$FieldStaticReadWrite::weakCompareAndSetAcquire)), nullptr, nullptr, _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetAcquire26},
	{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;BB)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,int8_t,int8_t)>(&VarHandleBytes$FieldStaticReadWrite::weakCompareAndSetPlain)), nullptr, nullptr, _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetPlain27},
	{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;BB)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,int8_t,int8_t)>(&VarHandleBytes$FieldStaticReadWrite::weakCompareAndSetRelease)), nullptr, nullptr, _VarHandleBytes$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetRelease28},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleBytes$FieldStaticReadWrite;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleBytes$FieldStaticReadWrite;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleBytes$FieldStaticReadWrite_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleBytes$FieldStaticReadWrite", "java.lang.invoke.VarHandleBytes", "FieldStaticReadWrite", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleBytes$FieldStaticReadOnly", "java.lang.invoke.VarHandleBytes", "FieldStaticReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleBytes$FieldStaticReadWrite_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleBytes$FieldStaticReadWrite",
	"java.lang.invoke.VarHandleBytes$FieldStaticReadOnly",
	nullptr,
	_VarHandleBytes$FieldStaticReadWrite_FieldInfo_,
	_VarHandleBytes$FieldStaticReadWrite_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleBytes$FieldStaticReadWrite_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleBytes"
};

$Object* allocate$VarHandleBytes$FieldStaticReadWrite($Class* clazz) {
	return $of($alloc(VarHandleBytes$FieldStaticReadWrite));
}

$VarForm* VarHandleBytes$FieldStaticReadWrite::FORM = nullptr;

void VarHandleBytes$FieldStaticReadWrite::init$(Object$* base, int64_t fieldOffset) {
	VarHandleBytes$FieldStaticReadWrite::init$(base, fieldOffset, false);
}

void VarHandleBytes$FieldStaticReadWrite::init$(Object$* base, int64_t fieldOffset, bool exact) {
	$VarHandleBytes$FieldStaticReadOnly::init$(base, fieldOffset, VarHandleBytes$FieldStaticReadWrite::FORM, exact);
}

VarHandleBytes$FieldStaticReadWrite* VarHandleBytes$FieldStaticReadWrite::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleBytes$FieldStaticReadWrite, this->base, this->fieldOffset, true);
}

VarHandleBytes$FieldStaticReadWrite* VarHandleBytes$FieldStaticReadWrite::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleBytes$FieldStaticReadWrite, this->base, this->fieldOffset, false);
}

void VarHandleBytes$FieldStaticReadWrite::set($VarHandle* ob, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putByte($nc(handle)->base, handle->fieldOffset, value);
}

void VarHandleBytes$FieldStaticReadWrite::setVolatile($VarHandle* ob, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putByteVolatile($nc(handle)->base, handle->fieldOffset, value);
}

void VarHandleBytes$FieldStaticReadWrite::setOpaque($VarHandle* ob, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putByteOpaque($nc(handle)->base, handle->fieldOffset, value);
}

void VarHandleBytes$FieldStaticReadWrite::setRelease($VarHandle* ob, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putByteRelease($nc(handle)->base, handle->fieldOffset, value);
}

bool VarHandleBytes$FieldStaticReadWrite::compareAndSet($VarHandle* ob, int8_t expected, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetByte($nc(handle)->base, handle->fieldOffset, expected, value);
}

int8_t VarHandleBytes$FieldStaticReadWrite::compareAndExchange($VarHandle* ob, int8_t expected, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeByte($nc(handle)->base, handle->fieldOffset, expected, value);
}

int8_t VarHandleBytes$FieldStaticReadWrite::compareAndExchangeAcquire($VarHandle* ob, int8_t expected, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeByteAcquire($nc(handle)->base, handle->fieldOffset, expected, value);
}

int8_t VarHandleBytes$FieldStaticReadWrite::compareAndExchangeRelease($VarHandle* ob, int8_t expected, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeByteRelease($nc(handle)->base, handle->fieldOffset, expected, value);
}

bool VarHandleBytes$FieldStaticReadWrite::weakCompareAndSetPlain($VarHandle* ob, int8_t expected, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetBytePlain($nc(handle)->base, handle->fieldOffset, expected, value);
}

bool VarHandleBytes$FieldStaticReadWrite::weakCompareAndSet($VarHandle* ob, int8_t expected, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetByte($nc(handle)->base, handle->fieldOffset, expected, value);
}

bool VarHandleBytes$FieldStaticReadWrite::weakCompareAndSetAcquire($VarHandle* ob, int8_t expected, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetByteAcquire($nc(handle)->base, handle->fieldOffset, expected, value);
}

bool VarHandleBytes$FieldStaticReadWrite::weakCompareAndSetRelease($VarHandle* ob, int8_t expected, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetByteRelease($nc(handle)->base, handle->fieldOffset, expected, value);
}

int8_t VarHandleBytes$FieldStaticReadWrite::getAndSet($VarHandle* ob, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetByte($nc(handle)->base, handle->fieldOffset, value);
}

int8_t VarHandleBytes$FieldStaticReadWrite::getAndSetAcquire($VarHandle* ob, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetByteAcquire($nc(handle)->base, handle->fieldOffset, value);
}

int8_t VarHandleBytes$FieldStaticReadWrite::getAndSetRelease($VarHandle* ob, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetByteRelease($nc(handle)->base, handle->fieldOffset, value);
}

int8_t VarHandleBytes$FieldStaticReadWrite::getAndAdd($VarHandle* ob, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddByte($nc(handle)->base, handle->fieldOffset, value);
}

int8_t VarHandleBytes$FieldStaticReadWrite::getAndAddAcquire($VarHandle* ob, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddByteAcquire($nc(handle)->base, handle->fieldOffset, value);
}

int8_t VarHandleBytes$FieldStaticReadWrite::getAndAddRelease($VarHandle* ob, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddByteRelease($nc(handle)->base, handle->fieldOffset, value);
}

int8_t VarHandleBytes$FieldStaticReadWrite::getAndBitwiseOr($VarHandle* ob, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrByte($nc(handle)->base, handle->fieldOffset, value);
}

int8_t VarHandleBytes$FieldStaticReadWrite::getAndBitwiseOrRelease($VarHandle* ob, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrByteRelease($nc(handle)->base, handle->fieldOffset, value);
}

int8_t VarHandleBytes$FieldStaticReadWrite::getAndBitwiseOrAcquire($VarHandle* ob, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrByteAcquire($nc(handle)->base, handle->fieldOffset, value);
}

int8_t VarHandleBytes$FieldStaticReadWrite::getAndBitwiseAnd($VarHandle* ob, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndByte($nc(handle)->base, handle->fieldOffset, value);
}

int8_t VarHandleBytes$FieldStaticReadWrite::getAndBitwiseAndRelease($VarHandle* ob, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndByteRelease($nc(handle)->base, handle->fieldOffset, value);
}

int8_t VarHandleBytes$FieldStaticReadWrite::getAndBitwiseAndAcquire($VarHandle* ob, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndByteAcquire($nc(handle)->base, handle->fieldOffset, value);
}

int8_t VarHandleBytes$FieldStaticReadWrite::getAndBitwiseXor($VarHandle* ob, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorByte($nc(handle)->base, handle->fieldOffset, value);
}

int8_t VarHandleBytes$FieldStaticReadWrite::getAndBitwiseXorRelease($VarHandle* ob, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorByteRelease($nc(handle)->base, handle->fieldOffset, value);
}

int8_t VarHandleBytes$FieldStaticReadWrite::getAndBitwiseXorAcquire($VarHandle* ob, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorByteAcquire($nc(handle)->base, handle->fieldOffset, value);
}

void clinit$VarHandleBytes$FieldStaticReadWrite($Class* class$) {
	$init($Byte);
	$assignStatic(VarHandleBytes$FieldStaticReadWrite::FORM, $new($VarForm, VarHandleBytes$FieldStaticReadWrite::class$, nullptr, $Byte::TYPE, $$new($ClassArray, 0)));
}

VarHandleBytes$FieldStaticReadWrite::VarHandleBytes$FieldStaticReadWrite() {
}

$Class* VarHandleBytes$FieldStaticReadWrite::load$($String* name, bool initialize) {
	$loadClass(VarHandleBytes$FieldStaticReadWrite, name, initialize, &_VarHandleBytes$FieldStaticReadWrite_ClassInfo_, clinit$VarHandleBytes$FieldStaticReadWrite, allocate$VarHandleBytes$FieldStaticReadWrite);
	return class$;
}

$Class* VarHandleBytes$FieldStaticReadWrite::class$ = nullptr;

		} // invoke
	} // lang
} // java