#include <java/net/InetAddress$NameServiceAddresses.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $NullPointerException = ::java::lang::NullPointerException;
using $InetAddress = ::java::net::InetAddress;
using $InetAddress$Addresses = ::java::net::InetAddress$Addresses;
using $InetAddress$CachedAddresses = ::java::net::InetAddress$CachedAddresses;
using $UnknownHostException = ::java::net::UnknownHostException;
using $NavigableSet = ::java::util::NavigableSet;
using $Set = ::java::util::Set;
using $ConcurrentMap = ::java::util::concurrent::ConcurrentMap;
using $InetAddressCachePolicy = ::sun::net::InetAddressCachePolicy;

namespace java {
	namespace net {

$FieldInfo _InetAddress$NameServiceAddresses_FieldInfo_[] = {
	{"host", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(InetAddress$NameServiceAddresses, host)},
	{"reqAddr", "Ljava/net/InetAddress;", nullptr, $PRIVATE | $FINAL, $field(InetAddress$NameServiceAddresses, reqAddr)},
	{}
};

$MethodInfo _InetAddress$NameServiceAddresses_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/net/InetAddress;)V", nullptr, 0, $method(static_cast<void(InetAddress$NameServiceAddresses::*)($String*,$InetAddress*)>(&InetAddress$NameServiceAddresses::init$))},
	{"get", "()[Ljava/net/InetAddress;", nullptr, $PUBLIC, nullptr, "java.net.UnknownHostException"},
	{}
};

$InnerClassInfo _InetAddress$NameServiceAddresses_InnerClassesInfo_[] = {
	{"java.net.InetAddress$NameServiceAddresses", "java.net.InetAddress", "NameServiceAddresses", $PRIVATE | $STATIC | $FINAL},
	{"java.net.InetAddress$Addresses", "java.net.InetAddress", "Addresses", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _InetAddress$NameServiceAddresses_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.net.InetAddress$NameServiceAddresses",
	"java.lang.Object",
	"java.net.InetAddress$Addresses",
	_InetAddress$NameServiceAddresses_FieldInfo_,
	_InetAddress$NameServiceAddresses_MethodInfo_,
	nullptr,
	nullptr,
	_InetAddress$NameServiceAddresses_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.InetAddress"
};

$Object* allocate$InetAddress$NameServiceAddresses($Class* clazz) {
	return $of($alloc(InetAddress$NameServiceAddresses));
}

void InetAddress$NameServiceAddresses::init$($String* host, $InetAddress* reqAddr) {
	$set(this, host, host);
	$set(this, reqAddr, reqAddr);
}

$InetAddressArray* InetAddress$NameServiceAddresses::get() {
	$useLocalCurrentObjectStackCache();
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
			} catch ($UnknownHostException&) {
				$var($UnknownHostException, uhe, $catch());
				$assign(inetAddresses, nullptr);
				$assign(ex, uhe);
				cachePolicy = $InetAddressCachePolicy::getNegative();
			}
			if (cachePolicy == $InetAddressCachePolicy::NEVER) {
				$nc($InetAddress::cache)->remove(this->host, this);
			} else {
				$var($InetAddress$CachedAddresses, cachedAddresses, $new($InetAddress$CachedAddresses, this->host, inetAddresses, cachePolicy == $InetAddressCachePolicy::FOREVER ? (int64_t)0 : $System::nanoTime() + (int64_t)1000000000 * cachePolicy));
				if ($nc($InetAddress::cache)->replace(this->host, this, cachedAddresses) && cachePolicy != $InetAddressCachePolicy::FOREVER) {
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
	$loadClass(InetAddress$NameServiceAddresses, name, initialize, &_InetAddress$NameServiceAddresses_ClassInfo_, allocate$InetAddress$NameServiceAddresses);
	return class$;
}

$Class* InetAddress$NameServiceAddresses::class$ = nullptr;

	} // net
} // java