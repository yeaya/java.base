#include <TestHelpers$TestInterface.h>

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
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;

$FieldInfo _TestHelpers$TestInterface_FieldInfo_[] = {
	{"LOOKUP", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TestHelpers$TestInterface, LOOKUP)},
	{"sf", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TestHelpers$TestInterface, sf)},
	{}
};

$MethodInfo _TestHelpers$TestInterface_MethodInfo_[] = {
	{"m", "(I)I", nullptr, $PUBLIC},
	{"pm", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(TestHelpers$TestInterface::*)(int32_t)>(&TestHelpers$TestInterface::pm))},
	{"psm", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&TestHelpers$TestInterface::psm))},
	{"sm", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&TestHelpers$TestInterface::sm))},
	{}
};

$InnerClassInfo _TestHelpers$TestInterface_InnerClassesInfo_[] = {
	{"TestHelpers$TestInterface", "TestHelpers", "TestInterface", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TestHelpers$TestInterface_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"TestHelpers$TestInterface",
	nullptr,
	nullptr,
	_TestHelpers$TestInterface_FieldInfo_,
	_TestHelpers$TestInterface_MethodInfo_,
	nullptr,
	nullptr,
	_TestHelpers$TestInterface_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestHelpers"
};

$Object* allocate$TestHelpers$TestInterface($Class* clazz) {
	return $of($alloc(TestHelpers$TestInterface));
}

$MethodHandles$Lookup* TestHelpers$TestInterface::LOOKUP = nullptr;

int32_t TestHelpers$TestInterface::sm(int32_t x) {
	$init(TestHelpers$TestInterface);
	return 0;
}

int32_t TestHelpers$TestInterface::m(int32_t x) {
	return 0;
}

int32_t TestHelpers$TestInterface::pm(int32_t x) {
	return 0;
}

int32_t TestHelpers$TestInterface::psm(int32_t x) {
	$init(TestHelpers$TestInterface);
	return 0;
}

void clinit$TestHelpers$TestInterface($Class* class$) {
	$beforeCallerSensitive();
	$assignStatic(TestHelpers$TestInterface::LOOKUP, $MethodHandles::lookup());
}

$Class* TestHelpers$TestInterface::load$($String* name, bool initialize) {
	$loadClass(TestHelpers$TestInterface, name, initialize, &_TestHelpers$TestInterface_ClassInfo_, clinit$TestHelpers$TestInterface, allocate$TestHelpers$TestInterface);
	return class$;
}

$Class* TestHelpers$TestInterface::class$ = nullptr;