#include <StaticInterfaceMethodInWayOfDefault$C_v2.h>
#include <StaticInterfaceMethodInWayOfDefault.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

$Class* StaticInterfaceMethodInWayOfDefault$C_v2::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"StaticInterfaceMethodInWayOfDefault$C_v2", "StaticInterfaceMethodInWayOfDefault", "C_v2", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"StaticInterfaceMethodInWayOfDefault$B", "StaticInterfaceMethodInWayOfDefault", "B", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"StaticInterfaceMethodInWayOfDefault$C_v2",
		nullptr,
		"StaticInterfaceMethodInWayOfDefault$B",
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
	$loadClass(StaticInterfaceMethodInWayOfDefault$C_v2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StaticInterfaceMethodInWayOfDefault$C_v2);
	});
	return class$;
}

$Class* StaticInterfaceMethodInWayOfDefault$C_v2::class$ = nullptr;