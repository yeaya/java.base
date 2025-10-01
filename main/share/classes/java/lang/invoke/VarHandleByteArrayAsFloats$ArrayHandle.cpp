#include <java/lang/invoke/VarHandleByteArrayAsFloats$ArrayHandle.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
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
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/Function.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/util/Preconditions.h>
#include <jcpp.h>

#undef FORM
#undef ARRAY_BYTE_BASE_OFFSET
#undef UNSAFE
#undef OOBEF
#undef TYPE

using $Serializable = ::java::io::Serializable;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
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
		 return $of($new($ArrayIndexOutOfBoundsException, $cast($String, s)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<VarHandleByteArrayAsFloats$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo VarHandleByteArrayAsFloats$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(VarHandleByteArrayAsFloats$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::*)()>(&VarHandleByteArrayAsFloats$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo VarHandleByteArrayAsFloats$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.invoke.VarHandleByteArrayAsFloats$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* VarHandleByteArrayAsFloats$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::load$($String* name, bool initialize) {
	$loadClass(VarHandleByteArrayAsFloats$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* VarHandleByteArrayAsFloats$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::class$ = nullptr;

$CompoundAttribute _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_address3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_compareAndExchange4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_compareAndExchangeAcquire5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_compareAndExchangeRelease6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_compareAndSet7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_get8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_getAcquire9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_getAndSet10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_getAndSetAcquire11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_getAndSetRelease12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_getOpaque13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_getVolatile14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_index15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_set16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_setOpaque17[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_setRelease18[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_setVolatile19[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_weakCompareAndSet20[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_weakCompareAndSetAcquire21[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_weakCompareAndSetPlain22[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_weakCompareAndSetRelease23[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleByteArrayAsFloats$ArrayHandle_FieldInfo_[] = {
	{"OOBEF", "Ljava/util/function/BiFunction;", "Ljava/util/function/BiFunction<Ljava/lang/String;Ljava/util/List<Ljava/lang/Number;>;Ljava/lang/ArrayIndexOutOfBoundsException;>;", $PRIVATE | $STATIC | $FINAL, $staticField(VarHandleByteArrayAsFloats$ArrayHandle, OOBEF)},
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayAsFloats$ArrayHandle, FORM)},
	{}
};

$MethodInfo _VarHandleByteArrayAsFloats$ArrayHandle_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, 0, $method(static_cast<void(VarHandleByteArrayAsFloats$ArrayHandle::*)(bool)>(&VarHandleByteArrayAsFloats$ArrayHandle::init$))},
	{"<init>", "(ZZ)V", nullptr, $PRIVATE, $method(static_cast<void(VarHandleByteArrayAsFloats$ArrayHandle::*)(bool,bool)>(&VarHandleByteArrayAsFloats$ArrayHandle::init$))},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL},
	{"address", "([BI)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($bytes*,int32_t)>(&VarHandleByteArrayAsFloats$ArrayHandle::address)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_address3},
	{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFF)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*,Object$*,int32_t,float,float)>(&VarHandleByteArrayAsFloats$ArrayHandle::compareAndExchange)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_compareAndExchange4},
	{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFF)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*,Object$*,int32_t,float,float)>(&VarHandleByteArrayAsFloats$ArrayHandle::compareAndExchangeAcquire)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_compareAndExchangeAcquire5},
	{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFF)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*,Object$*,int32_t,float,float)>(&VarHandleByteArrayAsFloats$ArrayHandle::compareAndExchangeRelease)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_compareAndExchangeRelease6},
	{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFF)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,float,float)>(&VarHandleByteArrayAsFloats$ArrayHandle::compareAndSet)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_compareAndSet7},
	{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*,Object$*,int32_t)>(&VarHandleByteArrayAsFloats$ArrayHandle::get)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_get8},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*,Object$*,int32_t)>(&VarHandleByteArrayAsFloats$ArrayHandle::getAcquire)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_getAcquire9},
	{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IF)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*,Object$*,int32_t,float)>(&VarHandleByteArrayAsFloats$ArrayHandle::getAndSet)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_getAndSet10},
	{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IF)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*,Object$*,int32_t,float)>(&VarHandleByteArrayAsFloats$ArrayHandle::getAndSetAcquire)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_getAndSetAcquire11},
	{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IF)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*,Object$*,int32_t,float)>(&VarHandleByteArrayAsFloats$ArrayHandle::getAndSetRelease)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_getAndSetRelease12},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*,Object$*,int32_t)>(&VarHandleByteArrayAsFloats$ArrayHandle::getOpaque)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_getOpaque13},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*,Object$*,int32_t)>(&VarHandleByteArrayAsFloats$ArrayHandle::getVolatile)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_getVolatile14},
	{"index", "([BI)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($bytes*,int32_t)>(&VarHandleByteArrayAsFloats$ArrayHandle::index)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_index15},
	{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IF)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,float)>(&VarHandleByteArrayAsFloats$ArrayHandle::set)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_set16},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IF)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,float)>(&VarHandleByteArrayAsFloats$ArrayHandle::setOpaque)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_setOpaque17},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IF)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,float)>(&VarHandleByteArrayAsFloats$ArrayHandle::setRelease)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_setRelease18},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IF)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,float)>(&VarHandleByteArrayAsFloats$ArrayHandle::setVolatile)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_setVolatile19},
	{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFF)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,float,float)>(&VarHandleByteArrayAsFloats$ArrayHandle::weakCompareAndSet)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_weakCompareAndSet20},
	{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFF)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,float,float)>(&VarHandleByteArrayAsFloats$ArrayHandle::weakCompareAndSetAcquire)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_weakCompareAndSetAcquire21},
	{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFF)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,float,float)>(&VarHandleByteArrayAsFloats$ArrayHandle::weakCompareAndSetPlain)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_weakCompareAndSetPlain22},
	{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFF)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,float,float)>(&VarHandleByteArrayAsFloats$ArrayHandle::weakCompareAndSetRelease)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ArrayHandle_MethodAnnotations_weakCompareAndSetRelease23},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsFloats$ArrayHandle;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsFloats$ArrayHandle;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleByteArrayAsFloats$ArrayHandle_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleByteArrayAsFloats$ArrayHandle", "java.lang.invoke.VarHandleByteArrayAsFloats", "ArrayHandle", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleByteArrayAsFloats$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsFloats", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _VarHandleByteArrayAsFloats$ArrayHandle_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleByteArrayAsFloats$ArrayHandle",
	"java.lang.invoke.VarHandleByteArrayAsFloats$ByteArrayViewVarHandle",
	nullptr,
	_VarHandleByteArrayAsFloats$ArrayHandle_FieldInfo_,
	_VarHandleByteArrayAsFloats$ArrayHandle_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleByteArrayAsFloats$ArrayHandle_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleByteArrayAsFloats"
};

