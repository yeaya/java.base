#include <java/net/Inet6AddressImpl.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $InetAddress$InetAddressHolder = ::java::net::InetAddress$InetAddressHolder;
using $InetAddressImpl = ::java::net::InetAddressImpl;
using $NetworkInterface = ::java::net::NetworkInterface;
using $SocketException = ::java::net::SocketException;
using $Enumeration = ::java::util::Enumeration;

namespace java {
	namespace net {

$FieldInfo _Inet6AddressImpl_FieldInfo_[] = {
	{"anyLocalAddress", "Ljava/net/InetAddress;", nullptr, $PRIVATE, $field(Inet6AddressImpl, anyLocalAddress$)},
	{"loopbackAddress", "Ljava/net/InetAddress;", nullptr, $PRIVATE, $field(Inet6AddressImpl, loopbackAddress$)},
	{}
};

$MethodInfo _Inet6AddressImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Inet6AddressImpl::*)()>(&Inet6AddressImpl::init$))},
	{"anyLocalAddress", "()Ljava/net/InetAddress;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getHostByAddr", "([B)Ljava/lang/String;", nullptr, $PUBLIC | $NATIVE, nullptr, "java.net.UnknownHostException"},
	{"getLocalHostName", "()Ljava/lang/String;", nullptr, $PUBLIC | $NATIVE, nullptr, "java.net.UnknownHostException"},
	{"isReachable", "(Ljava/net/InetAddress;ILjava/net/NetworkInterface;I)Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"isReachable0", "([BII[BII)Z", nullptr, $PRIVATE | $NATIVE, $method(static_cast<bool(Inet6AddressImpl::*)($bytes*,int32_t,int32_t,$bytes*,int32_t,int32_t)>(&Inet6AddressImpl::isReachable0)), "java.io.IOException"},
	{"lookupAllHostAddr", "(Ljava/lang/String;)[Ljava/net/InetAddress;", nullptr, $PUBLIC | $NATIVE, nullptr, "java.net.UnknownHostException"},
	{"loopbackAddress", "()Ljava/net/InetAddress;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

#define _METHOD_INDEX_getHostByAddr 2
#define _METHOD_INDEX_getLocalHostName 3
#define _METHOD_INDEX_isReachable0 5
#define _METHOD_INDEX_lookupAllHostAddr 6

$ClassInfo _Inet6AddressImpl_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.Inet6AddressImpl",
	"java.lang.Object",
	"java.net.InetAddressImpl",
	_Inet6AddressImpl_FieldInfo_,
	_Inet6AddressImpl_MethodInfo_
};

$Object* allocate$Inet6AddressImpl($Class* clazz) {
	return $of($alloc(Inet6AddressImpl));
}

void Inet6AddressImpl::init$() {
}

$String* Inet6AddressImpl::getLocalHostName() {
	$var($String, $ret, nullptr);
	$prepareNative(Inet6AddressImpl, getLocalHostName, $String*);
	$assign($ret, $invokeNative(Inet6AddressImpl, getLocalHostName));
	$finishNative();
	return $ret;
}

$InetAddressArray* Inet6AddressImpl::lookupAllHostAddr($String* hostname) {
	$var($InetAddressArray, $ret, nullptr);
	$prepareNative(Inet6AddressImpl, lookupAllHostAddr, $InetAddressArray*, $String* hostname);
	$assign($ret, $invokeNative(Inet6AddressImpl, lookupAllHostAddr, hostname));
	$finishNative();
	return $ret;
}

$String* Inet6AddressImpl::getHostByAddr($bytes* addr) {
	$var($String, $ret, nullptr);
	$prepareNative(Inet6AddressImpl, getHostByAddr, $String*, $bytes* addr);
	$assign($ret, $invokeNative(Inet6AddressImpl, getHostByAddr, addr));
	$finishNative();
	return $ret;
}

bool Inet6AddressImpl::isReachable0($bytes* addr, int32_t scope, int32_t timeout, $bytes* inf, int32_t ttl, int32_t if_scope) {
	bool $ret = false;
	$prepareNative(Inet6AddressImpl, isReachable0, bool, $bytes* addr, int32_t scope, int32_t timeout, $bytes* inf, int32_t ttl, int32_t if_scope);
	$ret = $invokeNative(Inet6AddressImpl, isReachable0, addr, scope, timeout, inf, ttl, if_scope);
	$finishNative();
	return $ret;
}

bool Inet6AddressImpl::isReachable($InetAddress* addr, int32_t timeout, $NetworkInterface* netif, int32_t ttl) {
	$var($bytes, ifaddr, nullptr);
	int32_t scope = -1;
	int32_t netif_scope = -1;
	if (netif != nullptr) {
		$var($Enumeration, it, netif->getInetAddresses());
		$var($InetAddress, inetaddr, nullptr);
		while ($nc(it)->hasMoreElements()) {
			$assign(inetaddr, $cast($InetAddress, it->nextElement()));
			if ($nc($of(inetaddr))->getClass()->isInstance(addr)) {
				$assign(ifaddr, inetaddr->getAddress());
				if ($instanceOf($Inet6Address, inetaddr)) {
					netif_scope = $nc(($cast($Inet6Address, inetaddr)))->getScopeId();
				}
				break;
			}
		}
		if (ifaddr == nullptr) {
			return false;
		}
	}
	if ($instanceOf($Inet6Address, addr)) {
		scope = $nc(($cast($Inet6Address, addr)))->getScopeId();
	}
	return isReachable0($($nc(addr)->getAddress()), scope, timeout, ifaddr, ttl, netif_scope);
}

$InetAddress* Inet6AddressImpl::anyLocalAddress() {
	$synchronized(this) {
		if (this->anyLocalAddress$ == nullptr) {
			$init($InetAddress);
			if ($InetAddress::preferIPv6Address == 1 || $InetAddress::preferIPv6Address == 2) {
				$set(this, anyLocalAddress$, $new($Inet6Address));
				$set($nc($($nc(this->anyLocalAddress$)->holder())), hostName, "::"_s);
			} else {
				$set(this, anyLocalAddress$, ($$new($Inet4AddressImpl))->anyLocalAddress());
			}
		}
		return this->anyLocalAddress$;
	}
}

$InetAddress* Inet6AddressImpl::loopbackAddress() {
	$synchronized(this) {
		if (this->loopbackAddress$ == nullptr) {
			$init($InetAddress);
			bool preferIPv6Address = $InetAddress::preferIPv6Address == 1 || $InetAddress::preferIPv6Address == 2;
			for (int32_t i = 0; i < 2; ++i) {
				$var($InetAddress, address, nullptr);
				if (i == (preferIPv6Address ? 0 : 1)) {
					$assign(address, $new($Inet6Address, "localhost"_s, $$new($bytes, {
						(int8_t)0,
						(int8_t)0,
						(int8_t)0,
						(int8_t)0,
						(int8_t)0,
						(int8_t)0,
						(int8_t)0,
						(int8_t)0,
						(int8_t)0,
						(int8_t)0,
						(int8_t)0,
						(int8_t)0,
						(int8_t)0,
						(int8_t)0,
						(int8_t)0,
						(int8_t)1
					})));
				} else {
					$assign(address, $new($Inet4Address, "localhost"_s, $$new($bytes, {
						(int8_t)127,
						(int8_t)0,
						(int8_t)0,
						(int8_t)1
					})));
				}
				if (i == 0) {
					$set(this, loopbackAddress$, address);
				}
				try {
					if (!$NetworkInterface::isBoundInetAddress(address)) {
						continue;
					}
				} catch ($SocketException&) {
					$var($SocketException, e, $catch());
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
	$loadClass(Inet6AddressImpl, name, initialize, &_Inet6AddressImpl_ClassInfo_, allocate$Inet6AddressImpl);
	return class$;
}

$Class* Inet6AddressImpl::class$ = nullptr;

	} // net
} // java