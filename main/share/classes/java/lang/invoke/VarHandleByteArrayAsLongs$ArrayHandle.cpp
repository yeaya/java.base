#include <java/lang/invoke/VarHandleByteArrayAsLongs$ArrayHandle.h>
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
#include <java/lang/invoke/VarHandleByteArrayAsLongs$ByteArrayViewVarHandle.h>
#include <java/lang/invoke/VarHandleByteArrayAsLongs.h>
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
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodType = ::java::lang::invoke::MethodType;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandle$AccessType = ::java::lang::invoke::VarHandle$AccessType;
using $VarHandleByteArrayAsLongs = ::java::lang::invoke::VarHandleByteArrayAsLongs;
using $VarHandleByteArrayAsLongs$ByteArrayViewVarHandle = ::java::lang::invoke::VarHandleByteArrayAsLongs$ByteArrayViewVarHandle;
using $VarHandleByteArrayBase = ::java::lang::invoke::VarHandleByteArrayBase;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $Preconditions = ::jdk::internal::util::Preconditions;

namespace java {
	namespace lang {
		namespace invoke {

class VarHandleByteArrayAsLongs$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException : public $Function {
	$class(VarHandleByteArrayAsLongs$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		 return $new($ArrayIndexOutOfBoundsException, $cast($String, s));
	}
};
$Class* VarHandleByteArrayAsLongs$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(VarHandleByteArrayAsLongs$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(VarHandleByteArrayAsLongs$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.lang.invoke.VarHandleByteArrayAsLongs$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(VarHandleByteArrayAsLongs$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleByteArrayAsLongs$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException);
	});
	return class$;
}
$Class* VarHandleByteArrayAsLongs$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::class$ = nullptr;

$BiFunction* VarHandleByteArrayAsLongs$ArrayHandle::OOBEF = nullptr;
$VarForm* VarHandleByteArrayAsLongs$ArrayHandle::FORM = nullptr;

void VarHandleByteArrayAsLongs$ArrayHandle::init$(bool be) {
	VarHandleByteArrayAsLongs$ArrayHandle::init$(be, false);
}

void VarHandleByteArrayAsLongs$ArrayHandle::init$(bool be, bool exact) {
	$VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::init$(VarHandleByteArrayAsLongs$ArrayHandle::FORM, be, exact);
}

VarHandleByteArrayAsLongs$ArrayHandle* VarHandleByteArrayAsLongs$ArrayHandle::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleByteArrayAsLongs$ArrayHandle, this->be, true);
}

VarHandleByteArrayAsLongs$ArrayHandle* VarHandleByteArrayAsLongs$ArrayHandle::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleByteArrayAsLongs$ArrayHandle, this->be, false);
}

$MethodType* VarHandleByteArrayAsLongs$ArrayHandle::accessModeTypeUncached($VarHandle$AccessType* at) {
	return $nc(at)->accessModeType($getClass($bytes), $Long::TYPE, $$new($ClassArray, {$Integer::TYPE}));
}

int32_t VarHandleByteArrayAsLongs$ArrayHandle::index($bytes* ba, int32_t index) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	return $Preconditions::checkIndex(index, $nc(ba)->length - 7, VarHandleByteArrayAsLongs$ArrayHandle::OOBEF);
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::address($bytes* ba, int32_t index) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$init($Unsafe);
	int64_t address = ((int64_t)index) + $Unsafe::ARRAY_BYTE_BASE_OFFSET;
	if ((address & 7) != 0) {
		$throw($($VarHandleByteArrayBase::newIllegalStateExceptionForMisalignedAccess(index)));
	}
	return address;
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::get($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$init($Unsafe);
	return $nc($MethodHandleStatics::UNSAFE)->getLongUnaligned(ba, ((int64_t)VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index)) + $Unsafe::ARRAY_BYTE_BASE_OFFSET, $nc(handle)->be);
}

void VarHandleByteArrayAsLongs$ArrayHandle::set($VarHandle* ob, Object$* oba, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$init($Unsafe);
	$nc($MethodHandleStatics::UNSAFE)->putLongUnaligned(ba, ((int64_t)VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index)) + $Unsafe::ARRAY_BYTE_BASE_OFFSET, value, $nc(handle)->be);
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getVolatile($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	return $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getLongVolatile(ba, address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index))));
}