$Object* allocate$VarHandleByteArrayAsFloats$ArrayHandle($Class* clazz) {
	return $of($alloc(VarHandleByteArrayAsFloats$ArrayHandle));
}

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
	$load($bytes);
	$init($Float);
	$init($Integer);
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
	if (((int64_t)(address & (uint64_t)(int64_t)3)) != 0) {
		$throw($($VarHandleByteArrayBase::newIllegalStateExceptionForMisalignedAccess(index)));
	}
	return address;
}

float VarHandleByteArrayAsFloats$ArrayHandle::get($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsFloats$ArrayHandle);
	$var(VarHandleByteArrayAsFloats$ArrayHandle, handle, $cast(VarHandleByteArrayAsFloats$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$init($Unsafe);
	int32_t rawValue = $nc($MethodHandleStatics::UNSAFE)->getIntUnaligned(ba, ((int64_t)VarHandleByteArrayAsFloats$ArrayHandle::index(ba, index)) + $Unsafe::ARRAY_BYTE_BASE_OFFSET, $nc(handle)->be);
	return $Float::intBitsToFloat(rawValue);
}

void VarHandleByteArrayAsFloats$ArrayHandle::set($VarHandle* ob, Object$* oba, int32_t index, float value) {
	$init(VarHandleByteArrayAsFloats$ArrayHandle);
	$var(VarHandleByteArrayAsFloats$ArrayHandle, handle, $cast(VarHandleByteArrayAsFloats$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	$init($Unsafe);
	int64_t var$1 = ((int64_t)VarHandleByteArrayAsFloats$ArrayHandle::index(ba, index)) + $Unsafe::ARRAY_BYTE_BASE_OFFSET;
	$nc($MethodHandleStatics::UNSAFE)->putIntUnaligned(var$0, var$1, $Float::floatToRawIntBits(value), $nc(handle)->be);
}

float VarHandleByteArrayAsFloats$ArrayHandle::getVolatile($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsFloats$ArrayHandle);
	$var(VarHandleByteArrayAsFloats$ArrayHandle, handle, $cast(VarHandleByteArrayAsFloats$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	return $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getIntVolatile(ba, address(ba, VarHandleByteArrayAsFloats$ArrayHandle::index(ba, index))));
}

void VarHandleByteArrayAsFloats$ArrayHandle::setVolatile($VarHandle* ob, Object$* oba, int32_t index, float value) {
	$init(VarHandleByteArrayAsFloats$ArrayHandle);
	$var(VarHandleByteArrayAsFloats$ArrayHandle, handle, $cast(VarHandleByteArrayAsFloats$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsFloats$ArrayHandle::index(ba, index));
	$nc($MethodHandleStatics::UNSAFE)->putIntVolatile(var$0, var$1, $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, value));
}

float VarHandleByteArrayAsFloats$ArrayHandle::getAcquire($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsFloats$ArrayHandle);
	$var(VarHandleByteArrayAsFloats$ArrayHandle, handle, $cast(VarHandleByteArrayAsFloats$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	return $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getIntAcquire(ba, address(ba, VarHandleByteArrayAsFloats$ArrayHandle::index(ba, index))));
}

void VarHandleByteArrayAsFloats$ArrayHandle::setRelease($VarHandle* ob, Object$* oba, int32_t index, float value) {
	$init(VarHandleByteArrayAsFloats$ArrayHandle);
	$var(VarHandleByteArrayAsFloats$ArrayHandle, handle, $cast(VarHandleByteArrayAsFloats$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsFloats$ArrayHandle::index(ba, index));
	$nc($MethodHandleStatics::UNSAFE)->putIntRelease(var$0, var$1, $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, value));
}

float VarHandleByteArrayAsFloats$ArrayHandle::getOpaque($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsFloats$ArrayHandle);
	$var(VarHandleByteArrayAsFloats$ArrayHandle, handle, $cast(VarHandleByteArrayAsFloats$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	return $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getIntOpaque(ba, address(ba, VarHandleByteArrayAsFloats$ArrayHandle::index(ba, index))));
}

void VarHandleByteArrayAsFloats$ArrayHandle::setOpaque($VarHandle* ob, Object$* oba, int32_t index, float value) {
	$init(VarHandleByteArrayAsFloats$ArrayHandle);
	$var(VarHandleByteArrayAsFloats$ArrayHandle, handle, $cast(VarHandleByteArrayAsFloats$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsFloats$ArrayHandle::index(ba, index));
	$nc($MethodHandleStatics::UNSAFE)->putIntOpaque(var$0, var$1, $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, value));
}

bool VarHandleByteArrayAsFloats$ArrayHandle::compareAndSet($VarHandle* ob, Object$* oba, int32_t index, float expected, float value) {
	$init(VarHandleByteArrayAsFloats$ArrayHandle);
	$var(VarHandleByteArrayAsFloats$ArrayHandle, handle, $cast(VarHandleByteArrayAsFloats$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsFloats$ArrayHandle::index(ba, index));
	int32_t var$2 = $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, expected);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetInt(var$0, var$1, var$2, $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, value));
}

float VarHandleByteArrayAsFloats$ArrayHandle::compareAndExchange($VarHandle* ob, Object$* oba, int32_t index, float expected, float value) {
	$init(VarHandleByteArrayAsFloats$ArrayHandle);
	$var(VarHandleByteArrayAsFloats$ArrayHandle, handle, $cast(VarHandleByteArrayAsFloats$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsFloats$ArrayHandle::index(ba, index));
	int32_t var$2 = $VarHandleByteArrayAsFloats::convEndian(handle->be, expected);
	return $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeInt(var$0, var$1, var$2, $VarHandleByteArrayAsFloats::convEndian(handle->be, value)));
}

float VarHandleByteArrayAsFloats$ArrayHandle::compareAndExchangeAcquire($VarHandle* ob, Object$* oba, int32_t index, float expected, float value) {
	$init(VarHandleByteArrayAsFloats$ArrayHandle);
	$var(VarHandleByteArrayAsFloats$ArrayHandle, handle, $cast(VarHandleByteArrayAsFloats$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsFloats$ArrayHandle::index(ba, index));
	int32_t var$2 = $VarHandleByteArrayAsFloats::convEndian(handle->be, expected);
	return $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeIntAcquire(var$0, var$1, var$2, $VarHandleByteArrayAsFloats::convEndian(handle->be, value)));
}

float VarHandleByteArrayAsFloats$ArrayHandle::compareAndExchangeRelease($VarHandle* ob, Object$* oba, int32_t index, float expected, float value) {
	$init(VarHandleByteArrayAsFloats$ArrayHandle);
	$var(VarHandleByteArrayAsFloats$ArrayHandle, handle, $cast(VarHandleByteArrayAsFloats$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsFloats$ArrayHandle::index(ba, index));
	int32_t var$2 = $VarHandleByteArrayAsFloats::convEndian(handle->be, expected);
	return $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeIntRelease(var$0, var$1, var$2, $VarHandleByteArrayAsFloats::convEndian(handle->be, value)));
}

bool VarHandleByteArrayAsFloats$ArrayHandle::weakCompareAndSetPlain($VarHandle* ob, Object$* oba, int32_t index, float expected, float value) {
	$init(VarHandleByteArrayAsFloats$ArrayHandle);
	$var(VarHandleByteArrayAsFloats$ArrayHandle, handle, $cast(VarHandleByteArrayAsFloats$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsFloats$ArrayHandle::index(ba, index));
	int32_t var$2 = $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, expected);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetIntPlain(var$0, var$1, var$2, $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, value));
}

bool VarHandleByteArrayAsFloats$ArrayHandle::weakCompareAndSet($VarHandle* ob, Object$* oba, int32_t index, float expected, float value) {
	$init(VarHandleByteArrayAsFloats$ArrayHandle);
	$var(VarHandleByteArrayAsFloats$ArrayHandle, handle, $cast(VarHandleByteArrayAsFloats$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsFloats$ArrayHandle::index(ba, index));
	int32_t var$2 = $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, expected);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetInt(var$0, var$1, var$2, $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, value));
}

