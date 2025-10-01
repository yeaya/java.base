#include <Test7157574$Sub.h>

#include <Test7157574$Super.h>
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
using $Test7157574$Super = ::Test7157574$Super;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Test7157574$Sub_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Test7157574$Sub::*)()>(&Test7157574$Sub::init$))},
	{}
};

$InnerClassInfo _Test7157574$Sub_InnerClassesInfo_[] = {
	{"Test7157574$Sub", "Test7157574", "Sub", $STATIC | $ABSTRACT},
	{"Test7157574$Super", "Test7157574", "Super", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Test7157574$Sub_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"Test7157574$Sub",
	"Test7157574$Super",
	nullptr,
	nullptr,
	_Test7157574$Sub_MethodInfo_,
	nullptr,
	nullptr,
	_Test7157574$Sub_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test7157574"
};

$Object* allocate$Test7157574$Sub($Class* clazz) {
	return $of($alloc(Test7157574$Sub));
}

void Test7157574$Sub::init$() {
	$Test7157574$Super::init$();
}

Test7157574$Sub::Test7157574$Sub() {
}

$Class* Test7157574$Sub::load$($String* name, bool initialize) {
	$loadClass(Test7157574$Sub, name, initialize, &_Test7157574$Sub_ClassInfo_, allocate$Test7157574$Sub);
	return class$;
}

$Class* Test7157574$Sub::class$ = nullptr;