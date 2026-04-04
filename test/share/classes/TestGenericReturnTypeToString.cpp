#include <TestGenericReturnTypeToString.h>
#include <ExpectedGenericString.h>
#include <TestGenericReturnTypeToString$FirstInnerClass$Interface.h>
#include <TestGenericReturnTypeToString$FirstInnerClass$InterfaceGeneric.h>
#include <TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass.h>
#include <TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric.h>
#include <TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass.h>
#include <TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/AccessibleObject.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Type.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ExpectedGenericString = ::ExpectedGenericString;
using $TestGenericReturnTypeToString$FirstInnerClass$Interface = ::TestGenericReturnTypeToString$FirstInnerClass$Interface;
using $TestGenericReturnTypeToString$FirstInnerClass$InterfaceGeneric = ::TestGenericReturnTypeToString$FirstInnerClass$InterfaceGeneric;
using $TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass = ::TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass;
using $TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric = ::TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric;
using $TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass = ::TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass;
using $TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric = ::TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $RuntimeException = ::java::lang::RuntimeException;
using $Method = ::java::lang::reflect::Method;
using $List = ::java::util::List;

void TestGenericReturnTypeToString::init$() {
}

void TestGenericReturnTypeToString::main($StringArray* args) {
	$useLocalObjectStack();
	$load(TestGenericReturnTypeToString);
	$beforeCallerSensitive();
	bool hasFailures = false;
	{
		$var($MethodArray, arr$, TestGenericReturnTypeToString::class$->getMethods());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Method, method, arr$->get(i$));
			{
				$load($ExpectedGenericString);
				if ($nc(method)->isAnnotationPresent($ExpectedGenericString::class$)) {
					$var($ExpectedGenericString, es, $cast($ExpectedGenericString, method->getAnnotation($ExpectedGenericString::class$)));
					$var($String, result, $$nc(method->getGenericReturnType())->toString());
					if (!$$nc($nc(es)->value())->equals(result)) {
						hasFailures = true;
						$var($StringBuilder, var$0, $new($StringBuilder));
						var$0->append("Unexpected result of getGenericReturnType().toString()  for "_s);
						var$0->append($(method->getName()));
						var$0->append(" expected: "_s);
						var$0->append($(es->value()));
						var$0->append(" actual: "_s);
						var$0->append(result);
						$nc($System::err)->println($$str(var$0));
					}
				}
				if (hasFailures) {
					$throwNew($RuntimeException, "Test failed"_s);
				}
			}
		}
	}
}

$TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric* TestGenericReturnTypeToString::foo1() {
	return nullptr;
}

$TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass* TestGenericReturnTypeToString::foo2() {
	return nullptr;
}

$TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric* TestGenericReturnTypeToString::foo3() {
	return nullptr;
}

$TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass* TestGenericReturnTypeToString::foo4() {
	return nullptr;
}

$List* TestGenericReturnTypeToString::foo5() {
	return nullptr;
}

$TestGenericReturnTypeToString$FirstInnerClass$Interface* TestGenericReturnTypeToString::foo6() {
	return nullptr;
}

$TestGenericReturnTypeToString$FirstInnerClass$InterfaceGeneric* TestGenericReturnTypeToString::foo7() {
	return nullptr;
}

TestGenericReturnTypeToString::TestGenericReturnTypeToString() {
}

