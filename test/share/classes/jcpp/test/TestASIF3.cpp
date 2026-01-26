#include <jcpp/test/TestASIF3.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jcpp {
	namespace test {

$MethodInfo _TestASIF3_MethodInfo_[] = {
	{"get3", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TestASIF3, get3, $String*)},
	{}
};

$ClassInfo _TestASIF3_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"jcpp.test.TestASIF3",
	nullptr,
	nullptr,
	nullptr,
	_TestASIF3_MethodInfo_
};

$Object* allocate$TestASIF3($Class* clazz) {
	return $of($alloc(TestASIF3));
}

$Class* TestASIF3::load$($String* name, bool initialize) {
	$loadClass(TestASIF3, name, initialize, &_TestASIF3_ClassInfo_, allocate$TestASIF3);
	return class$;
}

$Class* TestASIF3::class$ = nullptr;

	} // test
} // jcpp