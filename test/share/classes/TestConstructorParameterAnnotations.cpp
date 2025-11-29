#include <TestConstructorParameterAnnotations.h>

#include <TestConstructorParameterAnnotations$ExpectedGetParameterAnnotations.h>
#include <TestConstructorParameterAnnotations$ExpectedParameterAnnotations.h>
#include <TestConstructorParameterAnnotations$MarkerAnnotation.h>
#include <TestConstructorParameterAnnotations$NestedClass0.h>
#include <TestConstructorParameterAnnotations$NestedClass1.h>
#include <TestConstructorParameterAnnotations$NestedClass2.h>
#include <TestConstructorParameterAnnotations$NestedClass3.h>
#include <TestConstructorParameterAnnotations$NestedClass4.h>
#include <TestConstructorParameterAnnotations$StaticNestedClass0.h>
#include <TestConstructorParameterAnnotations$StaticNestedClass1.h>
#include <TestConstructorParameterAnnotations$StaticNestedClass2.h>
#include <TestConstructorParameterAnnotations$StaticNestedClass3.h>
#include <TestConstructorParameterAnnotations$StaticNestedClass4.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Parameter.h>
#include <java/util/Arrays.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $TestConstructorParameterAnnotations$ExpectedGetParameterAnnotations = ::TestConstructorParameterAnnotations$ExpectedGetParameterAnnotations;
using $TestConstructorParameterAnnotations$ExpectedParameterAnnotations = ::TestConstructorParameterAnnotations$ExpectedParameterAnnotations;
using $TestConstructorParameterAnnotations$MarkerAnnotation = ::TestConstructorParameterAnnotations$MarkerAnnotation;
using $TestConstructorParameterAnnotations$NestedClass0 = ::TestConstructorParameterAnnotations$NestedClass0;
using $TestConstructorParameterAnnotations$NestedClass1 = ::TestConstructorParameterAnnotations$NestedClass1;
using $TestConstructorParameterAnnotations$NestedClass2 = ::TestConstructorParameterAnnotations$NestedClass2;
using $TestConstructorParameterAnnotations$NestedClass3 = ::TestConstructorParameterAnnotations$NestedClass3;
using $TestConstructorParameterAnnotations$NestedClass4 = ::TestConstructorParameterAnnotations$NestedClass4;
using $TestConstructorParameterAnnotations$StaticNestedClass0 = ::TestConstructorParameterAnnotations$StaticNestedClass0;
using $TestConstructorParameterAnnotations$StaticNestedClass1 = ::TestConstructorParameterAnnotations$StaticNestedClass1;
using $TestConstructorParameterAnnotations$StaticNestedClass2 = ::TestConstructorParameterAnnotations$StaticNestedClass2;
using $TestConstructorParameterAnnotations$StaticNestedClass3 = ::TestConstructorParameterAnnotations$StaticNestedClass3;
using $TestConstructorParameterAnnotations$StaticNestedClass4 = ::TestConstructorParameterAnnotations$StaticNestedClass4;
using $ConstructorArray = $Array<::java::lang::reflect::Constructor>;
using $ParameterArray = $Array<::java::lang::reflect::Parameter>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Constructor = ::java::lang::reflect::Constructor;
using $Parameter = ::java::lang::reflect::Parameter;
using $Arrays = ::java::util::Arrays;
using $Objects = ::java::util::Objects;

$MethodInfo _TestConstructorParameterAnnotations_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestConstructorParameterAnnotations::*)()>(&TestConstructorParameterAnnotations::init$))},
	{"checkGetParameterAnnotations", "(Ljava/lang/Class;Ljava/lang/reflect/Constructor;)I", "(Ljava/lang/Class<*>;Ljava/lang/reflect/Constructor<*>;)I", $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($Class*,$Constructor*)>(&TestConstructorParameterAnnotations::checkGetParameterAnnotations))},
	{"checkGetParametersGetAnnotation", "(Ljava/lang/Class;Ljava/lang/reflect/Constructor;)I", "(Ljava/lang/Class<*>;Ljava/lang/reflect/Constructor<*>;)I", $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($Class*,$Constructor*)>(&TestConstructorParameterAnnotations::checkGetParametersGetAnnotation))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&TestConstructorParameterAnnotations::main))},
	{}
};

