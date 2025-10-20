#include <java/lang/invoke/VarHandleByteArrayAsChars$ArrayHandle.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
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
#include <java/lang/invoke/VarHandleByteArrayAsChars$ByteArrayViewVarHandle.h>
#include <java/lang/invoke/VarHandleByteArrayAsChars.h>
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
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
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
using $VarHandleByteArrayAsChars = ::java::lang::invoke::VarHandleByteArrayAsChars;
using $VarHandleByteArrayAsChars$ByteArrayViewVarHandle = ::java::lang::invoke::VarHandleByteArrayAsChars$ByteArrayViewVarHandle;
using $VarHandleByteArrayBase = ::java::lang::invoke::VarHandleByteArrayBase;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $Preconditions = ::jdk::internal::util::Preconditions;

namespace java {
	namespace lang {
		namespace invoke {

class VarHandleByteArrayAsChars$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException : public $Function {
	$class(VarHandleByteArrayAsChars$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		 return $of($new($ArrayIndexOutOfBoundsException, $cast($String, s)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<VarHandleByteArrayAsChars$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo VarHandleByteArrayAsChars$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(VarHandleByteArrayAsChars$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::*)()>(&VarHandleByteArrayAsChars$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo VarHandleByteArrayAsChars$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.invoke.VarHandleByteArrayAsChars$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* VarHandleByteArrayAsChars$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::load$($String* name, bool initialize) {
	$loadClass(VarHandleByteArrayAsChars$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* VarHandleByteArrayAsChars$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::class$ = nullptr;

$CompoundAttribute _VarHandleByteArrayAsChars$ArrayHandle_MethodAnnotations_address3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsChars$ArrayHandle_MethodAnnotations_get4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsChars$ArrayHandle_MethodAnnotations_getAcquire5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsChars$ArrayHandle_MethodAnnotations_getOpaque6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsChars$ArrayHandle_MethodAnnotations_getVolatile7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsChars$ArrayHandle_MethodAnnotations_index8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsChars$ArrayHandle_MethodAnnotations_set9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsChars$ArrayHandle_MethodAnnotations_setOpaque10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsChars$ArrayHandle_MethodAnnotations_setRelease11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsChars$ArrayHandle_MethodAnnotations_setVolatile12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleByteArrayAsChars$ArrayHandle_FieldInfo_[] = {
	{"OOBEF", "Ljava/util/function/BiFunction;", "Ljava/util/function/BiFunction<Ljava/lang/String;Ljava/util/List<Ljava/lang/Number;>;Ljava/lang/ArrayIndexOutOfBoundsException;>;", $PRIVATE | $STATIC | $FINAL, $staticField(VarHandleByteArrayAsChars$ArrayHandle, OOBEF)},
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayAsChars$ArrayHandle, FORM)},
	{}
};

$MethodInfo _VarHandleByteArrayAsChars$ArrayHandle_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, 0, $method(static_cast<void(VarHandleByteArrayAsChars$ArrayHandle::*)(bool)>(&VarHandleByteArrayAsChars$ArrayHandle::init$))},
	{"<init>", "(ZZ)V", nullptr, $PRIVATE, $method(static_cast<void(VarHandleByteArrayAsChars$ArrayHandle::*)(bool,bool)>(&VarHandleByteArrayAsChars$ArrayHandle::init$))},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL},
	{"address", "([BI)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($bytes*,int32_t)>(&VarHandleByteArrayAsChars$ArrayHandle::address)), nullptr, nullptr, _VarHandleByteArrayAsChars$ArrayHandle_MethodAnnotations_address3},
	{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleByteArrayAsChars$ArrayHandle::get)), nullptr, nullptr, _VarHandleByteArrayAsChars$ArrayHandle_MethodAnnotations_get4},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleByteArrayAsChars$ArrayHandle::getAcquire)), nullptr, nullptr, _VarHandleByteArrayAsChars$ArrayHandle_MethodAnnotations_getAcquire5},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleByteArrayAsChars$ArrayHandle::getOpaque)), nullptr, nullptr, _VarHandleByteArrayAsChars$ArrayHandle_MethodAnnotations_getOpaque6},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleByteArrayAsChars$ArrayHandle::getVolatile)), nullptr, nullptr, _VarHandleByteArrayAsChars$ArrayHandle_MethodAnnotations_getVolatile7},
	{"index", "([BI)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($bytes*,int32_t)>(&VarHandleByteArrayAsChars$ArrayHandle::index)), nullptr, nullptr, _VarHandleByteArrayAsChars$ArrayHandle_MethodAnnotations_index8},
	{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,char16_t)>(&VarHandleByteArrayAsChars$ArrayHandle::set)), nullptr, nullptr, _VarHandleByteArrayAsChars$ArrayHandle_MethodAnnotations_set9},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,char16_t)>(&VarHandleByteArrayAsChars$ArrayHandle::setOpaque)), nullptr, nullptr, _VarHandleByteArrayAsChars$ArrayHandle_MethodAnnotations_setOpaque10},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,char16_t)>(&VarHandleByteArrayAsChars$ArrayHandle::setRelease)), nullptr, nullptr, _VarHandleByteArrayAsChars$ArrayHandle_MethodAnnotations_setRelease11},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,char16_t)>(&VarHandleByteArrayAsChars$ArrayHandle::setVolatile)), nullptr, nullptr, _VarHandleByteArrayAsChars$ArrayHandle_MethodAnnotations_setVolatile12},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsChars$ArrayHandle;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsChars$ArrayHandle;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleByteArrayAsChars$ArrayHandle_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleByteArrayAsChars$ArrayHandle", "java.lang.invoke.VarHandleByteArrayAsChars", "ArrayHandle", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleByteArrayAsChars$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsChars", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _VarHandleByteArrayAsChars$ArrayHandle_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleByteArrayAsChars$ArrayHandle",
	"java.lang.invoke.VarHandleByteArrayAsChars$ByteArrayViewVarHandle",
	nullptr,
	_VarHandleByteArrayAsChars$ArrayHandle_FieldInfo_,
	_VarHandleByteArrayAsChars$ArrayHandle_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleByteArrayAsChars$ArrayHandle_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleByteArrayAsChars"
};

