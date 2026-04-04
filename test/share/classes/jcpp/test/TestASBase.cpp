#include <jcpp/test/TestASBase.h>
#include <java/lang/CharSequence.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jcpp {
	namespace test {

void TestASBase::init$() {
}

$CharSequence* TestASBase::get() {
	return ""_s;
}

TestASBase::TestASBase() {
}

$Class* TestASBase::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TestASBase, init$, void)},
		{"get", "()Ljava/lang/CharSequence;", nullptr, $PUBLIC, $virtualMethod(TestASBase, get, $CharSequence*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jcpp.test.TestASBase",
		"java.lang.Object",
		"jcpp.test.TestASIF",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestASBase, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestASBase);
	});
	return class$;
}

$Class* TestASBase::class$ = nullptr;

	} // test
} // jcpp