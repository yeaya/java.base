#include <StackStreamTest$C.h>
#include <StackStreamTest$D.h>
#include <StackStreamTest.h>
#include <jcpp.h>

using $StackStreamTest$D = ::StackStreamTest$D;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void StackStreamTest$C::init$() {
}

void StackStreamTest$C::c() {
	$StackStreamTest$D::d();
}

StackStreamTest$C::StackStreamTest$C() {
}

$Class* StackStreamTest$C::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(StackStreamTest$C, init$, void)},
		{"c", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(StackStreamTest$C, c, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"StackStreamTest$C", "StackStreamTest", "C", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"StackStreamTest$C",
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
	$loadClass(StackStreamTest$C, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StackStreamTest$C);
	});
	return class$;
}

$Class* StackStreamTest$C::class$ = nullptr;