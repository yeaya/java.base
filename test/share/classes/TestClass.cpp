#include <TestClass.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _TestClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TestClass, init$, void)},
	{"foo", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(TestClass, foo, $String*)},
	{}
};

$ClassInfo _TestClass_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestClass_MethodInfo_
};

$Object* allocate$TestClass($Class* clazz) {
	return $of($alloc(TestClass));
}

void TestClass::init$() {
}

$String* TestClass::foo() {
	return "OK"_s;
}

TestClass::TestClass() {
}

$Class* TestClass::load$($String* name, bool initialize) {
	$loadClass(TestClass, name, initialize, &_TestClass_ClassInfo_, allocate$TestClass);
	return class$;
}

$Class* TestClass::class$ = nullptr;