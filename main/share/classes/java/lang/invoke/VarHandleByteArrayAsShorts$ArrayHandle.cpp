#include <java/lang/invoke/VarHandleByteArrayAsShorts$ArrayHandle.h>
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
#include <java/lang/invoke/VarHandleByteArrayAsShorts$ByteArrayViewVarHandle.h>
#include <java/lang/invoke/VarHandleByteArrayAsShorts.h>
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
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
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
		 return $new($ArrayIndexOutOfBoundsException, $cast($String, s));
	}
};
$Class* VarHandleByteArrayAsShorts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(VarHandleByteArrayAsShorts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(VarHandleByteArrayAsShorts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.lang.invoke.VarHandleByteArrayAsShorts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(VarHandleByteArrayAsShorts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleByteArrayAsShorts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException);
	});
	return class$;
}
$Class* VarHandleByteArrayAsShorts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::class$ = nullptr;

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
	if ((address & 1) != 0) {
		$throw($($VarHandleByteArrayBase::newIllegalStateExceptionForMisalignedAccess(index)));
	}
	return address;
}

int16_t VarHandleByteArrayAsShorts$ArrayHandle::get($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsShorts$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsShorts$ArrayHandle, handle, $cast(VarHandleByteArrayAsShorts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$init($Unsafe);
	return $nc($MethodHandleStatics::UNSAFE)->getShortUnaligned(ba, ((int64_t)VarHandleByteArrayAsShorts$ArrayHandle::index(ba, index)) + $Unsafe::ARRAY_BYTE_BASE_OFFSET, $nc(handle)->be);
}

void VarHandleByteArrayAsShorts$ArrayHandle::set($VarHandle* ob, Object$* oba, int32_t index, int16_t value) {
	$init(VarHandleByteArrayAsShorts$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsShorts$ArrayHandle, handle, $cast(VarHandleByteArrayAsShorts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$init($Unsafe);
	$nc($MethodHandleStatics::UNSAFE)->putShortUnaligned(ba, ((int64_t)VarHandleByteArrayAsShorts$ArrayHandle::index(ba, index)) + $Unsafe::ARRAY_BYTE_BASE_OFFSET, value, $nc(handle)->be);
}

int16_t VarHandleByteArrayAsShorts$ArrayHandle::getVolatile($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsShorts$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsShorts$ArrayHandle, handle, $cast(VarHandleByteArrayAsShorts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	return $VarHandleByteArrayAsShorts::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getShortVolatile(ba, address(ba, VarHandleByteArrayAsShorts$ArrayHandle::index(ba, index))));
}

void VarHandleByteArrayAsShorts$ArrayHandle::setVolatile($VarHandle* ob, Object$* oba, int32_t index, int16_t value) {
	$init(VarHandleByteArrayAsShorts$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsShorts$ArrayHandle, handle, $cast(VarHandleByteArrayAsShorts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsShorts$ArrayHandle::index(ba, index));
	$nc($MethodHandleStatics::UNSAFE)->putShortVolatile(ba, var$0, $VarHandleByteArrayAsShorts::convEndian($nc(handle)->be, value));
}

int16_t VarHandleByteArrayAsShorts$ArrayHandle::getAcquire($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsShorts$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsShorts$ArrayHandle, handle, $cast(VarHandleByteArrayAsShorts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	return $VarHandleByteArrayAsShorts::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getShortAcquire(ba, address(ba, VarHandleByteArrayAsShorts$ArrayHandle::index(ba, index))));
}

void VarHandleByteArrayAsShorts$ArrayHandle::setRelease($VarHandle* ob, Object$* oba, int32_t index, int16_t value) {
	$init(VarHandleByteArrayAsShorts$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsShorts$ArrayHandle, handle, $cast(VarHandleByteArrayAsShorts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsShorts$ArrayHandle::index(ba, index));
	$nc($MethodHandleStatics::UNSAFE)->putShortRelease(ba, var$0, $VarHandleByteArrayAsShorts::convEndian($nc(handle)->be, value));
}

int16_t VarHandleByteArrayAsShorts$ArrayHandle::getOpaque($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsShorts$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsShorts$ArrayHandle, handle, $cast(VarHandleByteArrayAsShorts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	return $VarHandleByteArrayAsShorts::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getShortOpaque(ba, address(ba, VarHandleByteArrayAsShorts$ArrayHandle::index(ba, index))));
}

void VarHandleByteArrayAsShorts$ArrayHandle::setOpaque($VarHandle* ob, Object$* oba, int32_t index, int16_t value) {
	$init(VarHandleByteArrayAsShorts$ArrayHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsShorts$ArrayHandle, handle, $cast(VarHandleByteArrayAsShorts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	int64_t var$0 = address(ba, VarHandleByteArrayAsShorts$ArrayHandle::index(ba, index));
	$nc($MethodHandleStatics::UNSAFE)->putShortOpaque(ba, var$0, $VarHandleByteArrayAsShorts::convEndian($nc(handle)->be, value));
}

void VarHandleByteArrayAsShorts$ArrayHandle::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(VarHandleByteArrayAsShorts$ArrayHandle::OOBEF, $Preconditions::outOfBoundsExceptionFormatter($$new(VarHandleByteArrayAsShorts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException)));
	$assignStatic(VarHandleByteArrayAsShorts$ArrayHandle::FORM, $new($VarForm, VarHandleByteArrayAsShorts$ArrayHandle::class$, $getClass($bytes), $Short::TYPE, $$new($ClassArray, {$Integer::TYPE})));
}

VarHandleByteArrayAsShorts$ArrayHandle::VarHandleByteArrayAsShorts$ArrayHandle() {
}

$Class* VarHandleByteArrayAsShorts$ArrayHandle::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.lang.invoke.VarHandleByteArrayAsShorts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException")) {
			return VarHandleByteArrayAsShorts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"OOBEF", "Ljava/util/function/BiFunction;", "Ljava/util/function/BiFunction<Ljava/lang/String;Ljava/util/List<Ljava/lang/Number;>;Ljava/lang/ArrayIndexOutOfBoundsException;>;", $PRIVATE | $STATIC | $FINAL, $staticField(VarHandleByteArrayAsShorts$ArrayHandle, OOBEF)},
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayAsShorts$ArrayHandle, FORM)},
		{}
	};
	$CompoundAttribute addressmethodAnnotations$$[] = {
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Z)V", nullptr, 0, $method(VarHandleByteArrayAsShorts$ArrayHandle, init$, void, bool)},
		{"<init>", "(ZZ)V", nullptr, $PRIVATE, $method(VarHandleByteArrayAsShorts$ArrayHandle, init$, void, bool, bool)},
		{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(VarHandleByteArrayAsShorts$ArrayHandle, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
		{"address", "([BI)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsShorts$ArrayHandle, address, int64_t, $bytes*, int32_t), nullptr, nullptr, addressmethodAnnotations$$},
		{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)S", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsShorts$ArrayHandle, get, int16_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getmethodAnnotations$$},
		{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)S", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsShorts$ArrayHandle, getAcquire, int16_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getAcquiremethodAnnotations$$},
		{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)S", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsShorts$ArrayHandle, getOpaque, int16_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getOpaquemethodAnnotations$$},
		{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)S", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsShorts$ArrayHandle, getVolatile, int16_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getVolatilemethodAnnotations$$},
		{"index", "([BI)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsShorts$ArrayHandle, index, int32_t, $bytes*, int32_t), nullptr, nullptr, indexmethodAnnotations$$},
		{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsShorts$ArrayHandle, set, void, $VarHandle*, Object$*, int32_t, int16_t), nullptr, nullptr, setmethodAnnotations$$},
		{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsShorts$ArrayHandle, setOpaque, void, $VarHandle*, Object$*, int32_t, int16_t), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsShorts$ArrayHandle, setRelease, void, $VarHandle*, Object$*, int32_t, int16_t), nullptr, nullptr, setReleasemethodAnnotations$$},
		{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsShorts$ArrayHandle, setVolatile, void, $VarHandle*, Object$*, int32_t, int16_t), nullptr, nullptr, setVolatilemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsShorts$ArrayHandle;", nullptr, $PUBLIC, $virtualMethod(VarHandleByteArrayAsShorts$ArrayHandle, withInvokeBehavior, VarHandleByteArrayAsShorts$ArrayHandle*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsShorts$ArrayHandle;", nullptr, $PUBLIC, $virtualMethod(VarHandleByteArrayAsShorts$ArrayHandle, withInvokeExactBehavior, VarHandleByteArrayAsShorts$ArrayHandle*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleByteArrayAsShorts$ArrayHandle", "java.lang.invoke.VarHandleByteArrayAsShorts", "ArrayHandle", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleByteArrayAsShorts$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsShorts", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleByteArrayAsShorts$ArrayHandle",
		"java.lang.invoke.VarHandleByteArrayAsShorts$ByteArrayViewVarHandle",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.VarHandleByteArrayAsShorts"
	};
	$loadClass(VarHandleByteArrayAsShorts$ArrayHandle, name, initialize, &classInfo$$, VarHandleByteArrayAsShorts$ArrayHandle::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleByteArrayAsShorts$ArrayHandle);
	});
	return class$;
}

$Class* VarHandleByteArrayAsShorts$ArrayHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java