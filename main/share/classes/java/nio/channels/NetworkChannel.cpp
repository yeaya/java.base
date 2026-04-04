#include <java/nio/channels/NetworkChannel.h>
#include <java/net/SocketAddress.h>
#include <java/net/SocketOption.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketAddress = ::java::net::SocketAddress;
using $SocketOption = ::java::net::SocketOption;
using $Set = ::java::util::Set;

namespace java {
	namespace nio {
		namespace channels {

$Class* NetworkChannel::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"bind", "(Ljava/net/SocketAddress;)Ljava/nio/channels/NetworkChannel;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NetworkChannel, bind, NetworkChannel*, $SocketAddress*), "java.io.IOException"},
		{"getLocalAddress", "()Ljava/net/SocketAddress;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NetworkChannel, getLocalAddress, $SocketAddress*), "java.io.IOException"},
		{"getOption", "(Ljava/net/SocketOption;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/net/SocketOption<TT;>;)TT;", $PUBLIC | $ABSTRACT, $virtualMethod(NetworkChannel, getOption, $Object*, $SocketOption*), "java.io.IOException"},
		{"setOption", "(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/nio/channels/NetworkChannel;", "<T:Ljava/lang/Object;>(Ljava/net/SocketOption<TT;>;TT;)Ljava/nio/channels/NetworkChannel;", $PUBLIC | $ABSTRACT, $virtualMethod(NetworkChannel, setOption, NetworkChannel*, $SocketOption*, Object$*), "java.io.IOException"},
		{"supportedOptions", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $PUBLIC | $ABSTRACT, $virtualMethod(NetworkChannel, supportedOptions, $Set*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.nio.channels.NetworkChannel",
		nullptr,
		"java.nio.channels.Channel",
		nullptr,
		methodInfos$$
	};
	$loadClass(NetworkChannel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NetworkChannel);
	});
	return class$;
}

$Class* NetworkChannel::class$ = nullptr;

		} // channels
	} // nio
} // java