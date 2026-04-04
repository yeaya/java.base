#include <java/lang/invoke/VarHandleByteArrayAsDoubles$ArrayHandle.h>
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
#include <java/lang/invoke/VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle.h>
#include <java/lang/invoke/VarHandleByteArrayAsDoubles.h>
#include <java/lang/invoke/VarHandleByteArrayBase.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/Function.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/util/Preconditions.h>
#include <jcpp.h>

#undef ARRAY_BYTE_BASE_OFFSET
#undef FORM
#undef OOBEF
#undef TYPE
#undef UNSAFE

using $Serializable = ::java::io::Serializable;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
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
using $VarHandleByteArrayAsDoubles = ::java::lang::invoke::VarHandleByteArrayAsDoubles;
using $VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle = ::java::lang::invoke::VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle;
using $VarHandleByteArrayBase = ::java::lang::invoke::VarHandleByteArrayBase;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $Preconditions = ::jdk::internal::util::Preconditions;

namespace java {
	namespace lang {
		namespace invoke {

class VarHandleByteArrayAsDoubles$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException : public $Function {
	$class(VarHandleByteArrayAsDoubles$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		 return $new($ArrayIndexOutOfBoundsException, $cast($String, s));
	}
};
$Class* VarHandleByteArrayAsDoubles$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(VarHandleByteArrayAsDoubles$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(VarHandleByteArrayAsDoubles$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.lang.invoke.VarHandleByteArrayAsDoubles$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(VarHandleByteArrayAsDoubles$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleByteArrayAsDoubles$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException);
	});
	return class$;
}
$Class* VarHandleByteArrayAsDoubles$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::class$ = nullptr;

$BiFunction* VarHandleByteArrayAsDoubles$ArrayHandle::OOBEF = nullptr;
$VarForm* VarHandleByteArrayAsDoubles$ArrayHandle::FORM = nullptr;

void VarHandleByteArrayAsDoubles$ArrayHandle::init$(bool be) {
	VarHandleByteArrayAsDoubles$ArrayHandle::init$(be, false);
}

void VarHandleByteArrayAsDoubles$ArrayHandle::init$(bool be, bool exact) {
	$VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle::init$(VarHandleByteArrayAsDoubles$ArrayHandle::FORM, be, exact);
}

VarHandleByteArrayAsDoubles$ArrayHandle* VarHandleByteArrayAsDoubles$ArrayHandle::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleByteArrayAsDoubles$ArrayHandle, this->be, true);
}

VarHandleByteArrayAsDoubles$ArrayHandle* VarHandleByteArrayAsDoubles$ArrayHandle::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleByteArrayAsDoubles$ArrayHandle, this->be, false);
}

$MethodType* VarHandleByteArrayAsDoubles$ArrayHandle::accessModeTypeUncached($VarHandle$AccessType* at) {
	return $nc(at)->accessModeType($getClass($bytes), $Double::TYPE, $$new($ClassArray, {$Integer::TYPE}));
}

int32_t VarHandleByteArrayAsDoubles$ArrayHandle::index($bytes* ba, int32_t index) {
	$init(VarHandleByteArrayAsDoubles$ArrayHandle);
	return $Preconditions::checkIndex(index, $nc(ba)->length - 7, VarHandleByteArrayAsDoubles$ArrayHandle::OOBEF);
}

int64_t VarHandleByteArrayAsDoubles$ArrayHandle::address($bytes* ba, int32_t index) {
	$init(VarHandleByteArrayAsDoubles$ArrayHandle);
	$init($Unsafe);
	int64_t address = ((int64_t)index) + $Unsafe::ARRAY_BYTE_BASE_OFFSET;
	if ((address & 7) != 0) {
		$throw($($VarHandleByteArrayBase::newIllegalStateExceptionForMisalignedAccess(index)));
	}
	return address;
}

