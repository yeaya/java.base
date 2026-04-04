#include <EnclosingConstructorTests$1StaticLocal.h>
#include <EnclosingConstructorTests.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void EnclosingConstructorTests$1StaticLocal::init$() {
}

EnclosingConstructorTests$1StaticLocal::EnclosingConstructorTests$1StaticLocal() {
}

$Class* EnclosingConstructorTests$1StaticLocal::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(EnclosingConstructorTests$1StaticLocal, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"EnclosingConstructorTests",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"EnclosingConstructorTests$1StaticLocal", nullptr, "StaticLocal", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"EnclosingConstructorTests$1StaticLocal",
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
		"EnclosingConstructorTests"
	};
	$loadClass(EnclosingConstructorTests$1StaticLocal, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EnclosingConstructorTests$1StaticLocal);
	});
	return class$;
}

$Class* EnclosingConstructorTests$1StaticLocal::class$ = nullptr;