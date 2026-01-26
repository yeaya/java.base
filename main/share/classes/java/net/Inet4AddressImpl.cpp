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

$FieldInfo _Inet4AddressImpl_FieldInfo_[] = {
	{"anyLocalAddress", "Ljava/net/InetAddress;", nullptr, $PRIVATE, $field(Inet4AddressImpl, anyLocalAddress$)},
	{"loopbackAddress", "Ljava/net/InetAddress;", nullptr, $PRIVATE, $field(Inet4AddressImpl, loopbackAddress$)},
	{}
};

$MethodInfo _Inet4AddressImpl_MethodInfo_[] = {
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

#define _METHOD_INDEX_getHostByAddr 2
#define _METHOD_INDEX_getLocalHostName 3
#define _METHOD_INDEX_isReachable0 5
#define _METHOD_INDEX_lookupAllHostAddr 6

$ClassInfo _Inet4AddressImpl_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.Inet4AddressImpl",
	"java.lang.Object",
	"java.net.InetAddressImpl",
	_Inet4AddressImpl_FieldInfo_,
	_Inet4AddressImpl_MethodInfo_
};

$Object* allocate$Inet4AddressImpl($Class* clazz) {
	return $of($alloc(Inet4AddressImpl));
}

void Inet4AddressImpl::init$() {
}

$String* Inet4AddressImpl::getLocalHostName() {
	$var($String, $ret, nullptr);
	$prepareNative(Inet4AddressImpl, getLocalHostName, $String*);
	$assign($ret, $invokeNativeObject());
	$finishNative();
	return $ret;
}

$InetAddressArray* Inet4AddressImpl::lookupAllHostAddr($String* hostname) {
	$var($InetAddressArray, $ret, nullptr);
	$prepareNative(Inet4AddressImpl, lookupAllHostAddr, $InetAddressArray*, $String* hostname);
	$assign($ret, $invokeNativeObject(hostname));
	$finishNative();
	return $ret;
}

$String* Inet4AddressImpl::getHostByAddr($bytes* addr) {
	$var($String, $ret, nullptr);
	$prepareNative(Inet4AddressImpl, getHostByAddr, $String*, $bytes* addr);
	$assign($ret, $invokeNativeObject(addr));
	$finishNative();
	return $ret;
}

bool Inet4AddressImpl::isReachable0($bytes* addr, int32_t timeout, $bytes* ifaddr, int32_t ttl) {
	bool $ret = false;
	$prepareNative(Inet4AddressImpl, isReachable0, bool, $bytes* addr, int32_t timeout, $bytes* ifaddr, int32_t ttl);
	$ret = $invokeNative(addr, timeout, ifaddr, ttl);
	$finishNative();
	return $ret;
}

$InetAddress* Inet4AddressImpl::anyLocalAddress() {
	$synchronized(this) {
		if (this->anyLocalAddress$ == nullptr) {
			$set(this, anyLocalAddress$, $new($Inet4Address));
			$set($nc($($nc(this->anyLocalAddress$)->holder())), hostName, "0.0.0.0"_s);
		}
		return this->anyLocalAddress$;
	}
}

$InetAddress* Inet4AddressImpl::loopbackAddress() {
	$synchronized(this) {
		if (this->loopbackAddress$ == nullptr) {
			$var($bytes, loopback, $new($bytes, {
				(int8_t)127,
				(int8_t)0,
				(int8_t)0,
				(int8_t)1
			}));
			$set(this, loopbackAddress$, $new($Inet4Address, "localhost"_s, loopback));
		}
		return this->loopbackAddress$;
	}
}

bool Inet4AddressImpl::isReachable($InetAddress* addr, int32_t timeout, $NetworkInterface* netif, int32_t ttl) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, ifaddr, nullptr);
	if (netif != nullptr) {
		$var($Enumeration, it, netif->getInetAddresses());
		$var($InetAddress, inetaddr, nullptr);
		while (!($instanceOf($Inet4Address, inetaddr)) && $nc(it)->hasMoreElements()) {
			$assign(inetaddr, $cast($InetAddress, it->nextElement()));
		}
		if ($instanceOf($Inet4Address, inetaddr)) {
			$assign(ifaddr, $nc(inetaddr)->getAddress());
		}
	}
	return isReachable0($($nc(addr)->getAddress()), timeout, ifaddr, ttl);
}

Inet4AddressImpl::Inet4AddressImpl() {
}

$Class* Inet4AddressImpl::load$($String* name, bool initialize) {
	$loadClass(Inet4AddressImpl, name, initialize, &_Inet4AddressImpl_ClassInfo_, allocate$Inet4AddressImpl);
	return class$;
}

$Class* Inet4AddressImpl::class$ = nullptr;

	} // net
} // java