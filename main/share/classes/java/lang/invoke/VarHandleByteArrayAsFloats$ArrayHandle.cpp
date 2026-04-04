#include <java/lang/invoke/VarHandleByteArrayAsFloats$ArrayHandle.h>
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
#include <java/lang/invoke/VarHandleByteArrayAsFloats$ByteArrayViewVarHandle.h>
#include <java/lang/invoke/VarHandleByteArrayAsFloats.h>
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
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodType = ::java::lang::invoke::MethodType;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandle$AccessType = ::java::lang::invoke::VarHandle$AccessType;
using $VarHandleByteArrayAsFloats = ::java::lang::invoke::VarHandleByteArrayAsFloats;
using $VarHandleByteArrayAsFloats$ByteArrayViewVarHandle = ::java::lang::invoke::VarHandleByteArrayAsFloats$ByteArrayViewVarHandle;
using $VarHandleByteArrayBase = ::java::lang::invoke::VarHandleByteArrayBase;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $Preconditions = ::jdk::internal::util::Preconditions;

namespace java {
	namespace lang {
		namespace invoke {

class VarHandleByteArrayAsFloats$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException : public $Function {
	$class(VarHandleByteArrayAsFloats$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		 return $new($ArrayIndexOutOfBoundsException, $cast($String, s));
	}
};
$Class* VarHandleByteArrayAsFloats$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(VarHandleByteArrayAsFloats$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(VarHandleByteArrayAsFloats$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.lang.invoke.VarHandleByteArrayAsFloats$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(VarHandleByteArrayAsFloats$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleByteArrayAsFloats$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException);
	});
	return class$;
}
$Class* VarHandleByteArrayAsFloats$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::class$ = nullptr;

$BiFunction* VarHandleByteArrayAsFloats$ArrayHandle::OOBEF = nullptr;
$VarForm* VarHandleByteArrayAsFloats$ArrayHandle::FORM = nullptr;

void VarHandleByteArrayAsFloats$ArrayHandle::init$(bool be) {
	VarHandleByteArrayAsFloats$ArrayHandle::init$(be, false);
}

void VarHandleByteArrayAsFloats$ArrayHandle::init$(bool be, bool exact) {
	$VarHandleByteArrayAsFloats$ByteArrayViewVarHandle::init$(VarHandleByteArrayAsFloats$ArrayHandle::FORM, be, exact);
}

VarHandleByteArrayAsFloats$ArrayHandle* VarHandleByteArrayAsFloats$ArrayHandle::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleByteArrayAsFloats$ArrayHandle, this->be, true);
}

VarHandleByteArrayAsFloats$ArrayHandle* VarHandleByteArrayAsFloats$ArrayHandle::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleByteArrayAsFloats$ArrayHandle, this->be, false);
}

$MethodType* VarHandleByteArrayAsFloats$ArrayHandle::accessModeTypeUncached($VarHandle$AccessType* at) {
	return $nc(at)->accessModeType($getClass($bytes), $Float::TYPE, $$new($ClassArray, {$Integer::TYPE}));
}

int32_t VarHandleByteArrayAsFloats$ArrayHandle::index($bytes* ba, int32_t index) {
	$init(VarHandleByteArrayAsFloats$ArrayHandle);
	return $Preconditions::checkIndex(index, $nc(ba)->length - 3, VarHandleByteArrayAsFloats$ArrayHandle::OOBEF);
}

int64_t VarHandleByteArrayAsFloats$ArrayHandle::address($bytes* ba, int32_t index) {
	$init(VarHandleByteArrayAsFloats$ArrayHandle);
	$init($Unsafe);
	int64_t address = ((int64_t)index) + $Unsafe::ARRAY_BYTE_BASE_OFFSET;
	if ((address & 3) != 0) {
		$throw($($VarHandleByteArrayBase::newIllegalStateExceptionForMisalignedAccess(index)));
	}
	return address;
}

