#include <sun/net/sdp/SdpProvider$Rule.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetAddress.h>
#include <sun/net/sdp/SdpProvider$Action.h>
#include <sun/net/sdp/SdpProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $SdpProvider = ::sun::net::sdp::SdpProvider;
using $SdpProvider$Action = ::sun::net::sdp::SdpProvider$Action;

namespace sun {
	namespace net {
		namespace sdp {

$MethodInfo _SdpProvider$Rule_MethodInfo_[] = {
	{"match", "(Lsun/net/sdp/SdpProvider$Action;Ljava/net/InetAddress;I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _SdpProvider$Rule_InnerClassesInfo_[] = {
	{"sun.net.sdp.SdpProvider$Rule", "sun.net.sdp.SdpProvider", "Rule", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SdpProvider$Rule_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.net.sdp.SdpProvider$Rule",
	nullptr,
	nullptr,
	nullptr,
	_SdpProvider$Rule_MethodInfo_,
	nullptr,
	nullptr,
	_SdpProvider$Rule_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.sdp.SdpProvider"
};

$Object* allocate$SdpProvider$Rule($Class* clazz) {
	return $of($alloc(SdpProvider$Rule));
}

$Class* SdpProvider$Rule::load$($String* name, bool initialize) {
	$loadClass(SdpProvider$Rule, name, initialize, &_SdpProvider$Rule_ClassInfo_, allocate$SdpProvider$Rule);
	return class$;
}

$Class* SdpProvider$Rule::class$ = nullptr;

		} // sdp
	} // net
} // sun