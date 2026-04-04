#include <java/net/InetAddress$Addresses.h>
#include <java/net/InetAddress.h>
#include <jcpp.h>

using $InetAddressArray = $Array<::java::net::InetAddress>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace net {

$Class* InetAddress$Addresses::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"get", "()[Ljava/net/InetAddress;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InetAddress$Addresses, get, $InetAddressArray*), "java.net.UnknownHostException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.InetAddress$Addresses", "java.net.InetAddress", "Addresses", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"java.net.InetAddress$Addresses",
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
	$loadClass(InetAddress$Addresses, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InetAddress$Addresses);
	});
	return class$;
}

$Class* InetAddress$Addresses::class$ = nullptr;

	} // net
} // java