#include <EnclosingConstructorTests$1.h>
#include <EnclosingConstructorTests.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void EnclosingConstructorTests$1::init$() {
}

EnclosingConstructorTests$1::EnclosingConstructorTests$1() {
}

$Class* EnclosingConstructorTests$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(EnclosingConstructorTests$1, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"EnclosingConstructorTests",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"EnclosingConstructorTests$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"EnclosingConstructorTests$1",
		"java.lang.Object",
		"java.lang.Cloneable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"EnclosingConstructorTests"
	};
	$loadClass(EnclosingConstructorTests$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EnclosingConstructorTests$1);
	});
	return class$;
}

$Class* EnclosingConstructorTests$1::class$ = nullptr;