#include <StackStreamTest$F.h>
#include <StackStreamTest$G.h>
#include <StackStreamTest$K.h>
#include <StackStreamTest.h>
#include <jcpp.h>

using $StackStreamTest$G = ::StackStreamTest$G;
using $StackStreamTest$K = ::StackStreamTest$K;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void StackStreamTest$F::init$() {
}

void StackStreamTest$F::f() {
	$StackStreamTest$G::g();
	$$new($StackStreamTest$K)->k();
}

StackStreamTest$F::StackStreamTest$F() {
}

$Class* StackStreamTest$F::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(StackStreamTest$F, init$, void)},
		{"f", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(StackStreamTest$F, f, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"StackStreamTest$F", "StackStreamTest", "F", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"StackStreamTest$F",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"StackStreamTest"
	};
	$loadClass(StackStreamTest$F, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StackStreamTest$F);
	});
	return class$;
}

$Class* StackStreamTest$F::class$ = nullptr;