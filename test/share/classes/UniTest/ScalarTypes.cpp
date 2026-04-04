#include <UniTest/ScalarTypes.h>
#include <UniTest/Point.h>
#include <UniTest/Stooge.h>
#include <jcpp.h>

using $Point = ::UniTest::Point;
using $Stooge = ::UniTest::Stooge;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Class* ScalarTypes::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"a", "()LUniTest/Point;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScalarTypes, a, $Point*)},
		{"b", "()B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScalarTypes, b, int8_t)},
		{"bool", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScalarTypes, bool$, bool)},
		{"c", "()C", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScalarTypes, c, char16_t)},
		{"cls", "()Ljava/lang/Class;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScalarTypes, cls, $Class*)},
		{"d", "()D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScalarTypes, d, double)},
		{"e", "()LUniTest/Stooge;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScalarTypes, e, $Stooge*)},
		{"f", "()F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScalarTypes, f, float)},
		{"i", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScalarTypes, i, int32_t)},
		{"l", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScalarTypes, l, int64_t)},
		{"s", "()S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScalarTypes, s, int16_t)},
		{"str", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScalarTypes, str, $String*)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/annotation/Retention;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
		"UniTest.ScalarTypes",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(ScalarTypes, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ScalarTypes);
	});
	return class$;
}

$Class* ScalarTypes::class$ = nullptr;

} // UniTest