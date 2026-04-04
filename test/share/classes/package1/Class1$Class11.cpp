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

void Class1$Class11::clinit$($Class* clazz) {
	$load($Class1);
	Class1$Class11::$assertionsDisabled = !$Class1::class$->desiredAssertionStatus();
}

Class1$Class11::Class1$Class11() {
}

$Class* Class1$Class11::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Class1$Class11, $assertionsDisabled)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Class1$Class11, init$, void)},
		{"testAssert", "(Z)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Class1$Class11, testAssert, void, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"package1.Class1$Class11", "package1.Class1", "Class11", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"package1.Class1$Class11",
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
		"package1.Class1"
	};
	$loadClass(Class1$Class11, name, initialize, &classInfo$$, Class1$Class11::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Class1$Class11);
	});
	return class$;
}

$Class* Class1$Class11::class$ = nullptr;

} // package1