void VarHandleByteArrayAsLongs$ArrayHandle::setVolatile($VarHandle* ob, Object$* oba, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index));
	$nc($MethodHandleStatics::UNSAFE)->putLongVolatile(ba, var$0, $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, value));
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getAcquire($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	return $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getLongAcquire(ba, address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index))));
}

void VarHandleByteArrayAsLongs$ArrayHandle::setRelease($VarHandle* ob, Object$* oba, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index));
	$nc($MethodHandleStatics::UNSAFE)->putLongRelease(ba, var$0, $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, value));
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getOpaque($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	return $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getLongOpaque(ba, address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index))));
}

void VarHandleByteArrayAsLongs$ArrayHandle::setOpaque($VarHandle* ob, Object$* oba, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index));
	$nc($MethodHandleStatics::UNSAFE)->putLongOpaque(ba, var$0, $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, value));
}

bool VarHandleByteArrayAsLongs$ArrayHandle::compareAndSet($VarHandle* ob, Object$* oba, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index));
	int64_t var$1 = $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, expected);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetLong(ba, var$0, var$1, $VarHandleByteArrayAsLongs::convEndian(handle->be, value));
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::compareAndExchange($VarHandle* ob, Object$* oba, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index));
	int64_t var$1 = $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, expected);
	return $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeLong(ba, var$0, var$1, $VarHandleByteArrayAsLongs::convEndian(handle->be, value)));
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::compareAndExchangeAcquire($VarHandle* ob, Object$* oba, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index));
	int64_t var$1 = $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, expected);
	return $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeLongAcquire(ba, var$0, var$1, $VarHandleByteArrayAsLongs::convEndian(handle->be, value)));
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::compareAndExchangeRelease($VarHandle* ob, Object$* oba, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index));
	int64_t var$1 = $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, expected);
	return $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeLongRelease(ba, var$0, var$1, $VarHandleByteArrayAsLongs::convEndian(handle->be, value)));
}

bool VarHandleByteArrayAsLongs$ArrayHandle::weakCompareAndSetPlain($VarHandle* ob, Object$* oba, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index));
	int64_t var$1 = $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, expected);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLongPlain(ba, var$0, var$1, $VarHandleByteArrayAsLongs::convEndian(handle->be, value));
}

bool VarHandleByteArrayAsLongs$ArrayHandle::weakCompareAndSet($VarHandle* ob, Object$* oba, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index));
	int64_t var$1 = $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, expected);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLong(ba, var$0, var$1, $VarHandleByteArrayAsLongs::convEndian(handle->be, value));
}

bool VarHandleByteArrayAsLongs$ArrayHandle::weakCompareAndSetAcquire($VarHandle* ob, Object$* oba, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index));
	int64_t var$1 = $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, expected);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLongAcquire(ba, var$0, var$1, $VarHandleByteArrayAsLongs::convEndian(handle->be, value));
}

