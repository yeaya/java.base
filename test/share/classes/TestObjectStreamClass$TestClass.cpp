#include <TestObjectStreamClass$TestClass.h>
#include <TestObjectStreamClass.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TestObjectStreamClass$TestClass::init$() {
	$set(this, str, "hello world"_s);
}

TestObjectStreamClass$TestClass::TestObjectStreamClass$TestClass() {
}

$Class* TestObjectStreamClass$TestClass::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TestObjectStreamClass$TestClass, serialVersionUID)},
		{"str", "Ljava/lang/String;", nullptr, 0, $field(TestObjectStreamClass$TestClass, str)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TestObjectStreamClass$TestClass, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestObjectStreamClass$TestClass", "TestObjectStreamClass", "TestClass", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestObjectStreamClass$TestClass",
		"java.lang.Object",
		"java.io.Serializable",
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
	$loadClass(TestObjectStreamClass$TestClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestObjectStreamClass$TestClass);
	});
	return class$;
}

$Class* TestObjectStreamClass$TestClass::class$ = nullptr;