#include <StackStreamTest$B.h>
#include <StackStreamTest$C.h>
#include <StackStreamTest.h>
#include <jcpp.h>

using $StackStreamTest$C = ::StackStreamTest$C;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void StackStreamTest$B::init$() {
}

void StackStreamTest$B::b() {
	$StackStreamTest$C::c();
}

StackStreamTest$B::StackStreamTest$B() {
}

$Class* StackStreamTest$B::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(StackStreamTest$B, init$, void)},
		{"b", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(StackStreamTest$B, b, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"StackStreamTest$B", "StackStreamTest", "B", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"StackStreamTest$B",
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
	$loadClass(StackStreamTest$B, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StackStreamTest$B);
	});
	return class$;
}

$Class* StackStreamTest$B::class$ = nullptr;