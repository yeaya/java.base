#include <sun/net/sdp/SdpProvider$Rule.h>
#include <java/net/InetAddress.h>
#include <sun/net/sdp/SdpProvider$Action.h>
#include <sun/net/sdp/SdpProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $SdpProvider$Action = ::sun::net::sdp::SdpProvider$Action;

namespace sun {
	namespace net {
		namespace sdp {

$Class* SdpProvider$Rule::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"match", "(Lsun/net/sdp/SdpProvider$Action;Ljava/net/InetAddress;I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SdpProvider$Rule, match, bool, $SdpProvider$Action*, $InetAddress*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.sdp.SdpProvider$Rule", "sun.net.sdp.SdpProvider", "Rule", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.net.sdp.SdpProvider$Rule",
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
		"sun.net.sdp.SdpProvider"
	};
	$loadClass(SdpProvider$Rule, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SdpProvider$Rule);
	});
	return class$;
}

$Class* SdpProvider$Rule::class$ = nullptr;

		} // sdp
	} // net
} // sun