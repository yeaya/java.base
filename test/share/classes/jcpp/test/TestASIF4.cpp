#include <jcpp/test/TestASIF4.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jcpp {
	namespace test {

$Class* TestASIF4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"get4", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TestASIF4, get4, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"jcpp.test.TestASIF4",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TestASIF4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestASIF4);
	});
	return class$;
}

$Class* TestASIF4::class$ = nullptr;

	} // test
} // jcpp