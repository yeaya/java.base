#include <EnclosingMethodTests$1StaticLocal.h>
#include <EnclosingMethodTests.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void EnclosingMethodTests$1StaticLocal::init$() {
}

EnclosingMethodTests$1StaticLocal::EnclosingMethodTests$1StaticLocal() {
}

$Class* EnclosingMethodTests$1StaticLocal::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(EnclosingMethodTests$1StaticLocal, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"EnclosingMethodTests",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"EnclosingMethodTests$1StaticLocal", nullptr, "StaticLocal", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"EnclosingMethodTests$1StaticLocal",
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
		"EnclosingMethodTests"
	};
	$loadClass(EnclosingMethodTests$1StaticLocal, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EnclosingMethodTests$1StaticLocal);
	});
	return class$;
}

$Class* EnclosingMethodTests$1StaticLocal::class$ = nullptr;