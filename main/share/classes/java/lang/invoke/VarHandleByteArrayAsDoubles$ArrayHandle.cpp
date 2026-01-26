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
		 return $of($new($ArrayIndexOutOfBoundsException, $cast($String, s)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<VarHandleByteArrayAsDoubles$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo VarHandleByteArrayAsDoubles$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(VarHandleByteArrayAsDoubles$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException, init$, void)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(VarHandleByteArrayAsDoubles$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException, apply, $Object*, Object$*)},
	{}
};
$ClassInfo VarHandleByteArrayAsDoubles$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.invoke.VarHandleByteArrayAsDoubles$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* VarHandleByteArrayAsDoubles$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::load$($String* name, bool initialize) {
	$loadClass(VarHandleByteArrayAsDoubles$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* VarHandleByteArrayAsDoubles$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::class$ = nullptr;

$CompoundAttribute _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_address3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_compareAndExchange4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_compareAndExchangeAcquire5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_compareAndExchangeRelease6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_compareAndSet7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_get8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_getAcquire9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_getAndSet10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_getAndSetAcquire11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_getAndSetRelease12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_getOpaque13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_getVolatile14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_index15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_set16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_setOpaque17[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_setRelease18[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_setVolatile19[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_weakCompareAndSet20[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_weakCompareAndSetAcquire21[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_weakCompareAndSetPlain22[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_weakCompareAndSetRelease23[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleByteArrayAsDoubles$ArrayHandle_FieldInfo_[] = {
	{"OOBEF", "Ljava/util/function/BiFunction;", "Ljava/util/function/BiFunction<Ljava/lang/String;Ljava/util/List<Ljava/lang/Number;>;Ljava/lang/ArrayIndexOutOfBoundsException;>;", $PRIVATE | $STATIC | $FINAL, $staticField(VarHandleByteArrayAsDoubles$ArrayHandle, OOBEF)},
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayAsDoubles$ArrayHandle, FORM)},
	{}
};

$MethodInfo _VarHandleByteArrayAsDoubles$ArrayHandle_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, 0, $method(VarHandleByteArrayAsDoubles$ArrayHandle, init$, void, bool)},
	{"<init>", "(ZZ)V", nullptr, $PRIVATE, $method(VarHandleByteArrayAsDoubles$ArrayHandle, init$, void, bool, bool)},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(VarHandleByteArrayAsDoubles$ArrayHandle, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
	{"address", "([BI)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, address, int64_t, $bytes*, int32_t), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_address3},
	{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)D", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, compareAndExchange, double, $VarHandle*, Object$*, int32_t, double, double), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_compareAndExchange4},
	{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)D", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, compareAndExchangeAcquire, double, $VarHandle*, Object$*, int32_t, double, double), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_compareAndExchangeAcquire5},
	{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)D", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, compareAndExchangeRelease, double, $VarHandle*, Object$*, int32_t, double, double), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_compareAndExchangeRelease6},
	{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, compareAndSet, bool, $VarHandle*, Object$*, int32_t, double, double), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_compareAndSet7},
	{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)D", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, get, double, $VarHandle*, Object$*, int32_t), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_get8},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)D", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, getAcquire, double, $VarHandle*, Object$*, int32_t), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_getAcquire9},
	{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)D", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, getAndSet, double, $VarHandle*, Object$*, int32_t, double), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_getAndSet10},
	{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)D", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, getAndSetAcquire, double, $VarHandle*, Object$*, int32_t, double), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_getAndSetAcquire11},
	{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)D", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, getAndSetRelease, double, $VarHandle*, Object$*, int32_t, double), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_getAndSetRelease12},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)D", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, getOpaque, double, $VarHandle*, Object$*, int32_t), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_getOpaque13},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)D", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, getVolatile, double, $VarHandle*, Object$*, int32_t), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_getVolatile14},
	{"index", "([BI)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, index, int32_t, $bytes*, int32_t), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_index15},
	{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, set, void, $VarHandle*, Object$*, int32_t, double), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_set16},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, setOpaque, void, $VarHandle*, Object$*, int32_t, double), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_setOpaque17},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, setRelease, void, $VarHandle*, Object$*, int32_t, double), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_setRelease18},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, setVolatile, void, $VarHandle*, Object$*, int32_t, double), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_setVolatile19},
	{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, weakCompareAndSet, bool, $VarHandle*, Object$*, int32_t, double, double), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_weakCompareAndSet20},
	{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, weakCompareAndSetAcquire, bool, $VarHandle*, Object$*, int32_t, double, double), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_weakCompareAndSetAcquire21},
	{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, weakCompareAndSetPlain, bool, $VarHandle*, Object$*, int32_t, double, double), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_weakCompareAndSetPlain22},
	{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ArrayHandle, weakCompareAndSetRelease, bool, $VarHandle*, Object$*, int32_t, double, double), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ArrayHandle_MethodAnnotations_weakCompareAndSetRelease23},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsDoubles$ArrayHandle;", nullptr, $PUBLIC, $virtualMethod(VarHandleByteArrayAsDoubles$ArrayHandle, withInvokeBehavior, VarHandleByteArrayAsDoubles$ArrayHandle*)},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsDoubles$ArrayHandle;", nullptr, $PUBLIC, $virtualMethod(VarHandleByteArrayAsDoubles$ArrayHandle, withInvokeExactBehavior, VarHandleByteArrayAsDoubles$ArrayHandle*)},
	{}
};

