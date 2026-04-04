#include <NetworkInterfaceEmptyGetInetAddressesTest.h>
#include <java/net/InetAddress.h>
#include <java/net/MulticastSocket.h>
#include <java/net/NetworkInterface.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MulticastSocket = ::java::net::MulticastSocket;
using $NetworkInterface = ::java::net::NetworkInterface;

int32_t NetworkInterfaceEmptyGetInetAddressesTest::exceptionCount = 0;

void NetworkInterfaceEmptyGetInetAddressesTest::init$() {
}

void NetworkInterfaceEmptyGetInetAddressesTest::testMethods($NetworkInterface* netIf) {
	$init(NetworkInterfaceEmptyGetInetAddressesTest);
	testNetworkInterface_getInterfaceAddresses(netIf);
	if (NetworkInterfaceEmptyGetInetAddressesTest::exceptionCount > 0) {
		$throwNew($RuntimeException, "Unexpected Exceptions in test"_s);
	}
}

void NetworkInterfaceEmptyGetInetAddressesTest::testNetworkInterface_getInterfaceAddresses($NetworkInterface* netIf) {
	$init(NetworkInterfaceEmptyGetInetAddressesTest);
	try {
		$nc(netIf)->getInterfaceAddresses();
	} catch ($Exception& ex) {
		ex->printStackTrace();
		incrementExceptionCount();
	}
}

void NetworkInterfaceEmptyGetInetAddressesTest::incrementExceptionCount() {
	$init(NetworkInterfaceEmptyGetInetAddressesTest);
	++NetworkInterfaceEmptyGetInetAddressesTest::exceptionCount;
}

void NetworkInterfaceEmptyGetInetAddressesTest::main($StringArray* args) {
	$init(NetworkInterfaceEmptyGetInetAddressesTest);
	$useLocalObjectStack();
	$var($MulticastSocket, mcastSock, nullptr);
	$var($Throwable, var$0, nullptr);
	try {
		$assign(mcastSock, $new($MulticastSocket));
		$nc($System::out)->println($$str({"macst socket address == "_s, $(mcastSock->getLocalAddress())}));
		$var($NetworkInterface, netIf, mcastSock->getNetworkInterface());
		testMethods(netIf);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		if (mcastSock != nullptr) {
			mcastSock->close();
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void NetworkInterfaceEmptyGetInetAddressesTest::clinit$($Class* clazz) {
	NetworkInterfaceEmptyGetInetAddressesTest::exceptionCount = 0;
}

NetworkInterfaceEmptyGetInetAddressesTest::NetworkInterfaceEmptyGetInetAddressesTest() {
}

$Class* NetworkInterfaceEmptyGetInetAddressesTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"exceptionCount", "I", nullptr, $STATIC, $staticField(NetworkInterfaceEmptyGetInetAddressesTest, exceptionCount)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NetworkInterfaceEmptyGetInetAddressesTest, init$, void)},
		{"incrementExceptionCount", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(NetworkInterfaceEmptyGetInetAddressesTest, incrementExceptionCount, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(NetworkInterfaceEmptyGetInetAddressesTest, main, void, $StringArray*), "java.lang.Exception"},
		{"testMethods", "(Ljava/net/NetworkInterface;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(NetworkInterfaceEmptyGetInetAddressesTest, testMethods, void, $NetworkInterface*), "java.lang.Exception"},
		{"testNetworkInterface_getInterfaceAddresses", "(Ljava/net/NetworkInterface;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(NetworkInterfaceEmptyGetInetAddressesTest, testNetworkInterface_getInterfaceAddresses, void, $NetworkInterface*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"NetworkInterfaceEmptyGetInetAddressesTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NetworkInterfaceEmptyGetInetAddressesTest, name, initialize, &classInfo$$, NetworkInterfaceEmptyGetInetAddressesTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(NetworkInterfaceEmptyGetInetAddressesTest);
	});
	return class$;
}

$Class* NetworkInterfaceEmptyGetInetAddressesTest::class$ = nullptr;