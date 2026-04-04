#include <TestPlainArrayNotGeneric$XMap.h>
#include <TestPlainArrayNotGeneric.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

$Class* TestPlainArrayNotGeneric$XMap::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestPlainArrayNotGeneric$XMap", "TestPlainArrayNotGeneric", "XMap", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"TestPlainArrayNotGeneric$XMap",
		nullptr,
		"java.util.Map",
		nullptr,
		nullptr,
		"Ljava/lang/Object;Ljava/util/Map<Ljava/util/List<[Ljava/lang/String;>;[Ljava/lang/String;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestPlainArrayNotGeneric"
	};
	$loadClass(TestPlainArrayNotGeneric$XMap, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestPlainArrayNotGeneric$XMap);
	});
	return class$;
}

$Class* TestPlainArrayNotGeneric$XMap::class$ = nullptr;