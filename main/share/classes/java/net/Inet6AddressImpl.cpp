#include <java/net/Inet6AddressImpl.h>
#include <java/net/Inet4Address.h>
#include <java/net/Inet4AddressImpl.h>
#include <java/net/Inet6Address.h>
#include <java/net/InetAddress$InetAddressHolder.h>
#include <java/net/InetAddress.h>
#include <java/net/NetworkInterface.h>
#include <java/net/SocketException.h>
#include <java/util/Enumeration.h>
#include <jcpp.h>

using $InetAddressArray = $Array<::java::net::InetAddress>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Inet4Address = ::java::net::Inet4Address;
using $Inet4AddressImpl = ::java::net::Inet4AddressImpl;
using $Inet6Address = ::java::net::Inet6Address;
using $InetAddress = ::java::net::InetAddress;
using $NetworkInterface = ::java::net::NetworkInterface;
using $SocketException = ::java::net::SocketException;
using $Enumeration = ::java::util::Enumeration;

namespace java {
	namespace net {

void Inet6AddressImpl::init$() {
}

$String* Inet6AddressImpl::getLocalHostName() {
	$prepareNative(getLocalHostName, $String*);
	$var($String, $ret, $invokeNativeObject());
	$finishNative();
	return $ret;
}

$InetAddressArray* Inet6AddressImpl::lookupAllHostAddr($String* hostname) {
	$prepareNative(lookupAllHostAddr, $InetAddressArray*, $String* hostname);
	$var($InetAddressArray, $ret, $invokeNativeObject(hostname));
	$finishNative();
	return $ret;
}

$String* Inet6AddressImpl::getHostByAddr($bytes* addr) {
	$prepareNative(getHostByAddr, $String*, $bytes* addr);
	$var($String, $ret, $invokeNativeObject(addr));
	$finishNative();
	return $ret;
}

bool Inet6AddressImpl::isReachable0($bytes* addr, int32_t scope, int32_t timeout, $bytes* inf, int32_t ttl, int32_t if_scope) {
	$prepareNative(isReachable0, bool, $bytes* addr, int32_t scope, int32_t timeout, $bytes* inf, int32_t ttl, int32_t if_scope);
	bool $ret = $invokeNative(addr, scope, timeout, inf, ttl, if_scope);
	$finishNative();
	return $ret;
}

bool Inet6AddressImpl::isReachable($InetAddress* addr, int32_t timeout, $NetworkInterface* netif, int32_t ttl) {
	$useLocalObjectStack();
	$var($bytes, ifaddr, nullptr);
	int32_t scope = -1;
	int32_t netif_scope = -1;
	if (netif != nullptr) {
		$var($Enumeration, it, netif->getInetAddresses());
		$var($InetAddress, inetaddr, nullptr);
		while ($nc(it)->hasMoreElements()) {
			$assign(inetaddr, $cast($InetAddress, it->nextElement()));
			if ($nc(inetaddr)->getClass()->isInstance(addr)) {
				$assign(ifaddr, inetaddr->getAddress());
				if ($instanceOf($Inet6Address, inetaddr)) {
					netif_scope = $cast($Inet6Address, inetaddr)->getScopeId();
				}
				break;
			}
		}
		if (ifaddr == nullptr) {
			return false;
		}
	}
	if ($instanceOf($Inet6Address, addr)) {
		scope = $cast($Inet6Address, addr)->getScopeId();
	}
	return isReachable0($($nc(addr)->getAddress()), scope, timeout, ifaddr, ttl, netif_scope);
}

$InetAddress* Inet6AddressImpl::anyLocalAddress() {
	$synchronized(this) {
		$useLocalObjectStack();
		if (this->anyLocalAddress$ == nullptr) {
			$init($InetAddress);
			if ($InetAddress::preferIPv6Address == 1 || $InetAddress::preferIPv6Address == 2) {
				$set(this, anyLocalAddress$, $new($Inet6Address));
				$set($nc($(this->anyLocalAddress$->holder())), hostName, "::"_s);
			} else {
				$set(this, anyLocalAddress$, ($$new($Inet4AddressImpl))->anyLocalAddress());
			}
		}
		return this->anyLocalAddress$;
	}
}

$InetAddress* Inet6AddressImpl::loopbackAddress() {
	$synchronized(this) {
		$useLocalObjectStack();
		if (this->loopbackAddress$ == nullptr) {
			$init($InetAddress);
			bool preferIPv6Address = $InetAddress::preferIPv6Address == 1 || $InetAddress::preferIPv6Address == 2;
			for (int32_t i = 0; i < 2; ++i) {
				$var($InetAddress, address, nullptr);
				if (i == (preferIPv6Address ? 0 : 1)) {
					$assign(address, $new($Inet6Address, "localhost"_s, $$new($bytes, {
						0,
						0,
						0,
						0,
						0,
						0,
						0,
						0,
						0,
						0,
						0,
						0,
						0,
						0,
						0,
						1
					})));
				} else {
					$assign(address, $new($Inet4Address, "localhost"_s, $$new($bytes, {
						127,
						0,
						0,
						1
					})));
				}
				if (i == 0) {
					$set(this, loopbackAddress$, address);
				}
				try {
					if (!$NetworkInterface::isBoundInetAddress(address)) {
						continue;
					}
				} catch ($SocketException& e) {
					continue;
				}
				$set(this, loopbackAddress$, address);
				break;
			}
		}
		return this->loopbackAddress$;
	}
}

Inet6AddressImpl::Inet6AddressImpl() {
}

$Class* Inet6AddressImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"anyLocalAddress", "Ljava/net/InetAddress;", nullptr, $PRIVATE, $field(Inet6AddressImpl, anyLocalAddress$)},
		{"loopbackAddress", "Ljava/net/InetAddress;", nullptr, $PRIVATE, $field(Inet6AddressImpl, loopbackAddress$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Inet6AddressImpl, init$, void)},
		{"anyLocalAddress", "()Ljava/net/InetAddress;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(Inet6AddressImpl, anyLocalAddress, $InetAddress*)},
		{"getHostByAddr", "([B)Ljava/lang/String;", nullptr, $PUBLIC | $NATIVE, $virtualMethod(Inet6AddressImpl, getHostByAddr, $String*, $bytes*), "java.net.UnknownHostException"},
		{"getLocalHostName", "()Ljava/lang/String;", nullptr, $PUBLIC | $NATIVE, $virtualMethod(Inet6AddressImpl, getLocalHostName, $String*), "java.net.UnknownHostException"},
		{"isReachable", "(Ljava/net/InetAddress;ILjava/net/NetworkInterface;I)Z", nullptr, $PUBLIC, $virtualMethod(Inet6AddressImpl, isReachable, bool, $InetAddress*, int32_t, $NetworkInterface*, int32_t), "java.io.IOException"},
		{"isReachable0", "([BII[BII)Z", nullptr, $PRIVATE | $NATIVE, $method(Inet6AddressImpl, isReachable0, bool, $bytes*, int32_t, int32_t, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{"lookupAllHostAddr", "(Ljava/lang/String;)[Ljava/net/InetAddress;", nullptr, $PUBLIC | $NATIVE, $virtualMethod(Inet6AddressImpl, lookupAllHostAddr, $InetAddressArray*, $String*), "java.net.UnknownHostException"},
		{"loopbackAddress", "()Ljava/net/InetAddress;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(Inet6AddressImpl, loopbackAddress, $InetAddress*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.Inet6AddressImpl",
		"java.lang.Object",
		"java.net.InetAddressImpl",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Inet6AddressImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Inet6AddressImpl);
	});
	return class$;
}

$Class* Inet6AddressImpl::class$ = nullptr;

	} // net
} // java