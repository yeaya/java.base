#include <package1/package3/Class3.h>

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
#include <package1/package3/Class3$1.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Class3$1 = ::package1::package3::Class3$1;

namespace package1 {
	namespace package3 {

$FieldInfo _Class3_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Class3, $assertionsDisabled)},
	{}
};

$MethodInfo _Class3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Class3::*)()>(&Class3::init$))},
	{"testAssert", "(Z)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Class3_InnerClassesInfo_[] = {
	{"package1.package3.Class3$Class31", "package1.package3.Class3", "Class31", $PUBLIC | $STATIC},
	{"package1.package3.Class3$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Class3_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"package1.package3.Class3",
	"java.lang.Object",
	nullptr,
	_Class3_FieldInfo_,
	_Class3_MethodInfo_,
	nullptr,
	nullptr,
	_Class3_InnerClassesInfo_,
	nullptr,
	nullptr,
	"package1.package3.Class3$Class31,package1.package3.Class3$1"
};

$Object* allocate$Class3($Class* clazz) {
	return $of($alloc(Class3));
}

bool Class3::$assertionsDisabled = false;

void Class3::init$() {
}

void Class3::testAssert(bool assertsShouldBeOn) {
	bool assertsEnabled = false;
	if (!Class3::$assertionsDisabled && !(assertsEnabled = true)) {
		$throwNew($AssertionError);
	}
	if (assertsEnabled != assertsShouldBeOn) {
		$throwNew($RuntimeException, "Failure of Asserts Facility."_s);
	}
	$var(Class3, anonTest, $new($Class3$1, this));
	anonTest->testAssert(assertsShouldBeOn);
}

void clinit$Class3($Class* class$) {
	Class3::$assertionsDisabled = !Class3::class$->desiredAssertionStatus();
}

Class3::Class3() {
}

$Class* Class3::load$($String* name, bool initialize) {
	$loadClass(Class3, name, initialize, &_Class3_ClassInfo_, clinit$Class3, allocate$Class3);
	return class$;
}

$Class* Class3::class$ = nullptr;

	} // package3
} // package1