$InnerClassInfo _VarHandleByteArrayAsDoubles$ArrayHandle_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleByteArrayAsDoubles$ArrayHandle", "java.lang.invoke.VarHandleByteArrayAsDoubles", "ArrayHandle", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsDoubles", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _VarHandleByteArrayAsDoubles$ArrayHandle_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleByteArrayAsDoubles$ArrayHandle",
	"java.lang.invoke.VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle",
	nullptr,
	_VarHandleByteArrayAsDoubles$ArrayHandle_FieldInfo_,
	_VarHandleByteArrayAsDoubles$ArrayHandle_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleByteArrayAsDoubles$ArrayHandle_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleByteArrayAsDoubles"
};

$Object* allocate$VarHandleByteArrayAsDoubles$ArrayHandle($Class* clazz) {
	return $of($alloc(VarHandleByteArrayAsDoubles$ArrayHandle));
}

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
	$load($bytes);
	$init($Double);
	$init($Integer);
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
	if (((int64_t)(address & (uint64_t)(int64_t)7)) != 0) {
		$throw($($VarHandleByteArrayBase::newIllegalStateExceptionForMisalignedAccess(index)));
	}
	return address;
}

double VarHandleByteArrayAsDoubles$ArrayHandle::get($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsDoubles$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsDoubles$ArrayHandle, handle, $cast(VarHandleByteArrayAsDoubles$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$init($Unsafe);
	int64_t rawValue = $nc($MethodHandleStatics::UNSAFE)->getLongUnaligned(ba, ((int64_t)VarHandleByteArrayAsDoubles$ArrayHandle::index(ba, index)) + $Unsafe::ARRAY_BYTE_BASE_OFFSET, $nc(handle)->be);
	return $Double::longBitsToDouble(rawValue);
}

void VarHandleByteArrayAsDoubles$ArrayHandle::set($VarHandle* ob, Object$* oba, int32_t index, double value) {
	$init(VarHandleByteArrayAsDoubles$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsDoubles$ArrayHandle, handle, $cast(VarHandleByteArrayAsDoubles$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	$init($Unsafe);
	int64_t var$1 = ((int64_t)VarHandleByteArrayAsDoubles$ArrayHandle::index(ba, index)) + $Unsafe::ARRAY_BYTE_BASE_OFFSET;
	$nc($MethodHandleStatics::UNSAFE)->putLongUnaligned(var$0, var$1, $Double::doubleToRawLongBits(value), $nc(handle)->be);
}

double VarHandleByteArrayAsDoubles$ArrayHandle::getVolatile($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsDoubles$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsDoubles$ArrayHandle, handle, $cast(VarHandleByteArrayAsDoubles$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	return $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getLongVolatile(ba, address(ba, VarHandleByteArrayAsDoubles$ArrayHandle::index(ba, index))));
}

void VarHandleByteArrayAsDoubles$ArrayHandle::setVolatile($VarHandle* ob, Object$* oba, int32_t index, double value) {
	$init(VarHandleByteArrayAsDoubles$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsDoubles$ArrayHandle, handle, $cast(VarHandleByteArrayAsDoubles$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsDoubles$ArrayHandle::index(ba, index));
	$nc($MethodHandleStatics::UNSAFE)->putLongVolatile(var$0, var$1, $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, value));
}

double VarHandleByteArrayAsDoubles$ArrayHandle::getAcquire($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsDoubles$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsDoubles$ArrayHandle, handle, $cast(VarHandleByteArrayAsDoubles$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	return $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getLongAcquire(ba, address(ba, VarHandleByteArrayAsDoubles$ArrayHandle::index(ba, index))));
}

void VarHandleByteArrayAsDoubles$ArrayHandle::setRelease($VarHandle* ob, Object$* oba, int32_t index, double value) {
	$init(VarHandleByteArrayAsDoubles$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsDoubles$ArrayHandle, handle, $cast(VarHandleByteArrayAsDoubles$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsDoubles$ArrayHandle::index(ba, index));
	$nc($MethodHandleStatics::UNSAFE)->putLongRelease(var$0, var$1, $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, value));
}

double VarHandleByteArrayAsDoubles$ArrayHandle::getOpaque($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsDoubles$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsDoubles$ArrayHandle, handle, $cast(VarHandleByteArrayAsDoubles$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	return $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getLongOpaque(ba, address(ba, VarHandleByteArrayAsDoubles$ArrayHandle::index(ba, index))));
}

void VarHandleByteArrayAsDoubles$ArrayHandle::setOpaque($VarHandle* ob, Object$* oba, int32_t index, double value) {
	$init(VarHandleByteArrayAsDoubles$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsDoubles$ArrayHandle, handle, $cast(VarHandleByteArrayAsDoubles$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsDoubles$ArrayHandle::index(ba, index));
	$nc($MethodHandleStatics::UNSAFE)->putLongOpaque(var$0, var$1, $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, value));
}

bool VarHandleByteArrayAsDoubles$ArrayHandle::compareAndSet($VarHandle* ob, Object$* oba, int32_t index, double expected, double value) {
	$init(VarHandleByteArrayAsDoubles$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsDoubles$ArrayHandle, handle, $cast(VarHandleByteArrayAsDoubles$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsDoubles$ArrayHandle::index(ba, index));
	int64_t var$2 = $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, expected);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetLong(var$0, var$1, var$2, $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, value));
}

double VarHandleByteArrayAsDoubles$ArrayHandle::compareAndExchange($VarHandle* ob, Object$* oba, int32_t index, double expected, double value) {
	$init(VarHandleByteArrayAsDoubles$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsDoubles$ArrayHandle, handle, $cast(VarHandleByteArrayAsDoubles$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsDoubles$ArrayHandle::index(ba, index));
	int64_t var$2 = $VarHandleByteArrayAsDoubles::convEndian(handle->be, expected);
	return $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeLong(var$0, var$1, var$2, $VarHandleByteArrayAsDoubles::convEndian(handle->be, value)));
}

double VarHandleByteArrayAsDoubles$ArrayHandle::compareAndExchangeAcquire($VarHandle* ob, Object$* oba, int32_t index, double expected, double value) {
	$init(VarHandleByteArrayAsDoubles$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsDoubles$ArrayHandle, handle, $cast(VarHandleByteArrayAsDoubles$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsDoubles$ArrayHandle::index(ba, index));
	int64_t var$2 = $VarHandleByteArrayAsDoubles::convEndian(handle->be, expected);
	return $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeLongAcquire(var$0, var$1, var$2, $VarHandleByteArrayAsDoubles::convEndian(handle->be, value)));
}

double VarHandleByteArrayAsDoubles$ArrayHandle::compareAndExchangeRelease($VarHandle* ob, Object$* oba, int32_t index, double expected, double value) {
	$init(VarHandleByteArrayAsDoubles$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsDoubles$ArrayHandle, handle, $cast(VarHandleByteArrayAsDoubles$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsDoubles$ArrayHandle::index(ba, index));
	int64_t var$2 = $VarHandleByteArrayAsDoubles::convEndian(handle->be, expected);
	return $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeLongRelease(var$0, var$1, var$2, $VarHandleByteArrayAsDoubles::convEndian(handle->be, value)));
}

bool VarHandleByteArrayAsDoubles$ArrayHandle::weakCompareAndSetPlain($VarHandle* ob, Object$* oba, int32_t index, double expected, double value) {
	$init(VarHandleByteArrayAsDoubles$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsDoubles$ArrayHandle, handle, $cast(VarHandleByteArrayAsDoubles$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsDoubles$ArrayHandle::index(ba, index));
	int64_t var$2 = $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, expected);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLongPlain(var$0, var$1, var$2, $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, value));
}

bool VarHandleByteArrayAsDoubles$ArrayHandle::weakCompareAndSet($VarHandle* ob, Object$* oba, int32_t index, double expected, double value) {
	$init(VarHandleByteArrayAsDoubles$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsDoubles$ArrayHandle, handle, $cast(VarHandleByteArrayAsDoubles$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsDoubles$ArrayHandle::index(ba, index));
	int64_t var$2 = $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, expected);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLong(var$0, var$1, var$2, $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, value));
}

