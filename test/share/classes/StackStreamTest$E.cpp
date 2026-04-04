#include <StackStreamTest$E.h>
#include <StackStreamTest$F.h>
#include <StackStreamTest.h>
#include <jcpp.h>

using $StackStreamTest$F = ::StackStreamTest$F;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void StackStreamTest$E::init$() {
}

void StackStreamTest$E::e() {
	$StackStreamTest$F::f();
}

StackStreamTest$E::StackStreamTest$E() {
}

$Class* StackStreamTest$E::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(StackStreamTest$E, init$, void)},
		{"e", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(StackStreamTest$E, e, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"StackStreamTest$E", "StackStreamTest", "E", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"StackStreamTest$E",
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
	$loadClass(StackStreamTest$E, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StackStreamTest$E);
	});
	return class$;
}

$Class* StackStreamTest$E::class$ = nullptr;