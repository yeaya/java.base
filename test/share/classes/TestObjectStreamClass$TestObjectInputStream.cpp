#include <TestObjectStreamClass$TestObjectInputStream.h>

#include <TestObjectStreamClass.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectStreamClass.h>
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
using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectStreamClass = ::java::io::ObjectStreamClass;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _TestObjectStreamClass$TestObjectInputStream_FieldInfo_[] = {
	{"objectStreamClass", "Ljava/io/ObjectStreamClass;", nullptr, $PRIVATE, $field(TestObjectStreamClass$TestObjectInputStream, objectStreamClass)},
	{}
};

$MethodInfo _TestObjectStreamClass$TestObjectInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(TestObjectStreamClass$TestObjectInputStream::*)($InputStream*)>(&TestObjectStreamClass$TestObjectInputStream::init$)), "java.io.IOException"},
	{"getDescriptor", "()Ljava/io/ObjectStreamClass;", nullptr, $PUBLIC, nullptr, "java.io.IOException,java.lang.ClassNotFoundException"},
	{"readClassDescriptor", "()Ljava/io/ObjectStreamClass;", nullptr, $PUBLIC, nullptr, "java.io.IOException,java.lang.ClassNotFoundException"},
	{}
};

$InnerClassInfo _TestObjectStreamClass$TestObjectInputStream_InnerClassesInfo_[] = {
	{"TestObjectStreamClass$TestObjectInputStream", "TestObjectStreamClass", "TestObjectInputStream", $STATIC},
	{}
};

$ClassInfo _TestObjectStreamClass$TestObjectInputStream_ClassInfo_ = {
	$ACC_SUPER,
	"TestObjectStreamClass$TestObjectInputStream",
	"java.io.ObjectInputStream",
	nullptr,
	_TestObjectStreamClass$TestObjectInputStream_FieldInfo_,
	_TestObjectStreamClass$TestObjectInputStream_MethodInfo_,
	nullptr,
	nullptr,
	_TestObjectStreamClass$TestObjectInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestObjectStreamClass"
};

$Object* allocate$TestObjectStreamClass$TestObjectInputStream($Class* clazz) {
	return $of($alloc(TestObjectStreamClass$TestObjectInputStream));
}

void TestObjectStreamClass$TestObjectInputStream::init$($InputStream* in) {
	$ObjectInputStream::init$(in);
}

$ObjectStreamClass* TestObjectStreamClass$TestObjectInputStream::getDescriptor() {
	return this->objectStreamClass;
}

$ObjectStreamClass* TestObjectStreamClass$TestObjectInputStream::readClassDescriptor() {
	$set(this, objectStreamClass, $ObjectInputStream::readClassDescriptor());
	return this->objectStreamClass;
}

TestObjectStreamClass$TestObjectInputStream::TestObjectStreamClass$TestObjectInputStream() {
}

$Class* TestObjectStreamClass$TestObjectInputStream::load$($String* name, bool initialize) {
	$loadClass(TestObjectStreamClass$TestObjectInputStream, name, initialize, &_TestObjectStreamClass$TestObjectInputStream_ClassInfo_, allocate$TestObjectStreamClass$TestObjectInputStream);
	return class$;
}

$Class* TestObjectStreamClass$TestObjectInputStream::class$ = nullptr;