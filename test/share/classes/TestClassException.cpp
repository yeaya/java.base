#include <TestClassException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

$NamedAttribute TestClassException_Attribute_var$0[] = {
	{"value", 's', "RE"},
	{}
};

$NamedAttribute TestClassException_Attribute_var$1[] = {
	{"value", 's', "RE2"},
	{}
};

$NamedAttribute TestClassException_Attribute_var$2[] = {
	{"value", 's', "AIOOBE"},
	{}
};

$TypeAnnotation _TestClassException_MethodTypeAnnotations_foo1[] = {
	{"LTypeAnno;", TestClassException_Attribute_var$0, "THROWS, type_index = 0"},
	{"LTypeAnno2;", TestClassException_Attribute_var$1, "THROWS, type_index = 0"},
	{"LTypeAnno;", TestClassException_Attribute_var$2, "THROWS, type_index = 2"},
	{}
};

$MethodInfo _TestClassException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TestClassException::*)()>(&TestClassException::init$))},
	{"foo", "()Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.RuntimeException,java.lang.NullPointerException,java.lang.ArrayIndexOutOfBoundsException", nullptr, nullptr, _TestClassException_MethodTypeAnnotations_foo1},
	{}
};

$ClassInfo _TestClassException_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"TestClassException",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestClassException_MethodInfo_
};

$Object* allocate$TestClassException($Class* clazz) {
	return $of($alloc(TestClassException));
}

void TestClassException::init$() {
}

$Object* TestClassException::foo() {
	return $of(nullptr);
}

TestClassException::TestClassException() {
}

$Class* TestClassException::load$($String* name, bool initialize) {
	$loadClass(TestClassException, name, initialize, &_TestClassException_ClassInfo_, allocate$TestClassException);
	return class$;
}

$Class* TestClassException::class$ = nullptr;