#include <NetworkInterfaceEmptyGetInetAddressesTest.h>

#include <java/net/InetAddress.h>
#include <java/net/MulticastSocket.h>
#include <java/net/NetworkInterface.h>
#include <java/util/List.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MulticastSocket = ::java::net::MulticastSocket;
using $NetworkInterface = ::java::net::NetworkInterface;

$FieldInfo _NetworkInterfaceEmptyGetInetAddressesTest_FieldInfo_[] = {
	{"exceptionCount", "I", nullptr, $STATIC, $staticField(NetworkInterfaceEmptyGetInetAddressesTest, exceptionCount)},
	{}
};

$MethodInfo _NetworkInterfaceEmptyGetInetAddressesTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NetworkInterfaceEmptyGetInetAddressesTest::*)()>(&NetworkInterfaceEmptyGetInetAddressesTest::init$))},
	{"incrementExceptionCount", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&NetworkInterfaceEmptyGetInetAddressesTest::incrementExceptionCount))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&NetworkInterfaceEmptyGetInetAddressesTest::main)), "java.lang.Exception"},
	{"testMethods", "(Ljava/net/NetworkInterface;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($NetworkInterface*)>(&NetworkInterfaceEmptyGetInetAddressesTest::testMethods)), "java.lang.Exception"},
	{"testNetworkInterface_getInterfaceAddresses", "(Ljava/net/NetworkInterface;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($NetworkInterface*)>(&NetworkInterfaceEmptyGetInetAddressesTest::testNetworkInterface_getInterfaceAddresses))},
	{}
};

$ClassInfo _NetworkInterfaceEmptyGetInetAddressesTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NetworkInterfaceEmptyGetInetAddressesTest",
	"java.lang.Object",
	nullptr,
	_NetworkInterfaceEmptyGetInetAddressesTest_FieldInfo_,
	_NetworkInterfaceEmptyGetInetAddressesTest_MethodInfo_
};

$Object* allocate$NetworkInterfaceEmptyGetInetAddressesTest($Class* clazz) {
	return $of($alloc(NetworkInterfaceEmptyGetInetAddressesTest));
}

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
	$useLocalCurrentObjectStackCache();
	$var($MulticastSocket, mcastSock, nullptr);
	{
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
}

void clinit$NetworkInterfaceEmptyGetInetAddressesTest($Class* class$) {
	NetworkInterfaceEmptyGetInetAddressesTest::exceptionCount = 0;
}

NetworkInterfaceEmptyGetInetAddressesTest::NetworkInterfaceEmptyGetInetAddressesTest() {
}

$Class* NetworkInterfaceEmptyGetInetAddressesTest::load$($String* name, bool initialize) {
	$loadClass(NetworkInterfaceEmptyGetInetAddressesTest, name, initialize, &_NetworkInterfaceEmptyGetInetAddressesTest_ClassInfo_, clinit$NetworkInterfaceEmptyGetInetAddressesTest, allocate$NetworkInterfaceEmptyGetInetAddressesTest);
	return class$;
}

$Class* NetworkInterfaceEmptyGetInetAddressesTest::class$ = nullptr;