$Object* allocate$VarHandleByteArrayAsChars$ArrayHandle($Class* clazz) {
	return $of($alloc(VarHandleByteArrayAsChars$ArrayHandle));
}

$BiFunction* VarHandleByteArrayAsChars$ArrayHandle::OOBEF = nullptr;
$VarForm* VarHandleByteArrayAsChars$ArrayHandle::FORM = nullptr;

void VarHandleByteArrayAsChars$ArrayHandle::init$(bool be) {
	VarHandleByteArrayAsChars$ArrayHandle::init$(be, false);
}

void VarHandleByteArrayAsChars$ArrayHandle::init$(bool be, bool exact) {
	$VarHandleByteArrayAsChars$ByteArrayViewVarHandle::init$(VarHandleByteArrayAsChars$ArrayHandle::FORM, be, exact);
}

VarHandleByteArrayAsChars$ArrayHandle* VarHandleByteArrayAsChars$ArrayHandle::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleByteArrayAsChars$ArrayHandle, this->be, true);
}

VarHandleByteArrayAsChars$ArrayHandle* VarHandleByteArrayAsChars$ArrayHandle::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleByteArrayAsChars$ArrayHandle, this->be, false);
}

$MethodType* VarHandleByteArrayAsChars$ArrayHandle::accessModeTypeUncached($VarHandle$AccessType* at) {
	$load($bytes);
	$init($Character);
	$init($Integer);
	return $nc(at)->accessModeType($getClass($bytes), $Character::TYPE, $$new($ClassArray, {$Integer::TYPE}));
}

int32_t VarHandleByteArrayAsChars$ArrayHandle::index($bytes* ba, int32_t index) {
	$init(VarHandleByteArrayAsChars$ArrayHandle);
	return $Preconditions::checkIndex(index, $nc(ba)->length - 1, VarHandleByteArrayAsChars$ArrayHandle::OOBEF);
}

int64_t VarHandleByteArrayAsChars$ArrayHandle::address($bytes* ba, int32_t index) {
	$init(VarHandleByteArrayAsChars$ArrayHandle);
	$init($Unsafe);
	int64_t address = ((int64_t)index) + $Unsafe::ARRAY_BYTE_BASE_OFFSET;
	if (((int64_t)(address & (uint64_t)(int64_t)1)) != 0) {
		$throw($($VarHandleByteArrayBase::newIllegalStateExceptionForMisalignedAccess(index)));
	}
	return address;
}

