#include <MetafactoryParameterCastTest$B.h>

#include <MetafactoryParameterCastTest$A.h>
#include <MetafactoryParameterCastTest.h>
#include <jcpp.h>

using $MetafactoryParameterCastTest = ::MetafactoryParameterCastTest;
using $MetafactoryParameterCastTest$A = ::MetafactoryParameterCastTest$A;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _MetafactoryParameterCastTest$B_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetafactoryParameterCastTest$B::*)()>(&MetafactoryParameterCastTest$B::init$))},
	{"instance0", "()V", nullptr, 0},
	{"instance1", "(LMetafactoryParameterCastTest$B;)V", nullptr, 0},
	{"static1", "(LMetafactoryParameterCastTest$B;)V", nullptr, $STATIC, $method(static_cast<void(*)(MetafactoryParameterCastTest$B*)>(&MetafactoryParameterCastTest$B::static1))},
	{"static2", "(LMetafactoryParameterCastTest$B;LMetafactoryParameterCastTest$B;)V", nullptr, $STATIC, $method(static_cast<void(*)(MetafactoryParameterCastTest$B*,MetafactoryParameterCastTest$B*)>(&MetafactoryParameterCastTest$B::static2))},
	{}
};

$InnerClassInfo _MetafactoryParameterCastTest$B_InnerClassesInfo_[] = {
	{"MetafactoryParameterCastTest$B", "MetafactoryParameterCastTest", "B", $PUBLIC | $STATIC},
	{"MetafactoryParameterCastTest$A", "MetafactoryParameterCastTest", "A", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MetafactoryParameterCastTest$B_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MetafactoryParameterCastTest$B",
	"MetafactoryParameterCastTest$A",
	nullptr,
	nullptr,
	_MetafactoryParameterCastTest$B_MethodInfo_,
	nullptr,
	nullptr,
	_MetafactoryParameterCastTest$B_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MetafactoryParameterCastTest"
};

$Object* allocate$MetafactoryParameterCastTest$B($Class* clazz) {
	return $of($alloc(MetafactoryParameterCastTest$B));
}

void MetafactoryParameterCastTest$B::init$() {
	$MetafactoryParameterCastTest$A::init$();
}

void MetafactoryParameterCastTest$B::instance0() {
}

void MetafactoryParameterCastTest$B::instance1(MetafactoryParameterCastTest$B* arg) {
}

void MetafactoryParameterCastTest$B::static1(MetafactoryParameterCastTest$B* arg) {
	$init(MetafactoryParameterCastTest$B);
}

void MetafactoryParameterCastTest$B::static2(MetafactoryParameterCastTest$B* arg1, MetafactoryParameterCastTest$B* arg2) {
	$init(MetafactoryParameterCastTest$B);
}

MetafactoryParameterCastTest$B::MetafactoryParameterCastTest$B() {
}

$Class* MetafactoryParameterCastTest$B::load$($String* name, bool initialize) {
	$loadClass(MetafactoryParameterCastTest$B, name, initialize, &_MetafactoryParameterCastTest$B_ClassInfo_, allocate$MetafactoryParameterCastTest$B);
	return class$;
}

$Class* MetafactoryParameterCastTest$B::class$ = nullptr;