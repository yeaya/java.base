#include <Set4Field.h>
#include <Test4Set4Field.h>
#include <jcpp.h>

using $Test4Set4Field = ::Test4Set4Field;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Set4Field::init$() {
}

void Set4Field::main($StringArray* argv) {
	$useLocalObjectStack();
	bool failed = false;
	$var($Test4Set4Field, t, $new($Test4Set4Field));
	if (!t->testPrimitive()) {
		failed = true;
		$nc($System::out)->println("FAILED: testPrimitive()"_s);
	}
	if (!t->testAccessiblePrimitive()) {
		failed = true;
		$nc($System::out)->println("FAILED: testAccessiblePrimitive()"_s);
	}
	if (!t->testVolatilePrimitive()) {
		failed = true;
		$nc($System::out)->println("FAILED: testVolatilePrimitive()"_s);
	}
	if (!t->testStaticPrimitive()) {
		failed = true;
		$nc($System::out)->println("FAILED: testStaticPrimitive()"_s);
	}
	if (!t->testAccessibleStaticPrimitive()) {
		failed = true;
		$nc($System::out)->println("FAILED: testAccessibleStaticPrimitive()"_s);
	}
	if (!t->testObject()) {
		failed = true;
		$nc($System::out)->println("FAILED: testObject()"_s);
	}
	if (!t->testAccessibleObject()) {
		failed = true;
		$nc($System::out)->println("FAILED: testAccessibleObject()"_s);
	}
	if (!t->testVolatileObject()) {
		failed = true;
		$nc($System::out)->println("FAILED: testVolatileObject()"_s);
	}
	if (!t->testStaticObject()) {
		failed = true;
		$nc($System::out)->println("FAILED: testStaticObject()"_s);
	}
	if (!t->testAccessibleStaticObject()) {
		failed = true;
		$nc($System::out)->println("FAILED: testAccessibleStaticObject()"_s);
	}
	if (failed) {
		$throw($$new($Throwable, "Test for Field.set FAILED"_s));
	}
}

Set4Field::Set4Field() {
}

$Class* Set4Field::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Set4Field, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Set4Field, main, void, $StringArray*), "java.lang.Throwable"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Set4Field",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Set4Field, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Set4Field);
	});
	return class$;
}

$Class* Set4Field::class$ = nullptr;