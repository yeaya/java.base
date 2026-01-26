#include <java/lang/invoke/VarHandleChars$FieldInstanceReadWrite.h>

#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleChars$FieldInstanceReadOnly.h>
#include <java/lang/invoke/VarHandleChars.h>
#include <java/util/Objects.h>
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
using $VarHandleChars$FieldInstanceReadOnly = ::java::lang::invoke::VarHandleChars$FieldInstanceReadOnly;
using $Objects = ::java::util::Objects;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_compareAndExchange2[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_compareAndExchangeAcquire3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_compareAndExchangeRelease4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_compareAndSet5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_getAndAdd6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_getAndAddAcquire7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_getAndAddRelease8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseAnd9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseAndAcquire10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseAndRelease11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseOr12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseOrAcquire13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseOrRelease14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseXor15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseXorAcquire16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseXorRelease17[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_getAndSet18[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_getAndSetAcquire19[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_getAndSetRelease20[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_set21[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_setOpaque22[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_setRelease23[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_setVolatile24[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSet25[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetAcquire26[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetPlain27[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetRelease28[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleChars$FieldInstanceReadWrite_FieldInfo_[] = {
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleChars$FieldInstanceReadWrite, FORM)},
	{}
};

$MethodInfo _VarHandleChars$FieldInstanceReadWrite_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;J)V", "(Ljava/lang/Class<*>;J)V", 0, $method(VarHandleChars$FieldInstanceReadWrite, init$, void, $Class*, int64_t)},
	{"<init>", "(Ljava/lang/Class;JZ)V", "(Ljava/lang/Class<*>;JZ)V", $PRIVATE, $method(VarHandleChars$FieldInstanceReadWrite, init$, void, $Class*, int64_t, bool)},
	{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;CC)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, compareAndExchange, char16_t, $VarHandle*, Object$*, char16_t, char16_t), nullptr, nullptr, _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_compareAndExchange2},
	{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;CC)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, compareAndExchangeAcquire, char16_t, $VarHandle*, Object$*, char16_t, char16_t), nullptr, nullptr, _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_compareAndExchangeAcquire3},
	{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;CC)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, compareAndExchangeRelease, char16_t, $VarHandle*, Object$*, char16_t, char16_t), nullptr, nullptr, _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_compareAndExchangeRelease4},
	{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;CC)Z", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, compareAndSet, bool, $VarHandle*, Object$*, char16_t, char16_t), nullptr, nullptr, _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_compareAndSet5},
	{"getAndAdd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, getAndAdd, char16_t, $VarHandle*, Object$*, char16_t), nullptr, nullptr, _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_getAndAdd6},
	{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, getAndAddAcquire, char16_t, $VarHandle*, Object$*, char16_t), nullptr, nullptr, _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_getAndAddAcquire7},
	{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, getAndAddRelease, char16_t, $VarHandle*, Object$*, char16_t), nullptr, nullptr, _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_getAndAddRelease8},
	{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, getAndBitwiseAnd, char16_t, $VarHandle*, Object$*, char16_t), nullptr, nullptr, _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseAnd9},
	{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, getAndBitwiseAndAcquire, char16_t, $VarHandle*, Object$*, char16_t), nullptr, nullptr, _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseAndAcquire10},
	{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, getAndBitwiseAndRelease, char16_t, $VarHandle*, Object$*, char16_t), nullptr, nullptr, _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseAndRelease11},
	{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, getAndBitwiseOr, char16_t, $VarHandle*, Object$*, char16_t), nullptr, nullptr, _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseOr12},
	{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, getAndBitwiseOrAcquire, char16_t, $VarHandle*, Object$*, char16_t), nullptr, nullptr, _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseOrAcquire13},
	{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, getAndBitwiseOrRelease, char16_t, $VarHandle*, Object$*, char16_t), nullptr, nullptr, _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseOrRelease14},
	{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, getAndBitwiseXor, char16_t, $VarHandle*, Object$*, char16_t), nullptr, nullptr, _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseXor15},
	{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, getAndBitwiseXorAcquire, char16_t, $VarHandle*, Object$*, char16_t), nullptr, nullptr, _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseXorAcquire16},
	{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, getAndBitwiseXorRelease, char16_t, $VarHandle*, Object$*, char16_t), nullptr, nullptr, _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseXorRelease17},
	{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, getAndSet, char16_t, $VarHandle*, Object$*, char16_t), nullptr, nullptr, _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_getAndSet18},
	{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, getAndSetAcquire, char16_t, $VarHandle*, Object$*, char16_t), nullptr, nullptr, _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_getAndSetAcquire19},
	{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, getAndSetRelease, char16_t, $VarHandle*, Object$*, char16_t), nullptr, nullptr, _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_getAndSetRelease20},
	{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;C)V", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, set, void, $VarHandle*, Object$*, char16_t), nullptr, nullptr, _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_set21},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;C)V", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, setOpaque, void, $VarHandle*, Object$*, char16_t), nullptr, nullptr, _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_setOpaque22},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;C)V", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, setRelease, void, $VarHandle*, Object$*, char16_t), nullptr, nullptr, _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_setRelease23},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;C)V", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, setVolatile, void, $VarHandle*, Object$*, char16_t), nullptr, nullptr, _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_setVolatile24},
	{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;CC)Z", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, weakCompareAndSet, bool, $VarHandle*, Object$*, char16_t, char16_t), nullptr, nullptr, _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSet25},
	{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;CC)Z", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, weakCompareAndSetAcquire, bool, $VarHandle*, Object$*, char16_t, char16_t), nullptr, nullptr, _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetAcquire26},
	{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;CC)Z", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, weakCompareAndSetPlain, bool, $VarHandle*, Object$*, char16_t, char16_t), nullptr, nullptr, _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetPlain27},
	{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;CC)Z", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, weakCompareAndSetRelease, bool, $VarHandle*, Object$*, char16_t, char16_t), nullptr, nullptr, _VarHandleChars$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetRelease28},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleChars$FieldInstanceReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleChars$FieldInstanceReadWrite, withInvokeBehavior, VarHandleChars$FieldInstanceReadWrite*)},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleChars$FieldInstanceReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleChars$FieldInstanceReadWrite, withInvokeExactBehavior, VarHandleChars$FieldInstanceReadWrite*)},
	{}
};

