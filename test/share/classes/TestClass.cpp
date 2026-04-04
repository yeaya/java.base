#include <TestClass.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TestClass::init$() {
}

$String* TestClass::foo() {
	return "OK"_s;
}

TestClass::TestClass() {
}

$Class* TestClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestClass, init$, void)},
		{"foo", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(TestClass, foo, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TestClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestClass);
	});
	return class$;
}

$Class* TestClass::class$ = nullptr;