bool VarHandleByteArrayAsFloats$ArrayHandle::weakCompareAndSetAcquire($VarHandle* ob, Object$* oba, int32_t index, float expected, float value) {
	$init(VarHandleByteArrayAsFloats$ArrayHandle);
	$var(VarHandleByteArrayAsFloats$ArrayHandle, handle, $cast(VarHandleByteArrayAsFloats$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsFloats$ArrayHandle::index(ba, index));
	int32_t var$2 = $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, expected);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetIntAcquire(var$0, var$1, var$2, $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, value));
}

bool VarHandleByteArrayAsFloats$ArrayHandle::weakCompareAndSetRelease($VarHandle* ob, Object$* oba, int32_t index, float expected, float value) {
	$init(VarHandleByteArrayAsFloats$ArrayHandle);
	$var(VarHandleByteArrayAsFloats$ArrayHandle, handle, $cast(VarHandleByteArrayAsFloats$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsFloats$ArrayHandle::index(ba, index));
	int32_t var$2 = $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, expected);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetIntRelease(var$0, var$1, var$2, $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, value));
}

float VarHandleByteArrayAsFloats$ArrayHandle::getAndSet($VarHandle* ob, Object$* oba, int32_t index, float value) {
	$init(VarHandleByteArrayAsFloats$ArrayHandle);
	$var(VarHandleByteArrayAsFloats$ArrayHandle, handle, $cast(VarHandleByteArrayAsFloats$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsFloats$ArrayHandle::index(ba, index));
	return $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getAndSetInt(var$0, var$1, $VarHandleByteArrayAsFloats::convEndian(handle->be, value)));
}

