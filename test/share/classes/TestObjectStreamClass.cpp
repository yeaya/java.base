#include <TestObjectStreamClass.h>
#include <TestObjectStreamClass$TestClass.h>
#include <TestObjectStreamClass$TestObjectInputStream.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamClass.h>
#include <java/io/ObjectStreamField.h>
#include <jcpp.h>

using $TestObjectStreamClass$TestClass = ::TestObjectStreamClass$TestClass;
using $TestObjectStreamClass$TestObjectInputStream = ::TestObjectStreamClass$TestObjectInputStream;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectStreamClass = ::java::io::ObjectStreamClass;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TestObjectStreamClass::init$() {
}

void TestObjectStreamClass::main($StringArray* args) {
	$useLocalObjectStack();
	$load(TestObjectStreamClass);
	$beforeCallerSensitive();
	$var($ByteArrayOutputStream, byteOutput, $new($ByteArrayOutputStream));
	$var($ObjectOutputStream, output, $new($ObjectOutputStream, byteOutput));
	output->writeObject($$new($TestObjectStreamClass$TestClass));
	$var($ByteArrayInputStream, bais, $new($ByteArrayInputStream, $(byteOutput->toByteArray())));
	$var($TestObjectStreamClass$TestObjectInputStream, input, $new($TestObjectStreamClass$TestObjectInputStream, bais));
	input->readObject();
	$var($ObjectStreamClass, osc, input->getDescriptor());
	$nc(osc)->getName();
	osc->forClass();
	osc->getField("str"_s);
	osc->getFields();
	osc->getSerialVersionUID();
	osc->toString();
}

TestObjectStreamClass::TestObjectStreamClass() {
}

$Class* TestObjectStreamClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestObjectStreamClass, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestObjectStreamClass, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestObjectStreamClass$TestObjectInputStream", "TestObjectStreamClass", "TestObjectInputStream", $STATIC},
		{"TestObjectStreamClass$TestClass", "TestObjectStreamClass", "TestClass", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestObjectStreamClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TestObjectStreamClass$TestObjectInputStream,TestObjectStreamClass$TestClass"
	};
	$loadClass(TestObjectStreamClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestObjectStreamClass);
	});
	return class$;
}

$Class* TestObjectStreamClass::class$ = nullptr;