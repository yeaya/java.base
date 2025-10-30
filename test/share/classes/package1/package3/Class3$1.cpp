#include <package1/package3/Class3$1.h>

#include <java/lang/AssertionError.h>
#include <package1/package3/Class3.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Class3 = ::package1::package3::Class3;

namespace package1 {
	namespace package3 {

$FieldInfo _Class3$1_FieldInfo_[] = {
	{"this$0", "Lpackage1/package3/Class3;", nullptr, $FINAL | $SYNTHETIC, $field(Class3$1, this$0)},
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Class3$1, $assertionsDisabled)},
	{}
};

$MethodInfo _Class3$1_MethodInfo_[] = {
	{"<init>", "(Lpackage1/package3/Class3;)V", nullptr, 0, $method(static_cast<void(Class3$1::*)($Class3*)>(&Class3$1::init$))},
	{"testAssert", "(Z)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Class3$1_EnclosingMethodInfo_ = {
	"package1.package3.Class3",
	"testAssert",
	"(Z)V"
};

$InnerClassInfo _Class3$1_InnerClassesInfo_[] = {
	{"package1.package3.Class3$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Class3$1_ClassInfo_ = {
	$ACC_SUPER,
	"package1.package3.Class3$1",
	"package1.package3.Class3",
	nullptr,
	_Class3$1_FieldInfo_,
	_Class3$1_MethodInfo_,
	nullptr,
	&_Class3$1_EnclosingMethodInfo_,
	_Class3$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"package1.package3.Class3"
};

$Object* allocate$Class3$1($Class* clazz) {
	return $of($alloc(Class3$1));
}

bool Class3$1::$assertionsDisabled = false;

void Class3$1::init$($Class3* this$0) {
	$set(this, this$0, this$0);
	$Class3::init$();
}

void Class3$1::testAssert(bool assertsShouldBeOn) {
	bool assertsEnabled = false;
	if (!Class3$1::$assertionsDisabled && !(assertsEnabled = true)) {
		$throwNew($AssertionError);
	}
	if (assertsEnabled != assertsShouldBeOn) {
		$throwNew($RuntimeException, "Failure of Asserts Facility."_s);
	}
}

void clinit$Class3$1($Class* class$) {
	$load($Class3);
	Class3$1::$assertionsDisabled = !$Class3::class$->desiredAssertionStatus();
}

Class3$1::Class3$1() {
}

$Class* Class3$1::load$($String* name, bool initialize) {
	$loadClass(Class3$1, name, initialize, &_Class3$1_ClassInfo_, clinit$Class3$1, allocate$Class3$1);
	return class$;
}

$Class* Class3$1::class$ = nullptr;

	} // package3
} // package1