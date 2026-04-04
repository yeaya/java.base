#include <package1/package3/Class3.h>
#include <java/lang/AssertionError.h>
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

void Class3::clinit$($Class* clazz) {
	Class3::$assertionsDisabled = !Class3::class$->desiredAssertionStatus();
}

Class3::Class3() {
}

$Class* Class3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Class3, $assertionsDisabled)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Class3, init$, void)},
		{"testAssert", "(Z)V", nullptr, $PUBLIC, $virtualMethod(Class3, testAssert, void, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"package1.package3.Class3$Class31", "package1.package3.Class3", "Class31", $PUBLIC | $STATIC},
		{"package1.package3.Class3$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"package1.package3.Class3",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"package1.package3.Class3$Class31,package1.package3.Class3$1"
	};
	$loadClass(Class3, name, initialize, &classInfo$$, Class3::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Class3);
	});
	return class$;
}

$Class* Class3::class$ = nullptr;

	} // package3
} // package1