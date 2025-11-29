#include <TestConstructorParameterTypeAnnotations.h>

#include <TestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations.h>
#include <TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations.h>
#include <TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation.h>
#include <TestConstructorParameterTypeAnnotations$NestedClass0.h>
#include <TestConstructorParameterTypeAnnotations$NestedClass1.h>
#include <TestConstructorParameterTypeAnnotations$NestedClass2.h>
#include <TestConstructorParameterTypeAnnotations$NestedClass3.h>
#include <TestConstructorParameterTypeAnnotations$NestedClass4.h>
#include <TestConstructorParameterTypeAnnotations$StaticNestedClass0.h>
#include <TestConstructorParameterTypeAnnotations$StaticNestedClass1.h>
#include <TestConstructorParameterTypeAnnotations$StaticNestedClass2.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/AnnotatedType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/util/Arrays.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $TestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations = ::TestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations;
using $TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations = ::TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations;
using $TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation = ::TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation;
using $TestConstructorParameterTypeAnnotations$NestedClass0 = ::TestConstructorParameterTypeAnnotations$NestedClass0;
using $TestConstructorParameterTypeAnnotations$NestedClass1 = ::TestConstructorParameterTypeAnnotations$NestedClass1;
using $TestConstructorParameterTypeAnnotations$NestedClass2 = ::TestConstructorParameterTypeAnnotations$NestedClass2;
using $TestConstructorParameterTypeAnnotations$NestedClass3 = ::TestConstructorParameterTypeAnnotations$NestedClass3;
using $TestConstructorParameterTypeAnnotations$NestedClass4 = ::TestConstructorParameterTypeAnnotations$NestedClass4;
using $TestConstructorParameterTypeAnnotations$StaticNestedClass0 = ::TestConstructorParameterTypeAnnotations$StaticNestedClass0;
using $TestConstructorParameterTypeAnnotations$StaticNestedClass1 = ::TestConstructorParameterTypeAnnotations$StaticNestedClass1;
using $TestConstructorParameterTypeAnnotations$StaticNestedClass2 = ::TestConstructorParameterTypeAnnotations$StaticNestedClass2;
using $AnnotatedTypeArray = $Array<::java::lang::reflect::AnnotatedType>;
using $ConstructorArray = $Array<::java::lang::reflect::Constructor>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AnnotatedType = ::java::lang::reflect::AnnotatedType;
using $Constructor = ::java::lang::reflect::Constructor;
using $Arrays = ::java::util::Arrays;
using $Objects = ::java::util::Objects;

$MethodInfo _TestConstructorParameterTypeAnnotations_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestConstructorParameterTypeAnnotations::*)()>(&TestConstructorParameterTypeAnnotations::init$))},
	{"checkGetAnnotatedParametersGetAnnotation", "(Ljava/lang/Class;Ljava/lang/reflect/Constructor;)I", "(Ljava/lang/Class<*>;Ljava/lang/reflect/Constructor<*>;)I", $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($Class*,$Constructor*)>(&TestConstructorParameterTypeAnnotations::checkGetAnnotatedParametersGetAnnotation))},
	{"checkGetParameterAnnotations", "(Ljava/lang/Class;Ljava/lang/reflect/Constructor;)I", "(Ljava/lang/Class<*>;Ljava/lang/reflect/Constructor<*>;)I", $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($Class*,$Constructor*)>(&TestConstructorParameterTypeAnnotations::checkGetParameterAnnotations))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&TestConstructorParameterTypeAnnotations::main))},
	{}
};

