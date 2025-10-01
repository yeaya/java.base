#include <TestHelpers$TestClass.h>

#include <TestHelpers$TestSuperclass.h>
#include <TestHelpers.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef LOOKUP

using $TestHelpers = ::TestHelpers;
using $TestHelpers$TestInterface = ::TestHelpers$TestInterface;
using $TestHelpers$TestSuperclass = ::TestHelpers$TestSuperclass;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;

$FieldInfo _TestHelpers$TestClass_FieldInfo_[] = {
	{"LOOKUP", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TestHelpers$TestClass, LOOKUP)},
	{"sf", "I", nullptr, $STATIC, $staticField(TestHelpers$TestClass, sf)},
	{"f", "I", nullptr, 0, $field(TestHelpers$TestClass, f)},
	{}
};

$MethodInfo _TestHelpers$TestClass_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestHelpers$TestClass::*)()>(&TestHelpers$TestClass::init$))},
	{"m", "(I)I", nullptr, $PUBLIC},
	{"pm", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(TestHelpers$TestClass::*)(int32_t)>(&TestHelpers$TestClass::pm))},
	{"psm", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&TestHelpers$TestClass::psm))},
	{"sm", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&TestHelpers$TestClass::sm))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TestHelpers$TestClass_InnerClassesInfo_[] = {
	{"TestHelpers$TestClass", "TestHelpers", "TestClass", $STATIC},
	{"TestHelpers$TestSuperclass", "TestHelpers", "TestSuperclass", $STATIC},
	{"TestHelpers$TestInterface", "TestHelpers", "TestInterface", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TestHelpers$TestClass_ClassInfo_ = {
	$ACC_SUPER,
	"TestHelpers$TestClass",
	"TestHelpers$TestSuperclass",
	"TestHelpers$TestInterface",
	_TestHelpers$TestClass_FieldInfo_,
	_TestHelpers$TestClass_MethodInfo_,
	nullptr,
	nullptr,
	_TestHelpers$TestClass_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestHelpers"
};

$Object* allocate$TestHelpers$TestClass($Class* clazz) {
	return $of($alloc(TestHelpers$TestClass));
}

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

void clinit$TestHelpers$TestClass($Class* class$) {
	$beforeCallerSensitive();
	$assignStatic(TestHelpers$TestClass::LOOKUP, $MethodHandles::lookup());
}

TestHelpers$TestClass::TestHelpers$TestClass() {
}

$Class* TestHelpers$TestClass::load$($String* name, bool initialize) {
	$loadClass(TestHelpers$TestClass, name, initialize, &_TestHelpers$TestClass_ClassInfo_, clinit$TestHelpers$TestClass, allocate$TestHelpers$TestClass);
	return class$;
}

$Class* TestHelpers$TestClass::class$ = nullptr;