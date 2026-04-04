#include <NetworkChannelTests$1.h>
#include <NetworkChannelTests.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NetworkChannel = ::java::nio::channels::NetworkChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;

void NetworkChannelTests$1::init$() {
}

$NetworkChannel* NetworkChannelTests$1::open() {
	return $SocketChannel::open();
}

NetworkChannelTests$1::NetworkChannelTests$1() {
}

$Class* NetworkChannelTests$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(NetworkChannelTests$1, init$, void)},
		{"open", "()Ljava/nio/channels/NetworkChannel;", nullptr, $PUBLIC, $virtualMethod(NetworkChannelTests$1, open, $NetworkChannel*), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"NetworkChannelTests",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"NetworkChannelTests$1", nullptr, nullptr, 0},
		{"NetworkChannelTests$ChannelFactory", "NetworkChannelTests", "ChannelFactory", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"NetworkChannelTests$1",
		"java.lang.Object",
		"NetworkChannelTests$ChannelFactory",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"NetworkChannelTests"
	};
	$loadClass(NetworkChannelTests$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NetworkChannelTests$1);
	});
	return class$;
}

$Class* NetworkChannelTests$1::class$ = nullptr;