double VarHandleByteArrayAsDoubles$ArrayHandle::get($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsDoubles$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsDoubles$ArrayHandle, handle, $cast(VarHandleByteArrayAsDoubles$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$init($Unsafe);
	int64_t rawValue = $nc($MethodHandleStatics::UNSAFE)->getLongUnaligned(ba, ((int64_t)VarHandleByteArrayAsDoubles$ArrayHandle::index(ba, index)) + $Unsafe::ARRAY_BYTE_BASE_OFFSET, $nc(handle)->be);
	return $Double::longBitsToDouble(rawValue);
}

void VarHandleByteArrayAsDoubles$ArrayHandle::set($VarHandle* ob, Object$* oba, int32_t index, double value) {
	$init(VarHandleByteArrayAsDoubles$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsDoubles$ArrayHandle, handle, $cast(VarHandleByteArrayAsDoubles$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$init($Unsafe);
	int64_t var$0 = ((int64_t)VarHandleByteArrayAsDoubles$ArrayHandle::index(ba, index)) + $Unsafe::ARRAY_BYTE_BASE_OFFSET;
	$nc($MethodHandleStatics::UNSAFE)->putLongUnaligned(ba, var$0, $Double::doubleToRawLongBits(value), $nc(handle)->be);
}

double VarHandleByteArrayAsDoubles$ArrayHandle::getVolatile($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsDoubles$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsDoubles$ArrayHandle, handle, $cast(VarHandleByteArrayAsDoubles$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	return $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getLongVolatile(ba, address(ba, VarHandleByteArrayAsDoubles$ArrayHandle::index(ba, index))));
}

void VarHandleByteArrayAsDoubles$ArrayHandle::setVolatile($VarHandle* ob, Object$* oba, int32_t index, double value) {
	$init(VarHandleByteArrayAsDoubles$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsDoubles$ArrayHandle, handle, $cast(VarHandleByteArrayAsDoubles$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsDoubles$ArrayHandle::index(ba, index));
	$nc($MethodHandleStatics::UNSAFE)->putLongVolatile(ba, var$0, $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, value));
}

double VarHandleByteArrayAsDoubles$ArrayHandle::getAcquire($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsDoubles$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsDoubles$ArrayHandle, handle, $cast(VarHandleByteArrayAsDoubles$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	return $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getLongAcquire(ba, address(ba, VarHandleByteArrayAsDoubles$ArrayHandle::index(ba, index))));
}

void VarHandleByteArrayAsDoubles$ArrayHandle::setRelease($VarHandle* ob, Object$* oba, int32_t index, double value) {
	$init(VarHandleByteArrayAsDoubles$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsDoubles$ArrayHandle, handle, $cast(VarHandleByteArrayAsDoubles$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsDoubles$ArrayHandle::index(ba, index));
	$nc($MethodHandleStatics::UNSAFE)->putLongRelease(ba, var$0, $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, value));
}

double VarHandleByteArrayAsDoubles$ArrayHandle::getOpaque($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsDoubles$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsDoubles$ArrayHandle, handle, $cast(VarHandleByteArrayAsDoubles$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	return $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getLongOpaque(ba, address(ba, VarHandleByteArrayAsDoubles$ArrayHandle::index(ba, index))));
}

void VarHandleByteArrayAsDoubles$ArrayHandle::setOpaque($VarHandle* ob, Object$* oba, int32_t index, double value) {
	$init(VarHandleByteArrayAsDoubles$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsDoubles$ArrayHandle, handle, $cast(VarHandleByteArrayAsDoubles$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsDoubles$ArrayHandle::index(ba, index));
	$nc($MethodHandleStatics::UNSAFE)->putLongOpaque(ba, var$0, $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, value));
}

bool VarHandleByteArrayAsDoubles$ArrayHandle::compareAndSet($VarHandle* ob, Object$* oba, int32_t index, double expected, double value) {
	$init(VarHandleByteArrayAsDoubles$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsDoubles$ArrayHandle, handle, $cast(VarHandleByteArrayAsDoubles$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsDoubles$ArrayHandle::index(ba, index));
	int64_t var$1 = $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, expected);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetLong(ba, var$0, var$1, $VarHandleByteArrayAsDoubles::convEndian(handle->be, value));
}

double VarHandleByteArrayAsDoubles$ArrayHandle::compareAndExchange($VarHandle* ob, Object$* oba, int32_t index, double expected, double value) {
	$init(VarHandleByteArrayAsDoubles$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsDoubles$ArrayHandle, handle, $cast(VarHandleByteArrayAsDoubles$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsDoubles$ArrayHandle::index(ba, index));
	int64_t var$1 = $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, expected);
	return $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeLong(ba, var$0, var$1, $VarHandleByteArrayAsDoubles::convEndian(handle->be, value)));
}

double VarHandleByteArrayAsDoubles$ArrayHandle::compareAndExchangeAcquire($VarHandle* ob, Object$* oba, int32_t index, double expected, double value) {
	$init(VarHandleByteArrayAsDoubles$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsDoubles$ArrayHandle, handle, $cast(VarHandleByteArrayAsDoubles$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsDoubles$ArrayHandle::index(ba, index));
	int64_t var$1 = $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, expected);
	return $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeLongAcquire(ba, var$0, var$1, $VarHandleByteArrayAsDoubles::convEndian(handle->be, value)));
}

double VarHandleByteArrayAsDoubles$ArrayHandle::compareAndExchangeRelease($VarHandle* ob, Object$* oba, int32_t index, double expected, double value) {
	$init(VarHandleByteArrayAsDoubles$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsDoubles$ArrayHandle, handle, $cast(VarHandleByteArrayAsDoubles$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsDoubles$ArrayHandle::index(ba, index));
	int64_t var$1 = $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, expected);
	return $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeLongRelease(ba, var$0, var$1, $VarHandleByteArrayAsDoubles::convEndian(handle->be, value)));
}

