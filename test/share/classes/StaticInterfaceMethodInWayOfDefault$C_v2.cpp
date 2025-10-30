#include <StaticInterfaceMethodInWayOfDefault$C_v2.h>

#include <StaticInterfaceMethodInWayOfDefault.h>
#include <jcpp.h>

using $StaticInterfaceMethodInWayOfDefault = ::StaticInterfaceMethodInWayOfDefault;
using $StaticInterfaceMethodInWayOfDefault$B = ::StaticInterfaceMethodInWayOfDefault$B;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

$InnerClassInfo _StaticInterfaceMethodInWayOfDefault$C_v2_InnerClassesInfo_[] = {
	{"StaticInterfaceMethodInWayOfDefault$C_v2", "StaticInterfaceMethodInWayOfDefault", "C_v2", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"StaticInterfaceMethodInWayOfDefault$B", "StaticInterfaceMethodInWayOfDefault", "B", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _StaticInterfaceMethodInWayOfDefault$C_v2_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"StaticInterfaceMethodInWayOfDefault$C_v2",
	nullptr,
	"StaticInterfaceMethodInWayOfDefault$B",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_StaticInterfaceMethodInWayOfDefault$C_v2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"StaticInterfaceMethodInWayOfDefault"
};

$Object* allocate$StaticInterfaceMethodInWayOfDefault$C_v2($Class* clazz) {
	return $of($alloc(StaticInterfaceMethodInWayOfDefault$C_v2));
}

$Class* StaticInterfaceMethodInWayOfDefault$C_v2::load$($String* name, bool initialize) {
	$loadClass(StaticInterfaceMethodInWayOfDefault$C_v2, name, initialize, &_StaticInterfaceMethodInWayOfDefault$C_v2_ClassInfo_, allocate$StaticInterfaceMethodInWayOfDefault$C_v2);
	return class$;
}

$Class* StaticInterfaceMethodInWayOfDefault$C_v2::class$ = nullptr;