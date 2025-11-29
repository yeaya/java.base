#include <sun/net/sdp/SdpProvider$PortRangeRule.h>

#include <java/net/InetAddress.h>
#include <sun/net/sdp/SdpProvider$Action.h>
#include <sun/net/sdp/SdpProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $SdpProvider$Action = ::sun::net::sdp::SdpProvider$Action;

namespace sun {
	namespace net {
		namespace sdp {

$FieldInfo _SdpProvider$PortRangeRule_FieldInfo_[] = {
	{"action", "Lsun/net/sdp/SdpProvider$Action;", nullptr, $PRIVATE | $FINAL, $field(SdpProvider$PortRangeRule, action$)},
	{"portStart", "I", nullptr, $PRIVATE | $FINAL, $field(SdpProvider$PortRangeRule, portStart)},
	{"portEnd", "I", nullptr, $PRIVATE | $FINAL, $field(SdpProvider$PortRangeRule, portEnd)},
	{}
};

$MethodInfo _SdpProvider$PortRangeRule_MethodInfo_[] = {
	{"<init>", "(Lsun/net/sdp/SdpProvider$Action;II)V", nullptr, 0, $method(static_cast<void(SdpProvider$PortRangeRule::*)($SdpProvider$Action*,int32_t,int32_t)>(&SdpProvider$PortRangeRule::init$))},
	{"action", "()Lsun/net/sdp/SdpProvider$Action;", nullptr, 0},
	{"match", "(Lsun/net/sdp/SdpProvider$Action;Ljava/net/InetAddress;I)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SdpProvider$PortRangeRule_InnerClassesInfo_[] = {
	{"sun.net.sdp.SdpProvider$PortRangeRule", "sun.net.sdp.SdpProvider", "PortRangeRule", $PRIVATE | $STATIC},
	{"sun.net.sdp.SdpProvider$Rule", "sun.net.sdp.SdpProvider", "Rule", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SdpProvider$PortRangeRule_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.sdp.SdpProvider$PortRangeRule",
	"java.lang.Object",
	"sun.net.sdp.SdpProvider$Rule",
	_SdpProvider$PortRangeRule_FieldInfo_,
	_SdpProvider$PortRangeRule_MethodInfo_,
	nullptr,
	nullptr,
	_SdpProvider$PortRangeRule_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.sdp.SdpProvider"
};

$Object* allocate$SdpProvider$PortRangeRule($Class* clazz) {
	return $of($alloc(SdpProvider$PortRangeRule));
}

void SdpProvider$PortRangeRule::init$($SdpProvider$Action* action, int32_t portStart, int32_t portEnd) {
	$set(this, action$, action);
	this->portStart = portStart;
	this->portEnd = portEnd;
}

$SdpProvider$Action* SdpProvider$PortRangeRule::action() {
	return this->action$;
}

bool SdpProvider$PortRangeRule::match($SdpProvider$Action* action, $InetAddress* address, int32_t port) {
	return (action == this->action$ && port >= this->portStart && port <= this->portEnd);
}

SdpProvider$PortRangeRule::SdpProvider$PortRangeRule() {
}

$Class* SdpProvider$PortRangeRule::load$($String* name, bool initialize) {
	$loadClass(SdpProvider$PortRangeRule, name, initialize, &_SdpProvider$PortRangeRule_ClassInfo_, allocate$SdpProvider$PortRangeRule);
	return class$;
}

$Class* SdpProvider$PortRangeRule::class$ = nullptr;

		} // sdp
	} // net
} // sun