$InnerClassInfo _VarHandleChars$FieldInstanceReadWrite_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleChars$FieldInstanceReadWrite", "java.lang.invoke.VarHandleChars", "FieldInstanceReadWrite", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleChars$FieldInstanceReadOnly", "java.lang.invoke.VarHandleChars", "FieldInstanceReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleChars$FieldInstanceReadWrite_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleChars$FieldInstanceReadWrite",
	"java.lang.invoke.VarHandleChars$FieldInstanceReadOnly",
	nullptr,
	_VarHandleChars$FieldInstanceReadWrite_FieldInfo_,
	_VarHandleChars$FieldInstanceReadWrite_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleChars$FieldInstanceReadWrite_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleChars"
};

$Object* allocate$VarHandleChars$FieldInstanceReadWrite($Class* clazz) {
	return $of($alloc(VarHandleChars$FieldInstanceReadWrite));
}

$VarForm* VarHandleChars$FieldInstanceReadWrite::FORM = nullptr;

void VarHandleChars$FieldInstanceReadWrite::init$($Class* receiverType, int64_t fieldOffset) {
	VarHandleChars$FieldInstanceReadWrite::init$(receiverType, fieldOffset, false);
}

void VarHandleChars$FieldInstanceReadWrite::init$($Class* receiverType, int64_t fieldOffset, bool exact) {
	$VarHandleChars$FieldInstanceReadOnly::init$(receiverType, fieldOffset, VarHandleChars$FieldInstanceReadWrite::FORM, exact);
}

VarHandleChars$FieldInstanceReadWrite* VarHandleChars$FieldInstanceReadWrite::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleChars$FieldInstanceReadWrite, this->receiverType, this->fieldOffset, true);
}

VarHandleChars$FieldInstanceReadWrite* VarHandleChars$FieldInstanceReadWrite::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleChars$FieldInstanceReadWrite, this->receiverType, this->fieldOffset, false);
}

