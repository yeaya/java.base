#include <Test7157574$Intf.h>

#include <Test7157574.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Test7157574$Intf_MethodInfo_[] = {
	{"ig1", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Test7157574$Intf, ig1, void)},
	{"ig2", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Test7157574$Intf, ig2, void)},
	{"ig3", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Test7157574$Intf, ig3, void)},
	{"ig4", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Test7157574$Intf, ig4, void)},
	{"m1", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Test7157574$Intf, m1, void)},
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