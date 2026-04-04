#include <StackStreamTest$D.h>
#include <StackStreamTest$E.h>
#include <StackStreamTest.h>
#include <jcpp.h>

using $StackStreamTest$E = ::StackStreamTest$E;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void StackStreamTest$D::init$() {
}

void StackStreamTest$D::d() {
	$StackStreamTest$E::e();
}

StackStreamTest$D::StackStreamTest$D() {
}

$Class* StackStreamTest$D::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(StackStreamTest$D, init$, void)},
		{"d", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(StackStreamTest$D, d, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"StackStreamTest$D", "StackStreamTest", "D", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"StackStreamTest$D",
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
	$loadClass(StackStreamTest$D, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StackStreamTest$D);
	});
	return class$;
}

$Class* StackStreamTest$D::class$ = nullptr;