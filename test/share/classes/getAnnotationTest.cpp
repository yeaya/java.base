#include <getAnnotationTest.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/annotation/Retention.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Type.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Annotation = ::java::lang::annotation::Annotation;
using $Retention = ::java::lang::annotation::Retention;
using $Method = ::java::lang::reflect::Method;

void getAnnotationTest::init$() {
}

void getAnnotationTest::main($StringArray* args) {
	$useLocalObjectStack();
	$load(getAnnotationTest);
	$beforeCallerSensitive();
	$Class* c = $Class::forName("java.lang.annotation.Retention"_s);
	$load($Retention);
	$var($Annotation, result, c->getAnnotation($Retention::class$));
	$Class* meta_c = $of(c)->getClass();
	$var($Method, meta_getAnnotation, meta_c->getMethod("getAnnotation"_s, $$new($ClassArray, {$of($Retention::class$)->getClass()})));
	$var($Object, meta_result, $nc(meta_getAnnotation)->invoke(c, $$new($ObjectArray, {$Retention::class$})));
	if (!$nc(meta_result)->equals(result)) {
		$throwNew($RuntimeException, "Base and meta results are not equal."_s);
	}
	meta_getAnnotation->getGenericExceptionTypes();
	meta_getAnnotation->getGenericParameterTypes();
	meta_getAnnotation->getGenericReturnType();
}

getAnnotationTest::getAnnotationTest() {
}

$Class* getAnnotationTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(getAnnotationTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(getAnnotationTest, main, void, $StringArray*), "java.lang.Throwable"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"getAnnotationTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(getAnnotationTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(getAnnotationTest);
	});
	return class$;
}

$Class* getAnnotationTest::class$ = nullptr;