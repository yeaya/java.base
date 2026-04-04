#include <test/java/lang/invoke/ObjectMethodInInterfaceTest.h>
#include <java/lang/CharSequence.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodType = ::java::lang::invoke::MethodType;

namespace test {
	namespace java {
		namespace lang {
			namespace invoke {

void ObjectMethodInInterfaceTest::init$() {
}

void ObjectMethodInInterfaceTest::main($StringArray* args) {
	$useLocalObjectStack();
	$load(ObjectMethodInInterfaceTest);
	$beforeCallerSensitive();
	$load($CharSequence);
	$var($MethodHandle, mh, $$nc($MethodHandles::lookup())->findVirtual($CharSequence::class$, "toString"_s, $($MethodType::methodType($String::class$))));
	$var($MethodType, mt, $MethodType::methodType($Object::class$, $CharSequence::class$));
	$assign(mh, $nc(mh)->asType(mt));
	$var($Object, res, $nc(mh)->invokeExact($$new($ObjectArray, {$$cast($CharSequence, "123"_s)})));
	$nc($System::out)->println("TEST PASSED"_s);
}

ObjectMethodInInterfaceTest::ObjectMethodInInterfaceTest() {
}

$Class* ObjectMethodInInterfaceTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ObjectMethodInInterfaceTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ObjectMethodInInterfaceTest, main, void, $StringArray*), "java.lang.Throwable"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"test.java.lang.invoke.ObjectMethodInInterfaceTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ObjectMethodInInterfaceTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectMethodInInterfaceTest);
	});
	return class$;
}

$Class* ObjectMethodInInterfaceTest::class$ = nullptr;

			} // invoke
		} // lang
	} // java
} // test