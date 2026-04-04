#include <StaticInitializerTest.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Error.h>
#include <java/lang/reflect/Field.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $MethodInfo = ::java::lang::MethodInfo;

void StaticInitializerTest::init$() {
}

void StaticInitializerTest::main($StringArray* args) {
	$useLocalObjectStack();
	$load(StaticInitializerTest);
	$beforeCallerSensitive();
	$Class* cl = $Class::forName("Bar"_s, false, $(StaticInitializerTest::class$->getClassLoader()));
	if ($$nc(cl->getDeclaredField("obj"_s))->get(nullptr) == nullptr) {
		$throwNew($Error);
	}
}

StaticInitializerTest::StaticInitializerTest() {
}

$Class* StaticInitializerTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(StaticInitializerTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(StaticInitializerTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"StaticInitializerTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(StaticInitializerTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StaticInitializerTest);
	});
	return class$;
}

$Class* StaticInitializerTest::class$ = nullptr;