bool VarHandleByteArrayAsDoubles$ArrayHandle::weakCompareAndSetPlain($VarHandle* ob, Object$* oba, int32_t index, double expected, double value) {
	$init(VarHandleByteArrayAsDoubles$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsDoubles$ArrayHandle, handle, $cast(VarHandleByteArrayAsDoubles$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsDoubles$ArrayHandle::index(ba, index));
	int64_t var$1 = $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, expected);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLongPlain(ba, var$0, var$1, $VarHandleByteArrayAsDoubles::convEndian(handle->be, value));
}

bool VarHandleByteArrayAsDoubles$ArrayHandle::weakCompareAndSet($VarHandle* ob, Object$* oba, int32_t index, double expected, double value) {
	$init(VarHandleByteArrayAsDoubles$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsDoubles$ArrayHandle, handle, $cast(VarHandleByteArrayAsDoubles$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsDoubles$ArrayHandle::index(ba, index));
	int64_t var$1 = $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, expected);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLong(ba, var$0, var$1, $VarHandleByteArrayAsDoubles::convEndian(handle->be, value));
}

bool VarHandleByteArrayAsDoubles$ArrayHandle::weakCompareAndSetAcquire($VarHandle* ob, Object$* oba, int32_t index, double expected, double value) {
	$init(VarHandleByteArrayAsDoubles$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsDoubles$ArrayHandle, handle, $cast(VarHandleByteArrayAsDoubles$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsDoubles$ArrayHandle::index(ba, index));
	int64_t var$1 = $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, expected);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLongAcquire(ba, var$0, var$1, $VarHandleByteArrayAsDoubles::convEndian(handle->be, value));
}

bool VarHandleByteArrayAsDoubles$ArrayHandle::weakCompareAndSetRelease($VarHandle* ob, Object$* oba, int32_t index, double expected, double value) {
	$init(VarHandleByteArrayAsDoubles$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsDoubles$ArrayHandle, handle, $cast(VarHandleByteArrayAsDoubles$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsDoubles$ArrayHandle::index(ba, index));
	int64_t var$1 = $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, expected);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLongRelease(ba, var$0, var$1, $VarHandleByteArrayAsDoubles::convEndian(handle->be, value));
}

double VarHandleByteArrayAsDoubles$ArrayHandle::getAndSet($VarHandle* ob, Object$* oba, int32_t index, double value) {
	$init(VarHandleByteArrayAsDoubles$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsDoubles$ArrayHandle, handle, $cast(VarHandleByteArrayAsDoubles$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsDoubles$ArrayHandle::index(ba, index));
	return $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getAndSetLong(ba, var$0, $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, value)));
}

double VarHandleByteArrayAsDoubles$ArrayHandle::getAndSetAcquire($VarHandle* ob, Object$* oba, int32_t index, double value) {
	$init(VarHandleByteArrayAsDoubles$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsDoubles$ArrayHandle, handle, $cast(VarHandleByteArrayAsDoubles$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsDoubles$ArrayHandle::index(ba, index));
	return $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getAndSetLongAcquire(ba, var$0, $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, value)));
}

double VarHandleByteArrayAsDoubles$ArrayHandle::getAndSetRelease($VarHandle* ob, Object$* oba, int32_t index, double value) {
	$init(VarHandleByteArrayAsDoubles$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsDoubles$ArrayHandle, handle, $cast(VarHandleByteArrayAsDoubles$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsDoubles$ArrayHandle::index(ba, index));
	return $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getAndSetLongRelease(ba, var$0, $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, value)));
}

void VarHandleByteArrayAsDoubles$ArrayHandle::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(VarHandleByteArrayAsDoubles$ArrayHandle::OOBEF, $Preconditions::outOfBoundsExceptionFormatter($$new(VarHandleByteArrayAsDoubles$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException)));
	$assignStatic(VarHandleByteArrayAsDoubles$ArrayHandle::FORM, $new($VarForm, VarHandleByteArrayAsDoubles$ArrayHandle::class$, $getClass($bytes), $Double::TYPE, $$new($ClassArray, {$Integer::TYPE})));
}

VarHandleByteArrayAsDoubles$ArrayHandle::VarHandleByteArrayAsDoubles$ArrayHandle() {
}

