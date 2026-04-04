#include <TestParameterAnnotations$StaticNested.h>
#include <TestParameterAnnotations.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParameterAnnotation = ::java::lang::ParameterAnnotation;

void TestParameterAnnotations$StaticNested::init$(Object$* o) {
}

TestParameterAnnotations$StaticNested::TestParameterAnnotations$StaticNested() {
}

$Class* TestParameterAnnotations$StaticNested::load$($String* name, bool initialize) {
	$ParameterAnnotation init$methodParamAnnotations$$[] = {
		{"LMarker;", nullptr, 0},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(TestParameterAnnotations$StaticNested, init$, void, Object$*), nullptr, nullptr, nullptr, nullptr, init$methodParamAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestParameterAnnotations$StaticNested", "TestParameterAnnotations", "StaticNested", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestParameterAnnotations$StaticNested",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestParameterAnnotations"
	};
	$loadClass(TestParameterAnnotations$StaticNested, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestParameterAnnotations$StaticNested);
	});
	return class$;
}

$Class* TestParameterAnnotations$StaticNested::class$ = nullptr;