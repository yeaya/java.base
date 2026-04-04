#include <jcpp/test/TestASIF.h>
#include <java/lang/CharSequence.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jcpp {
	namespace test {

$Class* TestASIF::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"get", "()Ljava/lang/CharSequence;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TestASIF, get, $CharSequence*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"jcpp.test.TestASIF",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TestASIF, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestASIF);
	});
	return class$;
}

$Class* TestASIF::class$ = nullptr;

	} // test
} // jcpp