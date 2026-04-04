#include <EnumConstructorAnnotation.h>
#include <EnumConstructorAnnotation$SampleAnnotation.h>
#include <EnumConstructorAnnotation$SampleEnum.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Parameter.h>
#include <java/util/Arrays.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

using $EnumConstructorAnnotation$SampleAnnotation = ::EnumConstructorAnnotation$SampleAnnotation;
using $EnumConstructorAnnotation$SampleEnum = ::EnumConstructorAnnotation$SampleEnum;
using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $AnnotationArray2 = $Array<::java::lang::annotation::Annotation, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Constructor = ::java::lang::reflect::Constructor;
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;

void EnumConstructorAnnotation::init$() {
}

void EnumConstructorAnnotation::main($StringArray* args) {
	$useLocalObjectStack();
	$load(EnumConstructorAnnotation);
	$beforeCallerSensitive();
	$load($EnumConstructorAnnotation$SampleEnum);
	$var($Constructor, c, $nc($($EnumConstructorAnnotation$SampleEnum::class$->getDeclaredConstructors()))->get(0));
	$var($AnnotationArray, a1, $nc($nc($($nc(c)->getParameters()))->get(2))->getAnnotations());
	$var($AnnotationArray, a2, $nc($(c->getParameterAnnotations()))->get(2));
	{
		$var($Iterator, i$, $$nc($Arrays::asList($$new($AnnotationArray2, {
			a1,
			a2
		})))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($AnnotationArray, a, $cast($AnnotationArray, i$->next()));
			if ($nc(a)->length != 1) {
				$throwNew($RuntimeException, $$str({"Unexpected length "_s, $$str(a->length)}));
			} else {
				$load($EnumConstructorAnnotation$SampleAnnotation);
				if ($nc(a->get(0))->annotationType() != $EnumConstructorAnnotation$SampleAnnotation::class$) {
					$throwNew($RuntimeException, $$str({"Unexpected type "_s, a->get(0)}));
				}
			}
		}
	}
}

EnumConstructorAnnotation::EnumConstructorAnnotation() {
}

$Class* EnumConstructorAnnotation::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(EnumConstructorAnnotation, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(EnumConstructorAnnotation, main, void, $StringArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"EnumConstructorAnnotation$SampleAnnotation", "EnumConstructorAnnotation", "SampleAnnotation", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
		{"EnumConstructorAnnotation$SampleEnum", "EnumConstructorAnnotation", "SampleEnum", $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"EnumConstructorAnnotation",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"EnumConstructorAnnotation$SampleAnnotation,EnumConstructorAnnotation$SampleEnum"
	};
	$loadClass(EnumConstructorAnnotation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EnumConstructorAnnotation);
	});
	return class$;
}

$Class* EnumConstructorAnnotation::class$ = nullptr;