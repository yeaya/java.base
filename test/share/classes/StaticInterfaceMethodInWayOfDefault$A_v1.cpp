#include <StaticInterfaceMethodInWayOfDefault$A_v1.h>
#include <StaticInterfaceMethodInWayOfDefault.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

$Class* StaticInterfaceMethodInWayOfDefault$A_v1::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"StaticInterfaceMethodInWayOfDefault$A_v1", "StaticInterfaceMethodInWayOfDefault", "A_v1", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"StaticInterfaceMethodInWayOfDefault$A_v1",
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"StaticInterfaceMethodInWayOfDefault"
	};
	$loadClass(StaticInterfaceMethodInWayOfDefault$A_v1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StaticInterfaceMethodInWayOfDefault$A_v1);
	});
	return class$;
}

$Class* StaticInterfaceMethodInWayOfDefault$A_v1::class$ = nullptr;