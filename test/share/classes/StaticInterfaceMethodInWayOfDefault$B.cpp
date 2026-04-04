#include <StaticInterfaceMethodInWayOfDefault$B.h>
#include <StaticInterfaceMethodInWayOfDefault.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void StaticInterfaceMethodInWayOfDefault$B::m() {
	$init(StaticInterfaceMethodInWayOfDefault$B);
	$nc($System::err)->println("B.m() called"_s);
}

$Class* StaticInterfaceMethodInWayOfDefault$B::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"m", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(StaticInterfaceMethodInWayOfDefault$B, m, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"StaticInterfaceMethodInWayOfDefault$B", "StaticInterfaceMethodInWayOfDefault", "B", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"StaticInterfaceMethodInWayOfDefault$A_v1", "StaticInterfaceMethodInWayOfDefault", "A_v1", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"StaticInterfaceMethodInWayOfDefault$B",
		nullptr,
		"StaticInterfaceMethodInWayOfDefault$A_v1",
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
	$loadClass(StaticInterfaceMethodInWayOfDefault$B, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StaticInterfaceMethodInWayOfDefault$B);
	});
	return class$;
}

$Class* StaticInterfaceMethodInWayOfDefault$B::class$ = nullptr;