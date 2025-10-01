#include <package1/Class1.h>

#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <package1/Class1$1.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Class1$1 = ::package1::Class1$1;

namespace package1 {

$FieldInfo _Class1_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Class1, $assertionsDisabled)},
	{}
};

$MethodInfo _Class1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Class1::*)()>(&Class1::init$))},
	{"testAssert", "(Z)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Class1_InnerClassesInfo_[] = {
	{"package1.Class1$Class11", "package1.Class1", "Class11", $PUBLIC | $STATIC},
	{"package1.Class1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Class1_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"package1.Class1",
	"java.lang.Object",
	nullptr,
	_Class1_FieldInfo_,
	_Class1_MethodInfo_,
	nullptr,
	nullptr,
	_Class1_InnerClassesInfo_,
	nullptr,
	nullptr,
	"package1.Class1$Class11,package1.Class1$1"
};

$Object* allocate$Class1($Class* clazz) {
	return $of($alloc(Class1));
}

bool Class1::$assertionsDisabled = false;

void Class1::init$() {
}

void Class1::testAssert(bool assertsShouldBeOn) {
	bool assertsEnabled = false;
	if (!Class1::$assertionsDisabled && !(assertsEnabled = true)) {
		$throwNew($AssertionError);
	}
	if (assertsEnabled != assertsShouldBeOn) {
		$throwNew($RuntimeException, "Failure of Asserts Facility."_s);
	}
	$var(Class1, anonTest, $new($Class1$1, this));
	anonTest->testAssert(assertsShouldBeOn);
}

void clinit$Class1($Class* class$) {
	Class1::$assertionsDisabled = !Class1::class$->desiredAssertionStatus();
}

Class1::Class1() {
}

$Class* Class1::load$($String* name, bool initialize) {
	$loadClass(Class1, name, initialize, &_Class1_ClassInfo_, clinit$Class1, allocate$Class1);
	return class$;
}

$Class* Class1::class$ = nullptr;

} // package1