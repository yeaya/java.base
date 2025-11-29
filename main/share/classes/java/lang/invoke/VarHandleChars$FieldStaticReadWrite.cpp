#include <java/lang/invoke/VarHandleChars$FieldStaticReadWrite.h>

#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleChars$FieldStaticReadOnly.h>
#include <java/lang/invoke/VarHandleChars.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef FORM
#undef TYPE
#undef UNSAFE

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandleChars$FieldStaticReadOnly = ::java::lang::invoke::VarHandleChars$FieldStaticReadOnly;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_compareAndExchange2[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_compareAndExchangeAcquire3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_compareAndExchangeRelease4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_compareAndSet5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_getAndAdd6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_getAndAddAcquire7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_getAndAddRelease8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseAnd9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseAndAcquire10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseAndRelease11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseOr12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseOrAcquire13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseOrRelease14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseXor15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseXorAcquire16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseXorRelease17[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_getAndSet18[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_getAndSetAcquire19[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_getAndSetRelease20[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_set21[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_setOpaque22[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_setRelease23[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_setVolatile24[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSet25[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetAcquire26[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetPlain27[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetRelease28[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleChars$FieldStaticReadWrite_FieldInfo_[] = {
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleChars$FieldStaticReadWrite, FORM)},
	{}
};

$MethodInfo _VarHandleChars$FieldStaticReadWrite_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;J)V", nullptr, 0, $method(static_cast<void(VarHandleChars$FieldStaticReadWrite::*)(Object$*,int64_t)>(&VarHandleChars$FieldStaticReadWrite::init$))},
	{"<init>", "(Ljava/lang/Object;JZ)V", nullptr, $PRIVATE, $method(static_cast<void(VarHandleChars$FieldStaticReadWrite::*)(Object$*,int64_t,bool)>(&VarHandleChars$FieldStaticReadWrite::init$))},
	{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;CC)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,char16_t,char16_t)>(&VarHandleChars$FieldStaticReadWrite::compareAndExchange)), nullptr, nullptr, _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_compareAndExchange2},
	{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;CC)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,char16_t,char16_t)>(&VarHandleChars$FieldStaticReadWrite::compareAndExchangeAcquire)), nullptr, nullptr, _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_compareAndExchangeAcquire3},
	{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;CC)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,char16_t,char16_t)>(&VarHandleChars$FieldStaticReadWrite::compareAndExchangeRelease)), nullptr, nullptr, _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_compareAndExchangeRelease4},
	{"compareAndSet", "(Ljava/lang/invoke/VarHandle;CC)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,char16_t,char16_t)>(&VarHandleChars$FieldStaticReadWrite::compareAndSet)), nullptr, nullptr, _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_compareAndSet5},
	{"getAndAdd", "(Ljava/lang/invoke/VarHandle;C)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,char16_t)>(&VarHandleChars$FieldStaticReadWrite::getAndAdd)), nullptr, nullptr, _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_getAndAdd6},
	{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;C)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,char16_t)>(&VarHandleChars$FieldStaticReadWrite::getAndAddAcquire)), nullptr, nullptr, _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_getAndAddAcquire7},
	{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;C)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,char16_t)>(&VarHandleChars$FieldStaticReadWrite::getAndAddRelease)), nullptr, nullptr, _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_getAndAddRelease8},
	{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;C)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,char16_t)>(&VarHandleChars$FieldStaticReadWrite::getAndBitwiseAnd)), nullptr, nullptr, _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseAnd9},
	{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;C)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,char16_t)>(&VarHandleChars$FieldStaticReadWrite::getAndBitwiseAndAcquire)), nullptr, nullptr, _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseAndAcquire10},
	{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;C)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,char16_t)>(&VarHandleChars$FieldStaticReadWrite::getAndBitwiseAndRelease)), nullptr, nullptr, _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseAndRelease11},
	{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;C)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,char16_t)>(&VarHandleChars$FieldStaticReadWrite::getAndBitwiseOr)), nullptr, nullptr, _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseOr12},
	{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;C)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,char16_t)>(&VarHandleChars$FieldStaticReadWrite::getAndBitwiseOrAcquire)), nullptr, nullptr, _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseOrAcquire13},
	{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;C)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,char16_t)>(&VarHandleChars$FieldStaticReadWrite::getAndBitwiseOrRelease)), nullptr, nullptr, _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseOrRelease14},
	{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;C)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,char16_t)>(&VarHandleChars$FieldStaticReadWrite::getAndBitwiseXor)), nullptr, nullptr, _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseXor15},
	{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;C)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,char16_t)>(&VarHandleChars$FieldStaticReadWrite::getAndBitwiseXorAcquire)), nullptr, nullptr, _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseXorAcquire16},
	{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;C)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,char16_t)>(&VarHandleChars$FieldStaticReadWrite::getAndBitwiseXorRelease)), nullptr, nullptr, _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseXorRelease17},
	{"getAndSet", "(Ljava/lang/invoke/VarHandle;C)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,char16_t)>(&VarHandleChars$FieldStaticReadWrite::getAndSet)), nullptr, nullptr, _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_getAndSet18},
	{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;C)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,char16_t)>(&VarHandleChars$FieldStaticReadWrite::getAndSetAcquire)), nullptr, nullptr, _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_getAndSetAcquire19},
	{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;C)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,char16_t)>(&VarHandleChars$FieldStaticReadWrite::getAndSetRelease)), nullptr, nullptr, _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_getAndSetRelease20},
	{"set", "(Ljava/lang/invoke/VarHandle;C)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,char16_t)>(&VarHandleChars$FieldStaticReadWrite::set)), nullptr, nullptr, _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_set21},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;C)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,char16_t)>(&VarHandleChars$FieldStaticReadWrite::setOpaque)), nullptr, nullptr, _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_setOpaque22},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;C)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,char16_t)>(&VarHandleChars$FieldStaticReadWrite::setRelease)), nullptr, nullptr, _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_setRelease23},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;C)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,char16_t)>(&VarHandleChars$FieldStaticReadWrite::setVolatile)), nullptr, nullptr, _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_setVolatile24},
	{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;CC)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,char16_t,char16_t)>(&VarHandleChars$FieldStaticReadWrite::weakCompareAndSet)), nullptr, nullptr, _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSet25},
	{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;CC)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,char16_t,char16_t)>(&VarHandleChars$FieldStaticReadWrite::weakCompareAndSetAcquire)), nullptr, nullptr, _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetAcquire26},
	{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;CC)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,char16_t,char16_t)>(&VarHandleChars$FieldStaticReadWrite::weakCompareAndSetPlain)), nullptr, nullptr, _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetPlain27},
	{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;CC)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,char16_t,char16_t)>(&VarHandleChars$FieldStaticReadWrite::weakCompareAndSetRelease)), nullptr, nullptr, _VarHandleChars$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetRelease28},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleChars$FieldStaticReadWrite;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleChars$FieldStaticReadWrite;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleChars$FieldStaticReadWrite_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleChars$FieldStaticReadWrite", "java.lang.invoke.VarHandleChars", "FieldStaticReadWrite", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleChars$FieldStaticReadOnly", "java.lang.invoke.VarHandleChars", "FieldStaticReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleChars$FieldStaticReadWrite_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleChars$FieldStaticReadWrite",
	"java.lang.invoke.VarHandleChars$FieldStaticReadOnly",
	nullptr,
	_VarHandleChars$FieldStaticReadWrite_FieldInfo_,
	_VarHandleChars$FieldStaticReadWrite_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleChars$FieldStaticReadWrite_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleChars"
};

