#include <java/net/InetAddress$NameService.h>
#include <java/net/InetAddress.h>
#include <jcpp.h>

using $InetAddressArray = $Array<::java::net::InetAddress>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace net {

$Class* InetAddress$NameService::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getHostByAddr", "([B)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InetAddress$NameService, getHostByAddr, $String*, $bytes*), "java.net.UnknownHostException"},
		{"lookupAllHostAddr", "(Ljava/lang/String;)[Ljava/net/InetAddress;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InetAddress$NameService, lookupAllHostAddr, $InetAddressArray*, $String*), "java.net.UnknownHostException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.InetAddress$NameService", "java.net.InetAddress", "NameService", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"java.net.InetAddress$NameService",
		nullptr,
		nullptr,
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
	$loadClass(InetAddress$NameService, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InetAddress$NameService);
	});
	return class$;
}

$Class* InetAddress$NameService::class$ = nullptr;

	} // net
} // java