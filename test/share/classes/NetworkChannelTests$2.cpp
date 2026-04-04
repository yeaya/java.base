#include <NetworkChannelTests$2.h>
#include <NetworkChannelTests.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NetworkChannel = ::java::nio::channels::NetworkChannel;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;

void NetworkChannelTests$2::init$() {
}

$NetworkChannel* NetworkChannelTests$2::open() {
	return $ServerSocketChannel::open();
}

NetworkChannelTests$2::NetworkChannelTests$2() {
}

$Class* NetworkChannelTests$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(NetworkChannelTests$2, init$, void)},
		{"open", "()Ljava/nio/channels/NetworkChannel;", nullptr, $PUBLIC, $virtualMethod(NetworkChannelTests$2, open, $NetworkChannel*), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"NetworkChannelTests",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"NetworkChannelTests$2", nullptr, nullptr, 0},
		{"NetworkChannelTests$ChannelFactory", "NetworkChannelTests", "ChannelFactory", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"NetworkChannelTests$2",
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
	$loadClass(NetworkChannelTests$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NetworkChannelTests$2);
	});
	return class$;
}

$Class* NetworkChannelTests$2::class$ = nullptr;