$Class* VarHandleByteArrayAsDoubles$ArrayHandle::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.lang.invoke.VarHandleByteArrayAsDoubles$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException")) {
			return VarHandleByteArrayAsDoubles$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"OOBEF", "Ljava/util/function/BiFunction;", "Ljava/util/function/BiFunction<Ljava/lang/String;Ljava/util/List<Ljava/lang/Number;>;Ljava/lang/ArrayIndexOutOfBoundsException;>;", $PRIVATE | $STATIC | $FINAL, $staticField(VarHandleByteArrayAsDoubles$ArrayHandle, OOBEF)},
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayAsDoubles$ArrayHandle, FORM)},
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
		{"<init>", "(Z)V", nullptr, 0, $method(VarHandleByteArrayAsDoubles$ArrayHandle, init$, void, bool)},
		{"<init>", "(ZZ)V", nullptr, $PRIVATE, $method(VarHandleByteArrayAsDoubles$ArrayHandle, init$, void, bool, bool)},
		{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(VarHandleByteArrayAsDoubles$ArrayHandle, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
		{"address", "([BI)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, address, int64_t, $bytes*, int32_t), nullptr, nullptr, addressmethodAnnotations$$},
		{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)D", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, compareAndExchange, double, $VarHandle*, Object$*, int32_t, double, double), nullptr, nullptr, compareAndExchangemethodAnnotations$$},
		{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)D", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, compareAndExchangeAcquire, double, $VarHandle*, Object$*, int32_t, double, double), nullptr, nullptr, compareAndExchangeAcquiremethodAnnotations$$},
		{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)D", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, compareAndExchangeRelease, double, $VarHandle*, Object$*, int32_t, double, double), nullptr, nullptr, compareAndExchangeReleasemethodAnnotations$$},
		{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, compareAndSet, bool, $VarHandle*, Object$*, int32_t, double, double), nullptr, nullptr, compareAndSetmethodAnnotations$$},
		{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)D", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, get, double, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getmethodAnnotations$$},
		{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)D", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, getAcquire, double, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getAcquiremethodAnnotations$$},
		{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)D", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, getAndSet, double, $VarHandle*, Object$*, int32_t, double), nullptr, nullptr, getAndSetmethodAnnotations$$},
		{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)D", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, getAndSetAcquire, double, $VarHandle*, Object$*, int32_t, double), nullptr, nullptr, getAndSetAcquiremethodAnnotations$$},
		{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)D", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, getAndSetRelease, double, $VarHandle*, Object$*, int32_t, double), nullptr, nullptr, getAndSetReleasemethodAnnotations$$},
		{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)D", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, getOpaque, double, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getOpaquemethodAnnotations$$},
		{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)D", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, getVolatile, double, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getVolatilemethodAnnotations$$},
		{"index", "([BI)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, index, int32_t, $bytes*, int32_t), nullptr, nullptr, indexmethodAnnotations$$},
		{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, set, void, $VarHandle*, Object$*, int32_t, double), nullptr, nullptr, setmethodAnnotations$$},
		{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, setOpaque, void, $VarHandle*, Object$*, int32_t, double), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, setRelease, void, $VarHandle*, Object$*, int32_t, double), nullptr, nullptr, setReleasemethodAnnotations$$},
		{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, setVolatile, void, $VarHandle*, Object$*, int32_t, double), nullptr, nullptr, setVolatilemethodAnnotations$$},
		{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, weakCompareAndSet, bool, $VarHandle*, Object$*, int32_t, double, double), nullptr, nullptr, weakCompareAndSetmethodAnnotations$$},
		{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, weakCompareAndSetAcquire, bool, $VarHandle*, Object$*, int32_t, double, double), nullptr, nullptr, weakCompareAndSetAcquiremethodAnnotations$$},
		{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, weakCompareAndSetPlain, bool, $VarHandle*, Object$*, int32_t, double, double), nullptr, nullptr, weakCompareAndSetPlainmethodAnnotations$$},
		{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, weakCompareAndSetRelease, bool, $VarHandle*, Object$*, int32_t, double, double), nullptr, nullptr, weakCompareAndSetReleasemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsDoubles$ArrayHandle;", nullptr, $PUBLIC, $virtualMethod(VarHandleByteArrayAsDoubles$ArrayHandle, withInvokeBehavior, VarHandleByteArrayAsDoubles$ArrayHandle*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsDoubles$ArrayHandle;", nullptr, $PUBLIC, $virtualMethod(VarHandleByteArrayAsDoubles$ArrayHandle, withInvokeExactBehavior, VarHandleByteArrayAsDoubles$ArrayHandle*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleByteArrayAsDoubles$ArrayHandle", "java.lang.invoke.VarHandleByteArrayAsDoubles", "ArrayHandle", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsDoubles", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleByteArrayAsDoubles$ArrayHandle",
		"java.lang.invoke.VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.VarHandleByteArrayAsDoubles"
	};
	$loadClass(VarHandleByteArrayAsDoubles$ArrayHandle, name, initialize, &classInfo$$, VarHandleByteArrayAsDoubles$ArrayHandle::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleByteArrayAsDoubles$ArrayHandle);
	});
	return class$;
}

$Class* VarHandleByteArrayAsDoubles$ArrayHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java