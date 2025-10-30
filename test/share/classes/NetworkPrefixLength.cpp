#include <NetworkPrefixLength.h>

#include <java/net/Inet4Address.h>
#include <java/net/InetAddress.h>
#include <java/net/InterfaceAddress.h>
#include <java/net/NetworkInterface.h>
#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Inet4Address = ::java::net::Inet4Address;
using $InetAddress = ::java::net::InetAddress;
using $InterfaceAddress = ::java::net::InterfaceAddress;
using $NetworkInterface = ::java::net::NetworkInterface;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

$FieldInfo _NetworkPrefixLength_FieldInfo_[] = {
	{"passed", "Z", nullptr, $STATIC, $staticField(NetworkPrefixLength, passed)},
	{}
};

$MethodInfo _NetworkPrefixLength_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NetworkPrefixLength::*)()>(&NetworkPrefixLength::init$))},
	{"checkIPv4PrefixLength", "(I)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int32_t)>(&NetworkPrefixLength::checkIPv4PrefixLength))},
	{"checkIPv6PrefixLength", "(I)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int32_t)>(&NetworkPrefixLength::checkIPv6PrefixLength))},
	{"checkPrefix", "(Ljava/net/InterfaceAddress;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($InterfaceAddress*)>(&NetworkPrefixLength::checkPrefix))},
	{"debug", "(Ljava/lang/String;Ljava/net/InterfaceAddress;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,$InterfaceAddress*)>(&NetworkPrefixLength::debug))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&NetworkPrefixLength::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _NetworkPrefixLength_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NetworkPrefixLength",
	"java.lang.Object",
	nullptr,
	_NetworkPrefixLength_FieldInfo_,
	_NetworkPrefixLength_MethodInfo_
};

$Object* allocate$NetworkPrefixLength($Class* clazz) {
	return $of($alloc(NetworkPrefixLength));
}

bool NetworkPrefixLength::passed = false;

void NetworkPrefixLength::init$() {
}

void NetworkPrefixLength::main($StringArray* args) {
	$init(NetworkPrefixLength);
	$useLocalCurrentObjectStackCache();
	$var($Enumeration, nics, $NetworkInterface::getNetworkInterfaces());
	while ($nc(nics)->hasMoreElements()) {
		$var($NetworkInterface, nic, $cast($NetworkInterface, nics->nextElement()));
		{
			$var($Iterator, i$, $nc($($nc(nic)->getInterfaceAddresses()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($InterfaceAddress, iaddr, $cast($InterfaceAddress, i$->next()));
				{
					bool valid = checkPrefix(iaddr);
					if (!valid) {
						NetworkPrefixLength::passed = false;
						debug($(nic->getName()), iaddr);
					}
					$var($InetAddress, ia, $nc(iaddr)->getAddress());
					if ($nc(ia)->isLoopbackAddress() && $instanceOf($Inet4Address, ia)) {
						if (iaddr->getNetworkPrefixLength() != 8) {
							$nc($System::out)->println($$str({"Expected prefix of 8, got "_s, iaddr}));
							NetworkPrefixLength::passed = false;
						}
					}
				}
			}
		}
	}
	if (!NetworkPrefixLength::passed) {
		$throwNew($RuntimeException, "Failed: some interfaces have invalid prefix lengths"_s);
	}
}

bool NetworkPrefixLength::checkPrefix($InterfaceAddress* iaddr) {
	$init(NetworkPrefixLength);
	$var($InetAddress, addr, $nc(iaddr)->getAddress());
	if ($instanceOf($Inet4Address, addr)) {
		return checkIPv4PrefixLength(iaddr->getNetworkPrefixLength());
	} else {
		return checkIPv6PrefixLength(iaddr->getNetworkPrefixLength());
	}
}

bool NetworkPrefixLength::checkIPv4PrefixLength(int32_t prefix) {
	$init(NetworkPrefixLength);
	if (prefix >= 0 && prefix <= 32) {
		return true;
	}
	return false;
}

bool NetworkPrefixLength::checkIPv6PrefixLength(int32_t prefix) {
	$init(NetworkPrefixLength);
	if (prefix >= 0 && prefix <= 128) {
		return true;
	}
	return false;
}

void NetworkPrefixLength::debug($String* nicName, $InterfaceAddress* iaddr) {
	$init(NetworkPrefixLength);
	$nc($System::out)->println($$str({"NIC "_s, nicName, " has an address with an invalid prefix length:\n"_s, iaddr}));
}

void clinit$NetworkPrefixLength($Class* class$) {
	NetworkPrefixLength::passed = true;
}

NetworkPrefixLength::NetworkPrefixLength() {
}

$Class* NetworkPrefixLength::load$($String* name, bool initialize) {
	$loadClass(NetworkPrefixLength, name, initialize, &_NetworkPrefixLength_ClassInfo_, clinit$NetworkPrefixLength, allocate$NetworkPrefixLength);
	return class$;
}

$Class* NetworkPrefixLength::class$ = nullptr;