$InnerClassInfo _TestConstructorParameterAnnotations_InnerClassesInfo_[] = {
	{"TestConstructorParameterAnnotations$ExpectedParameterAnnotations", "TestConstructorParameterAnnotations", "ExpectedParameterAnnotations", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{"TestConstructorParameterAnnotations$ExpectedGetParameterAnnotations", "TestConstructorParameterAnnotations", "ExpectedGetParameterAnnotations", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{"TestConstructorParameterAnnotations$MarkerAnnotation", "TestConstructorParameterAnnotations", "MarkerAnnotation", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{"TestConstructorParameterAnnotations$StaticNestedClass4", "TestConstructorParameterAnnotations", "StaticNestedClass4", $PUBLIC | $STATIC},
	{"TestConstructorParameterAnnotations$StaticNestedClass3", "TestConstructorParameterAnnotations", "StaticNestedClass3", $PUBLIC | $STATIC},
	{"TestConstructorParameterAnnotations$StaticNestedClass2", "TestConstructorParameterAnnotations", "StaticNestedClass2", $PUBLIC | $STATIC},
	{"TestConstructorParameterAnnotations$StaticNestedClass1", "TestConstructorParameterAnnotations", "StaticNestedClass1", $PUBLIC | $STATIC},
	{"TestConstructorParameterAnnotations$StaticNestedClass0", "TestConstructorParameterAnnotations", "StaticNestedClass0", $PUBLIC | $STATIC},
	{"TestConstructorParameterAnnotations$NestedClass4", "TestConstructorParameterAnnotations", "NestedClass4", $PUBLIC},
	{"TestConstructorParameterAnnotations$NestedClass3", "TestConstructorParameterAnnotations", "NestedClass3", $PUBLIC},
	{"TestConstructorParameterAnnotations$NestedClass2", "TestConstructorParameterAnnotations", "NestedClass2", $PUBLIC},
	{"TestConstructorParameterAnnotations$NestedClass1", "TestConstructorParameterAnnotations", "NestedClass1", $PUBLIC},
	{"TestConstructorParameterAnnotations$NestedClass0", "TestConstructorParameterAnnotations", "NestedClass0", $PUBLIC},
	{}
};

$ClassInfo _TestConstructorParameterAnnotations_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestConstructorParameterAnnotations",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestConstructorParameterAnnotations_MethodInfo_,
	nullptr,
	nullptr,
	_TestConstructorParameterAnnotations_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestConstructorParameterAnnotations$ExpectedParameterAnnotations,TestConstructorParameterAnnotations$ExpectedGetParameterAnnotations,TestConstructorParameterAnnotations$MarkerAnnotation,TestConstructorParameterAnnotations$StaticNestedClass4,TestConstructorParameterAnnotations$StaticNestedClass3,TestConstructorParameterAnnotations$StaticNestedClass2,TestConstructorParameterAnnotations$StaticNestedClass1,TestConstructorParameterAnnotations$StaticNestedClass0,TestConstructorParameterAnnotations$NestedClass4,TestConstructorParameterAnnotations$NestedClass3,TestConstructorParameterAnnotations$NestedClass2,TestConstructorParameterAnnotations$NestedClass1,TestConstructorParameterAnnotations$NestedClass0"
};

$Object* allocate$TestConstructorParameterAnnotations($Class* clazz) {
	return $of($alloc(TestConstructorParameterAnnotations));
}

void TestConstructorParameterAnnotations::init$() {
}

void TestConstructorParameterAnnotations::main($StringArray* args) {
	$load(TestConstructorParameterAnnotations);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	int32_t errors = 0;
	$load($TestConstructorParameterAnnotations$NestedClass0);
	$load($TestConstructorParameterAnnotations$NestedClass1);
	$load($TestConstructorParameterAnnotations$NestedClass2);
	$load($TestConstructorParameterAnnotations$NestedClass3);
	$load($TestConstructorParameterAnnotations$NestedClass4);
	$load($TestConstructorParameterAnnotations$StaticNestedClass0);
	$load($TestConstructorParameterAnnotations$StaticNestedClass1);
	$load($TestConstructorParameterAnnotations$StaticNestedClass2);
	$load($TestConstructorParameterAnnotations$StaticNestedClass3);
	$load($TestConstructorParameterAnnotations$StaticNestedClass4);
	$var($ClassArray, classes, $new($ClassArray, {
		$TestConstructorParameterAnnotations$NestedClass0::class$,
		$TestConstructorParameterAnnotations$NestedClass1::class$,
		$TestConstructorParameterAnnotations$NestedClass2::class$,
		$TestConstructorParameterAnnotations$NestedClass3::class$,
		$TestConstructorParameterAnnotations$NestedClass4::class$,
		$TestConstructorParameterAnnotations$StaticNestedClass0::class$,
		$TestConstructorParameterAnnotations$StaticNestedClass1::class$,
		$TestConstructorParameterAnnotations$StaticNestedClass2::class$,
		$TestConstructorParameterAnnotations$StaticNestedClass3::class$,
		$TestConstructorParameterAnnotations$StaticNestedClass4::class$
	}));
	{
		$var($ClassArray, arr$, classes);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$Class* clazz = arr$->get(i$);
			{
				{
					$var($ConstructorArray, arr$, $nc(clazz)->getConstructors());
					int32_t len$ = arr$->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						$var($Constructor, ctor, arr$->get(i$));
						{
							$nc($System::out)->println($of(ctor));
							errors += checkGetParameterAnnotations(clazz, ctor);
							errors += checkGetParametersGetAnnotation(clazz, ctor);
						}
					}
				}
			}
		}
	}
	if (errors > 0) {
		$throwNew($RuntimeException, $$str({$$str(errors), " errors."_s}));
	}
	return;
}

