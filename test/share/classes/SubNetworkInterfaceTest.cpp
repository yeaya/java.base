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
using $Collections = ::java::util::Collections;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;

void SubNetworkInterfaceTest::init$() {
}

void SubNetworkInterfaceTest::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Enumeration, nets, $NetworkInterface::getNetworkInterfaces());
	{
		$var($Iterator, i$, $$nc($Collections::list(nets))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($NetworkInterface, netIf, $cast($NetworkInterface, i$->next()));
			{
				doReverseLookup(netIf);
			}
		}
	}
}

void SubNetworkInterfaceTest::doReverseLookup($NetworkInterface* netIf) {
	$useLocalObjectStack();
	$var($Iterator, i$, $$nc($Collections::list($($nc(netIf)->getSubInterfaces())))->iterator());
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

SubNetworkInterfaceTest::SubNetworkInterfaceTest() {
}

$Class* SubNetworkInterfaceTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SubNetworkInterfaceTest, init$, void)},
		{"doReverseLookup", "(Ljava/net/NetworkInterface;)V", nullptr, $STATIC, $staticMethod(SubNetworkInterfaceTest, doReverseLookup, void, $NetworkInterface*), "java.net.SocketException,java.net.UnknownHostException"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SubNetworkInterfaceTest, main, void, $StringArray*), "java.net.SocketException,java.net.UnknownHostException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"SubNetworkInterfaceTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SubNetworkInterfaceTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SubNetworkInterfaceTest);
	});
	return class$;
}

$Class* SubNetworkInterfaceTest::class$ = nullptr;