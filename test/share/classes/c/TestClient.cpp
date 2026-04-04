#include <c/TestClient.h>
#include <java/lang/ClassLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace c {

void TestClient::init$() {
}

void TestClient::main($StringArray* args) {
	$useLocalObjectStack();
	$load(TestClient);
	$beforeCallerSensitive();
	$System::getProperty("test.src"_s);
	$nc($System::out)->printf("ContextClassLoader: %s%n"_s, $$new($ObjectArray, {$($$nc($($Thread::currentThread())->getContextClassLoader())->toString())}));
}

TestClient::TestClient() {
}

$Class* TestClient::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestClient, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestClient, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"c.TestClient",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TestClient, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestClient);
	});
	return class$;
}

$Class* TestClient::class$ = nullptr;

} // c