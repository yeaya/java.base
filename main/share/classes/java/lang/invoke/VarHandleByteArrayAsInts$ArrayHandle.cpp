#include <java/lang/invoke/VarHandleByteArrayAsInts$ArrayHandle.h>
#include <java/io/Serializable.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleByteArrayAsInts$ByteArrayViewVarHandle.h>
#include <java/lang/invoke/VarHandleByteArrayAsInts.h>
#include <java/lang/invoke/VarHandleByteArrayBase.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/Function.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/util/Preconditions.h>
#include <jcpp.h>

#undef ARRAY_BYTE_BASE_OFFSET
#undef BE
#undef FORM
#undef OOBEF
#undef TYPE
#undef UNSAFE

using $Serializable = ::java::io::Serializable;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodType = ::java::lang::invoke::MethodType;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandle$AccessType = ::java::lang::invoke::VarHandle$AccessType;
using $VarHandleByteArrayAsInts = ::java::lang::invoke::VarHandleByteArrayAsInts;
using $VarHandleByteArrayAsInts$ByteArrayViewVarHandle = ::java::lang::invoke::VarHandleByteArrayAsInts$ByteArrayViewVarHandle;
using $VarHandleByteArrayBase = ::java::lang::invoke::VarHandleByteArrayBase;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $Preconditions = ::jdk::internal::util::Preconditions;

namespace java {
	namespace lang {
		namespace invoke {

class VarHandleByteArrayAsInts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException : public $Function {
	$class(VarHandleByteArrayAsInts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		 return $new($ArrayIndexOutOfBoundsException, $cast($String, s));
	}
};
$Class* VarHandleByteArrayAsInts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(VarHandleByteArrayAsInts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(VarHandleByteArrayAsInts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.lang.invoke.VarHandleByteArrayAsInts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(VarHandleByteArrayAsInts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleByteArrayAsInts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException);
	});
	return class$;
}
$Class* VarHandleByteArrayAsInts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::class$ = nullptr;

$BiFunction* VarHandleByteArrayAsInts$ArrayHandle::OOBEF = nullptr;
$VarForm* VarHandleByteArrayAsInts$ArrayHandle::FORM = nullptr;

void VarHandleByteArrayAsInts$ArrayHandle::init$(bool be) {
	VarHandleByteArrayAsInts$ArrayHandle::init$(be, false);
}

void VarHandleByteArrayAsInts$ArrayHandle::init$(bool be, bool exact) {
	$VarHandleByteArrayAsInts$ByteArrayViewVarHandle::init$(VarHandleByteArrayAsInts$ArrayHandle::FORM, be, exact);
}

VarHandleByteArrayAsInts$ArrayHandle* VarHandleByteArrayAsInts$ArrayHandle::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleByteArrayAsInts$ArrayHandle, this->be, true);
}

VarHandleByteArrayAsInts$ArrayHandle* VarHandleByteArrayAsInts$ArrayHandle::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleByteArrayAsInts$ArrayHandle, this->be, false);
}

$MethodType* VarHandleByteArrayAsInts$ArrayHandle::accessModeTypeUncached($VarHandle$AccessType* at) {
	return $nc(at)->accessModeType($getClass($bytes), $Integer::TYPE, $$new($ClassArray, {$Integer::TYPE}));
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::index($bytes* ba, int32_t index) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	return $Preconditions::checkIndex(index, $nc(ba)->length - 3, VarHandleByteArrayAsInts$ArrayHandle::OOBEF);
}

int64_t VarHandleByteArrayAsInts$ArrayHandle::address($bytes* ba, int32_t index) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$init($Unsafe);
	int64_t address = ((int64_t)index) + $Unsafe::ARRAY_BYTE_BASE_OFFSET;
	if ((address & 3) != 0) {
		$throw($($VarHandleByteArrayBase::newIllegalStateExceptionForMisalignedAccess(index)));
	}
	return address;
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::get($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$init($Unsafe);
	return $nc($MethodHandleStatics::UNSAFE)->getIntUnaligned(ba, ((int64_t)VarHandleByteArrayAsInts$ArrayHandle::index(ba, index)) + $Unsafe::ARRAY_BYTE_BASE_OFFSET, $nc(handle)->be);
}

