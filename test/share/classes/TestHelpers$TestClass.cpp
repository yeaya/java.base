#include <TestHelpers$TestClass.h>
#include <TestHelpers$TestSuperclass.h>
#include <TestHelpers.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <jcpp.h>

#undef LOOKUP

using $TestHelpers$TestSuperclass = ::TestHelpers$TestSuperclass;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;

int32_t TestHelpers$TestClass::hashCode() {
	 return this->$TestHelpers$TestSuperclass::hashCode();
}

bool TestHelpers$TestClass::equals(Object$* arg0) {
	 return this->$TestHelpers$TestSuperclass::equals(arg0);
}

$Object* TestHelpers$TestClass::clone() {
	 return this->$TestHelpers$TestSuperclass::clone();
}

$String* TestHelpers$TestClass::toString() {
	 return this->$TestHelpers$TestSuperclass::toString();
}

void TestHelpers$TestClass::finalize() {
	this->$TestHelpers$TestSuperclass::finalize();
}

$MethodHandles$Lookup* TestHelpers$TestClass::LOOKUP = nullptr;
int32_t TestHelpers$TestClass::sf = 0;

void TestHelpers$TestClass::init$() {
	$TestHelpers$TestSuperclass::init$();
}

int32_t TestHelpers$TestClass::sm(int32_t x) {
	$init(TestHelpers$TestClass);
	return x;
}

int32_t TestHelpers$TestClass::m(int32_t x) {
	return x;
}

int32_t TestHelpers$TestClass::psm(int32_t x) {
	$init(TestHelpers$TestClass);
	return x;
}

int32_t TestHelpers$TestClass::pm(int32_t x) {
	return x;
}

void TestHelpers$TestClass::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	$assignStatic(TestHelpers$TestClass::LOOKUP, $MethodHandles::lookup());
}

TestHelpers$TestClass::TestHelpers$TestClass() {
}

$Class* TestHelpers$TestClass::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"LOOKUP", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TestHelpers$TestClass, LOOKUP)},
		{"sf", "I", nullptr, $STATIC, $staticField(TestHelpers$TestClass, sf)},
		{"f", "I", nullptr, 0, $field(TestHelpers$TestClass, f)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestHelpers$TestClass, init$, void)},
		{"m", "(I)I", nullptr, $PUBLIC, $virtualMethod(TestHelpers$TestClass, m, int32_t, int32_t)},
		{"pm", "(I)I", nullptr, $PRIVATE, $method(TestHelpers$TestClass, pm, int32_t, int32_t)},
		{"psm", "(I)I", nullptr, $PRIVATE | $STATIC, $staticMethod(TestHelpers$TestClass, psm, int32_t, int32_t)},
		{"sm", "(I)I", nullptr, $PUBLIC | $STATIC, $staticMethod(TestHelpers$TestClass, sm, int32_t, int32_t)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestHelpers$TestClass", "TestHelpers", "TestClass", $STATIC},
		{"TestHelpers$TestSuperclass", "TestHelpers", "TestSuperclass", $STATIC},
		{"TestHelpers$TestInterface", "TestHelpers", "TestInterface", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestHelpers$TestClass",
		"TestHelpers$TestSuperclass",
		"TestHelpers$TestInterface",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestHelpers"
	};
	$loadClass(TestHelpers$TestClass, name, initialize, &classInfo$$, TestHelpers$TestClass::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(TestHelpers$TestClass));
	});
	return class$;
}

$Class* TestHelpers$TestClass::class$ = nullptr;