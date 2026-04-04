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

namespace java {
	namespace lang {
		namespace invoke {

void MethodHandleImpl$CountingWrapper$1::init$($MethodHandleImpl$CountingWrapper* val$wrapper) {
	$set(this, val$wrapper, val$wrapper);
}

$LambdaForm* MethodHandleImpl$CountingWrapper$1::apply($LambdaForm* oldForm) {
	$var($LambdaForm, lform, $cast($LambdaForm, $nc($nc(this->val$wrapper)->nonCountingFormProducer)->apply($nc(this->val$wrapper)->target)));
	$nc(lform)->compileToBytecode();
	return lform;
}

$Object* MethodHandleImpl$CountingWrapper$1::apply(Object$* oldForm) {
	return this->apply($cast($LambdaForm, oldForm));
}

MethodHandleImpl$CountingWrapper$1::MethodHandleImpl$CountingWrapper$1() {
}

$Class* MethodHandleImpl$CountingWrapper$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$wrapper", "Ljava/lang/invoke/MethodHandleImpl$CountingWrapper;", nullptr, $FINAL | $SYNTHETIC, $field(MethodHandleImpl$CountingWrapper$1, val$wrapper)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/invoke/MethodHandleImpl$CountingWrapper;)V", nullptr, 0, $method(MethodHandleImpl$CountingWrapper$1, init$, void, $MethodHandleImpl$CountingWrapper*)},
		{"apply", "(Ljava/lang/invoke/LambdaForm;)Ljava/lang/invoke/LambdaForm;", nullptr, $PUBLIC, $virtualMethod(MethodHandleImpl$CountingWrapper$1, apply, $LambdaForm*, $LambdaForm*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(MethodHandleImpl$CountingWrapper$1, apply, $Object*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.invoke.MethodHandleImpl$CountingWrapper",
		"maybeStopCounting",
		"(Ljava/lang/Object;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.MethodHandleImpl$CountingWrapper", "java.lang.invoke.MethodHandleImpl", "CountingWrapper", $STATIC},
		{"java.lang.invoke.MethodHandleImpl$CountingWrapper$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.invoke.MethodHandleImpl$CountingWrapper$1",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/function/Function<Ljava/lang/invoke/LambdaForm;Ljava/lang/invoke/LambdaForm;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.MethodHandleImpl"
	};
	$loadClass(MethodHandleImpl$CountingWrapper$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MethodHandleImpl$CountingWrapper$1);
	});
	return class$;
}

$Class* MethodHandleImpl$CountingWrapper$1::class$ = nullptr;

		} // invoke
	} // lang
} // java