#include <java/net/InetAddress$NameServiceAddresses.h>
#include <java/net/InetAddress$Addresses.h>
#include <java/net/InetAddress$CachedAddresses.h>
#include <java/net/InetAddress.h>
#include <java/net/UnknownHostException.h>
#include <java/util/NavigableSet.h>
#include <java/util/Set.h>
#include <java/util/concurrent/ConcurrentMap.h>
#include <sun/net/InetAddressCachePolicy.h>
#include <jcpp.h>

#undef FOREVER
#undef NEVER

using $InetAddressArray = $Array<::java::net::InetAddress>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $InetAddress$Addresses = ::java::net::InetAddress$Addresses;
using $InetAddress$CachedAddresses = ::java::net::InetAddress$CachedAddresses;
using $UnknownHostException = ::java::net::UnknownHostException;
using $InetAddressCachePolicy = ::sun::net::InetAddressCachePolicy;

namespace java {
	namespace net {

void InetAddress$NameServiceAddresses::init$($String* host, $InetAddress* reqAddr) {
	$set(this, host, host);
	$set(this, reqAddr, reqAddr);
}

$InetAddressArray* InetAddress$NameServiceAddresses::get() {
	$useLocalObjectStack();
	$var($InetAddress$Addresses, addresses, nullptr);
	$synchronized(this) {
		$init($InetAddress);
		$assign(addresses, $cast($InetAddress$Addresses, $nc($InetAddress::cache)->putIfAbsent(this->host, this)));
		if (addresses == nullptr) {
			$assign(addresses, this);
		}
		if ($equals(addresses, this)) {
			$var($InetAddressArray, inetAddresses, nullptr);
			$var($UnknownHostException, ex, nullptr);
			int32_t cachePolicy = 0;
			try {
				$assign(inetAddresses, $InetAddress::getAddressesFromNameService(this->host, this->reqAddr));
				$assign(ex, nullptr);
				cachePolicy = $InetAddressCachePolicy::get();
			} catch ($UnknownHostException& uhe) {
				$assign(inetAddresses, nullptr);
				$assign(ex, uhe);
				cachePolicy = $InetAddressCachePolicy::getNegative();
			}
			if (cachePolicy == $InetAddressCachePolicy::NEVER) {
				$InetAddress::cache->remove(this->host, this);
			} else {
				$var($InetAddress$CachedAddresses, cachedAddresses, $new($InetAddress$CachedAddresses, this->host, inetAddresses, cachePolicy == $InetAddressCachePolicy::FOREVER ? 0 : $System::nanoTime() + (int64_t)1000000000 * cachePolicy));
				if ($InetAddress::cache->replace(this->host, this, cachedAddresses) && cachePolicy != $InetAddressCachePolicy::FOREVER) {
					$nc($InetAddress::expirySet)->add(cachedAddresses);
				}
			}
			if (inetAddresses == nullptr) {
				$throw(ex == nullptr ? $$new($UnknownHostException, this->host) : ex);
			}
			return inetAddresses;
		}
	}
	return $nc(addresses)->get();
}

InetAddress$NameServiceAddresses::InetAddress$NameServiceAddresses() {
}

$Class* InetAddress$NameServiceAddresses::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"host", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(InetAddress$NameServiceAddresses, host)},
		{"reqAddr", "Ljava/net/InetAddress;", nullptr, $PRIVATE | $FINAL, $field(InetAddress$NameServiceAddresses, reqAddr)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/net/InetAddress;)V", nullptr, 0, $method(InetAddress$NameServiceAddresses, init$, void, $String*, $InetAddress*)},
		{"get", "()[Ljava/net/InetAddress;", nullptr, $PUBLIC, $virtualMethod(InetAddress$NameServiceAddresses, get, $InetAddressArray*), "java.net.UnknownHostException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.InetAddress$NameServiceAddresses", "java.net.InetAddress", "NameServiceAddresses", $PRIVATE | $STATIC | $FINAL},
		{"java.net.InetAddress$Addresses", "java.net.InetAddress", "Addresses", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.net.InetAddress$NameServiceAddresses",
		"java.lang.Object",
		"java.net.InetAddress$Addresses",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.net.InetAddress"
	};
	$loadClass(InetAddress$NameServiceAddresses, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InetAddress$NameServiceAddresses);
	});
	return class$;
}

$Class* InetAddress$NameServiceAddresses::class$ = nullptr;

	} // net
} // java