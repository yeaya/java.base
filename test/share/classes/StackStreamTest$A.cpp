#include <StackStreamTest$A.h>
#include <StackStreamTest$B.h>
#include <StackStreamTest.h>
#include <jcpp.h>

using $StackStreamTest$B = ::StackStreamTest$B;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void StackStreamTest$A::init$() {
}

void StackStreamTest$A::a() {
	$StackStreamTest$B::b();
}

StackStreamTest$A::StackStreamTest$A() {
}

$Class* StackStreamTest$A::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(StackStreamTest$A, init$, void)},
		{"a", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(StackStreamTest$A, a, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"StackStreamTest$A", "StackStreamTest", "A", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"StackStreamTest$A",
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
	$loadClass(StackStreamTest$A, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StackStreamTest$A);
	});
	return class$;
}

$Class* StackStreamTest$A::class$ = nullptr;