char16_t VarHandleByteArrayAsChars$ArrayHandle::get($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsChars$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsChars$ArrayHandle, handle, $cast(VarHandleByteArrayAsChars$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$init($Unsafe);
	return $nc($MethodHandleStatics::UNSAFE)->getCharUnaligned(ba, ((int64_t)VarHandleByteArrayAsChars$ArrayHandle::index(ba, index)) + $Unsafe::ARRAY_BYTE_BASE_OFFSET, $nc(handle)->be);
}

void VarHandleByteArrayAsChars$ArrayHandle::set($VarHandle* ob, Object$* oba, int32_t index, char16_t value) {
	$init(VarHandleByteArrayAsChars$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsChars$ArrayHandle, handle, $cast(VarHandleByteArrayAsChars$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$init($Unsafe);
	$nc($MethodHandleStatics::UNSAFE)->putCharUnaligned(ba, ((int64_t)VarHandleByteArrayAsChars$ArrayHandle::index(ba, index)) + $Unsafe::ARRAY_BYTE_BASE_OFFSET, value, $nc(handle)->be);
}

char16_t VarHandleByteArrayAsChars$ArrayHandle::getVolatile($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsChars$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsChars$ArrayHandle, handle, $cast(VarHandleByteArrayAsChars$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	return $VarHandleByteArrayAsChars::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getCharVolatile(ba, address(ba, VarHandleByteArrayAsChars$ArrayHandle::index(ba, index))));
}

void VarHandleByteArrayAsChars$ArrayHandle::setVolatile($VarHandle* ob, Object$* oba, int32_t index, char16_t value) {
	$init(VarHandleByteArrayAsChars$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsChars$ArrayHandle, handle, $cast(VarHandleByteArrayAsChars$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsChars$ArrayHandle::index(ba, index));
	$nc($MethodHandleStatics::UNSAFE)->putCharVolatile(var$0, var$1, $VarHandleByteArrayAsChars::convEndian($nc(handle)->be, value));
}

char16_t VarHandleByteArrayAsChars$ArrayHandle::getAcquire($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsChars$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsChars$ArrayHandle, handle, $cast(VarHandleByteArrayAsChars$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	return $VarHandleByteArrayAsChars::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getCharAcquire(ba, address(ba, VarHandleByteArrayAsChars$ArrayHandle::index(ba, index))));
}

void VarHandleByteArrayAsChars$ArrayHandle::setRelease($VarHandle* ob, Object$* oba, int32_t index, char16_t value) {
	$init(VarHandleByteArrayAsChars$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsChars$ArrayHandle, handle, $cast(VarHandleByteArrayAsChars$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsChars$ArrayHandle::index(ba, index));
	$nc($MethodHandleStatics::UNSAFE)->putCharRelease(var$0, var$1, $VarHandleByteArrayAsChars::convEndian($nc(handle)->be, value));
}

char16_t VarHandleByteArrayAsChars$ArrayHandle::getOpaque($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsChars$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsChars$ArrayHandle, handle, $cast(VarHandleByteArrayAsChars$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	return $VarHandleByteArrayAsChars::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getCharOpaque(ba, address(ba, VarHandleByteArrayAsChars$ArrayHandle::index(ba, index))));
}

void VarHandleByteArrayAsChars$ArrayHandle::setOpaque($VarHandle* ob, Object$* oba, int32_t index, char16_t value) {
	$init(VarHandleByteArrayAsChars$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsChars$ArrayHandle, handle, $cast(VarHandleByteArrayAsChars$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsChars$ArrayHandle::index(ba, index));
	$nc($MethodHandleStatics::UNSAFE)->putCharOpaque(var$0, var$1, $VarHandleByteArrayAsChars::convEndian($nc(handle)->be, value));
}

void clinit$VarHandleByteArrayAsChars$ArrayHandle($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(VarHandleByteArrayAsChars$ArrayHandle::OOBEF, $Preconditions::outOfBoundsExceptionFormatter(static_cast<$Function*>($$new(VarHandleByteArrayAsChars$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException))));
	$load($bytes);
	$init($Character);
	$init($Integer);
	$assignStatic(VarHandleByteArrayAsChars$ArrayHandle::FORM, $new($VarForm, VarHandleByteArrayAsChars$ArrayHandle::class$, $getClass($bytes), $Character::TYPE, $$new($ClassArray, {$Integer::TYPE})));
}

VarHandleByteArrayAsChars$ArrayHandle::VarHandleByteArrayAsChars$ArrayHandle() {
}

$Class* VarHandleByteArrayAsChars$ArrayHandle::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(VarHandleByteArrayAsChars$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::classInfo$.name)) {
			return VarHandleByteArrayAsChars$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::load$(name, initialize);
		}
	}
	$loadClass(VarHandleByteArrayAsChars$ArrayHandle, name, initialize, &_VarHandleByteArrayAsChars$ArrayHandle_ClassInfo_, clinit$VarHandleByteArrayAsChars$ArrayHandle, allocate$VarHandleByteArrayAsChars$ArrayHandle);
	return class$;
}

$Class* VarHandleByteArrayAsChars$ArrayHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java