#include <Test7157574$1C.h>
#include <Test7157574$Sub.h>
#include <Test7157574$Super.h>
#include <Test7157574.h>
#include <jcpp.h>

using $Test7157574$Sub = ::Test7157574$Sub;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void Test7157574$1C::init$() {
	$Test7157574$Sub::init$();
}

void Test7157574$1C::m1() {
	this->f2 = -1;
}

void Test7157574$1C::m2() {
	this->f2 = -2;
}

void Test7157574$1C::ig() {
	$throwNew($RuntimeException);
}

void Test7157574$1C::ig1() {
	ig();
}

void Test7157574$1C::ig2() {
	ig();
}

void Test7157574$1C::ig3() {
	ig();
}

void Test7157574$1C::ig4() {
	ig();
}

Test7157574$1C::Test7157574$1C() {
}

$Class* Test7157574$1C::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Test7157574$1C, init$, void)},
		{"ig", "()V", nullptr, $PRIVATE, $method(Test7157574$1C, ig, void)},
		{"ig1", "()V", nullptr, $PUBLIC, $virtualMethod(Test7157574$1C, ig1, void)},
		{"ig2", "()V", nullptr, $PUBLIC, $virtualMethod(Test7157574$1C, ig2, void)},
		{"ig3", "()V", nullptr, $PUBLIC, $virtualMethod(Test7157574$1C, ig3, void)},
		{"ig4", "()V", nullptr, $PUBLIC, $virtualMethod(Test7157574$1C, ig4, void)},
		{"m1", "()V", nullptr, $PUBLIC, $virtualMethod(Test7157574$1C, m1, void)},
		{"m2", "()V", nullptr, $PUBLIC, $virtualMethod(Test7157574$1C, m2, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Test7157574",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test7157574$1C", nullptr, "C", 0},
		{"Test7157574$Sub", "Test7157574", "Sub", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Test7157574$1C",
		"Test7157574$Sub",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Test7157574"
	};
	$loadClass(Test7157574$1C, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test7157574$1C);
	});
	return class$;
}

$Class* Test7157574$1C::class$ = nullptr;