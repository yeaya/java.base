#include <java/lang/invoke/MethodHandleImpl$Makers$1.h>

#include <java/lang/invoke/DelegatingMethodHandle.h>
#include <java/lang/invoke/LambdaForm$NamedFunction.h>
#include <java/lang/invoke/LambdaForm.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandleImpl$CountingWrapper.h>
#include <java/lang/invoke/MethodHandleImpl.h>
#include <java/lang/invoke/MethodTypeForm.h>
#include <jcpp.h>

#undef LF_DELEGATE_BLOCK_INLINING

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DelegatingMethodHandle = ::java::lang::invoke::DelegatingMethodHandle;
using $LambdaForm = ::java::lang::invoke::LambdaForm;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandleImpl$CountingWrapper = ::java::lang::invoke::MethodHandleImpl$CountingWrapper;
using $MethodTypeForm = ::java::lang::invoke::MethodTypeForm;

namespace java {
	namespace lang {
		namespace invoke {

$MethodInfo _MethodHandleImpl$Makers$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(MethodHandleImpl$Makers$1, init$, void)},
	{"apply", "(Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/LambdaForm;", nullptr, $PUBLIC, $virtualMethod(MethodHandleImpl$Makers$1, apply, $LambdaForm*, $MethodHandle*)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(MethodHandleImpl$Makers$1, apply, $Object*, Object$*)},
	{}
};

$EnclosingMethodInfo _MethodHandleImpl$Makers$1_EnclosingMethodInfo_ = {
	"java.lang.invoke.MethodHandleImpl$Makers",
	nullptr,
	nullptr
};

$InnerClassInfo _MethodHandleImpl$Makers$1_InnerClassesInfo_[] = {
	{"java.lang.invoke.MethodHandleImpl$Makers", "java.lang.invoke.MethodHandleImpl", "Makers", $PRIVATE | $STATIC | $FINAL},
	{"java.lang.invoke.MethodHandleImpl$Makers$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MethodHandleImpl$Makers$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.MethodHandleImpl$Makers$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	_MethodHandleImpl$Makers$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/function/Function<Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/LambdaForm;>;",
	&_MethodHandleImpl$Makers$1_EnclosingMethodInfo_,
	_MethodHandleImpl$Makers$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.MethodHandleImpl"
};

$Object* allocate$MethodHandleImpl$Makers$1($Class* clazz) {
	return $of($alloc(MethodHandleImpl$Makers$1));
}

void MethodHandleImpl$Makers$1::init$() {
}

$LambdaForm* MethodHandleImpl$Makers$1::apply($MethodHandle* target) {
	$load($MethodHandleImpl$CountingWrapper);
	$init($DelegatingMethodHandle);
	$init($MethodHandleImpl$CountingWrapper);
	return $DelegatingMethodHandle::makeReinvokerForm(target, $MethodTypeForm::LF_DELEGATE_BLOCK_INLINING, $MethodHandleImpl$CountingWrapper::class$, false, $DelegatingMethodHandle::NF_getTarget, $MethodHandleImpl$CountingWrapper::NF_maybeStopCounting);
}

$Object* MethodHandleImpl$Makers$1::apply(Object$* target) {
	return $of(this->apply($cast($MethodHandle, target)));
}

MethodHandleImpl$Makers$1::MethodHandleImpl$Makers$1() {
}

$Class* MethodHandleImpl$Makers$1::load$($String* name, bool initialize) {
	$loadClass(MethodHandleImpl$Makers$1, name, initialize, &_MethodHandleImpl$Makers$1_ClassInfo_, allocate$MethodHandleImpl$Makers$1);
	return class$;
}

$Class* MethodHandleImpl$Makers$1::class$ = nullptr;

		} // invoke
	} // lang
} // java