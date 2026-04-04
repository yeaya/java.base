#include <jcpp/test/TestASIF2.h>
#include <java/lang/CharSequence.h>
#include <jcpp/test/TestASIF3.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TestASIF3 = ::jcpp::test::TestASIF3;

namespace jcpp {
	namespace test {

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
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"get", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TestASIF2, get, $String*)},
		{"get2", "()Ljava/lang/CharSequence;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TestASIF2, get2, $CharSequence*)},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"jcpp.test.TestASIF2",
		nullptr,
		"jcpp.test.TestASIF3,jcpp.test.TestASIF4",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestASIF2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TestASIF2));
	});
	return class$;
}

$Class* TestASIF2::class$ = nullptr;

	} // test
} // jcpp