#include <java/lang/invoke/VarHandleByteArrayAsShorts$ArrayHandle.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Short.h>
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
#include <java/lang/invoke/VarHandleByteArrayAsShorts$ByteArrayViewVarHandle.h>
#include <java/lang/invoke/VarHandleByteArrayAsShorts.h>
#include <java/lang/invoke/VarHandleByteArrayBase.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Short = ::java::lang::Short;
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
using $VarHandleByteArrayAsShorts = ::java::lang::invoke::VarHandleByteArrayAsShorts;
using $VarHandleByteArrayAsShorts$ByteArrayViewVarHandle = ::java::lang::invoke::VarHandleByteArrayAsShorts$ByteArrayViewVarHandle;
using $VarHandleByteArrayBase = ::java::lang::invoke::VarHandleByteArrayBase;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $Preconditions = ::jdk::internal::util::Preconditions;

namespace java {
	namespace lang {
		namespace invoke {

class VarHandleByteArrayAsShorts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException : public $Function {
	$class(VarHandleByteArrayAsShorts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		 return $of($new($ArrayIndexOutOfBoundsException, $cast($String, s)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<VarHandleByteArrayAsShorts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo VarHandleByteArrayAsShorts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(VarHandleByteArrayAsShorts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::*)()>(&VarHandleByteArrayAsShorts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo VarHandleByteArrayAsShorts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.invoke.VarHandleByteArrayAsShorts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* VarHandleByteArrayAsShorts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::load$($String* name, bool initialize) {
	$loadClass(VarHandleByteArrayAsShorts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* VarHandleByteArrayAsShorts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::class$ = nullptr;

$CompoundAttribute _VarHandleByteArrayAsShorts$ArrayHandle_MethodAnnotations_address3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsShorts$ArrayHandle_MethodAnnotations_get4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsShorts$ArrayHandle_MethodAnnotations_getAcquire5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsShorts$ArrayHandle_MethodAnnotations_getOpaque6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsShorts$ArrayHandle_MethodAnnotations_getVolatile7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsShorts$ArrayHandle_MethodAnnotations_index8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsShorts$ArrayHandle_MethodAnnotations_set9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsShorts$ArrayHandle_MethodAnnotations_setOpaque10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsShorts$ArrayHandle_MethodAnnotations_setRelease11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsShorts$ArrayHandle_MethodAnnotations_setVolatile12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleByteArrayAsShorts$ArrayHandle_FieldInfo_[] = {
	{"OOBEF", "Ljava/util/function/BiFunction;", "Ljava/util/function/BiFunction<Ljava/lang/String;Ljava/util/List<Ljava/lang/Number;>;Ljava/lang/ArrayIndexOutOfBoundsException;>;", $PRIVATE | $STATIC | $FINAL, $staticField(VarHandleByteArrayAsShorts$ArrayHandle, OOBEF)},
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayAsShorts$ArrayHandle, FORM)},
	{}
};

$MethodInfo _VarHandleByteArrayAsShorts$ArrayHandle_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, 0, $method(static_cast<void(VarHandleByteArrayAsShorts$ArrayHandle::*)(bool)>(&VarHandleByteArrayAsShorts$ArrayHandle::init$))},
	{"<init>", "(ZZ)V", nullptr, $PRIVATE, $method(static_cast<void(VarHandleByteArrayAsShorts$ArrayHandle::*)(bool,bool)>(&VarHandleByteArrayAsShorts$ArrayHandle::init$))},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL},
	{"address", "([BI)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($bytes*,int32_t)>(&VarHandleByteArrayAsShorts$ArrayHandle::address)), nullptr, nullptr, _VarHandleByteArrayAsShorts$ArrayHandle_MethodAnnotations_address3},
	{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleByteArrayAsShorts$ArrayHandle::get)), nullptr, nullptr, _VarHandleByteArrayAsShorts$ArrayHandle_MethodAnnotations_get4},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleByteArrayAsShorts$ArrayHandle::getAcquire)), nullptr, nullptr, _VarHandleByteArrayAsShorts$ArrayHandle_MethodAnnotations_getAcquire5},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleByteArrayAsShorts$ArrayHandle::getOpaque)), nullptr, nullptr, _VarHandleByteArrayAsShorts$ArrayHandle_MethodAnnotations_getOpaque6},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleByteArrayAsShorts$ArrayHandle::getVolatile)), nullptr, nullptr, _VarHandleByteArrayAsShorts$ArrayHandle_MethodAnnotations_getVolatile7},
	{"index", "([BI)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($bytes*,int32_t)>(&VarHandleByteArrayAsShorts$ArrayHandle::index)), nullptr, nullptr, _VarHandleByteArrayAsShorts$ArrayHandle_MethodAnnotations_index8},
	{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,int16_t)>(&VarHandleByteArrayAsShorts$ArrayHandle::set)), nullptr, nullptr, _VarHandleByteArrayAsShorts$ArrayHandle_MethodAnnotations_set9},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,int16_t)>(&VarHandleByteArrayAsShorts$ArrayHandle::setOpaque)), nullptr, nullptr, _VarHandleByteArrayAsShorts$ArrayHandle_MethodAnnotations_setOpaque10},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,int16_t)>(&VarHandleByteArrayAsShorts$ArrayHandle::setRelease)), nullptr, nullptr, _VarHandleByteArrayAsShorts$ArrayHandle_MethodAnnotations_setRelease11},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,int16_t)>(&VarHandleByteArrayAsShorts$ArrayHandle::setVolatile)), nullptr, nullptr, _VarHandleByteArrayAsShorts$ArrayHandle_MethodAnnotations_setVolatile12},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsShorts$ArrayHandle;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsShorts$ArrayHandle;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleByteArrayAsShorts$ArrayHandle_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleByteArrayAsShorts$ArrayHandle", "java.lang.invoke.VarHandleByteArrayAsShorts", "ArrayHandle", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleByteArrayAsShorts$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsShorts", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _VarHandleByteArrayAsShorts$ArrayHandle_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleByteArrayAsShorts$ArrayHandle",
	"java.lang.invoke.VarHandleByteArrayAsShorts$ByteArrayViewVarHandle",
	nullptr,
	_VarHandleByteArrayAsShorts$ArrayHandle_FieldInfo_,
	_VarHandleByteArrayAsShorts$ArrayHandle_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleByteArrayAsShorts$ArrayHandle_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleByteArrayAsShorts"
};