void VarHandleByteArrayAsInts$ArrayHandle::set($VarHandle* ob, Object$* oba, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$init($Unsafe);
	$nc($MethodHandleStatics::UNSAFE)->putIntUnaligned(ba, ((int64_t)VarHandleByteArrayAsInts$ArrayHandle::index(ba, index)) + $Unsafe::ARRAY_BYTE_BASE_OFFSET, value, $nc(handle)->be);
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getVolatile($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	return $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getIntVolatile(ba, address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index))));
}

void VarHandleByteArrayAsInts$ArrayHandle::setVolatile($VarHandle* ob, Object$* oba, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index));
	$nc($MethodHandleStatics::UNSAFE)->putIntVolatile(ba, var$0, $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, value));
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getAcquire($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	return $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getIntAcquire(ba, address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index))));
}

void VarHandleByteArrayAsInts$ArrayHandle::setRelease($VarHandle* ob, Object$* oba, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index));
	$nc($MethodHandleStatics::UNSAFE)->putIntRelease(ba, var$0, $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, value));
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getOpaque($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	return $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getIntOpaque(ba, address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index))));
}

void VarHandleByteArrayAsInts$ArrayHandle::setOpaque($VarHandle* ob, Object$* oba, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index));
	$nc($MethodHandleStatics::UNSAFE)->putIntOpaque(ba, var$0, $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, value));
}

bool VarHandleByteArrayAsInts$ArrayHandle::compareAndSet($VarHandle* ob, Object$* oba, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index));
	int32_t var$1 = $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, expected);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetInt(ba, var$0, var$1, $VarHandleByteArrayAsInts::convEndian(handle->be, value));
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::compareAndExchange($VarHandle* ob, Object$* oba, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index));
	int32_t var$1 = $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, expected);
	return $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeInt(ba, var$0, var$1, $VarHandleByteArrayAsInts::convEndian(handle->be, value)));
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::compareAndExchangeAcquire($VarHandle* ob, Object$* oba, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index));
	int32_t var$1 = $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, expected);
	return $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeIntAcquire(ba, var$0, var$1, $VarHandleByteArrayAsInts::convEndian(handle->be, value)));
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::compareAndExchangeRelease($VarHandle* ob, Object$* oba, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index));
	int32_t var$1 = $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, expected);
	return $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeIntRelease(ba, var$0, var$1, $VarHandleByteArrayAsInts::convEndian(handle->be, value)));
}

bool VarHandleByteArrayAsInts$ArrayHandle::weakCompareAndSetPlain($VarHandle* ob, Object$* oba, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index));
	int32_t var$1 = $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, expected);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetIntPlain(ba, var$0, var$1, $VarHandleByteArrayAsInts::convEndian(handle->be, value));
}

bool VarHandleByteArrayAsInts$ArrayHandle::weakCompareAndSet($VarHandle* ob, Object$* oba, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index));
	int32_t var$1 = $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, expected);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetInt(ba, var$0, var$1, $VarHandleByteArrayAsInts::convEndian(handle->be, value));
}

bool VarHandleByteArrayAsInts$ArrayHandle::weakCompareAndSetAcquire($VarHandle* ob, Object$* oba, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index));
	int32_t var$1 = $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, expected);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetIntAcquire(ba, var$0, var$1, $VarHandleByteArrayAsInts::convEndian(handle->be, value));
}

