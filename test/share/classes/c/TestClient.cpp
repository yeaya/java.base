#include <c/TestClient.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $MethodInfo = ::java::lang::MethodInfo;

namespace c {

$MethodInfo _TestClient_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestClient::*)()>(&TestClient::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestClient::main))},
	{}
};

$ClassInfo _TestClient_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"c.TestClient",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestClient_MethodInfo_
};

$Object* allocate$TestClient($Class* clazz) {
	return $of($alloc(TestClient));
}

void TestClient::init$() {
}

void TestClient::main($StringArray* args) {
	$load(TestClient);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$System::getProperty("test.src"_s);
	$nc($System::out)->printf("ContextClassLoader: %s%n"_s, $$new($ObjectArray, {$($of($nc($of($($($Thread::currentThread())->getContextClassLoader())))->toString()))}));
}

TestClient::TestClient() {
}

$Class* TestClient::load$($String* name, bool initialize) {
	$loadClass(TestClient, name, initialize, &_TestClient_ClassInfo_, allocate$TestClient);
	return class$;
}

$Class* TestClient::class$ = nullptr;

} // c