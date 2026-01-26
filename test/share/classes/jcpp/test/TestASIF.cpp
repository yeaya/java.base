#include <jcpp/test/TestASIF.h>

#include <java/lang/CharSequence.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jcpp {
	namespace test {

$MethodInfo _TestASIF_MethodInfo_[] = {
	{"get", "()Ljava/lang/CharSequence;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TestASIF, get, $CharSequence*)},
	{}
};

$ClassInfo _TestASIF_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"jcpp.test.TestASIF",
	nullptr,
	nullptr,
	nullptr,
	_TestASIF_MethodInfo_
};

$Object* allocate$TestASIF($Class* clazz) {
	return $of($alloc(TestASIF));
}

$Class* TestASIF::load$($String* name, bool initialize) {
	$loadClass(TestASIF, name, initialize, &_TestASIF_ClassInfo_, allocate$TestASIF);
	return class$;
}

$Class* TestASIF::class$ = nullptr;

	} // test
} // jcpp