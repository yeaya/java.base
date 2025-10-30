#include <UniTest/Dad.h>

#include <UniTest/Grandpa.h>
#include <jcpp.h>

using $Grandpa = ::UniTest::Grandpa;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace UniTest {

$MethodInfo _Dad_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Dad::*)()>(&Dad::init$))},
	{}
};

$ClassInfo _Dad_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.Dad",
	"UniTest.Grandpa",
	nullptr,
	nullptr,
	_Dad_MethodInfo_
};

$Object* allocate$Dad($Class* clazz) {
	return $of($alloc(Dad));
}

void Dad::init$() {
	$Grandpa::init$();
}

Dad::Dad() {
}

$Class* Dad::load$($String* name, bool initialize) {
	$loadClass(Dad, name, initialize, &_Dad_ClassInfo_, allocate$Dad);
	return class$;
}

$Class* Dad::class$ = nullptr;

} // UniTest