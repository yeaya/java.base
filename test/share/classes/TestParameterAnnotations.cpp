#include <TestParameterAnnotations.h>

#include <CustomColors.h>
#include <TestParameterAnnotations$1.h>
#include <TestParameterAnnotations$1LocalClass.h>
#include <TestParameterAnnotations$Inner.h>
#include <TestParameterAnnotations$StaticNested.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/annotation/AnnotationFormatError.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

using $CustomColors = ::CustomColors;
using $TestParameterAnnotations$1 = ::TestParameterAnnotations$1;
using $TestParameterAnnotations$1LocalClass = ::TestParameterAnnotations$1LocalClass;
using $TestParameterAnnotations$Inner = ::TestParameterAnnotations$Inner;
using $TestParameterAnnotations$StaticNested = ::TestParameterAnnotations$StaticNested;
using $ConstructorArray = $Array<::java::lang::reflect::Constructor>;
using $AnnotationArray2 = $Array<::java::lang::annotation::Annotation, 2>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Annotation = ::java::lang::annotation::Annotation;
using $AnnotationFormatError = ::java::lang::annotation::AnnotationFormatError;
using $Constructor = ::java::lang::reflect::Constructor;
using $Arrays = ::java::util::Arrays;

$MethodInfo _TestParameterAnnotations_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestParameterAnnotations::*)()>(&TestParameterAnnotations::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&TestParameterAnnotations::main))},
	{"visitCtorParameterAnnotations", "(Ljava/lang/Class;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($Class*)>(&TestParameterAnnotations::visitCtorParameterAnnotations))},
	{}
};

$InnerClassInfo _TestParameterAnnotations_InnerClassesInfo_[] = {
	{"TestParameterAnnotations$StaticNested", "TestParameterAnnotations", "StaticNested", $STATIC},
	{"TestParameterAnnotations$Inner", "TestParameterAnnotations", "Inner", 0},
	{"TestParameterAnnotations$1", nullptr, nullptr, 0},
	{"TestParameterAnnotations$1LocalClass", nullptr, "LocalClass", 0},
	{}
};

$ClassInfo _TestParameterAnnotations_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestParameterAnnotations",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestParameterAnnotations_MethodInfo_,
	nullptr,
	nullptr,
	_TestParameterAnnotations_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestParameterAnnotations$StaticNested,TestParameterAnnotations$Inner,TestParameterAnnotations$1,TestParameterAnnotations$1LocalClass"
};

$Object* allocate$TestParameterAnnotations($Class* clazz) {
	return $of($alloc(TestParameterAnnotations));
}

void TestParameterAnnotations::init$() {
}

int32_t TestParameterAnnotations::visitCtorParameterAnnotations($Class* clazz) {
	$load(TestParameterAnnotations);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	int32_t errors = 0;
	{
		$var($ConstructorArray, arr$, $nc(clazz)->getDeclaredConstructors());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Constructor, ctor, arr$->get(i$));
			{
				try {
					$init($System);
					$nc($System::out)->printf("%nNormal:  %s%nGeneric: %s%n"_s, $$new($ObjectArray, {
						$($of($nc(ctor)->toString())),
						$($of(ctor->toGenericString()))
					}));
					$var($AnnotationArray2, annotationArray, $nc(ctor)->getParameterAnnotations());
					$nc($System::out)->println($$str({"\tParameter Annotations: "_s, $($Arrays::deepToString(annotationArray))}));
				} catch ($AnnotationFormatError&) {
					$var($AnnotationFormatError, afe, $catch());
					$init($System);
					$nc($System::err)->println($$str({"\tWhoops, got an AnnotationFormatError on "_s, $($nc(ctor)->toGenericString())}));
					++errors;
				}
			}
		}
	}
	return errors;
}

void TestParameterAnnotations::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
	int32_t errors = 0;
	{
	}
	$var($Object, anonymous, $new($TestParameterAnnotations$1));
	$load($TestParameterAnnotations$Inner);
	errors += visitCtorParameterAnnotations($TestParameterAnnotations$Inner::class$);
	$load($TestParameterAnnotations$StaticNested);
	errors += visitCtorParameterAnnotations($TestParameterAnnotations$StaticNested::class$);
	$load($CustomColors);
	errors += visitCtorParameterAnnotations($CustomColors::class$);
	$load(TestParameterAnnotations);
	errors += visitCtorParameterAnnotations(TestParameterAnnotations::class$);
	$load($TestParameterAnnotations$1LocalClass);
	errors += visitCtorParameterAnnotations($TestParameterAnnotations$1LocalClass::class$);
	errors += visitCtorParameterAnnotations($of(anonymous)->getClass());
	if (errors > 0) {
		$throwNew($RuntimeException, $$str({$$str(errors), " failures calling Constructor.getParameterAnnotations"_s}));
	}
}

TestParameterAnnotations::TestParameterAnnotations() {
}

$Class* TestParameterAnnotations::load$($String* name, bool initialize) {
	$loadClass(TestParameterAnnotations, name, initialize, &_TestParameterAnnotations_ClassInfo_, allocate$TestParameterAnnotations);
	return class$;
}

$Class* TestParameterAnnotations::class$ = nullptr;