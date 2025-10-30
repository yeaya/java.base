#include <java/lang/invoke/VarHandleBytes$FieldInstanceReadWrite.h>

#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleBytes$FieldInstanceReadOnly.h>
#include <java/lang/invoke/VarHandleBytes.h>
#include <java/util/Objects.h>
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
using $VarHandleBytes$FieldInstanceReadOnly = ::java::lang::invoke::VarHandleBytes$FieldInstanceReadOnly;
using $Objects = ::java::util::Objects;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_compareAndExchange2[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_compareAndExchangeAcquire3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_compareAndExchangeRelease4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_compareAndSet5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_getAndAdd6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_getAndAddAcquire7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_getAndAddRelease8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseAnd9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseAndAcquire10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseAndRelease11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseOr12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseOrAcquire13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseOrRelease14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseXor15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseXorAcquire16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseXorRelease17[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_getAndSet18[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_getAndSetAcquire19[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_getAndSetRelease20[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_set21[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_setOpaque22[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_setRelease23[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_setVolatile24[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSet25[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetAcquire26[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetPlain27[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetRelease28[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleBytes$FieldInstanceReadWrite_FieldInfo_[] = {
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleBytes$FieldInstanceReadWrite, FORM)},
	{}
};

$MethodInfo _VarHandleBytes$FieldInstanceReadWrite_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;J)V", "(Ljava/lang/Class<*>;J)V", 0, $method(static_cast<void(VarHandleBytes$FieldInstanceReadWrite::*)($Class*,int64_t)>(&VarHandleBytes$FieldInstanceReadWrite::init$))},
	{"<init>", "(Ljava/lang/Class;JZ)V", "(Ljava/lang/Class<*>;JZ)V", $PRIVATE, $method(static_cast<void(VarHandleBytes$FieldInstanceReadWrite::*)($Class*,int64_t,bool)>(&VarHandleBytes$FieldInstanceReadWrite::init$))},
	{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;BB)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int8_t,int8_t)>(&VarHandleBytes$FieldInstanceReadWrite::compareAndExchange)), nullptr, nullptr, _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_compareAndExchange2},
	{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;BB)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int8_t,int8_t)>(&VarHandleBytes$FieldInstanceReadWrite::compareAndExchangeAcquire)), nullptr, nullptr, _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_compareAndExchangeAcquire3},
	{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;BB)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int8_t,int8_t)>(&VarHandleBytes$FieldInstanceReadWrite::compareAndExchangeRelease)), nullptr, nullptr, _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_compareAndExchangeRelease4},
	{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;BB)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int8_t,int8_t)>(&VarHandleBytes$FieldInstanceReadWrite::compareAndSet)), nullptr, nullptr, _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_compareAndSet5},
	{"getAndAdd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;B)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int8_t)>(&VarHandleBytes$FieldInstanceReadWrite::getAndAdd)), nullptr, nullptr, _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_getAndAdd6},
	{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;B)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int8_t)>(&VarHandleBytes$FieldInstanceReadWrite::getAndAddAcquire)), nullptr, nullptr, _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_getAndAddAcquire7},
	{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;B)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int8_t)>(&VarHandleBytes$FieldInstanceReadWrite::getAndAddRelease)), nullptr, nullptr, _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_getAndAddRelease8},
	{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;B)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int8_t)>(&VarHandleBytes$FieldInstanceReadWrite::getAndBitwiseAnd)), nullptr, nullptr, _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseAnd9},
	{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;B)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int8_t)>(&VarHandleBytes$FieldInstanceReadWrite::getAndBitwiseAndAcquire)), nullptr, nullptr, _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseAndAcquire10},
	{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;B)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int8_t)>(&VarHandleBytes$FieldInstanceReadWrite::getAndBitwiseAndRelease)), nullptr, nullptr, _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseAndRelease11},
	{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;B)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int8_t)>(&VarHandleBytes$FieldInstanceReadWrite::getAndBitwiseOr)), nullptr, nullptr, _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseOr12},
	{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;B)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int8_t)>(&VarHandleBytes$FieldInstanceReadWrite::getAndBitwiseOrAcquire)), nullptr, nullptr, _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseOrAcquire13},
	{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;B)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int8_t)>(&VarHandleBytes$FieldInstanceReadWrite::getAndBitwiseOrRelease)), nullptr, nullptr, _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseOrRelease14},
	{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;B)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int8_t)>(&VarHandleBytes$FieldInstanceReadWrite::getAndBitwiseXor)), nullptr, nullptr, _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseXor15},
	{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;B)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int8_t)>(&VarHandleBytes$FieldInstanceReadWrite::getAndBitwiseXorAcquire)), nullptr, nullptr, _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseXorAcquire16},
	{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;B)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int8_t)>(&VarHandleBytes$FieldInstanceReadWrite::getAndBitwiseXorRelease)), nullptr, nullptr, _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseXorRelease17},
	{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;B)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int8_t)>(&VarHandleBytes$FieldInstanceReadWrite::getAndSet)), nullptr, nullptr, _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_getAndSet18},
	{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;B)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int8_t)>(&VarHandleBytes$FieldInstanceReadWrite::getAndSetAcquire)), nullptr, nullptr, _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_getAndSetAcquire19},
	{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;B)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int8_t)>(&VarHandleBytes$FieldInstanceReadWrite::getAndSetRelease)), nullptr, nullptr, _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_getAndSetRelease20},
	{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;B)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int8_t)>(&VarHandleBytes$FieldInstanceReadWrite::set)), nullptr, nullptr, _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_set21},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;B)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int8_t)>(&VarHandleBytes$FieldInstanceReadWrite::setOpaque)), nullptr, nullptr, _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_setOpaque22},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;B)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int8_t)>(&VarHandleBytes$FieldInstanceReadWrite::setRelease)), nullptr, nullptr, _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_setRelease23},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;B)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int8_t)>(&VarHandleBytes$FieldInstanceReadWrite::setVolatile)), nullptr, nullptr, _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_setVolatile24},
	{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;BB)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int8_t,int8_t)>(&VarHandleBytes$FieldInstanceReadWrite::weakCompareAndSet)), nullptr, nullptr, _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSet25},
	{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;BB)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int8_t,int8_t)>(&VarHandleBytes$FieldInstanceReadWrite::weakCompareAndSetAcquire)), nullptr, nullptr, _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetAcquire26},
	{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;BB)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int8_t,int8_t)>(&VarHandleBytes$FieldInstanceReadWrite::weakCompareAndSetPlain)), nullptr, nullptr, _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetPlain27},
	{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;BB)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int8_t,int8_t)>(&VarHandleBytes$FieldInstanceReadWrite::weakCompareAndSetRelease)), nullptr, nullptr, _VarHandleBytes$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetRelease28},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleBytes$FieldInstanceReadWrite;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleBytes$FieldInstanceReadWrite;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleBytes$FieldInstanceReadWrite_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleBytes$FieldInstanceReadWrite", "java.lang.invoke.VarHandleBytes", "FieldInstanceReadWrite", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleBytes$FieldInstanceReadOnly", "java.lang.invoke.VarHandleBytes", "FieldInstanceReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleBytes$FieldInstanceReadWrite_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleBytes$FieldInstanceReadWrite",
	"java.lang.invoke.VarHandleBytes$FieldInstanceReadOnly",
	nullptr,
	_VarHandleBytes$FieldInstanceReadWrite_FieldInfo_,
	_VarHandleBytes$FieldInstanceReadWrite_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleBytes$FieldInstanceReadWrite_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleBytes"
};

