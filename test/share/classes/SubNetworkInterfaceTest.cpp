#include <SubNetworkInterfaceTest.h>

#include <java/net/InetAddress.h>
#include <java/net/NetworkInterface.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $NetworkInterface = ::java::net::NetworkInterface;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;

$MethodInfo _SubNetworkInterfaceTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SubNetworkInterfaceTest::*)()>(&SubNetworkInterfaceTest::init$))},
	{"doReverseLookup", "(Ljava/net/NetworkInterface;)V", nullptr, $STATIC, $method(static_cast<void(*)($NetworkInterface*)>(&SubNetworkInterfaceTest::doReverseLookup)), "java.net.SocketException,java.net.UnknownHostException"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&SubNetworkInterfaceTest::main)), "java.net.SocketException,java.net.UnknownHostException"},
	{}
};

$ClassInfo _SubNetworkInterfaceTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SubNetworkInterfaceTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SubNetworkInterfaceTest_MethodInfo_
};

$Object* allocate$SubNetworkInterfaceTest($Class* clazz) {
	return $of($alloc(SubNetworkInterfaceTest));
}

void SubNetworkInterfaceTest::init$() {
}

void SubNetworkInterfaceTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Enumeration, nets, $NetworkInterface::getNetworkInterfaces());
	{
		$var($Iterator, i$, $nc($($Collections::list(nets)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($NetworkInterface, netIf, $cast($NetworkInterface, i$->next()));
			{
				doReverseLookup(netIf);
			}
		}
	}
}

void SubNetworkInterfaceTest::doReverseLookup($NetworkInterface* netIf) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($Collections::list($($nc(netIf)->getSubInterfaces()))))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($NetworkInterface, subIf, $cast($NetworkInterface, i$->next()));
			{
				$var($Enumeration, subInetAddresses, $nc(subIf)->getInetAddresses());
				while (subInetAddresses != nullptr && subInetAddresses->hasMoreElements()) {
					$var($InetAddress, inetAddress, $cast($InetAddress, subInetAddresses->nextElement()));
					$var($String, reversalString, $nc(inetAddress)->getHostAddress());
					$InetAddress::getByName(reversalString);
				}
			}
		}
	}
}

SubNetworkInterfaceTest::SubNetworkInterfaceTest() {
}

$Class* SubNetworkInterfaceTest::load$($String* name, bool initialize) {
	$loadClass(SubNetworkInterfaceTest, name, initialize, &_SubNetworkInterfaceTest_ClassInfo_, allocate$SubNetworkInterfaceTest);
	return class$;
}

$Class* SubNetworkInterfaceTest::class$ = nullptr;