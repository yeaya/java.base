#include <UniTest/Son.h>

#include <UniTest/Dad.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Dad = ::UniTest::Dad;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace UniTest {
$CompoundAttribute _Son_Annotations_[] = {
	{"LUniTest/Bar;", nullptr},
	{}
};


$MethodInfo _Son_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Son::*)()>(&Son::init$))},
	{}
};

$ClassInfo _Son_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.Son",
	"UniTest.Dad",
	nullptr,
	nullptr,
	_Son_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_Son_Annotations_
};

$Object* allocate$Son($Class* clazz) {
	return $of($alloc(Son));
}

void Son::init$() {
	$Dad::init$();
}

Son::Son() {
}

$Class* Son::load$($String* name, bool initialize) {
	$loadClass(Son, name, initialize, &_Son_ClassInfo_, allocate$Son);
	return class$;
}

$Class* Son::class$ = nullptr;

} // UniTest