$Object* allocate$VarHandleChars$FieldStaticReadWrite($Class* clazz) {
	return $of($alloc(VarHandleChars$FieldStaticReadWrite));
}

$VarForm* VarHandleChars$FieldStaticReadWrite::FORM = nullptr;

void VarHandleChars$FieldStaticReadWrite::init$(Object$* base, int64_t fieldOffset) {
	VarHandleChars$FieldStaticReadWrite::init$(base, fieldOffset, false);
}

void VarHandleChars$FieldStaticReadWrite::init$(Object$* base, int64_t fieldOffset, bool exact) {
	$VarHandleChars$FieldStaticReadOnly::init$(base, fieldOffset, VarHandleChars$FieldStaticReadWrite::FORM, exact);
}

VarHandleChars$FieldStaticReadWrite* VarHandleChars$FieldStaticReadWrite::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleChars$FieldStaticReadWrite, this->base, this->fieldOffset, true);
}

VarHandleChars$FieldStaticReadWrite* VarHandleChars$FieldStaticReadWrite::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleChars$FieldStaticReadWrite, this->base, this->fieldOffset, false);
}

void VarHandleChars$FieldStaticReadWrite::set($VarHandle* ob, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putChar($nc(handle)->base, handle->fieldOffset, value);
}

void VarHandleChars$FieldStaticReadWrite::setVolatile($VarHandle* ob, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putCharVolatile($nc(handle)->base, handle->fieldOffset, value);
}

void VarHandleChars$FieldStaticReadWrite::setOpaque($VarHandle* ob, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putCharOpaque($nc(handle)->base, handle->fieldOffset, value);
}

void VarHandleChars$FieldStaticReadWrite::setRelease($VarHandle* ob, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putCharRelease($nc(handle)->base, handle->fieldOffset, value);
}

bool VarHandleChars$FieldStaticReadWrite::compareAndSet($VarHandle* ob, char16_t expected, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetChar($nc(handle)->base, handle->fieldOffset, expected, value);
}

char16_t VarHandleChars$FieldStaticReadWrite::compareAndExchange($VarHandle* ob, char16_t expected, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeChar($nc(handle)->base, handle->fieldOffset, expected, value);
}

char16_t VarHandleChars$FieldStaticReadWrite::compareAndExchangeAcquire($VarHandle* ob, char16_t expected, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeCharAcquire($nc(handle)->base, handle->fieldOffset, expected, value);
}