bool VarHandleByteArrayAsDoubles$ArrayHandle::weakCompareAndSetAcquire($VarHandle* ob, Object$* oba, int32_t index, double expected, double value) {
	$init(VarHandleByteArrayAsDoubles$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsDoubles$ArrayHandle, handle, $cast(VarHandleByteArrayAsDoubles$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsDoubles$ArrayHandle::index(ba, index));
	int64_t var$2 = $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, expected);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLongAcquire(var$0, var$1, var$2, $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, value));
}

bool VarHandleByteArrayAsDoubles$ArrayHandle::weakCompareAndSetRelease($VarHandle* ob, Object$* oba, int32_t index, double expected, double value) {
	$init(VarHandleByteArrayAsDoubles$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsDoubles$ArrayHandle, handle, $cast(VarHandleByteArrayAsDoubles$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsDoubles$ArrayHandle::index(ba, index));
	int64_t var$2 = $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, expected);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLongRelease(var$0, var$1, var$2, $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, value));
}

double VarHandleByteArrayAsDoubles$ArrayHandle::getAndSet($VarHandle* ob, Object$* oba, int32_t index, double value) {
	$init(VarHandleByteArrayAsDoubles$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsDoubles$ArrayHandle, handle, $cast(VarHandleByteArrayAsDoubles$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsDoubles$ArrayHandle::index(ba, index));
	return $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getAndSetLong(var$0, var$1, $VarHandleByteArrayAsDoubles::convEndian(handle->be, value)));
}

