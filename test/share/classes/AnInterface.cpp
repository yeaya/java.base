#include <AnInterface.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Class* AnInterface::load$($String* name, bool initialize) {
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 's', "abstract interface AnInterface"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LExpectedGenericString;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"AnInterface",
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(AnInterface, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AnInterface);
	});
	return class$;
}

$Class* AnInterface::class$ = nullptr;