#include <package1/package3/Class3$Class31.h>

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
#include <package1/package3/Class3.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Class3 = ::package1::package3::Class3;

namespace package1 {
	namespace package3 {

$FieldInfo _Class3$Class31_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Class3$Class31, $assertionsDisabled)},
	{}
};

$MethodInfo _Class3$Class31_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Class3$Class31::*)()>(&Class3$Class31::init$))},
	{"testAssert", "(Z)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(bool)>(&Class3$Class31::testAssert))},
	{}
};

$InnerClassInfo _Class3$Class31_InnerClassesInfo_[] = {
	{"package1.package3.Class3$Class31", "package1.package3.Class3", "Class31", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Class3$Class31_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"package1.package3.Class3$Class31",
	"java.lang.Object",
	nullptr,
	_Class3$Class31_FieldInfo_,
	_Class3$Class31_MethodInfo_,
	nullptr,
	nullptr,
	_Class3$Class31_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"package1.package3.Class3"
};

$Object* allocate$Class3$Class31($Class* clazz) {
	return $of($alloc(Class3$Class31));
}

bool Class3$Class31::$assertionsDisabled = false;

void Class3$Class31::init$() {
}

void Class3$Class31::testAssert(bool assertsShouldBeOn) {
	$init(Class3$Class31);
	bool assertsEnabled = false;
	if (!Class3$Class31::$assertionsDisabled && !(assertsEnabled = true)) {
		$throwNew($AssertionError);
	}
	if (assertsEnabled != assertsShouldBeOn) {
		$throwNew($RuntimeException, "Failure of Asserts Facility."_s);
	}
}

void clinit$Class3$Class31($Class* class$) {
	$load($Class3);
	Class3$Class31::$assertionsDisabled = !$Class3::class$->desiredAssertionStatus();
}

Class3$Class31::Class3$Class31() {
}

$Class* Class3$Class31::load$($String* name, bool initialize) {
	$loadClass(Class3$Class31, name, initialize, &_Class3$Class31_ClassInfo_, clinit$Class3$Class31, allocate$Class3$Class31);
	return class$;
}

$Class* Class3$Class31::class$ = nullptr;

	} // package3
} // package1