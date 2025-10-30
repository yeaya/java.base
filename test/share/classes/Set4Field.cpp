#include <Set4Field.h>

#include <Test4Set4Field.h>
#include <jcpp.h>

using $Test4Set4Field = ::Test4Set4Field;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

$MethodInfo _Set4Field_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Set4Field::*)()>(&Set4Field::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Set4Field::main)), "java.lang.Throwable"},
	{}
};

$ClassInfo _Set4Field_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Set4Field",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Set4Field_MethodInfo_
};

$Object* allocate$Set4Field($Class* clazz) {
	return $of($alloc(Set4Field));
}

void Set4Field::init$() {
}

void Set4Field::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
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
	$loadClass(Set4Field, name, initialize, &_Set4Field_ClassInfo_, allocate$Set4Field);
	return class$;
}

$Class* Set4Field::class$ = nullptr;