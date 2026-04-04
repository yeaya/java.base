#include <UniTest/twoElementArrayTypesClass.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

void twoElementArrayTypesClass::init$() {
}

twoElementArrayTypesClass::twoElementArrayTypesClass() {
}

$Class* twoElementArrayTypesClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(twoElementArrayTypesClass, init$, void)},
		{}
	};
	$Attribute $attribute[] = {
		{'B', "1"},
		{'B', "2"},
		{'-'}
	};
	$Attribute $attribute$1[] = {
		{'S', "2"},
		{'S', "3"},
		{'-'}
	};
	$Attribute $attribute$2[] = {
		{'I', "3"},
		{'I', "4"},
		{'-'}
	};
	$Attribute $attribute$3[] = {
		{'J', "4"},
		{'J', "5"},
		{'-'}
	};
	$Attribute $attribute$4[] = {
		{'C', "5"},
		{'C', "6"},
		{'-'}
	};
	$Attribute $attribute$5[] = {
		{'F', "6.0"},
		{'F', "7.0"},
		{'-'}
	};
	$Attribute $attribute$6[] = {
		{'D', "7.0"},
		{'D', "8.0"},
		{'-'}
	};
	$Attribute $attribute$7[] = {
		{'Z', "true"},
		{'Z', "false"},
		{'-'}
	};
	$Attribute $attribute$8[] = {
		{'s', "custom"},
		{'s', "paint"},
		{'-'}
	};
	$Attribute $attribute$9[] = {
		{'c', "Ljava/util/Map;"},
		{'c', "Ljava/util/Set;"},
		{'-'}
	};
	$Attribute $attribute$10[] = {
		{'e', "LUniTest/Stooge; MOE"},
		{'e', "LUniTest/Stooge; CURLY"},
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"x", 'I', "1"},
		{"y", 'I', "2"},
		{}
	};
$CompoundAttribute annotations$$$namedAttribute$compoundAttribute = {
	"LUniTest/Point;", annotations$$$namedAttribute$compoundAttribute$namedAttribute
};
	$NamedAttribute annotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"x", 'I', "3"},
		{"y", 'I', "4"},
		{}
	};
$CompoundAttribute annotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute = {
	"LUniTest/Point;", annotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute
};
	$Attribute $attribute$11[] = {
		{'@', &annotations$$$namedAttribute$compoundAttribute},
		{'@', &annotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute},
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"b", '[', $attribute},
		{"s", '[', $attribute$1},
		{"i", '[', $attribute$2},
		{"l", '[', $attribute$3},
		{"c", '[', $attribute$4},
		{"f", '[', $attribute$5},
		{"d", '[', $attribute$6},
		{"bool", '[', $attribute$7},
		{"str", '[', $attribute$8},
		{"cls", '[', $attribute$9},
		{"e", '[', $attribute$10},
		{"a", '[', $attribute$11},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LUniTest/ArrayTypes;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"UniTest.twoElementArrayTypesClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(twoElementArrayTypesClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(twoElementArrayTypesClass);
	});
	return class$;
}

$Class* twoElementArrayTypesClass::class$ = nullptr;

} // UniTest