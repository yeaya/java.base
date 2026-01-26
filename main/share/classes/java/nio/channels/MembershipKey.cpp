#include <java/nio/channels/MembershipKey.h>

#include <java/net/InetAddress.h>
#include <java/net/NetworkInterface.h>
#include <java/nio/channels/MulticastChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $NetworkInterface = ::java::net::NetworkInterface;
using $MulticastChannel = ::java::nio::channels::MulticastChannel;

namespace java {
	namespace nio {
		namespace channels {

$MethodInfo _MembershipKey_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(MembershipKey, init$, void)},
	{"block", "(Ljava/net/InetAddress;)Ljava/nio/channels/MembershipKey;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MembershipKey, block, MembershipKey*, $InetAddress*), "java.io.IOException"},
	{"channel", "()Ljava/nio/channels/MulticastChannel;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MembershipKey, channel, $MulticastChannel*)},
	{"drop", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MembershipKey, drop, void)},
	{"group", "()Ljava/net/InetAddress;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MembershipKey, group, $InetAddress*)},
	{"isValid", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MembershipKey, isValid, bool)},
	{"networkInterface", "()Ljava/net/NetworkInterface;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MembershipKey, networkInterface, $NetworkInterface*)},
	{"sourceAddress", "()Ljava/net/InetAddress;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MembershipKey, sourceAddress, $InetAddress*)},
	{"unblock", "(Ljava/net/InetAddress;)Ljava/nio/channels/MembershipKey;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MembershipKey, unblock, MembershipKey*, $InetAddress*)},
	{}
};

$ClassInfo _MembershipKey_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.nio.channels.MembershipKey",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MembershipKey_MethodInfo_
};

$Object* allocate$MembershipKey($Class* clazz) {
	return $of($alloc(MembershipKey));
}

void MembershipKey::init$() {
}

MembershipKey::MembershipKey() {
}

$Class* MembershipKey::load$($String* name, bool initialize) {
	$loadClass(MembershipKey, name, initialize, &_MembershipKey_ClassInfo_, allocate$MembershipKey);
	return class$;
}

$Class* MembershipKey::class$ = nullptr;

		} // channels
	} // nio
} // java