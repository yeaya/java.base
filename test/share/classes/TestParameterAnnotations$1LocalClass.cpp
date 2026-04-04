#include <TestParameterAnnotations$1LocalClass.h>
#include <TestParameterAnnotations.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParameterAnnotation = ::java::lang::ParameterAnnotation;

void TestParameterAnnotations$1LocalClass::init$(int32_t i) {
}

TestParameterAnnotations$1LocalClass::TestParameterAnnotations$1LocalClass() {
}

$Class* TestParameterAnnotations$1LocalClass::load$($String* name, bool initialize) {
	$ParameterAnnotation init$methodParamAnnotations$$[] = {
		{"LMarker;", nullptr, 0},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(TestParameterAnnotations$1LocalClass, init$, void, int32_t), nullptr, nullptr, nullptr, nullptr, init$methodParamAnnotations$$},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TestParameterAnnotations",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestParameterAnnotations$1LocalClass", nullptr, "LocalClass", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestParameterAnnotations$1LocalClass",
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
	$loadClass(TestParameterAnnotations$1LocalClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestParameterAnnotations$1LocalClass);
	});
	return class$;
}

$Class* TestParameterAnnotations$1LocalClass::class$ = nullptr;