float VarHandleByteArrayAsFloats$ArrayHandle::get($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsFloats$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsFloats$ArrayHandle, handle, $cast(VarHandleByteArrayAsFloats$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$init($Unsafe);
	int32_t rawValue = $nc($MethodHandleStatics::UNSAFE)->getIntUnaligned(ba, ((int64_t)VarHandleByteArrayAsFloats$ArrayHandle::index(ba, index)) + $Unsafe::ARRAY_BYTE_BASE_OFFSET, $nc(handle)->be);
	return $Float::intBitsToFloat(rawValue);
}

void VarHandleByteArrayAsFloats$ArrayHandle::set($VarHandle* ob, Object$* oba, int32_t index, float value) {
	$init(VarHandleByteArrayAsFloats$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsFloats$ArrayHandle, handle, $cast(VarHandleByteArrayAsFloats$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$init($Unsafe);
	int64_t var$0 = ((int64_t)VarHandleByteArrayAsFloats$ArrayHandle::index(ba, index)) + $Unsafe::ARRAY_BYTE_BASE_OFFSET;
	$nc($MethodHandleStatics::UNSAFE)->putIntUnaligned(ba, var$0, $Float::floatToRawIntBits(value), $nc(handle)->be);
}

float VarHandleByteArrayAsFloats$ArrayHandle::getVolatile($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsFloats$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsFloats$ArrayHandle, handle, $cast(VarHandleByteArrayAsFloats$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	return $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getIntVolatile(ba, address(ba, VarHandleByteArrayAsFloats$ArrayHandle::index(ba, index))));
}

void VarHandleByteArrayAsFloats$ArrayHandle::setVolatile($VarHandle* ob, Object$* oba, int32_t index, float value) {
	$init(VarHandleByteArrayAsFloats$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsFloats$ArrayHandle, handle, $cast(VarHandleByteArrayAsFloats$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsFloats$ArrayHandle::index(ba, index));
	$nc($MethodHandleStatics::UNSAFE)->putIntVolatile(ba, var$0, $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, value));
}

float VarHandleByteArrayAsFloats$ArrayHandle::getAcquire($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsFloats$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsFloats$ArrayHandle, handle, $cast(VarHandleByteArrayAsFloats$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	return $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getIntAcquire(ba, address(ba, VarHandleByteArrayAsFloats$ArrayHandle::index(ba, index))));
}

void VarHandleByteArrayAsFloats$ArrayHandle::setRelease($VarHandle* ob, Object$* oba, int32_t index, float value) {
	$init(VarHandleByteArrayAsFloats$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsFloats$ArrayHandle, handle, $cast(VarHandleByteArrayAsFloats$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsFloats$ArrayHandle::index(ba, index));
	$nc($MethodHandleStatics::UNSAFE)->putIntRelease(ba, var$0, $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, value));
}

float VarHandleByteArrayAsFloats$ArrayHandle::getOpaque($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsFloats$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsFloats$ArrayHandle, handle, $cast(VarHandleByteArrayAsFloats$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	return $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getIntOpaque(ba, address(ba, VarHandleByteArrayAsFloats$ArrayHandle::index(ba, index))));
}

void VarHandleByteArrayAsFloats$ArrayHandle::setOpaque($VarHandle* ob, Object$* oba, int32_t index, float value) {
	$init(VarHandleByteArrayAsFloats$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsFloats$ArrayHandle, handle, $cast(VarHandleByteArrayAsFloats$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsFloats$ArrayHandle::index(ba, index));
	$nc($MethodHandleStatics::UNSAFE)->putIntOpaque(ba, var$0, $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, value));
}

bool VarHandleByteArrayAsFloats$ArrayHandle::compareAndSet($VarHandle* ob, Object$* oba, int32_t index, float expected, float value) {
	$init(VarHandleByteArrayAsFloats$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsFloats$ArrayHandle, handle, $cast(VarHandleByteArrayAsFloats$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsFloats$ArrayHandle::index(ba, index));
	int32_t var$1 = $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, expected);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetInt(ba, var$0, var$1, $VarHandleByteArrayAsFloats::convEndian(handle->be, value));
}

float VarHandleByteArrayAsFloats$ArrayHandle::compareAndExchange($VarHandle* ob, Object$* oba, int32_t index, float expected, float value) {
	$init(VarHandleByteArrayAsFloats$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsFloats$ArrayHandle, handle, $cast(VarHandleByteArrayAsFloats$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsFloats$ArrayHandle::index(ba, index));
	int32_t var$1 = $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, expected);
	return $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeInt(ba, var$0, var$1, $VarHandleByteArrayAsFloats::convEndian(handle->be, value)));
}

float VarHandleByteArrayAsFloats$ArrayHandle::compareAndExchangeAcquire($VarHandle* ob, Object$* oba, int32_t index, float expected, float value) {
	$init(VarHandleByteArrayAsFloats$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsFloats$ArrayHandle, handle, $cast(VarHandleByteArrayAsFloats$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsFloats$ArrayHandle::index(ba, index));
	int32_t var$1 = $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, expected);
	return $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeIntAcquire(ba, var$0, var$1, $VarHandleByteArrayAsFloats::convEndian(handle->be, value)));
}

float VarHandleByteArrayAsFloats$ArrayHandle::compareAndExchangeRelease($VarHandle* ob, Object$* oba, int32_t index, float expected, float value) {
	$init(VarHandleByteArrayAsFloats$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsFloats$ArrayHandle, handle, $cast(VarHandleByteArrayAsFloats$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsFloats$ArrayHandle::index(ba, index));
	int32_t var$1 = $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, expected);
	return $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeIntRelease(ba, var$0, var$1, $VarHandleByteArrayAsFloats::convEndian(handle->be, value)));
}

