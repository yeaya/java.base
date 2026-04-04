#include <BindFailTest.h>
#include <java/net/BindException.h>
#include <java/net/DatagramSocket.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BindException = ::java::net::BindException;
using $DatagramSocket = ::java::net::DatagramSocket;

void BindFailTest::init$() {
}

void BindFailTest::main($StringArray* args) {
	$useLocalObjectStack();
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BindFailTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(BindFailTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"BindFailTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(BindFailTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BindFailTest);
	});
	return class$;
}

$Class* BindFailTest::class$ = nullptr;