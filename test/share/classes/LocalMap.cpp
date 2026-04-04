#include <LocalMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Class* LocalMap::load$($String* name, bool initialize) {
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 's', "abstract interface LocalMap<K,V>"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LExpectedGenericString;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"LocalMap",
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(LocalMap, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocalMap);
	});
	return class$;
}

$Class* LocalMap::class$ = nullptr;