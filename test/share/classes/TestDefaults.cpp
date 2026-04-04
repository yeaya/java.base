#include <TestDefaults.h>
#include <java/net/InetAddress.h>
#include <java/net/MulticastSocket.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $MulticastSocket = ::java::net::MulticastSocket;

void TestDefaults::init$() {
}

void TestDefaults::main($StringArray* args) {
	$useLocalObjectStack();
	$var($MulticastSocket, mc, $new($MulticastSocket));
	int32_t ttl = mc->getTimeToLive();
	$var($InetAddress, ia, mc->getInterface());
	bool mode = mc->getLoopbackMode();
	$nc($System::out)->println("Default multicast settings:"_s);
	$System::out->println($$str({"      ttl: "_s, $$str(ttl)}));
	$System::out->println($$str({"interface: "_s, ia}));
	$System::out->println($$str({" loopback: "_s, $$str(mode)}));
	if (ttl != 1) {
		$throwNew($Exception, "Default ttl != 1  -- test failed!!!"_s);
	}
}

TestDefaults::TestDefaults() {
}

$Class* TestDefaults::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestDefaults, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestDefaults, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestDefaults",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TestDefaults, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestDefaults);
	});
	return class$;
}

$Class* TestDefaults::class$ = nullptr;