bool VarHandleByteArrayAsFloats$ArrayHandle::weakCompareAndSetPlain($VarHandle* ob, Object$* oba, int32_t index, float expected, float value) {
	$init(VarHandleByteArrayAsFloats$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsFloats$ArrayHandle, handle, $cast(VarHandleByteArrayAsFloats$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsFloats$ArrayHandle::index(ba, index));
	int32_t var$1 = $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, expected);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetIntPlain(ba, var$0, var$1, $VarHandleByteArrayAsFloats::convEndian(handle->be, value));
}

bool VarHandleByteArrayAsFloats$ArrayHandle::weakCompareAndSet($VarHandle* ob, Object$* oba, int32_t index, float expected, float value) {
	$init(VarHandleByteArrayAsFloats$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsFloats$ArrayHandle, handle, $cast(VarHandleByteArrayAsFloats$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsFloats$ArrayHandle::index(ba, index));
	int32_t var$1 = $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, expected);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetInt(ba, var$0, var$1, $VarHandleByteArrayAsFloats::convEndian(handle->be, value));
}

bool VarHandleByteArrayAsFloats$ArrayHandle::weakCompareAndSetAcquire($VarHandle* ob, Object$* oba, int32_t index, float expected, float value) {
	$init(VarHandleByteArrayAsFloats$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsFloats$ArrayHandle, handle, $cast(VarHandleByteArrayAsFloats$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsFloats$ArrayHandle::index(ba, index));
	int32_t var$1 = $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, expected);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetIntAcquire(ba, var$0, var$1, $VarHandleByteArrayAsFloats::convEndian(handle->be, value));
}

bool VarHandleByteArrayAsFloats$ArrayHandle::weakCompareAndSetRelease($VarHandle* ob, Object$* oba, int32_t index, float expected, float value) {
	$init(VarHandleByteArrayAsFloats$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsFloats$ArrayHandle, handle, $cast(VarHandleByteArrayAsFloats$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsFloats$ArrayHandle::index(ba, index));
	int32_t var$1 = $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, expected);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetIntRelease(ba, var$0, var$1, $VarHandleByteArrayAsFloats::convEndian(handle->be, value));
}

