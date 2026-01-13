#include <jcpp/test/TestASIF2.h>

#include <jcpp/test/TestASIF3.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TestASIF3 = ::jcpp::test::TestASIF3;

namespace jcpp {
	namespace test {

$MethodInfo _TestASIF2_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"get", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"get2", "()Ljava/lang/CharSequence;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TestASIF2_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"jcpp.test.TestASIF2",
	nullptr,
	"jcpp.test.TestASIF3,jcpp.test.TestASIF4",
	nullptr,
	_TestASIF2_MethodInfo_
};

$Object* allocate$TestASIF2($Class* clazz) {
	return $of($alloc(TestASIF2));
}

int32_t TestASIF2::hashCode() {
	 return this->$TestASIF3::hashCode();
}

bool TestASIF2::equals(Object$* arg0) {
	 return this->$TestASIF3::equals(arg0);
}

$Object* TestASIF2::clone() {
	 return this->$TestASIF3::clone();
}

$String* TestASIF2::toString() {
	 return this->$TestASIF3::toString();
}

void TestASIF2::finalize() {
	this->$TestASIF3::finalize();
}

$Class* TestASIF2::load$($String* name, bool initialize) {
	$loadClass(TestASIF2, name, initialize, &_TestASIF2_ClassInfo_, allocate$TestASIF2);
	return class$;
}

$Class* TestASIF2::class$ = nullptr;

	} // test
} // jcpp