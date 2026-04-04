#include <TestParameterAnnotations.h>
#include <CustomColors.h>
#include <TestParameterAnnotations$1.h>
#include <TestParameterAnnotations$1LocalClass.h>
#include <TestParameterAnnotations$Inner.h>
#include <TestParameterAnnotations$StaticNested.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/annotation/AnnotationFormatError.h>
#include <java/lang/reflect/Constructor.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

using $CustomColors = ::CustomColors;
using $TestParameterAnnotations$1 = ::TestParameterAnnotations$1;
using $TestParameterAnnotations$1LocalClass = ::TestParameterAnnotations$1LocalClass;
using $TestParameterAnnotations$Inner = ::TestParameterAnnotations$Inner;
using $TestParameterAnnotations$StaticNested = ::TestParameterAnnotations$StaticNested;
using $ConstructorArray = $Array<::java::lang::reflect::Constructor>;
using $AnnotationArray2 = $Array<::java::lang::annotation::Annotation, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AnnotationFormatError = ::java::lang::annotation::AnnotationFormatError;
using $Constructor = ::java::lang::reflect::Constructor;
using $Arrays = ::java::util::Arrays;

void TestParameterAnnotations::init$() {
}

int32_t TestParameterAnnotations::visitCtorParameterAnnotations($Class* clazz) {
	$useLocalObjectStack();
	$load(TestParameterAnnotations);
	$beforeCallerSensitive();
	int32_t errors = 0;
	{
		$var($ConstructorArray, arr$, $nc(clazz)->getDeclaredConstructors());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Constructor, ctor, arr$->get(i$));
			try {
				$nc($System::out)->printf("%nNormal:  %s%nGeneric: %s%n"_s, $$new($ObjectArray, {
					$($nc(ctor)->toString()),
					$($nc(ctor)->toGenericString())
				}));
				$var($AnnotationArray2, annotationArray, ctor->getParameterAnnotations());
				$System::out->println($$str({"\tParameter Annotations: "_s, $($Arrays::deepToString(annotationArray))}));
			} catch ($AnnotationFormatError& afe) {
				$nc($System::err)->println($$str({"\tWhoops, got an AnnotationFormatError on "_s, $($nc(ctor)->toGenericString())}));
				++errors;
			}
		}
	}
	return errors;
}

void TestParameterAnnotations::main($StringArray* argv) {
	$useLocalObjectStack();
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
	errors += visitCtorParameterAnnotations(anonymous->getClass());
	if (errors > 0) {
		$throwNew($RuntimeException, $$str({$$str(errors), " failures calling Constructor.getParameterAnnotations"_s}));
	}
}

TestParameterAnnotations::TestParameterAnnotations() {
}

$Class* TestParameterAnnotations::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestParameterAnnotations, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(TestParameterAnnotations, main, void, $StringArray*)},
		{"visitCtorParameterAnnotations", "(Ljava/lang/Class;)I", nullptr, $STATIC, $staticMethod(TestParameterAnnotations, visitCtorParameterAnnotations, int32_t, $Class*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestParameterAnnotations$StaticNested", "TestParameterAnnotations", "StaticNested", $STATIC},
		{"TestParameterAnnotations$Inner", "TestParameterAnnotations", "Inner", 0},
		{"TestParameterAnnotations$1", nullptr, nullptr, 0},
		{"TestParameterAnnotations$1LocalClass", nullptr, "LocalClass", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestParameterAnnotations",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TestParameterAnnotations$StaticNested,TestParameterAnnotations$Inner,TestParameterAnnotations$1,TestParameterAnnotations$1LocalClass"
	};
	$loadClass(TestParameterAnnotations, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestParameterAnnotations);
	});
	return class$;
}

$Class* TestParameterAnnotations::class$ = nullptr;