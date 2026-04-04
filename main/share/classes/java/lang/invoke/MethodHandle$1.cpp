#include <java/lang/invoke/MethodHandle$1.h>
#include <java/lang/invoke/LambdaForm.h>
#include <java/lang/invoke/MethodHandle.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LambdaForm = ::java::lang::invoke::LambdaForm;
using $MethodHandle = ::java::lang::invoke::MethodHandle;

namespace java {
	namespace lang {
		namespace invoke {

void MethodHandle$1::init$($MethodHandle* this$0) {
	$set(this, this$0, this$0);
}

$LambdaForm* MethodHandle$1::apply($LambdaForm* oldForm) {
	return $nc(oldForm)->customize(this->this$0);
}

$Object* MethodHandle$1::apply(Object$* oldForm) {
	return this->apply($cast($LambdaForm, oldForm));
}

MethodHandle$1::MethodHandle$1() {
}

$Class* MethodHandle$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/lang/invoke/MethodHandle;", nullptr, $FINAL | $SYNTHETIC, $field(MethodHandle$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/invoke/MethodHandle;)V", nullptr, 0, $method(MethodHandle$1, init$, void, $MethodHandle*)},
		{"apply", "(Ljava/lang/invoke/LambdaForm;)Ljava/lang/invoke/LambdaForm;", nullptr, $PUBLIC, $virtualMethod(MethodHandle$1, apply, $LambdaForm*, $LambdaForm*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(MethodHandle$1, apply, $Object*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.invoke.MethodHandle",
		"customize",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.MethodHandle$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.invoke.MethodHandle$1",
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
		"java.lang.invoke.MethodHandle"
	};
	$loadClass(MethodHandle$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MethodHandle$1);
	});
	return class$;
}

$Class* MethodHandle$1::class$ = nullptr;

		} // invoke
	} // lang
} // java