#include <ReflectiveLookupTest.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Method = ::java::lang::reflect::Method;

void ReflectiveLookupTest::init$() {
}

void ReflectiveLookupTest::main($StringArray* args) {
	$useLocalObjectStack();
	$load(ReflectiveLookupTest);
	$beforeCallerSensitive();
	$var($MethodHandles$Lookup, lookup1, $MethodHandles::lookup());
	$Class* var$0 = $nc(lookup1)->lookupClass();
	$var($String, var$1, "foo"_s);
	$var($MethodHandle, mh1, $nc(lookup1)->findStatic(var$0, var$1, $($MethodType::methodType($String::class$))));
	$var($Object, var$2, $cast($String, $nc(mh1)->invokeExact($$new($ObjectArray, 0))));
	assertEquals(var$2, $(foo()));
	$var($Method, lookupMethod, $MethodHandles::class$->getMethod("lookup"_s, $$new($ClassArray, 0)));
	$nc($System::out)->println($$str({"reflection method: "_s, lookupMethod}));
	if (!$$nc($nc(lookupMethod)->getName())->equals("lookup"_s)) {
		$throwNew($RuntimeException, $$str({"Unexpected name: "_s, $(lookupMethod->getName())}));
	}
	$var($MethodHandles$Lookup, lookup2, $cast($MethodHandles$Lookup, lookupMethod->invoke(nullptr, $$new($ObjectArray, 0))));
	$var($Object, var$3, lookup1->lookupClass());
	assertEquals(var$3, $nc(lookup2)->lookupClass());
	$var($Object, var$4, $Integer::valueOf(lookup1->lookupModes()));
	assertEquals(var$4, $($Integer::valueOf(lookup2->lookupModes())));
	$Class* var$5 = lookup2->lookupClass();
	$var($String, var$6, "foo"_s);
	$var($MethodHandle, mh2, lookup2->findStatic(var$5, var$6, $($MethodType::methodType($String::class$))));
	$var($Object, var$7, $cast($String, $nc(mh2)->invokeExact($$new($ObjectArray, 0))));
	assertEquals(var$7, $(foo()));
}

$String* ReflectiveLookupTest::foo() {
	return "foo!"_s;
}

void ReflectiveLookupTest::assertEquals(Object$* o1, Object$* o2) {
	if (!$nc($of(o1))->equals(o2)) {
		$throwNew($RuntimeException, $$str({o1, " != "_s, o2}));
	}
}

ReflectiveLookupTest::ReflectiveLookupTest() {
}

$Class* ReflectiveLookupTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ReflectiveLookupTest, init$, void)},
		{"assertEquals", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $STATIC, $staticMethod(ReflectiveLookupTest, assertEquals, void, Object$*, Object$*)},
		{"foo", "()Ljava/lang/String;", nullptr, $STATIC, $staticMethod(ReflectiveLookupTest, foo, $String*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(ReflectiveLookupTest, main, void, $StringArray*), "java.lang.Throwable"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ReflectiveLookupTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ReflectiveLookupTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReflectiveLookupTest);
	});
	return class$;
}

$Class* ReflectiveLookupTest::class$ = nullptr;