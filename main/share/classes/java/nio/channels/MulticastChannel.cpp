#include <java/nio/channels/MulticastChannel.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetAddress.h>
#include <java/net/NetworkInterface.h>
#include <java/nio/channels/MembershipKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $NetworkInterface = ::java::net::NetworkInterface;
using $MembershipKey = ::java::nio::channels::MembershipKey;
using $NetworkChannel = ::java::nio::channels::NetworkChannel;

namespace java {
	namespace nio {
		namespace channels {

$MethodInfo _MulticastChannel_MethodInfo_[] = {
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"join", "(Ljava/net/InetAddress;Ljava/net/NetworkInterface;)Ljava/nio/channels/MembershipKey;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"join", "(Ljava/net/InetAddress;Ljava/net/NetworkInterface;Ljava/net/InetAddress;)Ljava/nio/channels/MembershipKey;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _MulticastChannel_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.nio.channels.MulticastChannel",
	nullptr,
	"java.nio.channels.NetworkChannel",
	nullptr,
	_MulticastChannel_MethodInfo_
};

$Object* allocate$MulticastChannel($Class* clazz) {
	return $of($alloc(MulticastChannel));
}

$Class* MulticastChannel::load$($String* name, bool initialize) {
	$loadClass(MulticastChannel, name, initialize, &_MulticastChannel_ClassInfo_, allocate$MulticastChannel);
	return class$;
}

$Class* MulticastChannel::class$ = nullptr;

		} // channels
	} // nio
} // java