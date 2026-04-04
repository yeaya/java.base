#include <TestPlainArrayNotGeneric$YMap.h>
#include <TestPlainArrayNotGeneric.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

$Class* TestPlainArrayNotGeneric$YMap::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestPlainArrayNotGeneric$YMap", "TestPlainArrayNotGeneric", "YMap", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"TestPlainArrayNotGeneric$YMap",
		nullptr,
		"java.util.Map",
		nullptr,
		nullptr,
		"<K::Ljava/util/List<[Ljava/lang/String;>;V:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Map<[TK;[TV;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestPlainArrayNotGeneric"
	};
	$loadClass(TestPlainArrayNotGeneric$YMap, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestPlainArrayNotGeneric$YMap);
	});
	return class$;
}

$Class* TestPlainArrayNotGeneric$YMap::class$ = nullptr;