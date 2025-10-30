#include <test/java/lang/invoke/ObjectMethodInInterfaceTest.h>

#include <java/lang/CharSequence.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;

namespace test {
	namespace java {
		namespace lang {
			namespace invoke {

$MethodInfo _ObjectMethodInInterfaceTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ObjectMethodInInterfaceTest::*)()>(&ObjectMethodInInterfaceTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ObjectMethodInInterfaceTest::main)), "java.lang.Throwable"},
	{}
};

$ClassInfo _ObjectMethodInInterfaceTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"test.java.lang.invoke.ObjectMethodInInterfaceTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ObjectMethodInInterfaceTest_MethodInfo_
};

$Object* allocate$ObjectMethodInInterfaceTest($Class* clazz) {
	return $of($alloc(ObjectMethodInInterfaceTest));
}

void ObjectMethodInInterfaceTest::init$() {
}

void ObjectMethodInInterfaceTest::main($StringArray* args) {
	$load(ObjectMethodInInterfaceTest);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($CharSequence);
	$var($MethodHandle, mh, $nc($($MethodHandles::lookup()))->findVirtual($CharSequence::class$, "toString"_s, $($MethodType::methodType($String::class$))));
	$var($MethodType, mt, $MethodType::methodType($Object::class$, $CharSequence::class$));
	$assign(mh, $nc(mh)->asType(mt));
	$var($Object, res, mh->invokeExact($$new($ObjectArray, {static_cast<$CharSequence*>("123"_s)})));
	$nc($System::out)->println("TEST PASSED"_s);
}

ObjectMethodInInterfaceTest::ObjectMethodInInterfaceTest() {
}

$Class* ObjectMethodInInterfaceTest::load$($String* name, bool initialize) {
	$loadClass(ObjectMethodInInterfaceTest, name, initialize, &_ObjectMethodInInterfaceTest_ClassInfo_, allocate$ObjectMethodInInterfaceTest);
	return class$;
}

$Class* ObjectMethodInInterfaceTest::class$ = nullptr;

			} // invoke
		} // lang
	} // java
} // test