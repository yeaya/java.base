#include <NetParamsTest.h>
#include <java/net/InterfaceAddress.h>
#include <java/net/NetworkInterface.h>
#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $InterfaceAddress = ::java::net::InterfaceAddress;
using $NetworkInterface = ::java::net::NetworkInterface;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

void NetParamsTest::init$() {
}

void NetParamsTest::printIF($NetworkInterface* netif) {
	$useLocalObjectStack();
	$nc($System::out)->println($$str({$($nc(netif)->getName()), " : "_s}));
	$System::out->println($$str({"\tStatus: "_s, (netif->isUp() ? " UP"_s : "DOWN"_s)}));
	$var($bytes, mac, netif->getHardwareAddress());
	if (mac != nullptr) {
		$System::out->print("\tHardware Address: "_s);
		{
			$var($bytes, arr$, mac);
			for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
				int8_t b = arr$->get(i$);
				{
					$System::out->print($$str({$($Integer::toHexString(b)), ":"_s}));
				}
			}
		}
		$System::out->println();
	}
	$System::out->println($$str({"\tLoopback: "_s, $$str(netif->isLoopback())}));
	$System::out->println($$str({"\tPoint to Point: "_s, $$str(netif->isPointToPoint())}));
	$System::out->println($$str({"\tVirtual: "_s, $$str(netif->isVirtual())}));
	if (netif->isVirtual()) {
		$var($NetworkInterface, parent, netif->getParent());
		$var($String, parentName, parent == nullptr ? "null"_s : parent->getName());
		$System::out->println($$str({"\tParent Interface: "_s, parentName}));
	}
	$System::out->println($$str({"\tMulticast: "_s, $$str(netif->supportsMulticast())}));
	$System::out->println($$str({"\tMTU: "_s, $$str(netif->getMTU())}));
	$System::out->println("\tBindings:"_s);
	$var($List, binds, netif->getInterfaceAddresses());
	{
		$var($Iterator, i$, $nc(binds)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($InterfaceAddress, b, $cast($InterfaceAddress, i$->next()));
			{
				$System::out->println($$str({"\t\t"_s, b}));
			}
		}
	}
	$var($Enumeration, ifs, netif->getSubInterfaces());
	while ($nc(ifs)->hasMoreElements()) {
		$var($NetworkInterface, subif, $cast($NetworkInterface, ifs->nextElement()));
		printIF(subif);
	}
}

void NetParamsTest::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Enumeration, ifs, $NetworkInterface::getNetworkInterfaces());
	while ($nc(ifs)->hasMoreElements()) {
		$var($NetworkInterface, netif, $cast($NetworkInterface, ifs->nextElement()));
		printIF(netif);
	}
}

NetParamsTest::NetParamsTest() {
}

$Class* NetParamsTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NetParamsTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(NetParamsTest, main, void, $StringArray*), "java.lang.Exception"},
		{"printIF", "(Ljava/net/NetworkInterface;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(NetParamsTest, printIF, void, $NetworkInterface*), "java.net.SocketException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"NetParamsTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(NetParamsTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NetParamsTest);
	});
	return class$;
}

$Class* NetParamsTest::class$ = nullptr;