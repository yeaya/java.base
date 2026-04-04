#include <java/net/InetAddress$PlatformNameService.h>
#include <java/net/InetAddress.h>
#include <java/net/InetAddressImpl.h>
#include <jcpp.h>

using $InetAddressArray = $Array<::java::net::InetAddress>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;

namespace java {
	namespace net {

void InetAddress$PlatformNameService::init$() {
}

$InetAddressArray* InetAddress$PlatformNameService::lookupAllHostAddr($String* host) {
	$init($InetAddress);
	return $nc($InetAddress::impl)->lookupAllHostAddr(host);
}

$String* InetAddress$PlatformNameService::getHostByAddr($bytes* addr) {
	$init($InetAddress);
	return $nc($InetAddress::impl)->getHostByAddr(addr);
}

InetAddress$PlatformNameService::InetAddress$PlatformNameService() {
}

$Class* InetAddress$PlatformNameService::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(InetAddress$PlatformNameService, init$, void)},
		{"getHostByAddr", "([B)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(InetAddress$PlatformNameService, getHostByAddr, $String*, $bytes*), "java.net.UnknownHostException"},
		{"lookupAllHostAddr", "(Ljava/lang/String;)[Ljava/net/InetAddress;", nullptr, $PUBLIC, $virtualMethod(InetAddress$PlatformNameService, lookupAllHostAddr, $InetAddressArray*, $String*), "java.net.UnknownHostException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.InetAddress$PlatformNameService", "java.net.InetAddress", "PlatformNameService", $PRIVATE | $STATIC | $FINAL},
		{"java.net.InetAddress$NameService", "java.net.InetAddress", "NameService", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.net.InetAddress$PlatformNameService",
		"java.lang.Object",
		"java.net.InetAddress$NameService",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.net.InetAddress"
	};
	$loadClass(InetAddress$PlatformNameService, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InetAddress$PlatformNameService);
	});
	return class$;
}

$Class* InetAddress$PlatformNameService::class$ = nullptr;

	} // net
} // java