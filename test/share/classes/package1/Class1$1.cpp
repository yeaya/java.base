#include <package1/Class1$1.h>
#include <java/lang/AssertionError.h>
#include <package1/Class1.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Class1 = ::package1::Class1;

namespace package1 {

bool Class1$1::$assertionsDisabled = false;

void Class1$1::init$($Class1* this$0) {
	$set(this, this$0, this$0);
	$Class1::init$();
}

void Class1$1::testAssert(bool assertsShouldBeOn) {
	bool assertsEnabled2 = false;
	if (!Class1$1::$assertionsDisabled && !(assertsEnabled2 = true)) {
		$throwNew($AssertionError);
	}
	if (assertsEnabled2 != assertsShouldBeOn) {
		$throwNew($RuntimeException, "Failure of Asserts Facility."_s);
	}
}

void Class1$1::clinit$($Class* clazz) {
	$load($Class1);
	Class1$1::$assertionsDisabled = !$Class1::class$->desiredAssertionStatus();
}

Class1$1::Class1$1() {
}

$Class* Class1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lpackage1/Class1;", nullptr, $FINAL | $SYNTHETIC, $field(Class1$1, this$0)},
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Class1$1, $assertionsDisabled)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lpackage1/Class1;)V", nullptr, 0, $method(Class1$1, init$, void, $Class1*)},
		{"testAssert", "(Z)V", nullptr, $PUBLIC, $virtualMethod(Class1$1, testAssert, void, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"package1.Class1",
		"testAssert",
		"(Z)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"package1.Class1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"package1.Class1$1",
		"package1.Class1",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"package1.Class1"
	};
	$loadClass(Class1$1, name, initialize, &classInfo$$, Class1$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Class1$1);
	});
	return class$;
}

$Class* Class1$1::class$ = nullptr;

} // package1