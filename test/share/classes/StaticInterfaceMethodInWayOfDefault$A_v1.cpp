#include <StaticInterfaceMethodInWayOfDefault$A_v1.h>

#include <StaticInterfaceMethodInWayOfDefault.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $StaticInterfaceMethodInWayOfDefault = ::StaticInterfaceMethodInWayOfDefault;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

$InnerClassInfo _StaticInterfaceMethodInWayOfDefault$A_v1_InnerClassesInfo_[] = {
	{"StaticInterfaceMethodInWayOfDefault$A_v1", "StaticInterfaceMethodInWayOfDefault", "A_v1", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _StaticInterfaceMethodInWayOfDefault$A_v1_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"StaticInterfaceMethodInWayOfDefault$A_v1",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_StaticInterfaceMethodInWayOfDefault$A_v1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"StaticInterfaceMethodInWayOfDefault"
};

$Object* allocate$StaticInterfaceMethodInWayOfDefault$A_v1($Class* clazz) {
	return $of($alloc(StaticInterfaceMethodInWayOfDefault$A_v1));
}

$Class* StaticInterfaceMethodInWayOfDefault$A_v1::load$($String* name, bool initialize) {
	$loadClass(StaticInterfaceMethodInWayOfDefault$A_v1, name, initialize, &_StaticInterfaceMethodInWayOfDefault$A_v1_ClassInfo_, allocate$StaticInterfaceMethodInWayOfDefault$A_v1);
	return class$;
}

$Class* StaticInterfaceMethodInWayOfDefault$A_v1::class$ = nullptr;