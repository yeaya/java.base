#include <Test7157574$Super.h>

#include <Test7157574.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Test7157574 = ::Test7157574;
using $Test7157574$Intf = ::Test7157574$Intf;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _Test7157574$Super_FieldInfo_[] = {
	{"f2", "I", nullptr, $PUBLIC, $field(Test7157574$Super, f2)},
	{}
};

$MethodInfo _Test7157574$Super_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Test7157574$Super::*)()>(&Test7157574$Super::init$))},
	{"m2", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Test7157574$Super_InnerClassesInfo_[] = {
	{"Test7157574$Super", "Test7157574", "Super", $STATIC | $ABSTRACT},
	{"Test7157574$Intf", "Test7157574", "Intf", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Test7157574$Super_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"Test7157574$Super",
	"java.lang.Object",
	"Test7157574$Intf",
	_Test7157574$Super_FieldInfo_,
	_Test7157574$Super_MethodInfo_,
	nullptr,
	nullptr,
	_Test7157574$Super_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test7157574"
};

$Object* allocate$Test7157574$Super($Class* clazz) {
	return $of($alloc(Test7157574$Super));
}

void Test7157574$Super::init$() {
}

Test7157574$Super::Test7157574$Super() {
}

$Class* Test7157574$Super::load$($String* name, bool initialize) {
	$loadClass(Test7157574$Super, name, initialize, &_Test7157574$Super_ClassInfo_, allocate$Test7157574$Super);
	return class$;
}

$Class* Test7157574$Super::class$ = nullptr;