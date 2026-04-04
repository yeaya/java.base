#include <StackStreamTest$K.h>
#include <StackStreamTest$K$Caller.h>
#include <StackStreamTest.h>
#include <jcpp.h>

using $StackStreamTest$K$Caller = ::StackStreamTest$K$Caller;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void StackStreamTest$K::init$() {
}

void StackStreamTest$K::k() {
	k1();
}

void StackStreamTest$K::k1() {
	k2();
}

void StackStreamTest$K::k2() {
	k3();
}

void StackStreamTest$K::k3() {
	k4();
}

void StackStreamTest$K::k4() {
	k5();
}

void StackStreamTest$K::k5() {
	k6();
}

void StackStreamTest$K::k6() {
	k7();
}

void StackStreamTest$K::k7() {
	k8();
}

void StackStreamTest$K::k8() {
	k9();
}

void StackStreamTest$K::k9() {
	k10();
}

void StackStreamTest$K::k10() {
	k20();
}

void StackStreamTest$K::k20() {
	$$new($StackStreamTest$K$Caller, this)->test();
}

StackStreamTest$K::StackStreamTest$K() {
}

$Class* StackStreamTest$K::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(StackStreamTest$K, init$, void)},
		{"k", "()V", nullptr, 0, $virtualMethod(StackStreamTest$K, k, void)},
		{"k1", "()V", nullptr, 0, $virtualMethod(StackStreamTest$K, k1, void)},
		{"k10", "()V", nullptr, 0, $virtualMethod(StackStreamTest$K, k10, void)},
		{"k2", "()V", nullptr, 0, $virtualMethod(StackStreamTest$K, k2, void)},
		{"k20", "()V", nullptr, 0, $virtualMethod(StackStreamTest$K, k20, void)},
		{"k3", "()V", nullptr, 0, $virtualMethod(StackStreamTest$K, k3, void)},
		{"k4", "()V", nullptr, 0, $virtualMethod(StackStreamTest$K, k4, void)},
		{"k5", "()V", nullptr, 0, $virtualMethod(StackStreamTest$K, k5, void)},
		{"k6", "()V", nullptr, 0, $virtualMethod(StackStreamTest$K, k6, void)},
		{"k7", "()V", nullptr, 0, $virtualMethod(StackStreamTest$K, k7, void)},
		{"k8", "()V", nullptr, 0, $virtualMethod(StackStreamTest$K, k8, void)},
		{"k9", "()V", nullptr, 0, $virtualMethod(StackStreamTest$K, k9, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"StackStreamTest$K", "StackStreamTest", "K", $STATIC},
		{"StackStreamTest$K$Caller", "StackStreamTest$K", "Caller", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"StackStreamTest$K",
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
	$loadClass(StackStreamTest$K, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StackStreamTest$K);
	});
	return class$;
}

$Class* StackStreamTest$K::class$ = nullptr;