#include <UniTest/scalarTypesOverrideDefaultClass.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

void scalarTypesOverrideDefaultClass::init$() {
}

scalarTypesOverrideDefaultClass::scalarTypesOverrideDefaultClass() {
}

$Class* scalarTypesOverrideDefaultClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(scalarTypesOverrideDefaultClass, init$, void)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"b", 'B', "1"},
		{"s", 'S', "2"},
		{"i", 'I', "3"},
		{"l", 'J', "4"},
		{"c", 'C', "5"},
		{"f", 'F', "6.0"},
		{"d", 'D', "7.0"},
		{"bool", 'Z', "true"},
		{"str", 's', "custom"},
		{"cls", 'c', "Ljava/util/Map;"},
		{"e", 'e', "LUniTest/Stooge; MOE"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LUniTest/ScalarTypesWithDefault;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"UniTest.scalarTypesOverrideDefaultClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(scalarTypesOverrideDefaultClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(scalarTypesOverrideDefaultClass);
	});
	return class$;
}

$Class* scalarTypesOverrideDefaultClass::class$ = nullptr;

} // UniTest