float VarHandleByteArrayAsFloats$ArrayHandle::getAndSetAcquire($VarHandle* ob, Object$* oba, int32_t index, float value) {
	$init(VarHandleByteArrayAsFloats$ArrayHandle);
	$var(VarHandleByteArrayAsFloats$ArrayHandle, handle, $cast(VarHandleByteArrayAsFloats$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsFloats$ArrayHandle::index(ba, index));
	return $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getAndSetIntAcquire(var$0, var$1, $VarHandleByteArrayAsFloats::convEndian(handle->be, value)));
}

float VarHandleByteArrayAsFloats$ArrayHandle::getAndSetRelease($VarHandle* ob, Object$* oba, int32_t index, float value) {
	$init(VarHandleByteArrayAsFloats$ArrayHandle);
	$var(VarHandleByteArrayAsFloats$ArrayHandle, handle, $cast(VarHandleByteArrayAsFloats$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsFloats$ArrayHandle::index(ba, index));
	return $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getAndSetIntRelease(var$0, var$1, $VarHandleByteArrayAsFloats::convEndian(handle->be, value)));
}

void clinit$VarHandleByteArrayAsFloats$ArrayHandle($Class* class$) {
	$assignStatic(VarHandleByteArrayAsFloats$ArrayHandle::OOBEF, $Preconditions::outOfBoundsExceptionFormatter(static_cast<$Function*>($$new(VarHandleByteArrayAsFloats$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException))));
	$load($bytes);
	$init($Float);
	$init($Integer);
	$assignStatic(VarHandleByteArrayAsFloats$ArrayHandle::FORM, $new($VarForm, VarHandleByteArrayAsFloats$ArrayHandle::class$, $getClass($bytes), $Float::TYPE, $$new($ClassArray, {$Integer::TYPE})));
}

VarHandleByteArrayAsFloats$ArrayHandle::VarHandleByteArrayAsFloats$ArrayHandle() {
}

$Class* VarHandleByteArrayAsFloats$ArrayHandle::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(VarHandleByteArrayAsFloats$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::classInfo$.name)) {
			return VarHandleByteArrayAsFloats$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::load$(name, initialize);
		}
	}
	$loadClass(VarHandleByteArrayAsFloats$ArrayHandle, name, initialize, &_VarHandleByteArrayAsFloats$ArrayHandle_ClassInfo_, clinit$VarHandleByteArrayAsFloats$ArrayHandle, allocate$VarHandleByteArrayAsFloats$ArrayHandle);
	return class$;
}

$Class* VarHandleByteArrayAsFloats$ArrayHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java