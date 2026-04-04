#include <StaticInterfaceMethodInWayOfDefault$C_v1.h>
#include <StaticInterfaceMethodInWayOfDefault.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void StaticInterfaceMethodInWayOfDefault$C_v1::m() {
	$nc($System::err)->println("C.m() called"_s);
}

$Class* StaticInterfaceMethodInWayOfDefault$C_v1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"m", "()V", nullptr, $PUBLIC, $virtualMethod(StaticInterfaceMethodInWayOfDefault$C_v1, m, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"StaticInterfaceMethodInWayOfDefault$C_v1", "StaticInterfaceMethodInWayOfDefault", "C_v1", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"StaticInterfaceMethodInWayOfDefault$B", "StaticInterfaceMethodInWayOfDefault", "B", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"StaticInterfaceMethodInWayOfDefault$C_v1",
		nullptr,
		"StaticInterfaceMethodInWayOfDefault$B",
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
	$loadClass(StaticInterfaceMethodInWayOfDefault$C_v1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StaticInterfaceMethodInWayOfDefault$C_v1);
	});
	return class$;
}

$Class* StaticInterfaceMethodInWayOfDefault$C_v1::class$ = nullptr;