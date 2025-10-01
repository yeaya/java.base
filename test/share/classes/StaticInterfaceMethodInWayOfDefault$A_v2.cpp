#include <StaticInterfaceMethodInWayOfDefault$A_v2.h>

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
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _StaticInterfaceMethodInWayOfDefault$A_v2_MethodInfo_[] = {
	{"m", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StaticInterfaceMethodInWayOfDefault$A_v2_InnerClassesInfo_[] = {
	{"StaticInterfaceMethodInWayOfDefault$A_v2", "StaticInterfaceMethodInWayOfDefault", "A_v2", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _StaticInterfaceMethodInWayOfDefault$A_v2_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"StaticInterfaceMethodInWayOfDefault$A_v2",
	nullptr,
	nullptr,
	nullptr,
	_StaticInterfaceMethodInWayOfDefault$A_v2_MethodInfo_,
	nullptr,
	nullptr,
	_StaticInterfaceMethodInWayOfDefault$A_v2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"StaticInterfaceMethodInWayOfDefault"
};

$Object* allocate$StaticInterfaceMethodInWayOfDefault$A_v2($Class* clazz) {
	return $of($alloc(StaticInterfaceMethodInWayOfDefault$A_v2));
}

void StaticInterfaceMethodInWayOfDefault$A_v2::m() {
	$init($System);
	$nc($System::err)->println("A.m() called"_s);
}

$Class* StaticInterfaceMethodInWayOfDefault$A_v2::load$($String* name, bool initialize) {
	$loadClass(StaticInterfaceMethodInWayOfDefault$A_v2, name, initialize, &_StaticInterfaceMethodInWayOfDefault$A_v2_ClassInfo_, allocate$StaticInterfaceMethodInWayOfDefault$A_v2);
	return class$;
}

$Class* StaticInterfaceMethodInWayOfDefault$A_v2::class$ = nullptr;