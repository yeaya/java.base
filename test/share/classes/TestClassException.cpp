#include <TestClassException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

void TestClassException::init$() {
}

$Object* TestClassException::foo() {
	return nullptr;
}

TestClassException::TestClassException() {
}

$Class* TestClassException::load$($String* name, bool initialize) {
	$NamedAttribute foomethodTypeAnnotations$$$namedAttribute[] = {
		{"value", 's', "RE"},
		{}
	};
	$NamedAttribute foomethodTypeAnnotations$$$namedAttribute$1[] = {
		{"value", 's', "RE2"},
		{}
	};
	$NamedAttribute foomethodTypeAnnotations$$$namedAttribute$2[] = {
		{"value", 's', "AIOOBE"},
		{}
	};
	$TypeAnnotation foomethodTypeAnnotations$$[] = {
		{"LTypeAnno;", foomethodTypeAnnotations$$$namedAttribute, "THROWS, type_index = 0"},
		{"LTypeAnno2;", foomethodTypeAnnotations$$$namedAttribute$1, "THROWS, type_index = 0"},
		{"LTypeAnno;", foomethodTypeAnnotations$$$namedAttribute$2, "THROWS, type_index = 2"},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TestClassException, init$, void)},
		{"foo", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(TestClassException, foo, $Object*), "java.lang.RuntimeException,java.lang.NullPointerException,java.lang.ArrayIndexOutOfBoundsException", nullptr, nullptr, foomethodTypeAnnotations$$},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"TestClassException",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TestClassException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestClassException);
	});
	return class$;
}

$Class* TestClassException::class$ = nullptr;