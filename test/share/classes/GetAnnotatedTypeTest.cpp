#include <GetAnnotatedTypeTest.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/AnnotatedType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Parameter.h>
#include <java/lang/reflect/Type.h>
#include <jcpp.h>

using $ParameterArray = $Array<::java::lang::reflect::Parameter>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AnnotatedType = ::java::lang::reflect::AnnotatedType;
using $Executable = ::java::lang::reflect::Executable;
using $Method = ::java::lang::reflect::Method;
using $Parameter = ::java::lang::reflect::Parameter;
using $Type = ::java::lang::reflect::Type;

$MethodInfo _GetAnnotatedTypeTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GetAnnotatedTypeTest::*)()>(&GetAnnotatedTypeTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&GetAnnotatedTypeTest::main)), "java.lang.NoSuchMethodException"},
	{"meth", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
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
	$load($Object);
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