char16_t VarHandleChars$FieldStaticReadWrite::compareAndExchangeRelease($VarHandle* ob, char16_t expected, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeCharRelease($nc(handle)->base, handle->fieldOffset, expected, value);
}

bool VarHandleChars$FieldStaticReadWrite::weakCompareAndSetPlain($VarHandle* ob, char16_t expected, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetCharPlain($nc(handle)->base, handle->fieldOffset, expected, value);
}

bool VarHandleChars$FieldStaticReadWrite::weakCompareAndSet($VarHandle* ob, char16_t expected, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetChar($nc(handle)->base, handle->fieldOffset, expected, value);
}

bool VarHandleChars$FieldStaticReadWrite::weakCompareAndSetAcquire($VarHandle* ob, char16_t expected, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetCharAcquire($nc(handle)->base, handle->fieldOffset, expected, value);
}

bool VarHandleChars$FieldStaticReadWrite::weakCompareAndSetRelease($VarHandle* ob, char16_t expected, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetCharRelease($nc(handle)->base, handle->fieldOffset, expected, value);
}

char16_t VarHandleChars$FieldStaticReadWrite::getAndSet($VarHandle* ob, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetChar($nc(handle)->base, handle->fieldOffset, value);
}

char16_t VarHandleChars$FieldStaticReadWrite::getAndSetAcquire($VarHandle* ob, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetCharAcquire($nc(handle)->base, handle->fieldOffset, value);
}

char16_t VarHandleChars$FieldStaticReadWrite::getAndSetRelease($VarHandle* ob, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetCharRelease($nc(handle)->base, handle->fieldOffset, value);
}

char16_t VarHandleChars$FieldStaticReadWrite::getAndAdd($VarHandle* ob, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddChar($nc(handle)->base, handle->fieldOffset, value);
}

char16_t VarHandleChars$FieldStaticReadWrite::getAndAddAcquire($VarHandle* ob, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddCharAcquire($nc(handle)->base, handle->fieldOffset, value);
}

char16_t VarHandleChars$FieldStaticReadWrite::getAndAddRelease($VarHandle* ob, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddCharRelease($nc(handle)->base, handle->fieldOffset, value);
}

char16_t VarHandleChars$FieldStaticReadWrite::getAndBitwiseOr($VarHandle* ob, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrChar($nc(handle)->base, handle->fieldOffset, value);
}

char16_t VarHandleChars$FieldStaticReadWrite::getAndBitwiseOrRelease($VarHandle* ob, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrCharRelease($nc(handle)->base, handle->fieldOffset, value);
}

char16_t VarHandleChars$FieldStaticReadWrite::getAndBitwiseOrAcquire($VarHandle* ob, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrCharAcquire($nc(handle)->base, handle->fieldOffset, value);
}

char16_t VarHandleChars$FieldStaticReadWrite::getAndBitwiseAnd($VarHandle* ob, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndChar($nc(handle)->base, handle->fieldOffset, value);
}

char16_t VarHandleChars$FieldStaticReadWrite::getAndBitwiseAndRelease($VarHandle* ob, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndCharRelease($nc(handle)->base, handle->fieldOffset, value);
}

char16_t VarHandleChars$FieldStaticReadWrite::getAndBitwiseAndAcquire($VarHandle* ob, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndCharAcquire($nc(handle)->base, handle->fieldOffset, value);
}

char16_t VarHandleChars$FieldStaticReadWrite::getAndBitwiseXor($VarHandle* ob, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorChar($nc(handle)->base, handle->fieldOffset, value);
}

char16_t VarHandleChars$FieldStaticReadWrite::getAndBitwiseXorRelease($VarHandle* ob, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorCharRelease($nc(handle)->base, handle->fieldOffset, value);
}

char16_t VarHandleChars$FieldStaticReadWrite::getAndBitwiseXorAcquire($VarHandle* ob, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorCharAcquire($nc(handle)->base, handle->fieldOffset, value);
}

void clinit$VarHandleChars$FieldStaticReadWrite($Class* class$) {
	$init($Character);
	$assignStatic(VarHandleChars$FieldStaticReadWrite::FORM, $new($VarForm, VarHandleChars$FieldStaticReadWrite::class$, nullptr, $Character::TYPE, $$new($ClassArray, 0)));
}

VarHandleChars$FieldStaticReadWrite::VarHandleChars$FieldStaticReadWrite() {
}

$Class* VarHandleChars$FieldStaticReadWrite::load$($String* name, bool initialize) {
	$loadClass(VarHandleChars$FieldStaticReadWrite, name, initialize, &_VarHandleChars$FieldStaticReadWrite_ClassInfo_, clinit$VarHandleChars$FieldStaticReadWrite, allocate$VarHandleChars$FieldStaticReadWrite);
	return class$;
}

$Class* VarHandleChars$FieldStaticReadWrite::class$ = nullptr;

		} // invoke
	} // lang
} // java