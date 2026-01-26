#include <StaticInterfaceMethodInWayOfDefault$C_v1.h>

#include <StaticInterfaceMethodInWayOfDefault.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _StaticInterfaceMethodInWayOfDefault$C_v1_MethodInfo_[] = {
	{"m", "()V", nullptr, $PUBLIC, $virtualMethod(StaticInterfaceMethodInWayOfDefault$C_v1, m, void)},
	{}
};

$InnerClassInfo _StaticInterfaceMethodInWayOfDefault$C_v1_InnerClassesInfo_[] = {
	{"StaticInterfaceMethodInWayOfDefault$C_v1", "StaticInterfaceMethodInWayOfDefault", "C_v1", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"StaticInterfaceMethodInWayOfDefault$B", "StaticInterfaceMethodInWayOfDefault", "B", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _StaticInterfaceMethodInWayOfDefault$C_v1_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"StaticInterfaceMethodInWayOfDefault$C_v1",
	nullptr,
	"StaticInterfaceMethodInWayOfDefault$B",
	nullptr,
	_StaticInterfaceMethodInWayOfDefault$C_v1_MethodInfo_,
	nullptr,
	nullptr,
	_StaticInterfaceMethodInWayOfDefault$C_v1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"StaticInterfaceMethodInWayOfDefault"
};

$Object* allocate$StaticInterfaceMethodInWayOfDefault$C_v1($Class* clazz) {
	return $of($alloc(StaticInterfaceMethodInWayOfDefault$C_v1));
}

void StaticInterfaceMethodInWayOfDefault$C_v1::m() {
	$nc($System::err)->println("C.m() called"_s);
}

$Class* StaticInterfaceMethodInWayOfDefault$C_v1::load$($String* name, bool initialize) {
	$loadClass(StaticInterfaceMethodInWayOfDefault$C_v1, name, initialize, &_StaticInterfaceMethodInWayOfDefault$C_v1_ClassInfo_, allocate$StaticInterfaceMethodInWayOfDefault$C_v1);
	return class$;
}

$Class* StaticInterfaceMethodInWayOfDefault$C_v1::class$ = nullptr;