bool VarHandleByteArrayAsInts$ArrayHandle::weakCompareAndSetRelease($VarHandle* ob, Object$* oba, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index));
	int32_t var$1 = $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, expected);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetIntRelease(ba, var$0, var$1, $VarHandleByteArrayAsInts::convEndian(handle->be, value));
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getAndSet($VarHandle* ob, Object$* oba, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index));
	return $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getAndSetInt(ba, var$0, $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, value)));
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getAndSetAcquire($VarHandle* ob, Object$* oba, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index));
	return $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getAndSetIntAcquire(ba, var$0, $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, value)));
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getAndSetRelease($VarHandle* ob, Object$* oba, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index));
	return $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getAndSetIntRelease(ba, var$0, $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, value)));
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getAndAdd($VarHandle* ob, Object$* oba, int32_t index, int32_t delta) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndAddInt(ba, address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index)), delta);
	} else {
		return getAndAddConvEndianWithCAS(ba, index, delta);
	}
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getAndAddAcquire($VarHandle* ob, Object$* oba, int32_t index, int32_t delta) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndAddIntAcquire(ba, address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index)), delta);
	} else {
		return getAndAddConvEndianWithCAS(ba, index, delta);
	}
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getAndAddRelease($VarHandle* ob, Object$* oba, int32_t index, int32_t delta) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndAddIntRelease(ba, address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index)), delta);
	} else {
		return getAndAddConvEndianWithCAS(ba, index, delta);
	}
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getAndAddConvEndianWithCAS($bytes* ba, int32_t index, int32_t delta) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	int32_t nativeExpectedValue = 0;
	int32_t expectedValue = 0;
	int64_t offset = address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index));
	$init($MethodHandleStatics);
	do {
		$init($MethodHandleStatics);
		nativeExpectedValue = $nc($MethodHandleStatics::UNSAFE)->getIntVolatile(ba, offset);
		expectedValue = $Integer::reverseBytes(nativeExpectedValue);
	} while (!$nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetInt(ba, offset, nativeExpectedValue, $Integer::reverseBytes(expectedValue + delta)));
	return expectedValue;
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getAndBitwiseOr($VarHandle* ob, Object$* oba, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrInt(ba, address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index)), value);
	} else {
		return getAndBitwiseOrConvEndianWithCAS(ba, index, value);
	}
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getAndBitwiseOrRelease($VarHandle* ob, Object$* oba, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrIntRelease(ba, address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index)), value);
	} else {
		return getAndBitwiseOrConvEndianWithCAS(ba, index, value);
	}
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getAndBitwiseOrAcquire($VarHandle* ob, Object$* oba, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrIntAcquire(ba, address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index)), value);
	} else {
		return getAndBitwiseOrConvEndianWithCAS(ba, index, value);
	}
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getAndBitwiseOrConvEndianWithCAS($bytes* ba, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	int32_t nativeExpectedValue = 0;
	int32_t expectedValue = 0;
	int64_t offset = address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index));
	$init($MethodHandleStatics);
	do {
		$init($MethodHandleStatics);
		nativeExpectedValue = $nc($MethodHandleStatics::UNSAFE)->getIntVolatile(ba, offset);
		expectedValue = $Integer::reverseBytes(nativeExpectedValue);
	} while (!$nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetInt(ba, offset, nativeExpectedValue, $Integer::reverseBytes(expectedValue | value)));
	return expectedValue;
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getAndBitwiseAnd($VarHandle* ob, Object$* oba, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndInt(ba, address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index)), value);
	} else {
		return getAndBitwiseAndConvEndianWithCAS(ba, index, value);
	}
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getAndBitwiseAndRelease($VarHandle* ob, Object$* oba, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndIntRelease(ba, address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index)), value);
	} else {
		return getAndBitwiseAndConvEndianWithCAS(ba, index, value);
	}
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getAndBitwiseAndAcquire($VarHandle* ob, Object$* oba, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndIntAcquire(ba, address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index)), value);
	} else {
		return getAndBitwiseAndConvEndianWithCAS(ba, index, value);
	}
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getAndBitwiseAndConvEndianWithCAS($bytes* ba, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	int32_t nativeExpectedValue = 0;
	int32_t expectedValue = 0;
	int64_t offset = address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index));
	$init($MethodHandleStatics);
	do {
		$init($MethodHandleStatics);
		nativeExpectedValue = $nc($MethodHandleStatics::UNSAFE)->getIntVolatile(ba, offset);
		expectedValue = $Integer::reverseBytes(nativeExpectedValue);
	} while (!$nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetInt(ba, offset, nativeExpectedValue, $Integer::reverseBytes(expectedValue & value)));
	return expectedValue;
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getAndBitwiseXor($VarHandle* ob, Object$* oba, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorInt(ba, address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index)), value);
	} else {
		return getAndBitwiseXorConvEndianWithCAS(ba, index, value);
	}
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getAndBitwiseXorRelease($VarHandle* ob, Object$* oba, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorIntRelease(ba, address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index)), value);
	} else {
		return getAndBitwiseXorConvEndianWithCAS(ba, index, value);
	}
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getAndBitwiseXorAcquire($VarHandle* ob, Object$* oba, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorIntAcquire(ba, address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index)), value);
	} else {
		return getAndBitwiseXorConvEndianWithCAS(ba, index, value);
	}
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getAndBitwiseXorConvEndianWithCAS($bytes* ba, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	int32_t nativeExpectedValue = 0;
	int32_t expectedValue = 0;
	int64_t offset = address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index));
	$init($MethodHandleStatics);
	do {
		$init($MethodHandleStatics);
		nativeExpectedValue = $nc($MethodHandleStatics::UNSAFE)->getIntVolatile(ba, offset);
		expectedValue = $Integer::reverseBytes(nativeExpectedValue);
	} while (!$nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetInt(ba, offset, nativeExpectedValue, $Integer::reverseBytes(expectedValue ^ value)));
	return expectedValue;
}

