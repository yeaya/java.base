#include <java/lang/invoke/MethodHandleImpl$CountingWrapper.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/String.h>
#include <java/lang/invoke/DelegatingMethodHandle.h>
#include <java/lang/invoke/LambdaForm$NamedFunction.h>
#include <java/lang/invoke/LambdaForm.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandleImpl$CountingWrapper$1.h>
#include <java/lang/invoke/MethodHandleImpl.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

#undef DONT_INLINE_THRESHOLD
#undef THIS_CLASS

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $DelegatingMethodHandle = ::java::lang::invoke::DelegatingMethodHandle;
using $LambdaForm = ::java::lang::invoke::LambdaForm;
using $LambdaForm$NamedFunction = ::java::lang::invoke::LambdaForm$NamedFunction;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandleImpl = ::java::lang::invoke::MethodHandleImpl;
using $MethodHandleImpl$CountingWrapper$1 = ::java::lang::invoke::MethodHandleImpl$CountingWrapper$1;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodType = ::java::lang::invoke::MethodType;
using $Method = ::java::lang::reflect::Method;
using $Function = ::java::util::function::Function;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _MethodHandleImpl$CountingWrapper_MethodAnnotations_getTarget3[] = {
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _MethodHandleImpl$CountingWrapper_MethodAnnotations_maybeStopCounting4[] = {
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$FieldInfo _MethodHandleImpl$CountingWrapper_FieldInfo_[] = {
	{"target", "Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $FINAL, $field(MethodHandleImpl$CountingWrapper, target)},
	{"count", "I", nullptr, $PRIVATE, $field(MethodHandleImpl$CountingWrapper, count)},
	{"countingFormProducer", "Ljava/util/function/Function;", "Ljava/util/function/Function<Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/LambdaForm;>;", $PRIVATE, $field(MethodHandleImpl$CountingWrapper, countingFormProducer)},
	{"nonCountingFormProducer", "Ljava/util/function/Function;", "Ljava/util/function/Function<Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/LambdaForm;>;", $PRIVATE, $field(MethodHandleImpl$CountingWrapper, nonCountingFormProducer)},
	{"isCounting", "Z", nullptr, $PRIVATE | $VOLATILE, $field(MethodHandleImpl$CountingWrapper, isCounting)},
	{"NF_maybeStopCounting", "Ljava/lang/invoke/LambdaForm$NamedFunction;", nullptr, $STATIC | $FINAL, $staticField(MethodHandleImpl$CountingWrapper, NF_maybeStopCounting)},
	{}
};

$MethodInfo _MethodHandleImpl$CountingWrapper_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/LambdaForm;Ljava/util/function/Function;Ljava/util/function/Function;I)V", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/LambdaForm;Ljava/util/function/Function<Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/LambdaForm;>;Ljava/util/function/Function<Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/LambdaForm;>;I)V", $PRIVATE, $method(static_cast<void(MethodHandleImpl$CountingWrapper::*)($MethodHandle*,$LambdaForm*,$Function*,$Function*,int32_t)>(&MethodHandleImpl$CountingWrapper::init$))},
	{"asTypeUncached", "(Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC},
	{"countDown", "()Z", nullptr, 0},
	{"getTarget", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PROTECTED, nullptr, nullptr, nullptr, _MethodHandleImpl$CountingWrapper_MethodAnnotations_getTarget3},
	{"maybeStopCounting", "(Ljava/lang/Object;)V", nullptr, $STATIC, $method(static_cast<void(*)(Object$*)>(&MethodHandleImpl$CountingWrapper::maybeStopCounting)), nullptr, nullptr, _MethodHandleImpl$CountingWrapper_MethodAnnotations_maybeStopCounting4},
	{}
};

$InnerClassInfo _MethodHandleImpl$CountingWrapper_InnerClassesInfo_[] = {
	{"java.lang.invoke.MethodHandleImpl$CountingWrapper", "java.lang.invoke.MethodHandleImpl", "CountingWrapper", $STATIC},
	{"java.lang.invoke.MethodHandleImpl$CountingWrapper$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MethodHandleImpl$CountingWrapper_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.MethodHandleImpl$CountingWrapper",
	"java.lang.invoke.DelegatingMethodHandle",
	nullptr,
	_MethodHandleImpl$CountingWrapper_FieldInfo_,
	_MethodHandleImpl$CountingWrapper_MethodInfo_,
	nullptr,
	nullptr,
	_MethodHandleImpl$CountingWrapper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.MethodHandleImpl"
};

$Object* allocate$MethodHandleImpl$CountingWrapper($Class* clazz) {
	return $of($alloc(MethodHandleImpl$CountingWrapper));
}

$LambdaForm$NamedFunction* MethodHandleImpl$CountingWrapper::NF_maybeStopCounting = nullptr;

void MethodHandleImpl$CountingWrapper::init$($MethodHandle* target, $LambdaForm* lform, $Function* countingFromProducer, $Function* nonCountingFormProducer, int32_t count) {
	$DelegatingMethodHandle::init$($($nc(target)->type()), lform);
	$set(this, target, target);
	this->count = count;
	$set(this, countingFormProducer, countingFromProducer);
	$set(this, nonCountingFormProducer, nonCountingFormProducer);
	this->isCounting = (count > 0);
}

$MethodHandle* MethodHandleImpl$CountingWrapper::getTarget() {
	return this->target;
}

$MethodHandle* MethodHandleImpl$CountingWrapper::asTypeUncached($MethodType* newType) {
	$useLocalCurrentObjectStackCache();
	$var($MethodHandle, newTarget, $nc(this->target)->asType(newType));
	$var($MethodHandle, wrapper, nullptr);
	if (this->isCounting) {
		$var($LambdaForm, lform, nullptr);
		$assign(lform, $cast($LambdaForm, $nc(this->countingFormProducer)->apply(newTarget)));
		$init($MethodHandleStatics);
		$assign(wrapper, $new(MethodHandleImpl$CountingWrapper, newTarget, lform, this->countingFormProducer, this->nonCountingFormProducer, $MethodHandleStatics::DONT_INLINE_THRESHOLD));
	} else {
		$assign(wrapper, newTarget);
	}
	return ($assignField(this, asTypeCache, wrapper));
}

bool MethodHandleImpl$CountingWrapper::countDown() {
	int32_t c = this->count;
	$nc(this->target)->maybeCustomize();
	if (c <= 1) {
		if (this->isCounting) {
			this->isCounting = false;
			return true;
		} else {
			return false;
		}
	} else {
		this->count = c - 1;
		return false;
	}
}

void MethodHandleImpl$CountingWrapper::maybeStopCounting(Object$* o1) {
	$init(MethodHandleImpl$CountingWrapper);
	$useLocalCurrentObjectStackCache();
	$var(MethodHandleImpl$CountingWrapper, wrapper, $cast(MethodHandleImpl$CountingWrapper, o1));
	if ($nc(wrapper)->countDown()) {
		wrapper->updateForm($$new($MethodHandleImpl$CountingWrapper$1, wrapper));
	}
}

void clinit$MethodHandleImpl$CountingWrapper($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	{
		$Class* THIS_CLASS = MethodHandleImpl$CountingWrapper::class$;
		try {
			$load($Object);
			$assignStatic(MethodHandleImpl$CountingWrapper::NF_maybeStopCounting, $new($LambdaForm$NamedFunction, $($nc(THIS_CLASS)->getDeclaredMethod("maybeStopCounting"_s, $$new($ClassArray, {$Object::class$})))));
		} catch ($ReflectiveOperationException&) {
			$var($ReflectiveOperationException, ex, $catch());
			$throw($($MethodHandleStatics::newInternalError(static_cast<$Exception*>(ex))));
		}
	}
}

MethodHandleImpl$CountingWrapper::MethodHandleImpl$CountingWrapper() {
}

$Class* MethodHandleImpl$CountingWrapper::load$($String* name, bool initialize) {
	$loadClass(MethodHandleImpl$CountingWrapper, name, initialize, &_MethodHandleImpl$CountingWrapper_ClassInfo_, clinit$MethodHandleImpl$CountingWrapper, allocate$MethodHandleImpl$CountingWrapper);
	return class$;
}

$Class* MethodHandleImpl$CountingWrapper::class$ = nullptr;

		} // invoke
	} // lang
} // java