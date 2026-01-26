#include <TypeParamAnnotation.h>

#include <ParamAnno.h>
#include <ParamAnno2.h>
#include <TypeParam.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/TypeVariable.h>
#include <jcpp.h>

using $ParamAnno = ::ParamAnno;
using $ParamAnno2 = ::ParamAnno2;
using $TypeParam = ::TypeParam;
using $ParamAnno2Array = $Array<ParamAnno2>;
using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $TypeVariableArray = $Array<::java::lang::reflect::TypeVariable>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Method = ::java::lang::reflect::Method;
using $TypeVariable = ::java::lang::reflect::TypeVariable;

$MethodInfo _TypeParamAnnotation_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TypeParamAnnotation, init$, void)},
	{"check", "(Z)V", nullptr, $PRIVATE | $STATIC, $staticMethod(TypeParamAnnotation, check, void, bool)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TypeParamAnnotation, main, void, $StringArray*), "java.lang.Exception"},
	{"testGetAnno", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TypeParamAnnotation, testGetAnno, void)},
	{"testGetAnnos", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TypeParamAnnotation, testGetAnnos, void), "java.lang.Exception"},
	{"testOnClass", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TypeParamAnnotation, testOnClass, void)},
	{"testOnMethod", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TypeParamAnnotation, testOnMethod, void), "java.lang.Exception"},
	{}
};

$ClassInfo _TypeParamAnnotation_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TypeParamAnnotation",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TypeParamAnnotation_MethodInfo_
};

$Object* allocate$TypeParamAnnotation($Class* clazz) {
	return $of($alloc(TypeParamAnnotation));
}

void TypeParamAnnotation::init$() {
}

void TypeParamAnnotation::main($StringArray* args) {
	testOnClass();
	testOnMethod();
	testGetAnno();
	testGetAnnos();
}

void TypeParamAnnotation::check(bool b) {
	if (!b) {
		$throwNew($RuntimeException);
	}
}

void TypeParamAnnotation::testOnClass() {
	$useLocalCurrentObjectStackCache();
	$load($TypeParam);
	$var($TypeVariableArray, ts, $TypeParam::class$->getTypeParameters());
	check($nc(ts)->length == 3);
	$var($AnnotationArray, as, nullptr);
	$assign(as, $nc($nc(ts)->get(0))->getAnnotations());
	check($nc(as)->length == 2);
	check($nc($($nc(($cast($ParamAnno, $nc(as)->get(0))))->value()))->equals("t"_s));
	check($nc(($cast($ParamAnno2, $nc(as)->get(1))))->value() == 1);
	$assign(as, $nc(ts->get(1))->getAnnotations());
	check($nc(as)->length == 0);
	$assign(as, $nc(ts->get(2))->getAnnotations());
	check($nc(as)->length == 2);
	check($nc($($nc(($cast($ParamAnno, $nc(as)->get(0))))->value()))->equals("v"_s));
	check($nc(($cast($ParamAnno2, $nc(as)->get(1))))->value() == 2);
}

void TypeParamAnnotation::testOnMethod() {
	$load(TypeParamAnnotation);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($TypeParam);
	$var($TypeVariableArray, ts, $nc($($TypeParam::class$->getDeclaredMethod("foo"_s, $$new($ClassArray, 0))))->getTypeParameters());
	check($nc(ts)->length == 3);
	$var($AnnotationArray, as, nullptr);
	$assign(as, $nc($nc(ts)->get(0))->getAnnotations());
	check($nc(as)->length == 2);
	check($nc($($nc(($cast($ParamAnno, $nc(as)->get(0))))->value()))->equals("x"_s));
	check($nc(($cast($ParamAnno2, $nc(as)->get(1))))->value() == 3);
	$assign(as, $nc(ts->get(1))->getAnnotations());
	check($nc(as)->length == 0);
	$assign(as, $nc(ts->get(2))->getAnnotations());
	check($nc(as)->length == 2);
	check($nc($($nc(($cast($ParamAnno, $nc(as)->get(0))))->value()))->equals("z"_s));
	check($nc(($cast($ParamAnno2, $nc(as)->get(1))))->value() == 4);
}

void TypeParamAnnotation::testGetAnno() {
	$useLocalCurrentObjectStackCache();
	$load($TypeParam);
	$var($TypeVariableArray, ts, $TypeParam::class$->getTypeParameters());
	$var($ParamAnno, a, nullptr);
	$load($ParamAnno);
	$assign(a, $cast($ParamAnno, $nc($nc(ts)->get(0))->getAnnotation($ParamAnno::class$)));
	check($nc($($nc(a)->value()))->equals("t"_s));
}

void TypeParamAnnotation::testGetAnnos() {
	$load(TypeParamAnnotation);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($TypeParam);
	$var($TypeVariableArray, ts, $nc($($TypeParam::class$->getDeclaredMethod("foo"_s, $$new($ClassArray, 0))))->getTypeParameters());
	$var($ParamAnno2Array, as, nullptr);
	$load($ParamAnno2);
	$assign(as, $fcast($ParamAnno2Array, $nc($nc(ts)->get(0))->getAnnotationsByType($ParamAnno2::class$)));
	check($nc(as)->length == 1);
	check($nc($nc(as)->get(0))->value() == 3);
}

TypeParamAnnotation::TypeParamAnnotation() {
}

$Class* TypeParamAnnotation::load$($String* name, bool initialize) {
	$loadClass(TypeParamAnnotation, name, initialize, &_TypeParamAnnotation_ClassInfo_, allocate$TypeParamAnnotation);
	return class$;
}

$Class* TypeParamAnnotation::class$ = nullptr;