#include <StaticInterfaceMethodInWayOfDefault$B.h>

#include <StaticInterfaceMethodInWayOfDefault.h>
#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $StaticInterfaceMethodInWayOfDefault = ::StaticInterfaceMethodInWayOfDefault;
using $StaticInterfaceMethodInWayOfDefault$A_v1 = ::StaticInterfaceMethodInWayOfDefault$A_v1;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _StaticInterfaceMethodInWayOfDefault$B_MethodInfo_[] = {
	{"m", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&StaticInterfaceMethodInWayOfDefault$B::m))},
	{}
};

$InnerClassInfo _StaticInterfaceMethodInWayOfDefault$B_InnerClassesInfo_[] = {
	{"StaticInterfaceMethodInWayOfDefault$B", "StaticInterfaceMethodInWayOfDefault", "B", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"StaticInterfaceMethodInWayOfDefault$A_v1", "StaticInterfaceMethodInWayOfDefault", "A_v1", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _StaticInterfaceMethodInWayOfDefault$B_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"StaticInterfaceMethodInWayOfDefault$B",
	nullptr,
	"StaticInterfaceMethodInWayOfDefault$A_v1",
	nullptr,
	_StaticInterfaceMethodInWayOfDefault$B_MethodInfo_,
	nullptr,
	nullptr,
	_StaticInterfaceMethodInWayOfDefault$B_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"StaticInterfaceMethodInWayOfDefault"
};

$Object* allocate$StaticInterfaceMethodInWayOfDefault$B($Class* clazz) {
	return $of($alloc(StaticInterfaceMethodInWayOfDefault$B));
}

void StaticInterfaceMethodInWayOfDefault$B::m() {
	$init(StaticInterfaceMethodInWayOfDefault$B);
	$init($System);
	$nc($System::err)->println("B.m() called"_s);
}

$Class* StaticInterfaceMethodInWayOfDefault$B::load$($String* name, bool initialize) {
	$loadClass(StaticInterfaceMethodInWayOfDefault$B, name, initialize, &_StaticInterfaceMethodInWayOfDefault$B_ClassInfo_, allocate$StaticInterfaceMethodInWayOfDefault$B);
	return class$;
}

$Class* StaticInterfaceMethodInWayOfDefault$B::class$ = nullptr;