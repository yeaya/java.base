#include <java/lang/invoke/DirectMethodHandle$1.h>
#include <java/lang/invoke/DirectMethodHandle.h>
#include <java/lang/invoke/LambdaForm.h>
#include <java/lang/invoke/MemberName.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DirectMethodHandle = ::java::lang::invoke::DirectMethodHandle;
using $LambdaForm = ::java::lang::invoke::LambdaForm;

namespace java {
	namespace lang {
		namespace invoke {

void DirectMethodHandle$1::init$($DirectMethodHandle* this$0) {
	$set(this, this$0, this$0);
}

$LambdaForm* DirectMethodHandle$1::apply($LambdaForm* oldForm) {
	return ($nc(this->this$0->member)->isField() ? $DirectMethodHandle::preparedFieldLambdaForm(this->this$0->member) : $DirectMethodHandle::preparedLambdaForm(this->this$0->member));
}

$Object* DirectMethodHandle$1::apply(Object$* oldForm) {
	return this->apply($cast($LambdaForm, oldForm));
}

DirectMethodHandle$1::DirectMethodHandle$1() {
}

$Class* DirectMethodHandle$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/lang/invoke/DirectMethodHandle;", nullptr, $FINAL | $SYNTHETIC, $field(DirectMethodHandle$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/invoke/DirectMethodHandle;)V", nullptr, 0, $method(DirectMethodHandle$1, init$, void, $DirectMethodHandle*)},
		{"apply", "(Ljava/lang/invoke/LambdaForm;)Ljava/lang/invoke/LambdaForm;", nullptr, $PUBLIC, $virtualMethod(DirectMethodHandle$1, apply, $LambdaForm*, $LambdaForm*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DirectMethodHandle$1, apply, $Object*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.invoke.DirectMethodHandle",
		"ensureInitialized",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.DirectMethodHandle$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.invoke.DirectMethodHandle$1",
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
		"java.lang.invoke.DirectMethodHandle"
	};
	$loadClass(DirectMethodHandle$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DirectMethodHandle$1);
	});
	return class$;
}

$Class* DirectMethodHandle$1::class$ = nullptr;

		} // invoke
	} // lang
} // java