#include <TestObjectStreamClass$TestClass.h>

#include <TestObjectStreamClass.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $TestObjectStreamClass = ::TestObjectStreamClass;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _TestObjectStreamClass$TestClass_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TestObjectStreamClass$TestClass, serialVersionUID)},
	{"str", "Ljava/lang/String;", nullptr, 0, $field(TestObjectStreamClass$TestClass, str)},
	{}
};

$MethodInfo _TestObjectStreamClass$TestClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TestObjectStreamClass$TestClass::*)()>(&TestObjectStreamClass$TestClass::init$))},
	{}
};

$InnerClassInfo _TestObjectStreamClass$TestClass_InnerClassesInfo_[] = {
	{"TestObjectStreamClass$TestClass", "TestObjectStreamClass", "TestClass", $STATIC},
	{}
};

$ClassInfo _TestObjectStreamClass$TestClass_ClassInfo_ = {
	$ACC_SUPER,
	"TestObjectStreamClass$TestClass",
	"java.lang.Object",
	"java.io.Serializable",
	_TestObjectStreamClass$TestClass_FieldInfo_,
	_TestObjectStreamClass$TestClass_MethodInfo_,
	nullptr,
	nullptr,
	_TestObjectStreamClass$TestClass_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestObjectStreamClass"
};

$Object* allocate$TestObjectStreamClass$TestClass($Class* clazz) {
	return $of($alloc(TestObjectStreamClass$TestClass));
}

void TestObjectStreamClass$TestClass::init$() {
	$set(this, str, "hello world"_s);
}

TestObjectStreamClass$TestClass::TestObjectStreamClass$TestClass() {
}

$Class* TestObjectStreamClass$TestClass::load$($String* name, bool initialize) {
	$loadClass(TestObjectStreamClass$TestClass, name, initialize, &_TestObjectStreamClass$TestClass_ClassInfo_, allocate$TestObjectStreamClass$TestClass);
	return class$;
}

$Class* TestObjectStreamClass$TestClass::class$ = nullptr;