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
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Annotation = ::java::lang::annotation::Annotation;
using $AccessibleObject = ::java::lang::reflect::AccessibleObject;
using $Field = ::java::lang::reflect::Field;

$MethodInfo _AnnotationToStringTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AnnotationToStringTest::*)()>(&AnnotationToStringTest::init$))},
	{"arrayAnnotationTest", "()I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)()>(&AnnotationToStringTest::arrayAnnotationTest))},
	{"check", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*,$String*)>(&AnnotationToStringTest::check))},
	{"classyTest", "()I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)()>(&AnnotationToStringTest::classyTest))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&AnnotationToStringTest::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _AnnotationToStringTest_InnerClassesInfo_[] = {
	{"AnnotationToStringTest$ArrayAnnotationHost", "AnnotationToStringTest", "ArrayAnnotationHost", $STATIC},
	{"AnnotationToStringTest$AnnotationHost", "AnnotationToStringTest", "AnnotationHost", $STATIC},
	{"AnnotationToStringTest$PrimHost", "AnnotationToStringTest", "PrimHost", $STATIC},
	{}
};

$ClassInfo _AnnotationToStringTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"AnnotationToStringTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_AnnotationToStringTest_MethodInfo_,
	nullptr,
	nullptr,
	_AnnotationToStringTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"AnnotationToStringTest$ArrayAnnotationHost,AnnotationToStringTest$AnnotationHost,AnnotationToStringTest$PrimHost"
};

$Object* allocate$AnnotationToStringTest($Class* clazz) {
	return $of($alloc(AnnotationToStringTest));
}

void AnnotationToStringTest::init$() {
}

void AnnotationToStringTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	int32_t failures = 0;
	$load($AnnotationToStringTest$PrimHost);
	$load($ExpectedString);
	$var($String, var$0, $nc(($cast($ExpectedString, $($AnnotationToStringTest$PrimHost::class$->getAnnotation($ExpectedString::class$)))))->value());
	$load($MostlyPrimitive);
	failures += check(var$0, $($nc($of(($cast($MostlyPrimitive, $($AnnotationToStringTest$PrimHost::class$->getAnnotation($MostlyPrimitive::class$))))))->toString()));
	failures += classyTest();
	failures += arrayAnnotationTest();
	if (failures > 0) {
		$throwNew($RuntimeException, $$str({$$str(failures), " failures"_s}));
	}
}

int32_t AnnotationToStringTest::check($String* expected, $String* actual) {
	if (!$nc(expected)->equals(actual)) {
		$nc($System::err)->printf("ERROR: Expected \'\'%s\'\';%ngot             \'\'%s\'\'.\n"_s, $$new($ObjectArray, {
			$of(expected),
			$of(actual)
		}));
		return 1;
	} else {
		return 0;
	}
}

int32_t AnnotationToStringTest::classyTest() {
	$load(AnnotationToStringTest);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	int32_t failures = 0;
	{
		$load($AnnotationToStringTest$AnnotationHost);
		$var($FieldArray, arr$, $AnnotationToStringTest$AnnotationHost::class$->getFields());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Field, f, arr$->get(i$));
			{
				$load($Classy);
				$var($Annotation, a, $nc(f)->getAnnotation($Classy::class$));
				$nc($System::out)->println($of(a));
				$load($ExpectedString);
				$var($String, var$0, $nc(($cast($ExpectedString, $(f->getAnnotation($ExpectedString::class$)))))->value());
				failures += check(var$0, $($nc(a)->toString()));
			}
		}
	}
	return failures;
}

int32_t AnnotationToStringTest::arrayAnnotationTest() {
	$load(AnnotationToStringTest);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	int32_t failures = 0;
	{
		$load($AnnotationToStringTest$ArrayAnnotationHost);
		$var($FieldArray, arr$, $AnnotationToStringTest$ArrayAnnotationHost::class$->getFields());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Field, f, arr$->get(i$));
			{
				$var($AnnotationArray, annotations, $nc(f)->getAnnotations());
				$nc($System::out)->println($of($nc(annotations)->get(1)));
				$var($String, var$0, $nc(($cast($ExpectedString, $nc(annotations)->get(0))))->value());
				failures += check(var$0, $($nc(annotations->get(1))->toString()));
			}
		}
	}
	return failures;
}

AnnotationToStringTest::AnnotationToStringTest() {
}

$Class* AnnotationToStringTest::load$($String* name, bool initialize) {
	$loadClass(AnnotationToStringTest, name, initialize, &_AnnotationToStringTest_ClassInfo_, allocate$AnnotationToStringTest);
	return class$;
}

$Class* AnnotationToStringTest::class$ = nullptr;