$InnerClassInfo _TestConstructorParameterTypeAnnotations_InnerClassesInfo_[] = {
	{"TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations", "TestConstructorParameterTypeAnnotations", "ExpectedParameterTypeAnnotations", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{"TestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations", "TestConstructorParameterTypeAnnotations", "ExpectedGetParameterAnnotations", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{"TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation", "TestConstructorParameterTypeAnnotations", "MarkerTypeAnnotation", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{"TestConstructorParameterTypeAnnotations$StaticNestedClass4", "TestConstructorParameterTypeAnnotations", "StaticNestedClass4", $PUBLIC | $STATIC},
	{"TestConstructorParameterTypeAnnotations$StaticNestedClass3", "TestConstructorParameterTypeAnnotations", "StaticNestedClass3", $PUBLIC | $STATIC},
	{"TestConstructorParameterTypeAnnotations$StaticNestedClass2", "TestConstructorParameterTypeAnnotations", "StaticNestedClass2", $PUBLIC | $STATIC},
	{"TestConstructorParameterTypeAnnotations$StaticNestedClass1", "TestConstructorParameterTypeAnnotations", "StaticNestedClass1", $PUBLIC | $STATIC},
	{"TestConstructorParameterTypeAnnotations$StaticNestedClass0", "TestConstructorParameterTypeAnnotations", "StaticNestedClass0", $PUBLIC | $STATIC},
	{"TestConstructorParameterTypeAnnotations$NestedClass4", "TestConstructorParameterTypeAnnotations", "NestedClass4", $PUBLIC},
	{"TestConstructorParameterTypeAnnotations$NestedClass3", "TestConstructorParameterTypeAnnotations", "NestedClass3", $PUBLIC},
	{"TestConstructorParameterTypeAnnotations$NestedClass2", "TestConstructorParameterTypeAnnotations", "NestedClass2", $PUBLIC},
	{"TestConstructorParameterTypeAnnotations$NestedClass1", "TestConstructorParameterTypeAnnotations", "NestedClass1", $PUBLIC},
	{"TestConstructorParameterTypeAnnotations$NestedClass0", "TestConstructorParameterTypeAnnotations", "NestedClass0", $PUBLIC},
	{}
};

$ClassInfo _TestConstructorParameterTypeAnnotations_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestConstructorParameterTypeAnnotations",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestConstructorParameterTypeAnnotations_MethodInfo_,
	nullptr,
	nullptr,
	_TestConstructorParameterTypeAnnotations_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations,TestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations,TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation,TestConstructorParameterTypeAnnotations$StaticNestedClass4,TestConstructorParameterTypeAnnotations$StaticNestedClass3,TestConstructorParameterTypeAnnotations$StaticNestedClass2,TestConstructorParameterTypeAnnotations$StaticNestedClass1,TestConstructorParameterTypeAnnotations$StaticNestedClass0,TestConstructorParameterTypeAnnotations$NestedClass4,TestConstructorParameterTypeAnnotations$NestedClass3,TestConstructorParameterTypeAnnotations$NestedClass2,TestConstructorParameterTypeAnnotations$NestedClass1,TestConstructorParameterTypeAnnotations$NestedClass0"
};

$Object* allocate$TestConstructorParameterTypeAnnotations($Class* clazz) {
	return $of($alloc(TestConstructorParameterTypeAnnotations));
}

void TestConstructorParameterTypeAnnotations::init$() {
}

void TestConstructorParameterTypeAnnotations::main($StringArray* args) {
	$load(TestConstructorParameterTypeAnnotations);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	int32_t errors = 0;
	$load($TestConstructorParameterTypeAnnotations$NestedClass0);
	$load($TestConstructorParameterTypeAnnotations$NestedClass1);
	$load($TestConstructorParameterTypeAnnotations$NestedClass2);
	$load($TestConstructorParameterTypeAnnotations$NestedClass3);
	$load($TestConstructorParameterTypeAnnotations$NestedClass4);
	$load($TestConstructorParameterTypeAnnotations$StaticNestedClass0);
	$load($TestConstructorParameterTypeAnnotations$StaticNestedClass1);
	$load($TestConstructorParameterTypeAnnotations$StaticNestedClass2);
	$var($ClassArray, classes, $new($ClassArray, {
		$TestConstructorParameterTypeAnnotations$NestedClass0::class$,
		$TestConstructorParameterTypeAnnotations$NestedClass1::class$,
		$TestConstructorParameterTypeAnnotations$NestedClass2::class$,
		$TestConstructorParameterTypeAnnotations$NestedClass3::class$,
		$TestConstructorParameterTypeAnnotations$NestedClass4::class$,
		$TestConstructorParameterTypeAnnotations$StaticNestedClass0::class$,
		$TestConstructorParameterTypeAnnotations$StaticNestedClass1::class$,
		$TestConstructorParameterTypeAnnotations$StaticNestedClass2::class$
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
							errors += checkGetAnnotatedParametersGetAnnotation(clazz, ctor);
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

int32_t TestConstructorParameterTypeAnnotations::checkGetParameterAnnotations($Class* clazz, $Constructor* ctor) {
	$useLocalCurrentObjectStackCache();
	$var($String, annotationString, $Arrays::deepToString($($nc(ctor)->getParameterAnnotations())));
	$load($TestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations);
	$var($String, expectedString, $nc(($cast($TestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations, $($nc(clazz)->getAnnotation($TestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations::class$)))))->value());
	if (!$Objects::equals(annotationString, expectedString)) {
		$nc($System::err)->println($$str({"Annotation mismatch on "_s, ctor, "\n\tExpected:"_s, expectedString, "\n\tActual:  "_s, annotationString}));
		return 1;
	}
	return 0;
}

int32_t TestConstructorParameterTypeAnnotations::checkGetAnnotatedParametersGetAnnotation($Class* clazz, $Constructor* ctor) {
	$useLocalCurrentObjectStackCache();
	int32_t errors = 0;
	int32_t i = 0;
	$load($TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations);
	$var($TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations, epa, $cast($TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations, $nc(clazz)->getAnnotation($TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations::class$)));
	{
		$var($AnnotatedTypeArray, arr$, $nc(ctor)->getAnnotatedParameterTypes());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($AnnotatedType, param, arr$->get(i$));
			{
				$load($TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation);
				$var($String, annotationString, $Objects::toString($($nc(param)->getAnnotation($TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation::class$))));
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

TestConstructorParameterTypeAnnotations::TestConstructorParameterTypeAnnotations() {
}

$Class* TestConstructorParameterTypeAnnotations::load$($String* name, bool initialize) {
	$loadClass(TestConstructorParameterTypeAnnotations, name, initialize, &_TestConstructorParameterTypeAnnotations_ClassInfo_, allocate$TestConstructorParameterTypeAnnotations);
	return class$;
}

$Class* TestConstructorParameterTypeAnnotations::class$ = nullptr;