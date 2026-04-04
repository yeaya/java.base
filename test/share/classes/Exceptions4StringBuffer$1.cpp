#include <Exceptions4StringBuffer$1.h>
#include <Exceptions4StringBuffer.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

void Exceptions4StringBuffer$1::init$() {
}

void Exceptions4StringBuffer$1::run() {
	$new($StringBuffer);
}

Exceptions4StringBuffer$1::Exceptions4StringBuffer$1() {
}

$Class* Exceptions4StringBuffer$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Exceptions4StringBuffer$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Exceptions4StringBuffer$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Exceptions4StringBuffer",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Exceptions4StringBuffer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Exceptions4StringBuffer$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Exceptions4StringBuffer"
	};
	$loadClass(Exceptions4StringBuffer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Exceptions4StringBuffer$1);
	});
	return class$;
}

$Class* Exceptions4StringBuffer$1::class$ = nullptr;