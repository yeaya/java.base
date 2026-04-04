#include <UniTest/ArrayTypes.h>
#include <UniTest/Point.h>
#include <UniTest/Stooge.h>
#include <jcpp.h>

using $PointArray = $Array<::UniTest::Point>;
using $StoogeArray = $Array<::UniTest::Stooge>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Class* ArrayTypes::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"a", "()[LUniTest/Point;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ArrayTypes, a, $PointArray*)},
		{"b", "()[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ArrayTypes, b, $bytes*)},
		{"bool", "()[Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ArrayTypes, bool$, $booleans*)},
		{"c", "()[C", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ArrayTypes, c, $chars*)},
		{"cls", "()[Ljava/lang/Class;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ArrayTypes, cls, $ClassArray*)},
		{"d", "()[D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ArrayTypes, d, $doubles*)},
		{"e", "()[LUniTest/Stooge;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ArrayTypes, e, $StoogeArray*)},
		{"f", "()[F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ArrayTypes, f, $floats*)},
		{"i", "()[I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ArrayTypes, i, $ints*)},
		{"l", "()[J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ArrayTypes, l, $longs*)},
		{"s", "()[S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ArrayTypes, s, $shorts*)},
		{"str", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ArrayTypes, str, $StringArray*)},
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
		"UniTest.ArrayTypes",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(ArrayTypes, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ArrayTypes);
	});
	return class$;
}

$Class* ArrayTypes::class$ = nullptr;

} // UniTest