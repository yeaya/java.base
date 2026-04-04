#include <AnnotationToStringTest.h>
#include <AnnotationToStringTest$AnnotationHost.h>
#include <AnnotationToStringTest$ArrayAnnotationHost.h>
#include <AnnotationToStringTest$PrimHost.h>
#include <Classy.h>
#include <ExpectedString.h>
#include <MostlyPrimitive.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/Field.h>
#include <jcpp.h>

using $AnnotationToStringTest$AnnotationHost = ::AnnotationToStringTest$AnnotationHost;
using $AnnotationToStringTest$ArrayAnnotationHost = ::AnnotationToStringTest$ArrayAnnotationHost;
using $AnnotationToStringTest$PrimHost = ::AnnotationToStringTest$PrimHost;
using $Classy = ::Classy;
using $ExpectedString = ::ExpectedString;
using $MostlyPrimitive = ::MostlyPrimitive;
using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $FieldArray = $Array<::java::lang::reflect::Field>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Annotation = ::java::lang::annotation::Annotation;
using $Field = ::java::lang::reflect::Field;

void AnnotationToStringTest::init$() {
}

void AnnotationToStringTest::main($StringArray* args) {
	$useLocalObjectStack();
	int32_t failures = 0;
	$load($AnnotationToStringTest$PrimHost);
	$load($ExpectedString);
	$var($String, var$0, $$sure($ExpectedString, $AnnotationToStringTest$PrimHost::class$->getAnnotation($ExpectedString::class$))->value());
	$load($MostlyPrimitive);
	failures += check(var$0, $($$sure($MostlyPrimitive, $AnnotationToStringTest$PrimHost::class$->getAnnotation($MostlyPrimitive::class$))->toString()));
	failures += classyTest();
	failures += arrayAnnotationTest();
	if (failures > 0) {
		$throwNew($RuntimeException, $$str({$$str(failures), " failures"_s}));
	}
}

int32_t AnnotationToStringTest::check($String* expected, $String* actual) {
	if (!$nc(expected)->equals(actual)) {
		$nc($System::err)->printf("ERROR: Expected \'\'%s\'\';%ngot             \'\'%s\'\'.\n"_s, $$new($ObjectArray, {
			expected,
			actual
		}));
		return 1;
	} else {
		return 0;
	}
}

int32_t AnnotationToStringTest::classyTest() {
	$useLocalObjectStack();
	$load(AnnotationToStringTest);
	$beforeCallerSensitive();
	int32_t failures = 0;
	{
		$load($AnnotationToStringTest$AnnotationHost);
		$var($FieldArray, arr$, $AnnotationToStringTest$AnnotationHost::class$->getFields());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Field, f, arr$->get(i$));
			{
				$load($Classy);
				$var($Annotation, a, $nc(f)->getAnnotation($Classy::class$));
				$nc($System::out)->println(a);
				$load($ExpectedString);
				$var($String, var$0, $$sure($ExpectedString, f->getAnnotation($ExpectedString::class$))->value());
				failures += check(var$0, $($nc(a)->toString()));
			}
		}
	}
	return failures;
}

int32_t AnnotationToStringTest::arrayAnnotationTest() {
	$useLocalObjectStack();
	$load(AnnotationToStringTest);
	$beforeCallerSensitive();
	int32_t failures = 0;
	{
		$load($AnnotationToStringTest$ArrayAnnotationHost);
		$var($FieldArray, arr$, $AnnotationToStringTest$ArrayAnnotationHost::class$->getFields());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Field, f, arr$->get(i$));
			{
				$var($AnnotationArray, annotations, $nc(f)->getAnnotations());
				$nc($System::out)->println($nc(annotations)->get(1));
				$var($String, var$0, $nc($cast($ExpectedString, annotations->get(0)))->value());
				failures += check(var$0, $($nc(annotations->get(1))->toString()));
			}
		}
	}
	return failures;
}

AnnotationToStringTest::AnnotationToStringTest() {
}

$Class* AnnotationToStringTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AnnotationToStringTest, init$, void)},
		{"arrayAnnotationTest", "()I", nullptr, $PRIVATE | $STATIC, $staticMethod(AnnotationToStringTest, arrayAnnotationTest, int32_t)},
		{"check", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $staticMethod(AnnotationToStringTest, check, int32_t, $String*, $String*)},
		{"classyTest", "()I", nullptr, $PRIVATE | $STATIC, $staticMethod(AnnotationToStringTest, classyTest, int32_t)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(AnnotationToStringTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"AnnotationToStringTest$ArrayAnnotationHost", "AnnotationToStringTest", "ArrayAnnotationHost", $STATIC},
		{"AnnotationToStringTest$AnnotationHost", "AnnotationToStringTest", "AnnotationHost", $STATIC},
		{"AnnotationToStringTest$PrimHost", "AnnotationToStringTest", "PrimHost", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"AnnotationToStringTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"AnnotationToStringTest$ArrayAnnotationHost,AnnotationToStringTest$AnnotationHost,AnnotationToStringTest$PrimHost"
	};
	$loadClass(AnnotationToStringTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AnnotationToStringTest);
	});
	return class$;
}

$Class* AnnotationToStringTest::class$ = nullptr;