$Object* allocate$VarHandleBytes$FieldInstanceReadWrite($Class* clazz) {
	return $of($alloc(VarHandleBytes$FieldInstanceReadWrite));
}

$VarForm* VarHandleBytes$FieldInstanceReadWrite::FORM = nullptr;

void VarHandleBytes$FieldInstanceReadWrite::init$($Class* receiverType, int64_t fieldOffset) {
	VarHandleBytes$FieldInstanceReadWrite::init$(receiverType, fieldOffset, false);
}

void VarHandleBytes$FieldInstanceReadWrite::init$($Class* receiverType, int64_t fieldOffset, bool exact) {
	$VarHandleBytes$FieldInstanceReadOnly::init$(receiverType, fieldOffset, VarHandleBytes$FieldInstanceReadWrite::FORM, exact);
}

VarHandleBytes$FieldInstanceReadWrite* VarHandleBytes$FieldInstanceReadWrite::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleBytes$FieldInstanceReadWrite, this->receiverType, this->fieldOffset, true);
}

VarHandleBytes$FieldInstanceReadWrite* VarHandleBytes$FieldInstanceReadWrite::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleBytes$FieldInstanceReadWrite, this->receiverType, this->fieldOffset, false);
}

void VarHandleBytes$FieldInstanceReadWrite::set($VarHandle* ob, Object$* holder, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putByte($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleBytes$FieldInstanceReadWrite::setVolatile($VarHandle* ob, Object$* holder, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putByteVolatile($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleBytes$FieldInstanceReadWrite::setOpaque($VarHandle* ob, Object$* holder, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putByteOpaque($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleBytes$FieldInstanceReadWrite::setRelease($VarHandle* ob, Object$* holder, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putByteRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

bool VarHandleBytes$FieldInstanceReadWrite::compareAndSet($VarHandle* ob, Object$* holder, int8_t expected, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetByte($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

int8_t VarHandleBytes$FieldInstanceReadWrite::compareAndExchange($VarHandle* ob, Object$* holder, int8_t expected, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeByte($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

int8_t VarHandleBytes$FieldInstanceReadWrite::compareAndExchangeAcquire($VarHandle* ob, Object$* holder, int8_t expected, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeByteAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

int8_t VarHandleBytes$FieldInstanceReadWrite::compareAndExchangeRelease($VarHandle* ob, Object$* holder, int8_t expected, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeByteRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleBytes$FieldInstanceReadWrite::weakCompareAndSetPlain($VarHandle* ob, Object$* holder, int8_t expected, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetBytePlain($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleBytes$FieldInstanceReadWrite::weakCompareAndSet($VarHandle* ob, Object$* holder, int8_t expected, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetByte($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleBytes$FieldInstanceReadWrite::weakCompareAndSetAcquire($VarHandle* ob, Object$* holder, int8_t expected, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetByteAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleBytes$FieldInstanceReadWrite::weakCompareAndSetRelease($VarHandle* ob, Object$* holder, int8_t expected, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetByteRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

int8_t VarHandleBytes$FieldInstanceReadWrite::getAndSet($VarHandle* ob, Object$* holder, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetByte($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldInstanceReadWrite::getAndSetAcquire($VarHandle* ob, Object$* holder, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetByteAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldInstanceReadWrite::getAndSetRelease($VarHandle* ob, Object$* holder, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetByteRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldInstanceReadWrite::getAndAdd($VarHandle* ob, Object$* holder, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddByte($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldInstanceReadWrite::getAndAddAcquire($VarHandle* ob, Object$* holder, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddByteAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldInstanceReadWrite::getAndAddRelease($VarHandle* ob, Object$* holder, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddByteRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldInstanceReadWrite::getAndBitwiseOr($VarHandle* ob, Object$* holder, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrByte($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldInstanceReadWrite::getAndBitwiseOrRelease($VarHandle* ob, Object$* holder, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrByteRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldInstanceReadWrite::getAndBitwiseOrAcquire($VarHandle* ob, Object$* holder, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrByteAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldInstanceReadWrite::getAndBitwiseAnd($VarHandle* ob, Object$* holder, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndByte($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldInstanceReadWrite::getAndBitwiseAndRelease($VarHandle* ob, Object$* holder, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndByteRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldInstanceReadWrite::getAndBitwiseAndAcquire($VarHandle* ob, Object$* holder, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndByteAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldInstanceReadWrite::getAndBitwiseXor($VarHandle* ob, Object$* holder, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorByte($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldInstanceReadWrite::getAndBitwiseXorRelease($VarHandle* ob, Object$* holder, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorByteRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldInstanceReadWrite::getAndBitwiseXorAcquire($VarHandle* ob, Object$* holder, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorByteAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void clinit$VarHandleBytes$FieldInstanceReadWrite($Class* class$) {
	$init($Byte);
	$assignStatic(VarHandleBytes$FieldInstanceReadWrite::FORM, $new($VarForm, VarHandleBytes$FieldInstanceReadWrite::class$, $Object::class$, $Byte::TYPE, $$new($ClassArray, 0)));
}

VarHandleBytes$FieldInstanceReadWrite::VarHandleBytes$FieldInstanceReadWrite() {
}

$Class* VarHandleBytes$FieldInstanceReadWrite::load$($String* name, bool initialize) {
	$loadClass(VarHandleBytes$FieldInstanceReadWrite, name, initialize, &_VarHandleBytes$FieldInstanceReadWrite_ClassInfo_, clinit$VarHandleBytes$FieldInstanceReadWrite, allocate$VarHandleBytes$FieldInstanceReadWrite);
	return class$;
}

$Class* VarHandleBytes$FieldInstanceReadWrite::class$ = nullptr;

		} // invoke
	} // lang
} // java