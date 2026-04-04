#include <UniTest/ScalarTypesWithDefault.h>
#include <UniTest/Point.h>
#include <UniTest/Stooge.h>
#include <jcpp.h>

using $Point = ::UniTest::Point;
using $Stooge = ::UniTest::Stooge;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Class* ScalarTypesWithDefault::load$($String* name, bool initialize) {
	$NamedAttribute adefaultValue$$$compoundAttribute$namedAttribute[] = {
		{"x", 'I', "11"},
		{"y", 'I', "12"},
		{}
	};
$CompoundAttribute adefaultValue$$$compoundAttribute = {
	"LUniTest/Point;", adefaultValue$$$compoundAttribute$namedAttribute
};

	$Attribute adefaultValue$$ = {
		'@', &adefaultValue$$$compoundAttribute
	};

	$Attribute bdefaultValue$$ = {
		'B', "11"
	};

	$Attribute bool$defaultValue$$ = {
		'Z', "false"
	};

	$Attribute cdefaultValue$$ = {
		'C', "V"
	};

	$Attribute clsdefaultValue$$ = {
		'c', "Ljava/lang/Class;"
	};

	$Attribute ddefaultValue$$ = {
		'D', "17.0"
	};

	$Attribute edefaultValue$$ = {
		'e', "LUniTest/Stooge; LARRY"
	};

	$Attribute fdefaultValue$$ = {
		'F', "16.0"
	};

	$Attribute idefaultValue$$ = {
		'I', "13"
	};

	$Attribute ldefaultValue$$ = {
		'J', "14"
	};

	$Attribute sdefaultValue$$ = {
		'S', "12"
	};

	$Attribute strdefaultValue$$ = {
		's', "default"
	};
	$MethodInfo methodInfos$$[] = {
		{"a", "()LUniTest/Point;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScalarTypesWithDefault, a, $Point*), nullptr, &adefaultValue$$},
		{"b", "()B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScalarTypesWithDefault, b, int8_t), nullptr, &bdefaultValue$$},
		{"bool", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScalarTypesWithDefault, bool$, bool), nullptr, &bool$defaultValue$$},
		{"c", "()C", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScalarTypesWithDefault, c, char16_t), nullptr, &cdefaultValue$$},
		{"cls", "()Ljava/lang/Class;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScalarTypesWithDefault, cls, $Class*), nullptr, &clsdefaultValue$$},
		{"d", "()D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScalarTypesWithDefault, d, double), nullptr, &ddefaultValue$$},
		{"e", "()LUniTest/Stooge;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScalarTypesWithDefault, e, $Stooge*), nullptr, &edefaultValue$$},
		{"f", "()F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScalarTypesWithDefault, f, float), nullptr, &fdefaultValue$$},
		{"i", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScalarTypesWithDefault, i, int32_t), nullptr, &idefaultValue$$},
		{"l", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScalarTypesWithDefault, l, int64_t), nullptr, &ldefaultValue$$},
		{"s", "()S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScalarTypesWithDefault, s, int16_t), nullptr, &sdefaultValue$$},
		{"str", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScalarTypesWithDefault, str, $String*), nullptr, &strdefaultValue$$},
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
		"UniTest.ScalarTypesWithDefault",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(ScalarTypesWithDefault, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ScalarTypesWithDefault);
	});
	return class$;
}

$Class* ScalarTypesWithDefault::class$ = nullptr;

} // UniTest