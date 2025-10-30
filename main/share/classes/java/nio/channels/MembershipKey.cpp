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
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(MembershipKey::*)()>(&MembershipKey::init$))},
	{"block", "(Ljava/net/InetAddress;)Ljava/nio/channels/MembershipKey;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"channel", "()Ljava/nio/channels/MulticastChannel;", nullptr, $PUBLIC | $ABSTRACT},
	{"drop", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"group", "()Ljava/net/InetAddress;", nullptr, $PUBLIC | $ABSTRACT},
	{"isValid", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"networkInterface", "()Ljava/net/NetworkInterface;", nullptr, $PUBLIC | $ABSTRACT},
	{"sourceAddress", "()Ljava/net/InetAddress;", nullptr, $PUBLIC | $ABSTRACT},
	{"unblock", "(Ljava/net/InetAddress;)Ljava/nio/channels/MembershipKey;", nullptr, $PUBLIC | $ABSTRACT},
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