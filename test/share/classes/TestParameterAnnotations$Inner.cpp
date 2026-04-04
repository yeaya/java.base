#include <TestParameterAnnotations$Inner.h>
#include <TestParameterAnnotations.h>
#include <jcpp.h>

using $TestParameterAnnotations = ::TestParameterAnnotations;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParameterAnnotation = ::java::lang::ParameterAnnotation;

void TestParameterAnnotations$Inner::init$($TestParameterAnnotations* this$0, Object$* o) {
	$set(this, this$0, this$0);
}

TestParameterAnnotations$Inner::TestParameterAnnotations$Inner() {
}

$Class* TestParameterAnnotations$Inner::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTestParameterAnnotations;", nullptr, $FINAL | $SYNTHETIC, $field(TestParameterAnnotations$Inner, this$0)},
		{}
	};
	$ParameterAnnotation init$methodParamAnnotations$$[] = {
		{"LMarker;", nullptr, 1},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestParameterAnnotations;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(TestParameterAnnotations$Inner, init$, void, $TestParameterAnnotations*, Object$*), nullptr, nullptr, nullptr, nullptr, init$methodParamAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestParameterAnnotations$Inner", "TestParameterAnnotations", "Inner", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestParameterAnnotations$Inner",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestParameterAnnotations"
	};
	$loadClass(TestParameterAnnotations$Inner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestParameterAnnotations$Inner);
	});
	return class$;
}

$Class* TestParameterAnnotations$Inner::class$ = nullptr;