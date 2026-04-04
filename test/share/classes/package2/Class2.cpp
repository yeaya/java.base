#include <package2/Class2.h>
#include <java/lang/AssertionError.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace package2 {

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

void Class2::clinit$($Class* clazz) {
	Class2::$assertionsDisabled = !Class2::class$->desiredAssertionStatus();
}

Class2::Class2() {
}

$Class* Class2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Class2, $assertionsDisabled)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Class2, init$, void)},
		{"testAssert", "(Z)V", nullptr, $PUBLIC, $virtualMethod(Class2, testAssert, void, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"package2.Class2",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Class2, name, initialize, &classInfo$$, Class2::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Class2);
	});
	return class$;
}

$Class* Class2::class$ = nullptr;

} // package2