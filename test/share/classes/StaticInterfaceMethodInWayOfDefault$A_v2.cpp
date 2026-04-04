#include <StaticInterfaceMethodInWayOfDefault$A_v2.h>
#include <StaticInterfaceMethodInWayOfDefault.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void StaticInterfaceMethodInWayOfDefault$A_v2::m() {
	$nc($System::err)->println("A.m() called"_s);
}

$Class* StaticInterfaceMethodInWayOfDefault$A_v2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"m", "()V", nullptr, $PUBLIC, $virtualMethod(StaticInterfaceMethodInWayOfDefault$A_v2, m, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"StaticInterfaceMethodInWayOfDefault$A_v2", "StaticInterfaceMethodInWayOfDefault", "A_v2", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"StaticInterfaceMethodInWayOfDefault$A_v2",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"StaticInterfaceMethodInWayOfDefault"
	};
	$loadClass(StaticInterfaceMethodInWayOfDefault$A_v2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StaticInterfaceMethodInWayOfDefault$A_v2);
	});
	return class$;
}

$Class* StaticInterfaceMethodInWayOfDefault$A_v2::class$ = nullptr;