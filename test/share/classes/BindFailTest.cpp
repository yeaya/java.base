#include <BindFailTest.h>

#include <java/net/BindException.h>
#include <java/net/DatagramSocket.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BindException = ::java::net::BindException;
using $DatagramSocket = ::java::net::DatagramSocket;

$MethodInfo _BindFailTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(BindFailTest, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(BindFailTest, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _BindFailTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"BindFailTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_BindFailTest_MethodInfo_
};

$Object* allocate$BindFailTest($Class* clazz) {
	return $of($alloc(BindFailTest));
}

void BindFailTest::init$() {
}

void BindFailTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($DatagramSocket, s, $new($DatagramSocket));
	int32_t port = s->getLocalPort();
	for (int32_t i = 0; i < 32000; ++i) {
		try {
			$var($DatagramSocket, s2, $new($DatagramSocket, port));
		} catch ($BindException& e) {
		}
	}
}

BindFailTest::BindFailTest() {
}

$Class* BindFailTest::load$($String* name, bool initialize) {
	$loadClass(BindFailTest, name, initialize, &_BindFailTest_ClassInfo_, allocate$BindFailTest);
	return class$;
}

$Class* BindFailTest::class$ = nullptr;