#include <java/lang/invoke/MethodHandleImpl$Makers$2.h>

#include <java/lang/invoke/DelegatingMethodHandle.h>
#include <java/lang/invoke/LambdaForm$NamedFunction.h>
#include <java/lang/invoke/LambdaForm.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodTypeForm.h>
#include <jcpp.h>

#undef LF_DELEGATE

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DelegatingMethodHandle = ::java::lang::invoke::DelegatingMethodHandle;
using $LambdaForm = ::java::lang::invoke::LambdaForm;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodTypeForm = ::java::lang::invoke::MethodTypeForm;

namespace java {
	namespace lang {
		namespace invoke {

$MethodInfo _MethodHandleImpl$Makers$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MethodHandleImpl$Makers$2::*)()>(&MethodHandleImpl$Makers$2::init$))},
	{"apply", "(Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/LambdaForm;", nullptr, $PUBLIC},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _MethodHandleImpl$Makers$2_EnclosingMethodInfo_ = {
	"java.lang.invoke.MethodHandleImpl$Makers",
	nullptr,
	nullptr
};

$InnerClassInfo _MethodHandleImpl$Makers$2_InnerClassesInfo_[] = {
	{"java.lang.invoke.MethodHandleImpl$Makers", "java.lang.invoke.MethodHandleImpl", "Makers", $PRIVATE | $STATIC | $FINAL},
	{"java.lang.invoke.MethodHandleImpl$Makers$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MethodHandleImpl$Makers$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.MethodHandleImpl$Makers$2",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	_MethodHandleImpl$Makers$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/function/Function<Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/LambdaForm;>;",
	&_MethodHandleImpl$Makers$2_EnclosingMethodInfo_,
	_MethodHandleImpl$Makers$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.MethodHandleImpl"
};

$Object* allocate$MethodHandleImpl$Makers$2($Class* clazz) {
	return $of($alloc(MethodHandleImpl$Makers$2));
}

void MethodHandleImpl$Makers$2::init$() {
}

$LambdaForm* MethodHandleImpl$Makers$2::apply($MethodHandle* target) {
	$load($DelegatingMethodHandle);
	$init($DelegatingMethodHandle);
	return $DelegatingMethodHandle::makeReinvokerForm(target, $MethodTypeForm::LF_DELEGATE, $DelegatingMethodHandle::class$, $DelegatingMethodHandle::NF_getTarget);
}

$Object* MethodHandleImpl$Makers$2::apply(Object$* target) {
	return $of(this->apply($cast($MethodHandle, target)));
}

MethodHandleImpl$Makers$2::MethodHandleImpl$Makers$2() {
}

$Class* MethodHandleImpl$Makers$2::load$($String* name, bool initialize) {
	$loadClass(MethodHandleImpl$Makers$2, name, initialize, &_MethodHandleImpl$Makers$2_ClassInfo_, allocate$MethodHandleImpl$Makers$2);
	return class$;
}

$Class* MethodHandleImpl$Makers$2::class$ = nullptr;

		} // invoke
	} // lang
} // java