float VarHandleByteArrayAsFloats$ArrayHandle::getAndSet($VarHandle* ob, Object$* oba, int32_t index, float value) {
	$init(VarHandleByteArrayAsFloats$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsFloats$ArrayHandle, handle, $cast(VarHandleByteArrayAsFloats$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsFloats$ArrayHandle::index(ba, index));
	return $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getAndSetInt(ba, var$0, $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, value)));
}

float VarHandleByteArrayAsFloats$ArrayHandle::getAndSetAcquire($VarHandle* ob, Object$* oba, int32_t index, float value) {
	$init(VarHandleByteArrayAsFloats$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsFloats$ArrayHandle, handle, $cast(VarHandleByteArrayAsFloats$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsFloats$ArrayHandle::index(ba, index));
	return $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getAndSetIntAcquire(ba, var$0, $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, value)));
}

float VarHandleByteArrayAsFloats$ArrayHandle::getAndSetRelease($VarHandle* ob, Object$* oba, int32_t index, float value) {
	$init(VarHandleByteArrayAsFloats$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsFloats$ArrayHandle, handle, $cast(VarHandleByteArrayAsFloats$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsFloats$ArrayHandle::index(ba, index));
	return $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getAndSetIntRelease(ba, var$0, $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, value)));
}

void VarHandleByteArrayAsFloats$ArrayHandle::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(VarHandleByteArrayAsFloats$ArrayHandle::OOBEF, $Preconditions::outOfBoundsExceptionFormatter($$new(VarHandleByteArrayAsFloats$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException)));
	$assignStatic(VarHandleByteArrayAsFloats$ArrayHandle::FORM, $new($VarForm, VarHandleByteArrayAsFloats$ArrayHandle::class$, $getClass($bytes), $Float::TYPE, $$new($ClassArray, {$Integer::TYPE})));
}

VarHandleByteArrayAsFloats$ArrayHandle::VarHandleByteArrayAsFloats$ArrayHandle() {
}