bool VarHandleByteArrayAsLongs$ArrayHandle::weakCompareAndSetRelease($VarHandle* ob, Object$* oba, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index));
	int64_t var$1 = $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, expected);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLongRelease(ba, var$0, var$1, $VarHandleByteArrayAsLongs::convEndian(handle->be, value));
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getAndSet($VarHandle* ob, Object$* oba, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index));
	return $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getAndSetLong(ba, var$0, $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, value)));
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getAndSetAcquire($VarHandle* ob, Object$* oba, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index));
	return $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getAndSetLongAcquire(ba, var$0, $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, value)));
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getAndSetRelease($VarHandle* ob, Object$* oba, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index));
	return $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getAndSetLongRelease(ba, var$0, $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, value)));
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getAndAdd($VarHandle* ob, Object$* oba, int32_t index, int64_t delta) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndAddLong(ba, address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index)), delta);
	} else {
		return getAndAddConvEndianWithCAS(ba, index, delta);
	}
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getAndAddAcquire($VarHandle* ob, Object$* oba, int32_t index, int64_t delta) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndAddLongAcquire(ba, address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index)), delta);
	} else {
		return getAndAddConvEndianWithCAS(ba, index, delta);
	}
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getAndAddRelease($VarHandle* ob, Object$* oba, int32_t index, int64_t delta) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndAddLongRelease(ba, address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index)), delta);
	} else {
		return getAndAddConvEndianWithCAS(ba, index, delta);
	}
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getAndAddConvEndianWithCAS($bytes* ba, int32_t index, int64_t delta) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	int64_t nativeExpectedValue = 0;
	int64_t expectedValue = 0;
	int64_t offset = address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index));
	$init($MethodHandleStatics);
	do {
		$init($MethodHandleStatics);
		nativeExpectedValue = $nc($MethodHandleStatics::UNSAFE)->getLongVolatile(ba, offset);
		expectedValue = $Long::reverseBytes(nativeExpectedValue);
	} while (!$nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLong(ba, offset, nativeExpectedValue, $Long::reverseBytes(expectedValue + delta)));
	return expectedValue;
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getAndBitwiseOr($VarHandle* ob, Object$* oba, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrLong(ba, address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index)), value);
	} else {
		return getAndBitwiseOrConvEndianWithCAS(ba, index, value);
	}
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getAndBitwiseOrRelease($VarHandle* ob, Object$* oba, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrLongRelease(ba, address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index)), value);
	} else {
		return getAndBitwiseOrConvEndianWithCAS(ba, index, value);
	}
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getAndBitwiseOrAcquire($VarHandle* ob, Object$* oba, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrLongAcquire(ba, address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index)), value);
	} else {
		return getAndBitwiseOrConvEndianWithCAS(ba, index, value);
	}
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getAndBitwiseOrConvEndianWithCAS($bytes* ba, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	int64_t nativeExpectedValue = 0;
	int64_t expectedValue = 0;
	int64_t offset = address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index));
	$init($MethodHandleStatics);
	do {
		$init($MethodHandleStatics);
		nativeExpectedValue = $nc($MethodHandleStatics::UNSAFE)->getLongVolatile(ba, offset);
		expectedValue = $Long::reverseBytes(nativeExpectedValue);
	} while (!$nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLong(ba, offset, nativeExpectedValue, $Long::reverseBytes(expectedValue | value)));
	return expectedValue;
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getAndBitwiseAnd($VarHandle* ob, Object$* oba, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndLong(ba, address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index)), value);
	} else {
		return getAndBitwiseAndConvEndianWithCAS(ba, index, value);
	}
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getAndBitwiseAndRelease($VarHandle* ob, Object$* oba, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndLongRelease(ba, address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index)), value);
	} else {
		return getAndBitwiseAndConvEndianWithCAS(ba, index, value);
	}
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getAndBitwiseAndAcquire($VarHandle* ob, Object$* oba, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndLongAcquire(ba, address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index)), value);
	} else {
		return getAndBitwiseAndConvEndianWithCAS(ba, index, value);
	}
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getAndBitwiseAndConvEndianWithCAS($bytes* ba, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	int64_t nativeExpectedValue = 0;
	int64_t expectedValue = 0;
	int64_t offset = address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index));
	$init($MethodHandleStatics);
	do {
		$init($MethodHandleStatics);
		nativeExpectedValue = $nc($MethodHandleStatics::UNSAFE)->getLongVolatile(ba, offset);
		expectedValue = $Long::reverseBytes(nativeExpectedValue);
	} while (!$nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLong(ba, offset, nativeExpectedValue, $Long::reverseBytes(expectedValue & value)));
	return expectedValue;
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getAndBitwiseXor($VarHandle* ob, Object$* oba, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorLong(ba, address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index)), value);
	} else {
		return getAndBitwiseXorConvEndianWithCAS(ba, index, value);
	}
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getAndBitwiseXorRelease($VarHandle* ob, Object$* oba, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorLongRelease(ba, address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index)), value);
	} else {
		return getAndBitwiseXorConvEndianWithCAS(ba, index, value);
	}
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getAndBitwiseXorAcquire($VarHandle* ob, Object$* oba, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorLongAcquire(ba, address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index)), value);
	} else {
		return getAndBitwiseXorConvEndianWithCAS(ba, index, value);
	}
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getAndBitwiseXorConvEndianWithCAS($bytes* ba, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	int64_t nativeExpectedValue = 0;
	int64_t expectedValue = 0;
	int64_t offset = address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index));
	$init($MethodHandleStatics);
	do {
		$init($MethodHandleStatics);
		nativeExpectedValue = $nc($MethodHandleStatics::UNSAFE)->getLongVolatile(ba, offset);
		expectedValue = $Long::reverseBytes(nativeExpectedValue);
	} while (!$nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLong(ba, offset, nativeExpectedValue, $Long::reverseBytes(expectedValue ^ value)));
	return expectedValue;
}

