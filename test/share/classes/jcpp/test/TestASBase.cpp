#include <jcpp/test/TestASBase.h>

#include <java/lang/CharSequence.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jcpp {
	namespace test {

$MethodInfo _TestASBase_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(TestASBase, init$, void)},
	{"get", "()Ljava/lang/CharSequence;", nullptr, $PUBLIC, $virtualMethod(TestASBase, get, $CharSequence*)},
	{}
};

$ClassInfo _TestASBase_ClassInfo_ = {
	$ACC_SUPER,
	"jcpp.test.TestASBase",
	"java.lang.Object",
	"jcpp.test.TestASIF",
	nullptr,
	_TestASBase_MethodInfo_
};

$Object* allocate$TestASBase($Class* clazz) {
	return $of($alloc(TestASBase));
}

void TestASBase::init$() {
}

$CharSequence* TestASBase::get() {
	return ""_s;
}

TestASBase::TestASBase() {
}

$Class* TestASBase::load$($String* name, bool initialize) {
	$loadClass(TestASBase, name, initialize, &_TestASBase_ClassInfo_, allocate$TestASBase);
	return class$;
}

$Class* TestASBase::class$ = nullptr;

	} // test
} // jcpp