$Object* allocate$VarHandleByteArrayAsShorts$ArrayHandle($Class* clazz) {
	return $of($alloc(VarHandleByteArrayAsShorts$ArrayHandle));
}

$BiFunction* VarHandleByteArrayAsShorts$ArrayHandle::OOBEF = nullptr;
$VarForm* VarHandleByteArrayAsShorts$ArrayHandle::FORM = nullptr;

void VarHandleByteArrayAsShorts$ArrayHandle::init$(bool be) {
	VarHandleByteArrayAsShorts$ArrayHandle::init$(be, false);
}

void VarHandleByteArrayAsShorts$ArrayHandle::init$(bool be, bool exact) {
	$VarHandleByteArrayAsShorts$ByteArrayViewVarHandle::init$(VarHandleByteArrayAsShorts$ArrayHandle::FORM, be, exact);
}

VarHandleByteArrayAsShorts$ArrayHandle* VarHandleByteArrayAsShorts$ArrayHandle::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleByteArrayAsShorts$ArrayHandle, this->be, true);
}

VarHandleByteArrayAsShorts$ArrayHandle* VarHandleByteArrayAsShorts$ArrayHandle::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleByteArrayAsShorts$ArrayHandle, this->be, false);
}

$MethodType* VarHandleByteArrayAsShorts$ArrayHandle::accessModeTypeUncached($VarHandle$AccessType* at) {
	$load($bytes);
	$init($Short);
	$init($Integer);
	return $nc(at)->accessModeType($getClass($bytes), $Short::TYPE, $$new($ClassArray, {$Integer::TYPE}));
}

int32_t VarHandleByteArrayAsShorts$ArrayHandle::index($bytes* ba, int32_t index) {
	$init(VarHandleByteArrayAsShorts$ArrayHandle);
	return $Preconditions::checkIndex(index, $nc(ba)->length - 1, VarHandleByteArrayAsShorts$ArrayHandle::OOBEF);
}

int64_t VarHandleByteArrayAsShorts$ArrayHandle::address($bytes* ba, int32_t index) {
	$init(VarHandleByteArrayAsShorts$ArrayHandle);
	$init($Unsafe);
	int64_t address = ((int64_t)index) + $Unsafe::ARRAY_BYTE_BASE_OFFSET;
	if (((int64_t)(address & (uint64_t)(int64_t)1)) != 0) {
		$throw($($VarHandleByteArrayBase::newIllegalStateExceptionForMisalignedAccess(index)));
	}
	return address;
}

