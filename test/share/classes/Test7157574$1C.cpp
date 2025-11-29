#include <Test7157574$1C.h>

#include <Test7157574$Sub.h>
#include <Test7157574$Super.h>
#include <Test7157574.h>
#include <jcpp.h>

using $Test7157574$Sub = ::Test7157574$Sub;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _Test7157574$1C_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Test7157574$1C::*)()>(&Test7157574$1C::init$))},
	{"ig", "()V", nullptr, $PRIVATE, $method(static_cast<void(Test7157574$1C::*)()>(&Test7157574$1C::ig))},
	{"ig1", "()V", nullptr, $PUBLIC},
	{"ig2", "()V", nullptr, $PUBLIC},
	{"ig3", "()V", nullptr, $PUBLIC},
	{"ig4", "()V", nullptr, $PUBLIC},
	{"m1", "()V", nullptr, $PUBLIC},
	{"m2", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Test7157574$1C_EnclosingMethodInfo_ = {
	"Test7157574",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Test7157574$1C_InnerClassesInfo_[] = {
	{"Test7157574$1C", nullptr, "C", 0},
	{"Test7157574$Sub", "Test7157574", "Sub", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Test7157574$1C_ClassInfo_ = {
	$ACC_SUPER,
	"Test7157574$1C",
	"Test7157574$Sub",
	nullptr,
	nullptr,
	_Test7157574$1C_MethodInfo_,
	nullptr,
	&_Test7157574$1C_EnclosingMethodInfo_,
	_Test7157574$1C_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test7157574"
};

$Object* allocate$Test7157574$1C($Class* clazz) {
	return $of($alloc(Test7157574$1C));
}

void Test7157574$1C::init$() {
	$Test7157574$Sub::init$();
}

void Test7157574$1C::m1() {
	this->f2 = -1;
}

void Test7157574$1C::m2() {
	this->f2 = -2;
}

void Test7157574$1C::ig() {
	$throwNew($RuntimeException);
}

void Test7157574$1C::ig1() {
	ig();
}

void Test7157574$1C::ig2() {
	ig();
}

void Test7157574$1C::ig3() {
	ig();
}

void Test7157574$1C::ig4() {
	ig();
}

Test7157574$1C::Test7157574$1C() {
}

$Class* Test7157574$1C::load$($String* name, bool initialize) {
	$loadClass(Test7157574$1C, name, initialize, &_Test7157574$1C_ClassInfo_, allocate$Test7157574$1C);
	return class$;
}

$Class* Test7157574$1C::class$ = nullptr;