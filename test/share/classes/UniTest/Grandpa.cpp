#include <UniTest/Grandpa.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace UniTest {
$CompoundAttribute _Grandpa_Annotations_[] = {
	{"LUniTest/Foo;", nullptr},
	{"LUniTest/Bar;", nullptr},
	{}
};


$MethodInfo _Grandpa_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Grandpa::*)()>(&Grandpa::init$))},
	{}
};

$ClassInfo _Grandpa_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.Grandpa",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Grandpa_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_Grandpa_Annotations_
};

$Object* allocate$Grandpa($Class* clazz) {
	return $of($alloc(Grandpa));
}

void Grandpa::init$() {
}

Grandpa::Grandpa() {
}

$Class* Grandpa::load$($String* name, bool initialize) {
	$loadClass(Grandpa, name, initialize, &_Grandpa_ClassInfo_, allocate$Grandpa);
	return class$;
}

$Class* Grandpa::class$ = nullptr;

} // UniTest