#include <GetAnnotatedTypeTest.h>

#include <java/lang/reflect/AnnotatedType.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Parameter.h>
#include <java/lang/reflect/Type.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AnnotatedType = ::java::lang::reflect::AnnotatedType;
using $Method = ::java::lang::reflect::Method;
using $Parameter = ::java::lang::reflect::Parameter;

$MethodInfo _GetAnnotatedTypeTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(GetAnnotatedTypeTest, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(GetAnnotatedTypeTest, main, void, $StringArray*), "java.lang.NoSuchMethodException"},
	{"meth", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(GetAnnotatedTypeTest, meth, void, Object$*)},
	{}
};

$ClassInfo _GetAnnotatedTypeTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"GetAnnotatedTypeTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_GetAnnotatedTypeTest_MethodInfo_
};

$Object* allocate$GetAnnotatedTypeTest($Class* clazz) {
	return $of($alloc(GetAnnotatedTypeTest));
}

void GetAnnotatedTypeTest::init$() {
}

void GetAnnotatedTypeTest::meth(Object$* param) {
}

void GetAnnotatedTypeTest::main($StringArray* args) {
	$load(GetAnnotatedTypeTest);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (!$equals($nc($($nc($nc($($nc($(GetAnnotatedTypeTest::class$->getMethod("meth"_s, $$new($ClassArray, {$Object::class$}))))->getParameters()))->get(0))->getAnnotatedType()))->getType(), $Object::class$)) {
		$throwNew($RuntimeException, "Parameter did not have the expected annotated type"_s);
	}
}

GetAnnotatedTypeTest::GetAnnotatedTypeTest() {
}

$Class* GetAnnotatedTypeTest::load$($String* name, bool initialize) {
	$loadClass(GetAnnotatedTypeTest, name, initialize, &_GetAnnotatedTypeTest_ClassInfo_, allocate$GetAnnotatedTypeTest);
	return class$;
}

$Class* GetAnnotatedTypeTest::class$ = nullptr;