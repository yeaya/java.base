#include <GenericStringTest.h>

#include <ExpectedGenericString.h>
#include <ExpectedString.h>
#include <Roebling.h>
#include <TestClass1.h>
#include <TestClass2.h>
#include <TestInterface1.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/AccessibleObject.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ExpectedGenericString = ::ExpectedGenericString;
using $ExpectedString = ::ExpectedString;
using $Roebling = ::Roebling;
using $TestClass1 = ::TestClass1;
using $TestClass2 = ::TestClass2;
using $TestInterface1 = ::TestInterface1;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Annotation = ::java::lang::annotation::Annotation;
using $AccessibleObject = ::java::lang::reflect::AccessibleObject;
using $Method = ::java::lang::reflect::Method;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

$MethodInfo _GenericStringTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GenericStringTest::*)()>(&GenericStringTest::init$))},
	{"checkForFailure", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*,$String*)>(&GenericStringTest::checkForFailure))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&GenericStringTest::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _GenericStringTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"GenericStringTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_GenericStringTest_MethodInfo_
};

$Object* allocate$GenericStringTest($Class* clazz) {
	return $of($alloc(GenericStringTest));
}

void GenericStringTest::init$() {
}

void GenericStringTest::main($StringArray* argv) {
	$load(GenericStringTest);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	int32_t failures = 0;
	{
		$load($TestClass1);
		$load($TestClass2);
		$load($Roebling);
		$load($TestInterface1);
		$var($Iterator, i$, $nc($($List::of($TestClass1::class$, $TestClass2::class$, $Roebling::class$, $TestInterface1::class$)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$Class* clazz = $cast($Class, i$->next());
			{
				$var($MethodArray, arr$, $nc(clazz)->getDeclaredMethods());
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($Method, method, arr$->get(i$));
					{
						$load($ExpectedGenericString);
						$var($ExpectedGenericString, egs, $cast($ExpectedGenericString, $nc(method)->getAnnotation($ExpectedGenericString::class$)));
						if (egs != nullptr) {
							$var($String, actual, method->toGenericString());
							$init($System);
							$nc($System::out)->println(actual);
							if (method->isBridge()) {
								failures += checkForFailure($(egs->bridgeValue()), actual);
							} else {
								failures += checkForFailure($(egs->value()), actual);
							}
						}
						$load($ExpectedString);
						if (method->isAnnotationPresent($ExpectedString::class$)) {
							$var($ExpectedString, es, $cast($ExpectedString, method->getAnnotation($ExpectedString::class$)));
							$var($String, actual, method->toString());
							failures += checkForFailure($($nc(es)->value()), actual);
						}
					}
				}
			}
		}
	}
	{
		$load($Roebling);
		$var($MethodArray, arr$, $Roebling::class$->getDeclaredMethods());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Method, method, arr$->get(i$));
			{
				$var($String, s1, $nc(method)->toGenericString());
				$var($String, s2, method->toString());
				$init($System);
				$nc($System::out)->println($$str({"Generic: "_s, s1}));
				$nc($System::out)->println($$str({"Regular: "_s, s2}));
				bool var$0 = $nc(s1)->indexOf("volatile"_s) != -1;
				if (var$0 || $nc(s2)->indexOf("volatile"_s) != -1) {
					++failures;
					$nc($System::err)->println("ERROR: Bad string; unexpected  ``volatile\'\'"_s);
				}
			}
		}
	}
	if (failures > 0) {
		$init($System);
		$nc($System::err)->println("Test failed."_s);
		$throwNew($RuntimeException);
	}
}

int32_t GenericStringTest::checkForFailure($String* expected, $String* actual) {
	if (!$nc(expected)->equals(actual)) {
		$init($System);
		$nc($System::err)->printf("ERROR: Expected \'\'%s\'\';%ngot             \'\'%s\'\'.\n"_s, $$new($ObjectArray, {
			$of(expected),
			$of(actual)
		}));
		return 1;
	} else {
		return 0;
	}
}

GenericStringTest::GenericStringTest() {
}

$Class* GenericStringTest::load$($String* name, bool initialize) {
	$loadClass(GenericStringTest, name, initialize, &_GenericStringTest_ClassInfo_, allocate$GenericStringTest);
	return class$;
}

$Class* GenericStringTest::class$ = nullptr;