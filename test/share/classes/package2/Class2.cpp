#include <package2/Class2.h>

#include <java/lang/AssertionError.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace package2 {

$FieldInfo _Class2_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Class2, $assertionsDisabled)},
	{}
};

$MethodInfo _Class2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Class2, init$, void)},
	{"testAssert", "(Z)V", nullptr, $PUBLIC, $virtualMethod(Class2, testAssert, void, bool)},
	{}
};

$ClassInfo _Class2_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"package2.Class2",
	"java.lang.Object",
	nullptr,
	_Class2_FieldInfo_,
	_Class2_MethodInfo_
};

$Object* allocate$Class2($Class* clazz) {
	return $of($alloc(Class2));
}

bool Class2::$assertionsDisabled = false;

void Class2::init$() {
}

void Class2::testAssert(bool assertsShouldBeOn) {
	bool assertsEnabled = false;
	if (!Class2::$assertionsDisabled && !(assertsEnabled = true)) {
		$throwNew($AssertionError);
	}
	if (assertsEnabled != assertsShouldBeOn) {
		$throwNew($RuntimeException, "Failure of Asserts Facility."_s);
	}
}

void clinit$Class2($Class* class$) {
	Class2::$assertionsDisabled = !Class2::class$->desiredAssertionStatus();
}

Class2::Class2() {
}

$Class* Class2::load$($String* name, bool initialize) {
	$loadClass(Class2, name, initialize, &_Class2_ClassInfo_, clinit$Class2, allocate$Class2);
	return class$;
}

$Class* Class2::class$ = nullptr;

} // package2