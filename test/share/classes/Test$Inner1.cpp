#include <Test$Inner1.h>
#include <Test.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Test$Inner1::init$() {
}

void Test$Inner1::bar($ObjectArray* array1) {
	return;
}

Test$Inner1::Test$Inner1() {
}

$Class* Test$Inner1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Test$Inner1, init$, void)},
		{"bar", "([Ljava/lang/Object;)V", "([TU;)V", 0, $virtualMethod(Test$Inner1, bar, void, $ObjectArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test$Inner1", "Test", "Inner1", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Test$Inner1",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		"<U:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Test"
	};
	$loadClass(Test$Inner1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test$Inner1);
	});
	return class$;
}

$Class* Test$Inner1::class$ = nullptr;