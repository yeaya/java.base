#include <getAnnotationTest.h>

#include <java/lang/annotation/Annotation.h>
#include <java/lang/annotation/Retention.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Type.h>
#include <jcpp.h>

using $TypeArray = $Array<::java::lang::reflect::Type>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Annotation = ::java::lang::annotation::Annotation;
using $Retention = ::java::lang::annotation::Retention;
using $Method = ::java::lang::reflect::Method;
using $Type = ::java::lang::reflect::Type;

$MethodInfo _getAnnotationTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(getAnnotationTest::*)()>(&getAnnotationTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&getAnnotationTest::main)), "java.lang.Throwable"},
	{}
};

$ClassInfo _getAnnotationTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"getAnnotationTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_getAnnotationTest_MethodInfo_
};

$Object* allocate$getAnnotationTest($Class* clazz) {
	return $of($alloc(getAnnotationTest));
}

void getAnnotationTest::init$() {
}

void getAnnotationTest::main($StringArray* args) {
	$load(getAnnotationTest);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$Class* c = $Class::forName("java.lang.annotation.Retention"_s);
	$load($Retention);
	$var($Annotation, result, $nc(c)->getAnnotation($Retention::class$));
	$Class* meta_c = $of(c)->getClass();
	$var($Method, meta_getAnnotation, $nc(meta_c)->getMethod("getAnnotation"_s, $$new($ClassArray, {$of($Retention::class$)->getClass()})));
	$var($Object, meta_result, $nc(meta_getAnnotation)->invoke(c, $$new($ObjectArray, {$of($Retention::class$)})));
	if (!$nc($of(meta_result))->equals(result)) {
		$throwNew($RuntimeException, "Base and meta results are not equal."_s);
	}
	meta_getAnnotation->getGenericExceptionTypes();
	meta_getAnnotation->getGenericParameterTypes();
	meta_getAnnotation->getGenericReturnType();
}

getAnnotationTest::getAnnotationTest() {
}

$Class* getAnnotationTest::load$($String* name, bool initialize) {
	$loadClass(getAnnotationTest, name, initialize, &_getAnnotationTest_ClassInfo_, allocate$getAnnotationTest);
	return class$;
}

$Class* getAnnotationTest::class$ = nullptr;