#include <sun/net/sdp/SdpProvider$AddressPortRangeRule.h>

#include <java/net/InetAddress.h>
#include <sun/net/sdp/SdpProvider$Action.h>
#include <sun/net/sdp/SdpProvider$PortRangeRule.h>
#include <sun/net/sdp/SdpProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $SdpProvider$Action = ::sun::net::sdp::SdpProvider$Action;
using $SdpProvider$PortRangeRule = ::sun::net::sdp::SdpProvider$PortRangeRule;

namespace sun {
	namespace net {
		namespace sdp {

$FieldInfo _SdpProvider$AddressPortRangeRule_FieldInfo_[] = {
	{"addressAsBytes", "[B", nullptr, $PRIVATE | $FINAL, $field(SdpProvider$AddressPortRangeRule, addressAsBytes)},
	{"prefixByteCount", "I", nullptr, $PRIVATE | $FINAL, $field(SdpProvider$AddressPortRangeRule, prefixByteCount)},
	{"mask", "B", nullptr, $PRIVATE | $FINAL, $field(SdpProvider$AddressPortRangeRule, mask)},
	{}
};

$MethodInfo _SdpProvider$AddressPortRangeRule_MethodInfo_[] = {
	{"<init>", "(Lsun/net/sdp/SdpProvider$Action;Ljava/net/InetAddress;III)V", nullptr, 0, $method(static_cast<void(SdpProvider$AddressPortRangeRule::*)($SdpProvider$Action*,$InetAddress*,int32_t,int32_t,int32_t)>(&SdpProvider$AddressPortRangeRule::init$))},
	{"match", "(Lsun/net/sdp/SdpProvider$Action;Ljava/net/InetAddress;I)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SdpProvider$AddressPortRangeRule_InnerClassesInfo_[] = {
	{"sun.net.sdp.SdpProvider$AddressPortRangeRule", "sun.net.sdp.SdpProvider", "AddressPortRangeRule", $PRIVATE | $STATIC},
	{"sun.net.sdp.SdpProvider$PortRangeRule", "sun.net.sdp.SdpProvider", "PortRangeRule", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SdpProvider$AddressPortRangeRule_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.sdp.SdpProvider$AddressPortRangeRule",
	"sun.net.sdp.SdpProvider$PortRangeRule",
	nullptr,
	_SdpProvider$AddressPortRangeRule_FieldInfo_,
	_SdpProvider$AddressPortRangeRule_MethodInfo_,
	nullptr,
	nullptr,
	_SdpProvider$AddressPortRangeRule_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.sdp.SdpProvider"
};

$Object* allocate$SdpProvider$AddressPortRangeRule($Class* clazz) {
	return $of($alloc(SdpProvider$AddressPortRangeRule));
}

void SdpProvider$AddressPortRangeRule::init$($SdpProvider$Action* action, $InetAddress* address, int32_t prefix, int32_t port, int32_t end) {
	$SdpProvider$PortRangeRule::init$(action, port, end);
	$set(this, addressAsBytes, $nc(address)->getAddress());
	this->prefixByteCount = prefix >> 3;
	this->mask = (int8_t)($sl(255, 8 - (prefix % 8)));
}

bool SdpProvider$AddressPortRangeRule::match($SdpProvider$Action* action, $InetAddress* address, int32_t port) {
	if (action != this->action()) {
		return false;
	}
	$var($bytes, candidate, $nc(address)->getAddress());
	if ($nc(candidate)->length != $nc(this->addressAsBytes)->length) {
		return false;
	}
	for (int32_t i = 0; i < this->prefixByteCount; ++i) {
		if ($nc(candidate)->get(i) != $nc(this->addressAsBytes)->get(i)) {
			return false;
		}
	}
	if ((this->prefixByteCount < $nc(this->addressAsBytes)->length) && (((int32_t)($nc(candidate)->get(this->prefixByteCount) & (uint32_t)(int32_t)this->mask)) != ((int32_t)($nc(this->addressAsBytes)->get(this->prefixByteCount) & (uint32_t)(int32_t)this->mask)))) {
		return false;
	}
	return $SdpProvider$PortRangeRule::match(action, address, port);
}

SdpProvider$AddressPortRangeRule::SdpProvider$AddressPortRangeRule() {
}

$Class* SdpProvider$AddressPortRangeRule::load$($String* name, bool initialize) {
	$loadClass(SdpProvider$AddressPortRangeRule, name, initialize, &_SdpProvider$AddressPortRangeRule_ClassInfo_, allocate$SdpProvider$AddressPortRangeRule);
	return class$;
}

$Class* SdpProvider$AddressPortRangeRule::class$ = nullptr;

		} // sdp
	} // net
} // sun