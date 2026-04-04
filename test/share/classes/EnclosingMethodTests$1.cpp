#include <EnclosingMethodTests$1.h>
#include <EnclosingMethodTests.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void EnclosingMethodTests$1::init$() {
}

EnclosingMethodTests$1::EnclosingMethodTests$1() {
}

$Class* EnclosingMethodTests$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(EnclosingMethodTests$1, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"EnclosingMethodTests",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"EnclosingMethodTests$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"EnclosingMethodTests$1",
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
		"EnclosingMethodTests"
	};
	$loadClass(EnclosingMethodTests$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EnclosingMethodTests$1);
	});
	return class$;
}

$Class* EnclosingMethodTests$1::class$ = nullptr;