#include <TestObjectStreamClass$TestObjectInputStream.h>
#include <TestObjectStreamClass.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectStreamClass.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectStreamClass = ::java::io::ObjectStreamClass;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

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
	$FieldInfo fieldInfos$$[] = {
		{"objectStreamClass", "Ljava/io/ObjectStreamClass;", nullptr, $PRIVATE, $field(TestObjectStreamClass$TestObjectInputStream, objectStreamClass)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(TestObjectStreamClass$TestObjectInputStream, init$, void, $InputStream*), "java.io.IOException"},
		{"getDescriptor", "()Ljava/io/ObjectStreamClass;", nullptr, $PUBLIC, $virtualMethod(TestObjectStreamClass$TestObjectInputStream, getDescriptor, $ObjectStreamClass*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"readClassDescriptor", "()Ljava/io/ObjectStreamClass;", nullptr, $PUBLIC, $virtualMethod(TestObjectStreamClass$TestObjectInputStream, readClassDescriptor, $ObjectStreamClass*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestObjectStreamClass$TestObjectInputStream", "TestObjectStreamClass", "TestObjectInputStream", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestObjectStreamClass$TestObjectInputStream",
		"java.io.ObjectInputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestObjectStreamClass"
	};
	$loadClass(TestObjectStreamClass$TestObjectInputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TestObjectStreamClass$TestObjectInputStream));
	});
	return class$;
}

$Class* TestObjectStreamClass$TestObjectInputStream::class$ = nullptr;