#include <java/lang/invoke/MethodHandleImpl$CountingWrapper$1.h>

#include <java/lang/invoke/LambdaForm.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandleImpl$CountingWrapper.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LambdaForm = ::java::lang::invoke::LambdaForm;
using $MethodHandleImpl$CountingWrapper = ::java::lang::invoke::MethodHandleImpl$CountingWrapper;
using $Function = ::java::util::function::Function;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _MethodHandleImpl$CountingWrapper$1_FieldInfo_[] = {
	{"val$wrapper", "Ljava/lang/invoke/MethodHandleImpl$CountingWrapper;", nullptr, $FINAL | $SYNTHETIC, $field(MethodHandleImpl$CountingWrapper$1, val$wrapper)},
	{}
};

$MethodInfo _MethodHandleImpl$CountingWrapper$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/MethodHandleImpl$CountingWrapper;)V", nullptr, 0, $method(static_cast<void(MethodHandleImpl$CountingWrapper$1::*)($MethodHandleImpl$CountingWrapper*)>(&MethodHandleImpl$CountingWrapper$1::init$))},
	{"apply", "(Ljava/lang/invoke/LambdaForm;)Ljava/lang/invoke/LambdaForm;", nullptr, $PUBLIC},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _MethodHandleImpl$CountingWrapper$1_EnclosingMethodInfo_ = {
	"java.lang.invoke.MethodHandleImpl$CountingWrapper",
	"maybeStopCounting",
	"(Ljava/lang/Object;)V"
};

$InnerClassInfo _MethodHandleImpl$CountingWrapper$1_InnerClassesInfo_[] = {
	{"java.lang.invoke.MethodHandleImpl$CountingWrapper", "java.lang.invoke.MethodHandleImpl", "CountingWrapper", $STATIC},
	{"java.lang.invoke.MethodHandleImpl$CountingWrapper$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MethodHandleImpl$CountingWrapper$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.MethodHandleImpl$CountingWrapper$1",
	"java.lang.Object",
	"java.util.function.Function",
	_MethodHandleImpl$CountingWrapper$1_FieldInfo_,
	_MethodHandleImpl$CountingWrapper$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/function/Function<Ljava/lang/invoke/LambdaForm;Ljava/lang/invoke/LambdaForm;>;",
	&_MethodHandleImpl$CountingWrapper$1_EnclosingMethodInfo_,
	_MethodHandleImpl$CountingWrapper$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.MethodHandleImpl"
};

$Object* allocate$MethodHandleImpl$CountingWrapper$1($Class* clazz) {
	return $of($alloc(MethodHandleImpl$CountingWrapper$1));
}

void MethodHandleImpl$CountingWrapper$1::init$($MethodHandleImpl$CountingWrapper* val$wrapper) {
	$set(this, val$wrapper, val$wrapper);
}

$LambdaForm* MethodHandleImpl$CountingWrapper$1::apply($LambdaForm* oldForm) {
	$var($LambdaForm, lform, $cast($LambdaForm, $nc($nc(this->val$wrapper)->nonCountingFormProducer)->apply($nc(this->val$wrapper)->target)));
	$nc(lform)->compileToBytecode();
	return lform;
}

$Object* MethodHandleImpl$CountingWrapper$1::apply(Object$* oldForm) {
	return $of(this->apply($cast($LambdaForm, oldForm)));
}

MethodHandleImpl$CountingWrapper$1::MethodHandleImpl$CountingWrapper$1() {
}

$Class* MethodHandleImpl$CountingWrapper$1::load$($String* name, bool initialize) {
	$loadClass(MethodHandleImpl$CountingWrapper$1, name, initialize, &_MethodHandleImpl$CountingWrapper$1_ClassInfo_, allocate$MethodHandleImpl$CountingWrapper$1);
	return class$;
}

$Class* MethodHandleImpl$CountingWrapper$1::class$ = nullptr;

		} // invoke
	} // lang
} // java