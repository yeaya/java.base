#include <TestDefaults.h>

#include <java/net/InetAddress.h>
#include <java/net/MulticastSocket.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $MulticastSocket = ::java::net::MulticastSocket;

$MethodInfo _TestDefaults_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestDefaults::*)()>(&TestDefaults::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestDefaults::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _TestDefaults_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestDefaults",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestDefaults_MethodInfo_
};

$Object* allocate$TestDefaults($Class* clazz) {
	return $of($alloc(TestDefaults));
}

void TestDefaults::init$() {
}

void TestDefaults::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($MulticastSocket, mc, $new($MulticastSocket));
	int32_t ttl = mc->getTimeToLive();
	$var($InetAddress, ia, mc->getInterface());
	bool mode = mc->getLoopbackMode();
	$nc($System::out)->println("Default multicast settings:"_s);
	$nc($System::out)->println($$str({"      ttl: "_s, $$str(ttl)}));
	$nc($System::out)->println($$str({"interface: "_s, ia}));
	$nc($System::out)->println($$str({" loopback: "_s, $$str(mode)}));
	if (ttl != 1) {
		$throwNew($Exception, "Default ttl != 1  -- test failed!!!"_s);
	}
}

TestDefaults::TestDefaults() {
}

$Class* TestDefaults::load$($String* name, bool initialize) {
	$loadClass(TestDefaults, name, initialize, &_TestDefaults_ClassInfo_, allocate$TestDefaults);
	return class$;
}

$Class* TestDefaults::class$ = nullptr;