void VarHandleByteArrayAsInts$ArrayHandle::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(VarHandleByteArrayAsInts$ArrayHandle::OOBEF, $Preconditions::outOfBoundsExceptionFormatter($$new(VarHandleByteArrayAsInts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException)));
	$assignStatic(VarHandleByteArrayAsInts$ArrayHandle::FORM, $new($VarForm, VarHandleByteArrayAsInts$ArrayHandle::class$, $getClass($bytes), $Integer::TYPE, $$new($ClassArray, {$Integer::TYPE})));
}

VarHandleByteArrayAsInts$ArrayHandle::VarHandleByteArrayAsInts$ArrayHandle() {
}

$Class* VarHandleByteArrayAsInts$ArrayHandle::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.lang.invoke.VarHandleByteArrayAsInts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException")) {
			return VarHandleByteArrayAsInts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"OOBEF", "Ljava/util/function/BiFunction;", "Ljava/util/function/BiFunction<Ljava/lang/String;Ljava/util/List<Ljava/lang/Number;>;Ljava/lang/ArrayIndexOutOfBoundsException;>;", $PRIVATE | $STATIC | $FINAL, $staticField(VarHandleByteArrayAsInts$ArrayHandle, OOBEF)},
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayAsInts$ArrayHandle, FORM)},
		{}
	};
	$CompoundAttribute addressmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndSetmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddConvEndianWithCASmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndConvEndianWithCASmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrConvEndianWithCASmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXormethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorConvEndianWithCASmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute indexmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute setmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute setOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute setReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute setVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetPlainmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Z)V", nullptr, 0, $method(VarHandleByteArrayAsInts$ArrayHandle, init$, void, bool)},
		{"<init>", "(ZZ)V", nullptr, $PRIVATE, $method(VarHandleByteArrayAsInts$ArrayHandle, init$, void, bool, bool)},
		{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(VarHandleByteArrayAsInts$ArrayHandle, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
		{"address", "([BI)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, address, int64_t, $bytes*, int32_t), nullptr, nullptr, addressmethodAnnotations$$},
		{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, compareAndExchange, int32_t, $VarHandle*, Object$*, int32_t, int32_t, int32_t), nullptr, nullptr, compareAndExchangemethodAnnotations$$},
		{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, compareAndExchangeAcquire, int32_t, $VarHandle*, Object$*, int32_t, int32_t, int32_t), nullptr, nullptr, compareAndExchangeAcquiremethodAnnotations$$},
		{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, compareAndExchangeRelease, int32_t, $VarHandle*, Object$*, int32_t, int32_t, int32_t), nullptr, nullptr, compareAndExchangeReleasemethodAnnotations$$},
		{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, compareAndSet, bool, $VarHandle*, Object$*, int32_t, int32_t, int32_t), nullptr, nullptr, compareAndSetmethodAnnotations$$},
		{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, get, int32_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getmethodAnnotations$$},
		{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getAcquire, int32_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getAcquiremethodAnnotations$$},
		{"getAndAdd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getAndAdd, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndAddmethodAnnotations$$},
		{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getAndAddAcquire, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndAddAcquiremethodAnnotations$$},
		{"getAndAddConvEndianWithCAS", "([BII)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getAndAddConvEndianWithCAS, int32_t, $bytes*, int32_t, int32_t), nullptr, nullptr, getAndAddConvEndianWithCASmethodAnnotations$$},
		{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getAndAddRelease, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndAddReleasemethodAnnotations$$},
		{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getAndBitwiseAnd, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndBitwiseAndmethodAnnotations$$},
		{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getAndBitwiseAndAcquire, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndBitwiseAndAcquiremethodAnnotations$$},
		{"getAndBitwiseAndConvEndianWithCAS", "([BII)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getAndBitwiseAndConvEndianWithCAS, int32_t, $bytes*, int32_t, int32_t), nullptr, nullptr, getAndBitwiseAndConvEndianWithCASmethodAnnotations$$},
		{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getAndBitwiseAndRelease, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndBitwiseAndReleasemethodAnnotations$$},
		{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getAndBitwiseOr, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndBitwiseOrmethodAnnotations$$},
		{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getAndBitwiseOrAcquire, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndBitwiseOrAcquiremethodAnnotations$$},
		{"getAndBitwiseOrConvEndianWithCAS", "([BII)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getAndBitwiseOrConvEndianWithCAS, int32_t, $bytes*, int32_t, int32_t), nullptr, nullptr, getAndBitwiseOrConvEndianWithCASmethodAnnotations$$},
		{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getAndBitwiseOrRelease, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndBitwiseOrReleasemethodAnnotations$$},
		{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getAndBitwiseXor, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndBitwiseXormethodAnnotations$$},
		{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getAndBitwiseXorAcquire, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndBitwiseXorAcquiremethodAnnotations$$},
		{"getAndBitwiseXorConvEndianWithCAS", "([BII)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getAndBitwiseXorConvEndianWithCAS, int32_t, $bytes*, int32_t, int32_t), nullptr, nullptr, getAndBitwiseXorConvEndianWithCASmethodAnnotations$$},
		{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getAndBitwiseXorRelease, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndBitwiseXorReleasemethodAnnotations$$},
		{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getAndSet, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndSetmethodAnnotations$$},
		{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getAndSetAcquire, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndSetAcquiremethodAnnotations$$},
		{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getAndSetRelease, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndSetReleasemethodAnnotations$$},
		{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getOpaque, int32_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getOpaquemethodAnnotations$$},
		{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getVolatile, int32_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getVolatilemethodAnnotations$$},
		{"index", "([BI)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, index, int32_t, $bytes*, int32_t), nullptr, nullptr, indexmethodAnnotations$$},
		{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, set, void, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, setmethodAnnotations$$},
		{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, setOpaque, void, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, setRelease, void, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, setReleasemethodAnnotations$$},
		{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, setVolatile, void, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, setVolatilemethodAnnotations$$},
		{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, weakCompareAndSet, bool, $VarHandle*, Object$*, int32_t, int32_t, int32_t), nullptr, nullptr, weakCompareAndSetmethodAnnotations$$},
		{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, weakCompareAndSetAcquire, bool, $VarHandle*, Object$*, int32_t, int32_t, int32_t), nullptr, nullptr, weakCompareAndSetAcquiremethodAnnotations$$},
		{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, weakCompareAndSetPlain, bool, $VarHandle*, Object$*, int32_t, int32_t, int32_t), nullptr, nullptr, weakCompareAndSetPlainmethodAnnotations$$},
		{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, weakCompareAndSetRelease, bool, $VarHandle*, Object$*, int32_t, int32_t, int32_t), nullptr, nullptr, weakCompareAndSetReleasemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsInts$ArrayHandle;", nullptr, $PUBLIC, $virtualMethod(VarHandleByteArrayAsInts$ArrayHandle, withInvokeBehavior, VarHandleByteArrayAsInts$ArrayHandle*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsInts$ArrayHandle;", nullptr, $PUBLIC, $virtualMethod(VarHandleByteArrayAsInts$ArrayHandle, withInvokeExactBehavior, VarHandleByteArrayAsInts$ArrayHandle*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleByteArrayAsInts$ArrayHandle", "java.lang.invoke.VarHandleByteArrayAsInts", "ArrayHandle", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleByteArrayAsInts$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsInts", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleByteArrayAsInts$ArrayHandle",
		"java.lang.invoke.VarHandleByteArrayAsInts$ByteArrayViewVarHandle",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.VarHandleByteArrayAsInts"
	};
	$loadClass(VarHandleByteArrayAsInts$ArrayHandle, name, initialize, &classInfo$$, VarHandleByteArrayAsInts$ArrayHandle::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleByteArrayAsInts$ArrayHandle);
	});
	return class$;
}

$Class* VarHandleByteArrayAsInts$ArrayHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java