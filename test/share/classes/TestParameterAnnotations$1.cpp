#include <TestParameterAnnotations$1.h>
#include <TestParameterAnnotations.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TestParameterAnnotations$1::init$() {
}

$String* TestParameterAnnotations$1::toString() {
	return "Anonymous"_s;
}

TestParameterAnnotations$1::TestParameterAnnotations$1() {
}

$Class* TestParameterAnnotations$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TestParameterAnnotations$1, init$, void)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TestParameterAnnotations$1, toString, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TestParameterAnnotations",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestParameterAnnotations$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestParameterAnnotations$1",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestParameterAnnotations"
	};
	$loadClass(TestParameterAnnotations$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestParameterAnnotations$1);
	});
	return class$;
}

$Class* TestParameterAnnotations$1::class$ = nullptr;