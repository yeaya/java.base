#include <jcpp/test/TestASIF3.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jcpp {
	namespace test {

$Class* TestASIF3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"get3", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TestASIF3, get3, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"jcpp.test.TestASIF3",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TestASIF3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestASIF3);
	});
	return class$;
}

$Class* TestASIF3::class$ = nullptr;

	} // test
} // jcpp