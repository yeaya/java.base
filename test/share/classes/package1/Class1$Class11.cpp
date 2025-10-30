#include <package1/Class1$Class11.h>

#include <java/lang/AssertionError.h>
#include <package1/Class1.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Class1 = ::package1::Class1;

namespace package1 {

$FieldInfo _Class1$Class11_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Class1$Class11, $assertionsDisabled)},
	{}
};

$MethodInfo _Class1$Class11_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Class1$Class11::*)()>(&Class1$Class11::init$))},
	{"testAssert", "(Z)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(bool)>(&Class1$Class11::testAssert))},
	{}
};

$InnerClassInfo _Class1$Class11_InnerClassesInfo_[] = {
	{"package1.Class1$Class11", "package1.Class1", "Class11", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Class1$Class11_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"package1.Class1$Class11",
	"java.lang.Object",
	nullptr,
	_Class1$Class11_FieldInfo_,
	_Class1$Class11_MethodInfo_,
	nullptr,
	nullptr,
	_Class1$Class11_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"package1.Class1"
};

$Object* allocate$Class1$Class11($Class* clazz) {
	return $of($alloc(Class1$Class11));
}

bool Class1$Class11::$assertionsDisabled = false;

void Class1$Class11::init$() {
}

void Class1$Class11::testAssert(bool assertsShouldBeOn) {
	$init(Class1$Class11);
	bool assertsEnabled3 = false;
	if (!Class1$Class11::$assertionsDisabled && !(assertsEnabled3 = true)) {
		$throwNew($AssertionError);
	}
	if (assertsEnabled3 != assertsShouldBeOn) {
		$throwNew($RuntimeException, "Failure of Asserts Facility."_s);
	}
}

void clinit$Class1$Class11($Class* class$) {
	$load($Class1);
	Class1$Class11::$assertionsDisabled = !$Class1::class$->desiredAssertionStatus();
}

Class1$Class11::Class1$Class11() {
}

$Class* Class1$Class11::load$($String* name, bool initialize) {
	$loadClass(Class1$Class11, name, initialize, &_Class1$Class11_ClassInfo_, clinit$Class1$Class11, allocate$Class1$Class11);
	return class$;
}

$Class* Class1$Class11::class$ = nullptr;

} // package1