#include <NullThreadName$1.h>
#include <NullThreadName.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void NullThreadName$1::init$() {
}

void NullThreadName$1::run() {
}

NullThreadName$1::NullThreadName$1() {
}

$Class* NullThreadName$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(NullThreadName$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(NullThreadName$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"NullThreadName",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"NullThreadName$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"NullThreadName$1",
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
		"NullThreadName"
	};
	$loadClass(NullThreadName$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NullThreadName$1);
	});
	return class$;
}

$Class* NullThreadName$1::class$ = nullptr;