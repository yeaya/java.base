#include <UniTest/ArrayTypesWithDefault.h>
#include <UniTest/Point.h>
#include <UniTest/Stooge.h>
#include <jcpp.h>

using $PointArray = $Array<::UniTest::Point>;
using $StoogeArray = $Array<::UniTest::Stooge>;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Class* ArrayTypesWithDefault::load$($String* name, bool initialize) {
	$NamedAttribute adefaultValue$$$compoundAttribute$namedAttribute[] = {
		{"x", 'I', "11"},
		{"y", 'I', "12"},
		{}
	};
$CompoundAttribute adefaultValue$$$compoundAttribute = {
	"LUniTest/Point;", adefaultValue$$$compoundAttribute$namedAttribute
};
	$Attribute $attribute[] = {
		{'@', &adefaultValue$$$compoundAttribute},
		{'-'}
	};

	$Attribute adefaultValue$$ = {
		'[', $attribute
	};
	$Attribute $attribute$1[] = {
		{'B', "11"},
		{'-'}
	};

	$Attribute bdefaultValue$$ = {
		'[', $attribute$1
	};
	$Attribute $attribute$2[] = {
		{'Z', "false"},
		{'-'}
	};

	$Attribute bool$defaultValue$$ = {
		'[', $attribute$2
	};
	$Attribute $attribute$3[] = {
		{'C', "V"},
		{'-'}
	};

	$Attribute cdefaultValue$$ = {
		'[', $attribute$3
	};
	$Attribute $attribute$4[] = {
		{'c', "Ljava/lang/Class;"},
		{'-'}
	};

	$Attribute clsdefaultValue$$ = {
		'[', $attribute$4
	};
	$Attribute $attribute$5[] = {
		{'D', "17.0"},
		{'-'}
	};

	$Attribute ddefaultValue$$ = {
		'[', $attribute$5
	};
	$Attribute $attribute$6[] = {
		{'e', "LUniTest/Stooge; LARRY"},
		{'-'}
	};

	$Attribute edefaultValue$$ = {
		'[', $attribute$6
	};
	$Attribute $attribute$7[] = {
		{'F', "16.0"},
		{'-'}
	};

	$Attribute fdefaultValue$$ = {
		'[', $attribute$7
	};
	$Attribute $attribute$8[] = {
		{'I', "13"},
		{'-'}
	};

	$Attribute idefaultValue$$ = {
		'[', $attribute$8
	};
	$Attribute $attribute$9[] = {
		{'J', "14"},
		{'-'}
	};

	$Attribute ldefaultValue$$ = {
		'[', $attribute$9
	};
	$Attribute $attribute$10[] = {
		{'S', "12"},
		{'-'}
	};

	$Attribute sdefaultValue$$ = {
		'[', $attribute$10
	};
	$Attribute $attribute$11[] = {
		{'s', "default"},
		{'-'}
	};

	$Attribute strdefaultValue$$ = {
		'[', $attribute$11
	};
	$MethodInfo methodInfos$$[] = {
		{"a", "()[LUniTest/Point;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ArrayTypesWithDefault, a, $PointArray*), nullptr, &adefaultValue$$},
		{"b", "()[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ArrayTypesWithDefault, b, $bytes*), nullptr, &bdefaultValue$$},
		{"bool", "()[Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ArrayTypesWithDefault, bool$, $booleans*), nullptr, &bool$defaultValue$$},
		{"c", "()[C", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ArrayTypesWithDefault, c, $chars*), nullptr, &cdefaultValue$$},
		{"cls", "()[Ljava/lang/Class;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ArrayTypesWithDefault, cls, $ClassArray*), nullptr, &clsdefaultValue$$},
		{"d", "()[D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ArrayTypesWithDefault, d, $doubles*), nullptr, &ddefaultValue$$},
		{"e", "()[LUniTest/Stooge;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ArrayTypesWithDefault, e, $StoogeArray*), nullptr, &edefaultValue$$},
		{"f", "()[F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ArrayTypesWithDefault, f, $floats*), nullptr, &fdefaultValue$$},
		{"i", "()[I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ArrayTypesWithDefault, i, $ints*), nullptr, &idefaultValue$$},
		{"l", "()[J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ArrayTypesWithDefault, l, $longs*), nullptr, &ldefaultValue$$},
		{"s", "()[S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ArrayTypesWithDefault, s, $shorts*), nullptr, &sdefaultValue$$},
		{"str", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ArrayTypesWithDefault, str, $StringArray*), nullptr, &strdefaultValue$$},
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
		"UniTest.ArrayTypesWithDefault",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(ArrayTypesWithDefault, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ArrayTypesWithDefault);
	});
	return class$;
}

$Class* ArrayTypesWithDefault::class$ = nullptr;

} // UniTest