void VarHandleByteArrayAsLongs$ArrayHandle::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(VarHandleByteArrayAsLongs$ArrayHandle::OOBEF, $Preconditions::outOfBoundsExceptionFormatter($$new(VarHandleByteArrayAsLongs$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException)));
	$assignStatic(VarHandleByteArrayAsLongs$ArrayHandle::FORM, $new($VarForm, VarHandleByteArrayAsLongs$ArrayHandle::class$, $getClass($bytes), $Long::TYPE, $$new($ClassArray, {$Integer::TYPE})));
}

VarHandleByteArrayAsLongs$ArrayHandle::VarHandleByteArrayAsLongs$ArrayHandle() {
}

$Class* VarHandleByteArrayAsLongs$ArrayHandle::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.lang.invoke.VarHandleByteArrayAsLongs$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException")) {
			return VarHandleByteArrayAsLongs$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"OOBEF", "Ljava/util/function/BiFunction;", "Ljava/util/function/BiFunction<Ljava/lang/String;Ljava/util/List<Ljava/lang/Number;>;Ljava/lang/ArrayIndexOutOfBoundsException;>;", $PRIVATE | $STATIC | $FINAL, $staticField(VarHandleByteArrayAsLongs$ArrayHandle, OOBEF)},
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayAsLongs$ArrayHandle, FORM)},
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
		{"<init>", "(Z)V", nullptr, 0, $method(VarHandleByteArrayAsLongs$ArrayHandle, init$, void, bool)},
		{"<init>", "(ZZ)V", nullptr, $PRIVATE, $method(VarHandleByteArrayAsLongs$ArrayHandle, init$, void, bool, bool)},
		{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(VarHandleByteArrayAsLongs$ArrayHandle, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
		{"address", "([BI)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, address, int64_t, $bytes*, int32_t), nullptr, nullptr, addressmethodAnnotations$$},
		{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, compareAndExchange, int64_t, $VarHandle*, Object$*, int32_t, int64_t, int64_t), nullptr, nullptr, compareAndExchangemethodAnnotations$$},
		{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, compareAndExchangeAcquire, int64_t, $VarHandle*, Object$*, int32_t, int64_t, int64_t), nullptr, nullptr, compareAndExchangeAcquiremethodAnnotations$$},
		{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, compareAndExchangeRelease, int64_t, $VarHandle*, Object$*, int32_t, int64_t, int64_t), nullptr, nullptr, compareAndExchangeReleasemethodAnnotations$$},
		{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, compareAndSet, bool, $VarHandle*, Object$*, int32_t, int64_t, int64_t), nullptr, nullptr, compareAndSetmethodAnnotations$$},
		{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, get, int64_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getmethodAnnotations$$},
		{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getAcquire, int64_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getAcquiremethodAnnotations$$},
		{"getAndAdd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getAndAdd, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndAddmethodAnnotations$$},
		{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getAndAddAcquire, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndAddAcquiremethodAnnotations$$},
		{"getAndAddConvEndianWithCAS", "([BIJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getAndAddConvEndianWithCAS, int64_t, $bytes*, int32_t, int64_t), nullptr, nullptr, getAndAddConvEndianWithCASmethodAnnotations$$},
		{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getAndAddRelease, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndAddReleasemethodAnnotations$$},
		{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getAndBitwiseAnd, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndBitwiseAndmethodAnnotations$$},
		{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getAndBitwiseAndAcquire, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndBitwiseAndAcquiremethodAnnotations$$},
		{"getAndBitwiseAndConvEndianWithCAS", "([BIJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getAndBitwiseAndConvEndianWithCAS, int64_t, $bytes*, int32_t, int64_t), nullptr, nullptr, getAndBitwiseAndConvEndianWithCASmethodAnnotations$$},
		{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getAndBitwiseAndRelease, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndBitwiseAndReleasemethodAnnotations$$},
		{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getAndBitwiseOr, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndBitwiseOrmethodAnnotations$$},
		{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getAndBitwiseOrAcquire, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndBitwiseOrAcquiremethodAnnotations$$},
		{"getAndBitwiseOrConvEndianWithCAS", "([BIJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getAndBitwiseOrConvEndianWithCAS, int64_t, $bytes*, int32_t, int64_t), nullptr, nullptr, getAndBitwiseOrConvEndianWithCASmethodAnnotations$$},
		{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getAndBitwiseOrRelease, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndBitwiseOrReleasemethodAnnotations$$},
		{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getAndBitwiseXor, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndBitwiseXormethodAnnotations$$},
		{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getAndBitwiseXorAcquire, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndBitwiseXorAcquiremethodAnnotations$$},
		{"getAndBitwiseXorConvEndianWithCAS", "([BIJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getAndBitwiseXorConvEndianWithCAS, int64_t, $bytes*, int32_t, int64_t), nullptr, nullptr, getAndBitwiseXorConvEndianWithCASmethodAnnotations$$},
		{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getAndBitwiseXorRelease, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndBitwiseXorReleasemethodAnnotations$$},
		{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getAndSet, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndSetmethodAnnotations$$},
		{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getAndSetAcquire, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndSetAcquiremethodAnnotations$$},
		{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getAndSetRelease, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndSetReleasemethodAnnotations$$},
		{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getOpaque, int64_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getOpaquemethodAnnotations$$},
		{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getVolatile, int64_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getVolatilemethodAnnotations$$},
		{"index", "([BI)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, index, int32_t, $bytes*, int32_t), nullptr, nullptr, indexmethodAnnotations$$},
		{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, set, void, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, setmethodAnnotations$$},
		{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, setOpaque, void, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, setRelease, void, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, setReleasemethodAnnotations$$},
		{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, setVolatile, void, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, setVolatilemethodAnnotations$$},
		{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, weakCompareAndSet, bool, $VarHandle*, Object$*, int32_t, int64_t, int64_t), nullptr, nullptr, weakCompareAndSetmethodAnnotations$$},
		{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, weakCompareAndSetAcquire, bool, $VarHandle*, Object$*, int32_t, int64_t, int64_t), nullptr, nullptr, weakCompareAndSetAcquiremethodAnnotations$$},
		{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, weakCompareAndSetPlain, bool, $VarHandle*, Object$*, int32_t, int64_t, int64_t), nullptr, nullptr, weakCompareAndSetPlainmethodAnnotations$$},
		{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, weakCompareAndSetRelease, bool, $VarHandle*, Object$*, int32_t, int64_t, int64_t), nullptr, nullptr, weakCompareAndSetReleasemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsLongs$ArrayHandle;", nullptr, $PUBLIC, $virtualMethod(VarHandleByteArrayAsLongs$ArrayHandle, withInvokeBehavior, VarHandleByteArrayAsLongs$ArrayHandle*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsLongs$ArrayHandle;", nullptr, $PUBLIC, $virtualMethod(VarHandleByteArrayAsLongs$ArrayHandle, withInvokeExactBehavior, VarHandleByteArrayAsLongs$ArrayHandle*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleByteArrayAsLongs$ArrayHandle", "java.lang.invoke.VarHandleByteArrayAsLongs", "ArrayHandle", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleByteArrayAsLongs$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsLongs", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleByteArrayAsLongs$ArrayHandle",
		"java.lang.invoke.VarHandleByteArrayAsLongs$ByteArrayViewVarHandle",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.VarHandleByteArrayAsLongs"
	};
	$loadClass(VarHandleByteArrayAsLongs$ArrayHandle, name, initialize, &classInfo$$, VarHandleByteArrayAsLongs$ArrayHandle::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleByteArrayAsLongs$ArrayHandle);
	});
	return class$;
}

$Class* VarHandleByteArrayAsLongs$ArrayHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java