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
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $RuntimeException = ::java::lang::RuntimeException;
using $Method = ::java::lang::reflect::Method;
using $Type = ::java::lang::reflect::Type;
using $List = ::java::util::List;

$NamedAttribute TestGenericReturnTypeToString_Attribute_var$0[] = {
	{"value", 's', "TestGenericReturnTypeToString$FirstInnerClassGeneric<Dummy>$SecondInnerClassGeneric<Dummy>"},
	{}
};

$CompoundAttribute _TestGenericReturnTypeToString_MethodAnnotations_foo11[] = {
	{"LExpectedGenericString;", TestGenericReturnTypeToString_Attribute_var$0},
	{}
};

$NamedAttribute TestGenericReturnTypeToString_Attribute_var$1[] = {
	{"value", 's', "TestGenericReturnTypeToString$FirstInnerClassGeneric<Dummy>$SecondInnerClass"},
	{}
};

$CompoundAttribute _TestGenericReturnTypeToString_MethodAnnotations_foo22[] = {
	{"LExpectedGenericString;", TestGenericReturnTypeToString_Attribute_var$1},
	{}
};

$NamedAttribute TestGenericReturnTypeToString_Attribute_var$2[] = {
	{"value", 's', "TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric<Dummy>"},
	{}
};

$CompoundAttribute _TestGenericReturnTypeToString_MethodAnnotations_foo33[] = {
	{"LExpectedGenericString;", TestGenericReturnTypeToString_Attribute_var$2},
	{}
};

$NamedAttribute TestGenericReturnTypeToString_Attribute_var$3[] = {
	{"value", 's', "class TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass"},
	{}
};

$CompoundAttribute _TestGenericReturnTypeToString_MethodAnnotations_foo44[] = {
	{"LExpectedGenericString;", TestGenericReturnTypeToString_Attribute_var$3},
	{}
};

$NamedAttribute TestGenericReturnTypeToString_Attribute_var$4[] = {
	{"value", 's', "java.util.List<java.lang.String>"},
	{}
};

$CompoundAttribute _TestGenericReturnTypeToString_MethodAnnotations_foo55[] = {
	{"LExpectedGenericString;", TestGenericReturnTypeToString_Attribute_var$4},
	{}
};

$NamedAttribute TestGenericReturnTypeToString_Attribute_var$5[] = {
	{"value", 's', "interface TestGenericReturnTypeToString$FirstInnerClass$Interface"},
	{}
};

$CompoundAttribute _TestGenericReturnTypeToString_MethodAnnotations_foo66[] = {
	{"LExpectedGenericString;", TestGenericReturnTypeToString_Attribute_var$5},
	{}
};

$NamedAttribute TestGenericReturnTypeToString_Attribute_var$6[] = {
	{"value", 's', "TestGenericReturnTypeToString$FirstInnerClass$InterfaceGeneric<Dummy>"},
	{}
};

$CompoundAttribute _TestGenericReturnTypeToString_MethodAnnotations_foo77[] = {
	{"LExpectedGenericString;", TestGenericReturnTypeToString_Attribute_var$6},
	{}
};

$MethodInfo _TestGenericReturnTypeToString_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestGenericReturnTypeToString::*)()>(&TestGenericReturnTypeToString::init$))},
	{"foo1", "()LTestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric;", "()LTestGenericReturnTypeToString$FirstInnerClassGeneric<LDummy;>.SecondInnerClassGeneric<LDummy;>;", $PUBLIC, nullptr, nullptr, nullptr, _TestGenericReturnTypeToString_MethodAnnotations_foo11},
	{"foo2", "()LTestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass;", "()LTestGenericReturnTypeToString$FirstInnerClassGeneric<LDummy;>.SecondInnerClass;", $PUBLIC, nullptr, nullptr, nullptr, _TestGenericReturnTypeToString_MethodAnnotations_foo22},
	{"foo3", "()LTestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric;", "()LTestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric<LDummy;>;", $PUBLIC, nullptr, nullptr, nullptr, _TestGenericReturnTypeToString_MethodAnnotations_foo33},
	{"foo4", "()LTestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _TestGenericReturnTypeToString_MethodAnnotations_foo44},
	{"foo5", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC, nullptr, nullptr, nullptr, _TestGenericReturnTypeToString_MethodAnnotations_foo55},
	{"foo6", "()LTestGenericReturnTypeToString$FirstInnerClass$Interface;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _TestGenericReturnTypeToString_MethodAnnotations_foo66},
	{"foo7", "()LTestGenericReturnTypeToString$FirstInnerClass$InterfaceGeneric;", "()LTestGenericReturnTypeToString$FirstInnerClass$InterfaceGeneric<LDummy;>;", $PUBLIC, nullptr, nullptr, nullptr, _TestGenericReturnTypeToString_MethodAnnotations_foo77},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestGenericReturnTypeToString::main))},
	{}
};

$InnerClassInfo _TestGenericReturnTypeToString_InnerClassesInfo_[] = {
	{"TestGenericReturnTypeToString$FirstInnerClassGeneric", "TestGenericReturnTypeToString", "FirstInnerClassGeneric", $PUBLIC},
	{"TestGenericReturnTypeToString$FirstInnerClass", "TestGenericReturnTypeToString", "FirstInnerClass", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TestGenericReturnTypeToString_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestGenericReturnTypeToString",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestGenericReturnTypeToString_MethodInfo_,
	nullptr,
	nullptr,
	_TestGenericReturnTypeToString_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestGenericReturnTypeToString$FirstInnerClassGeneric,TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass,TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric,TestGenericReturnTypeToString$FirstInnerClass,TestGenericReturnTypeToString$FirstInnerClass$InterfaceGeneric,TestGenericReturnTypeToString$FirstInnerClass$Interface,TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass,TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric"
};

$Object* allocate$TestGenericReturnTypeToString($Class* clazz) {
	return $of($alloc(TestGenericReturnTypeToString));
}

void TestGenericReturnTypeToString::init$() {
}

void TestGenericReturnTypeToString::main($StringArray* args) {
	$load(TestGenericReturnTypeToString);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	bool hasFailures = false;
	{
		$var($MethodArray, arr$, TestGenericReturnTypeToString::class$->getMethods());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Method, method, arr$->get(i$));
			{
				$load($ExpectedGenericString);
				if ($nc(method)->isAnnotationPresent($ExpectedGenericString::class$)) {
					$var($ExpectedGenericString, es, $cast($ExpectedGenericString, method->getAnnotation($ExpectedGenericString::class$)));
					$var($String, result, $nc($of($(method->getGenericReturnType())))->toString());
					if (!$nc($($nc(es)->value()))->equals(result)) {
						hasFailures = true;
						$var($String, var$2, $$str({"Unexpected result of getGenericReturnType().toString()  for "_s, $(method->getName()), " expected: "_s}));
						$var($String, var$1, $$concat(var$2, $(es->value())));
						$var($String, var$0, $$concat(var$1, " actual: "));
						$nc($System::err)->println($$concat(var$0, result));
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
	$loadClass(TestGenericReturnTypeToString, name, initialize, &_TestGenericReturnTypeToString_ClassInfo_, allocate$TestGenericReturnTypeToString);
	return class$;
}

$Class* TestGenericReturnTypeToString::class$ = nullptr;