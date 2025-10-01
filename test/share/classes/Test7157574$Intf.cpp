#include <Test7157574$Intf.h>

#include <Test7157574.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Test7157574 = ::Test7157574;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Test7157574$Intf_MethodInfo_[] = {
	{"ig1", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"ig2", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"ig3", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"ig4", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"m1", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Test7157574$Intf_InnerClassesInfo_[] = {
	{"Test7157574$Intf", "Test7157574", "Intf", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Test7157574$Intf_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"Test7157574$Intf",
	nullptr,
	nullptr,
	nullptr,
	_Test7157574$Intf_MethodInfo_,
	nullptr,
	nullptr,
	_Test7157574$Intf_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test7157574"
};

$Object* allocate$Test7157574$Intf($Class* clazz) {
	return $of($alloc(Test7157574$Intf));
}

$Class* Test7157574$Intf::load$($String* name, bool initialize) {
	$loadClass(Test7157574$Intf, name, initialize, &_Test7157574$Intf_ClassInfo_, allocate$Test7157574$Intf);
	return class$;
}

$Class* Test7157574$Intf::class$ = nullptr;