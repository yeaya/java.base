#include <UniTest/scalarTypesClass.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

void scalarTypesClass::init$() {
}

scalarTypesClass::scalarTypesClass() {
}

$Class* scalarTypesClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(scalarTypesClass, init$, void)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"x", 'I', "1"},
		{"y", 'I', "2"},
		{}
	};
$CompoundAttribute annotations$$$namedAttribute$compoundAttribute = {
	"LUniTest/Point;", annotations$$$namedAttribute$compoundAttribute$namedAttribute
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
		{"a", '@', &annotations$$$namedAttribute$compoundAttribute},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LUniTest/ScalarTypes;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"UniTest.scalarTypesClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(scalarTypesClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(scalarTypesClass);
	});
	return class$;
}

$Class* scalarTypesClass::class$ = nullptr;

} // UniTest