int16_t VarHandleByteArrayAsShorts$ArrayHandle::get($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsShorts$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsShorts$ArrayHandle, handle, $cast(VarHandleByteArrayAsShorts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$init($Unsafe);
	return $nc($MethodHandleStatics::UNSAFE)->getShortUnaligned(ba, ((int64_t)VarHandleByteArrayAsShorts$ArrayHandle::index(ba, index)) + $Unsafe::ARRAY_BYTE_BASE_OFFSET, $nc(handle)->be);
}

void VarHandleByteArrayAsShorts$ArrayHandle::set($VarHandle* ob, Object$* oba, int32_t index, int16_t value) {
	$init(VarHandleByteArrayAsShorts$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsShorts$ArrayHandle, handle, $cast(VarHandleByteArrayAsShorts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$init($Unsafe);
	$nc($MethodHandleStatics::UNSAFE)->putShortUnaligned(ba, ((int64_t)VarHandleByteArrayAsShorts$ArrayHandle::index(ba, index)) + $Unsafe::ARRAY_BYTE_BASE_OFFSET, value, $nc(handle)->be);
}

int16_t VarHandleByteArrayAsShorts$ArrayHandle::getVolatile($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsShorts$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsShorts$ArrayHandle, handle, $cast(VarHandleByteArrayAsShorts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	return $VarHandleByteArrayAsShorts::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getShortVolatile(ba, address(ba, VarHandleByteArrayAsShorts$ArrayHandle::index(ba, index))));
}

void VarHandleByteArrayAsShorts$ArrayHandle::setVolatile($VarHandle* ob, Object$* oba, int32_t index, int16_t value) {
	$init(VarHandleByteArrayAsShorts$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsShorts$ArrayHandle, handle, $cast(VarHandleByteArrayAsShorts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsShorts$ArrayHandle::index(ba, index));
	$nc($MethodHandleStatics::UNSAFE)->putShortVolatile(var$0, var$1, $VarHandleByteArrayAsShorts::convEndian($nc(handle)->be, value));
}

int16_t VarHandleByteArrayAsShorts$ArrayHandle::getAcquire($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsShorts$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsShorts$ArrayHandle, handle, $cast(VarHandleByteArrayAsShorts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	return $VarHandleByteArrayAsShorts::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getShortAcquire(ba, address(ba, VarHandleByteArrayAsShorts$ArrayHandle::index(ba, index))));
}

void VarHandleByteArrayAsShorts$ArrayHandle::setRelease($VarHandle* ob, Object$* oba, int32_t index, int16_t value) {
	$init(VarHandleByteArrayAsShorts$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsShorts$ArrayHandle, handle, $cast(VarHandleByteArrayAsShorts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsShorts$ArrayHandle::index(ba, index));
	$nc($MethodHandleStatics::UNSAFE)->putShortRelease(var$0, var$1, $VarHandleByteArrayAsShorts::convEndian($nc(handle)->be, value));
}

int16_t VarHandleByteArrayAsShorts$ArrayHandle::getOpaque($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsShorts$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsShorts$ArrayHandle, handle, $cast(VarHandleByteArrayAsShorts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	return $VarHandleByteArrayAsShorts::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getShortOpaque(ba, address(ba, VarHandleByteArrayAsShorts$ArrayHandle::index(ba, index))));
}

void VarHandleByteArrayAsShorts$ArrayHandle::setOpaque($VarHandle* ob, Object$* oba, int32_t index, int16_t value) {
	$init(VarHandleByteArrayAsShorts$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsShorts$ArrayHandle, handle, $cast(VarHandleByteArrayAsShorts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsShorts$ArrayHandle::index(ba, index));
	$nc($MethodHandleStatics::UNSAFE)->putShortOpaque(var$0, var$1, $VarHandleByteArrayAsShorts::convEndian($nc(handle)->be, value));
}

void clinit$VarHandleByteArrayAsShorts$ArrayHandle($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(VarHandleByteArrayAsShorts$ArrayHandle::OOBEF, $Preconditions::outOfBoundsExceptionFormatter(static_cast<$Function*>($$new(VarHandleByteArrayAsShorts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException))));
	$load($bytes);
	$init($Short);
	$init($Integer);
	$assignStatic(VarHandleByteArrayAsShorts$ArrayHandle::FORM, $new($VarForm, VarHandleByteArrayAsShorts$ArrayHandle::class$, $getClass($bytes), $Short::TYPE, $$new($ClassArray, {$Integer::TYPE})));
}

VarHandleByteArrayAsShorts$ArrayHandle::VarHandleByteArrayAsShorts$ArrayHandle() {
}

$Class* VarHandleByteArrayAsShorts$ArrayHandle::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(VarHandleByteArrayAsShorts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::classInfo$.name)) {
			return VarHandleByteArrayAsShorts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::load$(name, initialize);
		}
	}
	$loadClass(VarHandleByteArrayAsShorts$ArrayHandle, name, initialize, &_VarHandleByteArrayAsShorts$ArrayHandle_ClassInfo_, clinit$VarHandleByteArrayAsShorts$ArrayHandle, allocate$VarHandleByteArrayAsShorts$ArrayHandle);
	return class$;
}

$Class* VarHandleByteArrayAsShorts$ArrayHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java