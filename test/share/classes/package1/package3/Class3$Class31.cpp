#include <package1/package3/Class3$Class31.h>
#include <java/lang/AssertionError.h>
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

void Class3$Class31::clinit$($Class* clazz) {
	$load($Class3);
	Class3$Class31::$assertionsDisabled = !$Class3::class$->desiredAssertionStatus();
}

Class3$Class31::Class3$Class31() {
}

$Class* Class3$Class31::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Class3$Class31, $assertionsDisabled)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Class3$Class31, init$, void)},
		{"testAssert", "(Z)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Class3$Class31, testAssert, void, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"package1.package3.Class3$Class31", "package1.package3.Class3", "Class31", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"package1.package3.Class3$Class31",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"package1.package3.Class3"
	};
	$loadClass(Class3$Class31, name, initialize, &classInfo$$, Class3$Class31::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Class3$Class31);
	});
	return class$;
}

$Class* Class3$Class31::class$ = nullptr;

	} // package3
} // package1