void VarHandleChars$FieldInstanceReadWrite::set($VarHandle* ob, Object$* holder, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putChar($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleChars$FieldInstanceReadWrite::setVolatile($VarHandle* ob, Object$* holder, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putCharVolatile($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleChars$FieldInstanceReadWrite::setOpaque($VarHandle* ob, Object$* holder, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putCharOpaque($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleChars$FieldInstanceReadWrite::setRelease($VarHandle* ob, Object$* holder, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putCharRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

bool VarHandleChars$FieldInstanceReadWrite::compareAndSet($VarHandle* ob, Object$* holder, char16_t expected, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetChar($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

char16_t VarHandleChars$FieldInstanceReadWrite::compareAndExchange($VarHandle* ob, Object$* holder, char16_t expected, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeChar($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

char16_t VarHandleChars$FieldInstanceReadWrite::compareAndExchangeAcquire($VarHandle* ob, Object$* holder, char16_t expected, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeCharAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

char16_t VarHandleChars$FieldInstanceReadWrite::compareAndExchangeRelease($VarHandle* ob, Object$* holder, char16_t expected, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeCharRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleChars$FieldInstanceReadWrite::weakCompareAndSetPlain($VarHandle* ob, Object$* holder, char16_t expected, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetCharPlain($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleChars$FieldInstanceReadWrite::weakCompareAndSet($VarHandle* ob, Object$* holder, char16_t expected, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetChar($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleChars$FieldInstanceReadWrite::weakCompareAndSetAcquire($VarHandle* ob, Object$* holder, char16_t expected, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetCharAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleChars$FieldInstanceReadWrite::weakCompareAndSetRelease($VarHandle* ob, Object$* holder, char16_t expected, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetCharRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

char16_t VarHandleChars$FieldInstanceReadWrite::getAndSet($VarHandle* ob, Object$* holder, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetChar($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldInstanceReadWrite::getAndSetAcquire($VarHandle* ob, Object$* holder, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetCharAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldInstanceReadWrite::getAndSetRelease($VarHandle* ob, Object$* holder, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetCharRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldInstanceReadWrite::getAndAdd($VarHandle* ob, Object$* holder, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddChar($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldInstanceReadWrite::getAndAddAcquire($VarHandle* ob, Object$* holder, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddCharAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldInstanceReadWrite::getAndAddRelease($VarHandle* ob, Object$* holder, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddCharRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldInstanceReadWrite::getAndBitwiseOr($VarHandle* ob, Object$* holder, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrChar($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldInstanceReadWrite::getAndBitwiseOrRelease($VarHandle* ob, Object$* holder, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrCharRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldInstanceReadWrite::getAndBitwiseOrAcquire($VarHandle* ob, Object$* holder, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrCharAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldInstanceReadWrite::getAndBitwiseAnd($VarHandle* ob, Object$* holder, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndChar($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldInstanceReadWrite::getAndBitwiseAndRelease($VarHandle* ob, Object$* holder, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndCharRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldInstanceReadWrite::getAndBitwiseAndAcquire($VarHandle* ob, Object$* holder, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndCharAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldInstanceReadWrite::getAndBitwiseXor($VarHandle* ob, Object$* holder, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorChar($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldInstanceReadWrite::getAndBitwiseXorRelease($VarHandle* ob, Object$* holder, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorCharRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldInstanceReadWrite::getAndBitwiseXorAcquire($VarHandle* ob, Object$* holder, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorCharAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void clinit$VarHandleChars$FieldInstanceReadWrite($Class* class$) {
	$init($Character);
	$assignStatic(VarHandleChars$FieldInstanceReadWrite::FORM, $new($VarForm, VarHandleChars$FieldInstanceReadWrite::class$, $Object::class$, $Character::TYPE, $$new($ClassArray, 0)));
}

VarHandleChars$FieldInstanceReadWrite::VarHandleChars$FieldInstanceReadWrite() {
}

$Class* VarHandleChars$FieldInstanceReadWrite::load$($String* name, bool initialize) {
	$loadClass(VarHandleChars$FieldInstanceReadWrite, name, initialize, &_VarHandleChars$FieldInstanceReadWrite_ClassInfo_, clinit$VarHandleChars$FieldInstanceReadWrite, allocate$VarHandleChars$FieldInstanceReadWrite);
	return class$;
}

$Class* VarHandleChars$FieldInstanceReadWrite::class$ = nullptr;

		} // invoke
	} // lang
} // java