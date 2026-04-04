#include <package1/Class1.h>
#include <java/lang/AssertionError.h>
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

void Class1::clinit$($Class* clazz) {
	Class1::$assertionsDisabled = !Class1::class$->desiredAssertionStatus();
}

Class1::Class1() {
}

$Class* Class1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Class1, $assertionsDisabled)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Class1, init$, void)},
		{"testAssert", "(Z)V", nullptr, $PUBLIC, $virtualMethod(Class1, testAssert, void, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"package1.Class1$Class11", "package1.Class1", "Class11", $PUBLIC | $STATIC},
		{"package1.Class1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"package1.Class1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"package1.Class1$Class11,package1.Class1$1"
	};
	$loadClass(Class1, name, initialize, &classInfo$$, Class1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Class1);
	});
	return class$;
}

$Class* Class1::class$ = nullptr;

} // package1