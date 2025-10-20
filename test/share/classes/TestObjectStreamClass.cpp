#include <TestObjectStreamClass.h>

#include <TestObjectStreamClass$TestClass.h>
#include <TestObjectStreamClass$TestObjectInputStream.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamClass.h>
#include <java/io/ObjectStreamField.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $TestObjectStreamClass$TestClass = ::TestObjectStreamClass$TestClass;
using $TestObjectStreamClass$TestObjectInputStream = ::TestObjectStreamClass$TestObjectInputStream;
using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectStreamClass = ::java::io::ObjectStreamClass;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _TestObjectStreamClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestObjectStreamClass::*)()>(&TestObjectStreamClass::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestObjectStreamClass::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _TestObjectStreamClass_InnerClassesInfo_[] = {
	{"TestObjectStreamClass$TestObjectInputStream", "TestObjectStreamClass", "TestObjectInputStream", $STATIC},
	{"TestObjectStreamClass$TestClass", "TestObjectStreamClass", "TestClass", $STATIC},
	{}
};

$ClassInfo _TestObjectStreamClass_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestObjectStreamClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestObjectStreamClass_MethodInfo_,
	nullptr,
	nullptr,
	_TestObjectStreamClass_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestObjectStreamClass$TestObjectInputStream,TestObjectStreamClass$TestClass"
};

$Object* allocate$TestObjectStreamClass($Class* clazz) {
	return $of($alloc(TestObjectStreamClass));
}

void TestObjectStreamClass::init$() {
}

void TestObjectStreamClass::main($StringArray* args) {
	$load(TestObjectStreamClass);
	$useLocalCurrentObjectStackCache();
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
	$loadClass(TestObjectStreamClass, name, initialize, &_TestObjectStreamClass_ClassInfo_, allocate$TestObjectStreamClass);
	return class$;
}

$Class* TestObjectStreamClass::class$ = nullptr;