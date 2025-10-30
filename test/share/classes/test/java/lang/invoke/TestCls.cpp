#include <test/java/lang/invoke/TestCls.h>

#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <test/java/lang/invoke/TestCls$PrivateSIC.h>
#include <jcpp.h>

#undef LOOKUP

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $TestCls$PrivateSIC = ::test::java::lang::invoke::TestCls$PrivateSIC;

namespace test {
	namespace java {
		namespace lang {
			namespace invoke {

$FieldInfo _TestCls_FieldInfo_[] = {
	{"LOOKUP", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TestCls, LOOKUP)},
	{}
};

$MethodInfo _TestCls_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestCls::*)()>(&TestCls::init$))},
	{"getLookupForPrivateSIC", "()Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandles$Lookup*(*)()>(&TestCls::getLookupForPrivateSIC))},
	{"getPrivateSIC", "()Ljava/lang/Class;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Class*(*)()>(&TestCls::getPrivateSIC))},
	{}
};

$InnerClassInfo _TestCls_InnerClassesInfo_[] = {
	{"test.java.lang.invoke.TestCls$PrivateSIC", "test.java.lang.invoke.TestCls", "PrivateSIC", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _TestCls_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"test.java.lang.invoke.TestCls",
	"java.lang.Object",
	nullptr,
	_TestCls_FieldInfo_,
	_TestCls_MethodInfo_,
	nullptr,
	nullptr,
	_TestCls_InnerClassesInfo_,
	nullptr,
	nullptr,
	"test.java.lang.invoke.TestCls$PrivateSIC"
};

$Object* allocate$TestCls($Class* clazz) {
	return $of($alloc(TestCls));
}

$MethodHandles$Lookup* TestCls::LOOKUP = nullptr;

void TestCls::init$() {
}

$Class* TestCls::getPrivateSIC() {
	$init(TestCls);
	$load($TestCls$PrivateSIC);
	return $TestCls$PrivateSIC::class$;
}

$MethodHandles$Lookup* TestCls::getLookupForPrivateSIC() {
	$init(TestCls);
	$beforeCallerSensitive();
	return $MethodHandles::lookup();
}

void clinit$TestCls($Class* class$) {
	$beforeCallerSensitive();
	$assignStatic(TestCls::LOOKUP, $MethodHandles::lookup());
}

TestCls::TestCls() {
}

$Class* TestCls::load$($String* name, bool initialize) {
	$loadClass(TestCls, name, initialize, &_TestCls_ClassInfo_, clinit$TestCls, allocate$TestCls);
	return class$;
}

$Class* TestCls::class$ = nullptr;

			} // invoke
		} // lang
	} // java
} // test