$Class* TestGenericReturnTypeToString::load$($String* name, bool initialize) {
	$NamedAttribute foo1methodAnnotations$$$namedAttribute[] = {
		{"value", 's', "TestGenericReturnTypeToString$FirstInnerClassGeneric<Dummy>$SecondInnerClassGeneric<Dummy>"},
		{}
	};
	$CompoundAttribute foo1methodAnnotations$$[] = {
		{"LExpectedGenericString;", foo1methodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute foo2methodAnnotations$$$namedAttribute[] = {
		{"value", 's', "TestGenericReturnTypeToString$FirstInnerClassGeneric<Dummy>$SecondInnerClass"},
		{}
	};
	$CompoundAttribute foo2methodAnnotations$$[] = {
		{"LExpectedGenericString;", foo2methodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute foo3methodAnnotations$$$namedAttribute[] = {
		{"value", 's', "TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric<Dummy>"},
		{}
	};
	$CompoundAttribute foo3methodAnnotations$$[] = {
		{"LExpectedGenericString;", foo3methodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute foo4methodAnnotations$$$namedAttribute[] = {
		{"value", 's', "class TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass"},
		{}
	};
	$CompoundAttribute foo4methodAnnotations$$[] = {
		{"LExpectedGenericString;", foo4methodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute foo5methodAnnotations$$$namedAttribute[] = {
		{"value", 's', "java.util.List<java.lang.String>"},
		{}
	};
	$CompoundAttribute foo5methodAnnotations$$[] = {
		{"LExpectedGenericString;", foo5methodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute foo6methodAnnotations$$$namedAttribute[] = {
		{"value", 's', "interface TestGenericReturnTypeToString$FirstInnerClass$Interface"},
		{}
	};
	$CompoundAttribute foo6methodAnnotations$$[] = {
		{"LExpectedGenericString;", foo6methodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute foo7methodAnnotations$$$namedAttribute[] = {
		{"value", 's', "TestGenericReturnTypeToString$FirstInnerClass$InterfaceGeneric<Dummy>"},
		{}
	};
	$CompoundAttribute foo7methodAnnotations$$[] = {
		{"LExpectedGenericString;", foo7methodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestGenericReturnTypeToString, init$, void)},
		{"foo1", "()LTestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric;", "()LTestGenericReturnTypeToString$FirstInnerClassGeneric<LDummy;>.SecondInnerClassGeneric<LDummy;>;", $PUBLIC, $virtualMethod(TestGenericReturnTypeToString, foo1, $TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric*), nullptr, nullptr, foo1methodAnnotations$$},
		{"foo2", "()LTestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass;", "()LTestGenericReturnTypeToString$FirstInnerClassGeneric<LDummy;>.SecondInnerClass;", $PUBLIC, $virtualMethod(TestGenericReturnTypeToString, foo2, $TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass*), nullptr, nullptr, foo2methodAnnotations$$},
		{"foo3", "()LTestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric;", "()LTestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric<LDummy;>;", $PUBLIC, $virtualMethod(TestGenericReturnTypeToString, foo3, $TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric*), nullptr, nullptr, foo3methodAnnotations$$},
		{"foo4", "()LTestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass;", nullptr, $PUBLIC, $virtualMethod(TestGenericReturnTypeToString, foo4, $TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass*), nullptr, nullptr, foo4methodAnnotations$$},
		{"foo5", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(TestGenericReturnTypeToString, foo5, $List*), nullptr, nullptr, foo5methodAnnotations$$},
		{"foo6", "()LTestGenericReturnTypeToString$FirstInnerClass$Interface;", nullptr, $PUBLIC, $virtualMethod(TestGenericReturnTypeToString, foo6, $TestGenericReturnTypeToString$FirstInnerClass$Interface*), nullptr, nullptr, foo6methodAnnotations$$},
		{"foo7", "()LTestGenericReturnTypeToString$FirstInnerClass$InterfaceGeneric;", "()LTestGenericReturnTypeToString$FirstInnerClass$InterfaceGeneric<LDummy;>;", $PUBLIC, $virtualMethod(TestGenericReturnTypeToString, foo7, $TestGenericReturnTypeToString$FirstInnerClass$InterfaceGeneric*), nullptr, nullptr, foo7methodAnnotations$$},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestGenericReturnTypeToString, main, void, $StringArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestGenericReturnTypeToString$FirstInnerClassGeneric", "TestGenericReturnTypeToString", "FirstInnerClassGeneric", $PUBLIC},
		{"TestGenericReturnTypeToString$FirstInnerClass", "TestGenericReturnTypeToString", "FirstInnerClass", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestGenericReturnTypeToString",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TestGenericReturnTypeToString$FirstInnerClassGeneric,TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass,TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric,TestGenericReturnTypeToString$FirstInnerClass,TestGenericReturnTypeToString$FirstInnerClass$InterfaceGeneric,TestGenericReturnTypeToString$FirstInnerClass$Interface,TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass,TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric"
	};
	$loadClass(TestGenericReturnTypeToString, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestGenericReturnTypeToString);
	});
	return class$;
}

$Class* TestGenericReturnTypeToString::class$ = nullptr;