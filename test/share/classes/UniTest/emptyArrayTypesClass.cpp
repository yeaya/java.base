#include <UniTest/emptyArrayTypesClass.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

void emptyArrayTypesClass::init$() {
}

emptyArrayTypesClass::emptyArrayTypesClass() {
}

$Class* emptyArrayTypesClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(emptyArrayTypesClass, init$, void)},
		{}
	};
	$Attribute $attribute[] = {
		{'-'}
	};
	$Attribute $attribute$1[] = {
		{'-'}
	};
	$Attribute $attribute$2[] = {
		{'-'}
	};
	$Attribute $attribute$3[] = {
		{'-'}
	};
	$Attribute $attribute$4[] = {
		{'-'}
	};
	$Attribute $attribute$5[] = {
		{'-'}
	};
	$Attribute $attribute$6[] = {
		{'-'}
	};
	$Attribute $attribute$7[] = {
		{'-'}
	};
	$Attribute $attribute$8[] = {
		{'-'}
	};
	$Attribute $attribute$9[] = {
		{'-'}
	};
	$Attribute $attribute$10[] = {
		{'-'}
	};
	$Attribute $attribute$11[] = {
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
		"UniTest.emptyArrayTypesClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(emptyArrayTypesClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(emptyArrayTypesClass);
	});
	return class$;
}

$Class* emptyArrayTypesClass::class$ = nullptr;

} // UniTest