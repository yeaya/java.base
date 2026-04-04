#include <StaticFieldsOnInterface$B.h>
#include <StaticFieldsOnInterface.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

$Class* StaticFieldsOnInterface$B::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"StaticFieldsOnInterface$B", "StaticFieldsOnInterface", "B", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"StaticFieldsOnInterface$A", "StaticFieldsOnInterface", "A", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"StaticFieldsOnInterface$B",
		nullptr,
		"StaticFieldsOnInterface$A",
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"StaticFieldsOnInterface"
	};
	$loadClass(StaticFieldsOnInterface$B, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StaticFieldsOnInterface$B);
	});
	return class$;
}

$Class* StaticFieldsOnInterface$B::class$ = nullptr;