$Class* VarHandleByteArrayAsFloats$ArrayHandle::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.lang.invoke.VarHandleByteArrayAsFloats$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException")) {
			return VarHandleByteArrayAsFloats$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"OOBEF", "Ljava/util/function/BiFunction;", "Ljava/util/function/BiFunction<Ljava/lang/String;Ljava/util/List<Ljava/lang/Number;>;Ljava/lang/ArrayIndexOutOfBoundsException;>;", $PRIVATE | $STATIC | $FINAL, $staticField(VarHandleByteArrayAsFloats$ArrayHandle, OOBEF)},
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayAsFloats$ArrayHandle, FORM)},
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
		{"<init>", "(Z)V", nullptr, 0, $method(VarHandleByteArrayAsFloats$ArrayHandle, init$, void, bool)},
		{"<init>", "(ZZ)V", nullptr, $PRIVATE, $method(VarHandleByteArrayAsFloats$ArrayHandle, init$, void, bool, bool)},
		{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(VarHandleByteArrayAsFloats$ArrayHandle, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
		{"address", "([BI)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ArrayHandle, address, int64_t, $bytes*, int32_t), nullptr, nullptr, addressmethodAnnotations$$},
		{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFF)F", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ArrayHandle, compareAndExchange, float, $VarHandle*, Object$*, int32_t, float, float), nullptr, nullptr, compareAndExchangemethodAnnotations$$},
		{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFF)F", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ArrayHandle, compareAndExchangeAcquire, float, $VarHandle*, Object$*, int32_t, float, float), nullptr, nullptr, compareAndExchangeAcquiremethodAnnotations$$},
		{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFF)F", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ArrayHandle, compareAndExchangeRelease, float, $VarHandle*, Object$*, int32_t, float, float), nullptr, nullptr, compareAndExchangeReleasemethodAnnotations$$},
		{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFF)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ArrayHandle, compareAndSet, bool, $VarHandle*, Object$*, int32_t, float, float), nullptr, nullptr, compareAndSetmethodAnnotations$$},
		{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)F", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ArrayHandle, get, float, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getmethodAnnotations$$},
		{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)F", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ArrayHandle, getAcquire, float, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getAcquiremethodAnnotations$$},
		{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IF)F", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ArrayHandle, getAndSet, float, $VarHandle*, Object$*, int32_t, float), nullptr, nullptr, getAndSetmethodAnnotations$$},
		{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IF)F", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ArrayHandle, getAndSetAcquire, float, $VarHandle*, Object$*, int32_t, float), nullptr, nullptr, getAndSetAcquiremethodAnnotations$$},
		{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IF)F", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ArrayHandle, getAndSetRelease, float, $VarHandle*, Object$*, int32_t, float), nullptr, nullptr, getAndSetReleasemethodAnnotations$$},
		{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)F", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ArrayHandle, getOpaque, float, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getOpaquemethodAnnotations$$},
		{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)F", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ArrayHandle, getVolatile, float, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getVolatilemethodAnnotations$$},
		{"index", "([BI)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ArrayHandle, index, int32_t, $bytes*, int32_t), nullptr, nullptr, indexmethodAnnotations$$},
		{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IF)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ArrayHandle, set, void, $VarHandle*, Object$*, int32_t, float), nullptr, nullptr, setmethodAnnotations$$},
		{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IF)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ArrayHandle, setOpaque, void, $VarHandle*, Object$*, int32_t, float), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IF)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ArrayHandle, setRelease, void, $VarHandle*, Object$*, int32_t, float), nullptr, nullptr, setReleasemethodAnnotations$$},
		{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IF)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ArrayHandle, setVolatile, void, $VarHandle*, Object$*, int32_t, float), nullptr, nullptr, setVolatilemethodAnnotations$$},
		{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFF)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ArrayHandle, weakCompareAndSet, bool, $VarHandle*, Object$*, int32_t, float, float), nullptr, nullptr, weakCompareAndSetmethodAnnotations$$},
		{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFF)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ArrayHandle, weakCompareAndSetAcquire, bool, $VarHandle*, Object$*, int32_t, float, float), nullptr, nullptr, weakCompareAndSetAcquiremethodAnnotations$$},
		{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFF)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ArrayHandle, weakCompareAndSetPlain, bool, $VarHandle*, Object$*, int32_t, float, float), nullptr, nullptr, weakCompareAndSetPlainmethodAnnotations$$},
		{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFF)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ArrayHandle, weakCompareAndSetRelease, bool, $VarHandle*, Object$*, int32_t, float, float), nullptr, nullptr, weakCompareAndSetReleasemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsFloats$ArrayHandle;", nullptr, $PUBLIC, $virtualMethod(VarHandleByteArrayAsFloats$ArrayHandle, withInvokeBehavior, VarHandleByteArrayAsFloats$ArrayHandle*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsFloats$ArrayHandle;", nullptr, $PUBLIC, $virtualMethod(VarHandleByteArrayAsFloats$ArrayHandle, withInvokeExactBehavior, VarHandleByteArrayAsFloats$ArrayHandle*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleByteArrayAsFloats$ArrayHandle", "java.lang.invoke.VarHandleByteArrayAsFloats", "ArrayHandle", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleByteArrayAsFloats$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsFloats", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleByteArrayAsFloats$ArrayHandle",
		"java.lang.invoke.VarHandleByteArrayAsFloats$ByteArrayViewVarHandle",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.VarHandleByteArrayAsFloats"
	};
	$loadClass(VarHandleByteArrayAsFloats$ArrayHandle, name, initialize, &classInfo$$, VarHandleByteArrayAsFloats$ArrayHandle::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleByteArrayAsFloats$ArrayHandle);
	});
	return class$;
}

$Class* VarHandleByteArrayAsFloats$ArrayHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java