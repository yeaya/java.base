#include <EnumConstructorAnnotation.h>

#include <EnumConstructorAnnotation$SampleAnnotation.h>
#include <EnumConstructorAnnotation$SampleEnum.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Parameter.h>
#include <java/util/Arrays.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

using $EnumConstructorAnnotation$SampleAnnotation = ::EnumConstructorAnnotation$SampleAnnotation;
using $EnumConstructorAnnotation$SampleEnum = ::EnumConstructorAnnotation$SampleEnum;
using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $ConstructorArray = $Array<::java::lang::reflect::Constructor>;
using $ParameterArray = $Array<::java::lang::reflect::Parameter>;
using $AnnotationArray2 = $Array<::java::lang::annotation::Annotation, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Annotation = ::java::lang::annotation::Annotation;
using $Constructor = ::java::lang::reflect::Constructor;
using $Executable = ::java::lang::reflect::Executable;
using $Parameter = ::java::lang::reflect::Parameter;
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

$MethodInfo _EnumConstructorAnnotation_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(EnumConstructorAnnotation::*)()>(&EnumConstructorAnnotation::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&EnumConstructorAnnotation::main))},
	{}
};

$InnerClassInfo _EnumConstructorAnnotation_InnerClassesInfo_[] = {
	{"EnumConstructorAnnotation$SampleAnnotation", "EnumConstructorAnnotation", "SampleAnnotation", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{"EnumConstructorAnnotation$SampleEnum", "EnumConstructorAnnotation", "SampleEnum", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _EnumConstructorAnnotation_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"EnumConstructorAnnotation",
	"java.lang.Object",
	nullptr,
	nullptr,
	_EnumConstructorAnnotation_MethodInfo_,
	nullptr,
	nullptr,
	_EnumConstructorAnnotation_InnerClassesInfo_,
	nullptr,
	nullptr,
	"EnumConstructorAnnotation$SampleAnnotation,EnumConstructorAnnotation$SampleEnum"
};

$Object* allocate$EnumConstructorAnnotation($Class* clazz) {
	return $of($alloc(EnumConstructorAnnotation));
}

void EnumConstructorAnnotation::init$() {
}

void EnumConstructorAnnotation::main($StringArray* args) {
	$load(EnumConstructorAnnotation);
	$beforeCallerSensitive();
	$load($EnumConstructorAnnotation$SampleEnum);
	$var($Constructor, c, $nc($($EnumConstructorAnnotation$SampleEnum::class$->getDeclaredConstructors()))->get(0));
	$var($AnnotationArray, a1, $nc($nc($($nc(c)->getParameters()))->get(2))->getAnnotations());
	$var($AnnotationArray, a2, $nc($(c->getParameterAnnotations()))->get(2));
	{
		$var($Iterator, i$, $nc($($Arrays::asList($$new($AnnotationArray2, {
			a1,
			a2
		}))))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($AnnotationArray, a, $cast($AnnotationArray, i$->next()));
			{
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
}

EnumConstructorAnnotation::EnumConstructorAnnotation() {
}

$Class* EnumConstructorAnnotation::load$($String* name, bool initialize) {
	$loadClass(EnumConstructorAnnotation, name, initialize, &_EnumConstructorAnnotation_ClassInfo_, allocate$EnumConstructorAnnotation);
	return class$;
}

$Class* EnumConstructorAnnotation::class$ = nullptr;