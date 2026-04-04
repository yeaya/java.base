#include <java/net/Inet4AddressImpl.h>
#include <java/net/Inet4Address.h>
#include <java/net/InetAddress$InetAddressHolder.h>
#include <java/net/InetAddress.h>
#include <java/net/NetworkInterface.h>
#include <java/util/Enumeration.h>
#include <jcpp.h>

using $InetAddressArray = $Array<::java::net::InetAddress>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Inet4Address = ::java::net::Inet4Address;
using $InetAddress = ::java::net::InetAddress;
using $NetworkInterface = ::java::net::NetworkInterface;
using $Enumeration = ::java::util::Enumeration;

namespace java {
	namespace net {

void Inet4AddressImpl::init$() {
}

$String* Inet4AddressImpl::getLocalHostName() {
	$prepareNative(getLocalHostName, $String*);
	$var($String, $ret, $invokeNativeObject());
	$finishNative();
	return $ret;
}

$InetAddressArray* Inet4AddressImpl::lookupAllHostAddr($String* hostname) {
	$prepareNative(lookupAllHostAddr, $InetAddressArray*, $String* hostname);
	$var($InetAddressArray, $ret, $invokeNativeObject(hostname));
	$finishNative();
	return $ret;
}

$String* Inet4AddressImpl::getHostByAddr($bytes* addr) {
	$prepareNative(getHostByAddr, $String*, $bytes* addr);
	$var($String, $ret, $invokeNativeObject(addr));
	$finishNative();
	return $ret;
}

bool Inet4AddressImpl::isReachable0($bytes* addr, int32_t timeout, $bytes* ifaddr, int32_t ttl) {
	$prepareNative(isReachable0, bool, $bytes* addr, int32_t timeout, $bytes* ifaddr, int32_t ttl);
	bool $ret = $invokeNative(addr, timeout, ifaddr, ttl);
	$finishNative();
	return $ret;
}

$InetAddress* Inet4AddressImpl::anyLocalAddress() {
	$synchronized(this) {
		if (this->anyLocalAddress$ == nullptr) {
			$set(this, anyLocalAddress$, $new($Inet4Address));
			$set($nc($(this->anyLocalAddress$->holder())), hostName, "0.0.0.0"_s);
		}
		return this->anyLocalAddress$;
	}
}

$InetAddress* Inet4AddressImpl::loopbackAddress() {
	$synchronized(this) {
		if (this->loopbackAddress$ == nullptr) {
			$var($bytes, loopback, $new($bytes, {
				127,
				0,
				0,
				1
			}));
			$set(this, loopbackAddress$, $new($Inet4Address, "localhost"_s, loopback));
		}
		return this->loopbackAddress$;
	}
}

bool Inet4AddressImpl::isReachable($InetAddress* addr, int32_t timeout, $NetworkInterface* netif, int32_t ttl) {
	$useLocalObjectStack();
	$var($bytes, ifaddr, nullptr);
	if (netif != nullptr) {
		$var($Enumeration, it, netif->getInetAddresses());
		$var($InetAddress, inetaddr, nullptr);
		while (!($instanceOf($Inet4Address, inetaddr)) && $nc(it)->hasMoreElements()) {
			$assign(inetaddr, $cast($InetAddress, it->nextElement()));
		}
		if ($instanceOf($Inet4Address, inetaddr)) {
			$assign(ifaddr, inetaddr->getAddress());
		}
	}
	return isReachable0($($nc(addr)->getAddress()), timeout, ifaddr, ttl);
}

Inet4AddressImpl::Inet4AddressImpl() {
}

$Class* Inet4AddressImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"anyLocalAddress", "Ljava/net/InetAddress;", nullptr, $PRIVATE, $field(Inet4AddressImpl, anyLocalAddress$)},
		{"loopbackAddress", "Ljava/net/InetAddress;", nullptr, $PRIVATE, $field(Inet4AddressImpl, loopbackAddress$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Inet4AddressImpl, init$, void)},
		{"anyLocalAddress", "()Ljava/net/InetAddress;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(Inet4AddressImpl, anyLocalAddress, $InetAddress*)},
		{"getHostByAddr", "([B)Ljava/lang/String;", nullptr, $PUBLIC | $NATIVE, $virtualMethod(Inet4AddressImpl, getHostByAddr, $String*, $bytes*), "java.net.UnknownHostException"},
		{"getLocalHostName", "()Ljava/lang/String;", nullptr, $PUBLIC | $NATIVE, $virtualMethod(Inet4AddressImpl, getLocalHostName, $String*), "java.net.UnknownHostException"},
		{"isReachable", "(Ljava/net/InetAddress;ILjava/net/NetworkInterface;I)Z", nullptr, $PUBLIC, $virtualMethod(Inet4AddressImpl, isReachable, bool, $InetAddress*, int32_t, $NetworkInterface*, int32_t), "java.io.IOException"},
		{"isReachable0", "([BI[BI)Z", nullptr, $PRIVATE | $NATIVE, $method(Inet4AddressImpl, isReachable0, bool, $bytes*, int32_t, $bytes*, int32_t), "java.io.IOException"},
		{"lookupAllHostAddr", "(Ljava/lang/String;)[Ljava/net/InetAddress;", nullptr, $PUBLIC | $NATIVE, $virtualMethod(Inet4AddressImpl, lookupAllHostAddr, $InetAddressArray*, $String*), "java.net.UnknownHostException"},
		{"loopbackAddress", "()Ljava/net/InetAddress;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(Inet4AddressImpl, loopbackAddress, $InetAddress*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.Inet4AddressImpl",
		"java.lang.Object",
		"java.net.InetAddressImpl",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Inet4AddressImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Inet4AddressImpl);
	});
	return class$;
}

$Class* Inet4AddressImpl::class$ = nullptr;

	} // net
} // java