double VarHandleByteArrayAsDoubles$ArrayHandle::getAndSetAcquire($VarHandle* ob, Object$* oba, int32_t index, double value) {
	$init(VarHandleByteArrayAsDoubles$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsDoubles$ArrayHandle, handle, $cast(VarHandleByteArrayAsDoubles$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsDoubles$ArrayHandle::index(ba, index));
	return $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getAndSetLongAcquire(var$0, var$1, $VarHandleByteArrayAsDoubles::convEndian(handle->be, value)));
}

double VarHandleByteArrayAsDoubles$ArrayHandle::getAndSetRelease($VarHandle* ob, Object$* oba, int32_t index, double value) {
	$init(VarHandleByteArrayAsDoubles$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsDoubles$ArrayHandle, handle, $cast(VarHandleByteArrayAsDoubles$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsDoubles$ArrayHandle::index(ba, index));
	return $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getAndSetLongRelease(var$0, var$1, $VarHandleByteArrayAsDoubles::convEndian(handle->be, value)));
}

void clinit$VarHandleByteArrayAsDoubles$ArrayHandle($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(VarHandleByteArrayAsDoubles$ArrayHandle::OOBEF, $Preconditions::outOfBoundsExceptionFormatter(static_cast<$Function*>($$new(VarHandleByteArrayAsDoubles$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException))));
	$load($bytes);
	$init($Double);
	$init($Integer);
	$assignStatic(VarHandleByteArrayAsDoubles$ArrayHandle::FORM, $new($VarForm, VarHandleByteArrayAsDoubles$ArrayHandle::class$, $getClass($bytes), $Double::TYPE, $$new($ClassArray, {$Integer::TYPE})));
}

VarHandleByteArrayAsDoubles$ArrayHandle::VarHandleByteArrayAsDoubles$ArrayHandle() {
}

$Class* VarHandleByteArrayAsDoubles$ArrayHandle::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(VarHandleByteArrayAsDoubles$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::classInfo$.name)) {
			return VarHandleByteArrayAsDoubles$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::load$(name, initialize);
		}
	}
	$loadClass(VarHandleByteArrayAsDoubles$ArrayHandle, name, initialize, &_VarHandleByteArrayAsDoubles$ArrayHandle_ClassInfo_, clinit$VarHandleByteArrayAsDoubles$ArrayHandle, allocate$VarHandleByteArrayAsDoubles$ArrayHandle);
	return class$;
}

$Class* VarHandleByteArrayAsDoubles$ArrayHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java