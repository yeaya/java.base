#include <GetAnnotatedTypeTest.h>
#include <java/lang/reflect/AnnotatedType.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Parameter.h>
#include <java/lang/reflect/Type.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void GetAnnotatedTypeTest::init$() {
}

void GetAnnotatedTypeTest::meth(Object$* param) {
}

void GetAnnotatedTypeTest::main($StringArray* args) {
	$useLocalObjectStack();
	$load(GetAnnotatedTypeTest);
	$beforeCallerSensitive();
	if (!$equals($$nc($nc($nc($($$nc(GetAnnotatedTypeTest::class$->getMethod("meth"_s, $$new($ClassArray, {$Object::class$})))->getParameters()))->get(0))->getAnnotatedType())->getType(), $Object::class$)) {
		$throwNew($RuntimeException, "Parameter did not have the expected annotated type"_s);
	}
}

GetAnnotatedTypeTest::GetAnnotatedTypeTest() {
}

$Class* GetAnnotatedTypeTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GetAnnotatedTypeTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(GetAnnotatedTypeTest, main, void, $StringArray*), "java.lang.NoSuchMethodException"},
		{"meth", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(GetAnnotatedTypeTest, meth, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"GetAnnotatedTypeTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(GetAnnotatedTypeTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetAnnotatedTypeTest);
	});
	return class$;
}

$Class* GetAnnotatedTypeTest::class$ = nullptr;