int32_t TestConstructorParameterAnnotations::checkGetParameterAnnotations($Class* clazz, $Constructor* ctor) {
	$useLocalCurrentObjectStackCache();
	$var($String, annotationString, $Arrays::deepToString($($nc(ctor)->getParameterAnnotations())));
	$load($TestConstructorParameterAnnotations$ExpectedGetParameterAnnotations);
	$var($String, expectedString, $nc(($cast($TestConstructorParameterAnnotations$ExpectedGetParameterAnnotations, $($nc(clazz)->getAnnotation($TestConstructorParameterAnnotations$ExpectedGetParameterAnnotations::class$)))))->value());
	if (!$Objects::equals(annotationString, expectedString)) {
		$nc($System::err)->println($$str({"Annotation mismatch on "_s, ctor, "\n\tExpected:"_s, expectedString, "\n\tActual:  "_s, annotationString}));
		return 1;
	}
	return 0;
}

int32_t TestConstructorParameterAnnotations::checkGetParametersGetAnnotation($Class* clazz, $Constructor* ctor) {
	$useLocalCurrentObjectStackCache();
	int32_t errors = 0;
	int32_t i = 0;
	$load($TestConstructorParameterAnnotations$ExpectedParameterAnnotations);
	$var($TestConstructorParameterAnnotations$ExpectedParameterAnnotations, epa, $cast($TestConstructorParameterAnnotations$ExpectedParameterAnnotations, $nc(clazz)->getAnnotation($TestConstructorParameterAnnotations$ExpectedParameterAnnotations::class$)));
	{
		$var($ParameterArray, arr$, $nc(ctor)->getParameters());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Parameter, param, arr$->get(i$));
			{
				$load($TestConstructorParameterAnnotations$MarkerAnnotation);
				$var($String, annotationString, $Objects::toString($($nc(param)->getAnnotation($TestConstructorParameterAnnotations$MarkerAnnotation::class$))));
				$var($String, expectedString, $nc($($nc(epa)->value()))->get(i));
				if (!$Objects::equals(annotationString, expectedString)) {
					$nc($System::err)->println($$str({"Annotation mismatch on "_s, ctor, " on param "_s, param, "\n\tExpected:"_s, expectedString, "\n\tActual:  "_s, annotationString}));
					++errors;
				}
				++i;
			}
		}
	}
	return errors;
}

TestConstructorParameterAnnotations::TestConstructorParameterAnnotations() {
}

$Class* TestConstructorParameterAnnotations::load$($String* name, bool initialize) {
	$loadClass(TestConstructorParameterAnnotations, name, initialize, &_TestConstructorParameterAnnotations_ClassInfo_, allocate$TestConstructorParameterAnnotations);
	return class$;
}

$Class* TestConstructorParameterAnnotations::class$ = nullptr;