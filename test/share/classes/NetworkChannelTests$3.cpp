#include <NetworkChannelTests$3.h>
#include <NetworkChannelTests.h>
#include <java/nio/channels/DatagramChannel.h>
#include <java/nio/channels/NetworkChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DatagramChannel = ::java::nio::channels::DatagramChannel;
using $NetworkChannel = ::java::nio::channels::NetworkChannel;

void NetworkChannelTests$3::init$() {
}

$NetworkChannel* NetworkChannelTests$3::open() {
	return $DatagramChannel::open();
}

NetworkChannelTests$3::NetworkChannelTests$3() {
}

$Class* NetworkChannelTests$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(NetworkChannelTests$3, init$, void)},
		{"open", "()Ljava/nio/channels/NetworkChannel;", nullptr, $PUBLIC, $virtualMethod(NetworkChannelTests$3, open, $NetworkChannel*), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"NetworkChannelTests",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"NetworkChannelTests$3", nullptr, nullptr, 0},
		{"NetworkChannelTests$ChannelFactory", "NetworkChannelTests", "ChannelFactory", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"NetworkChannelTests$3",
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
	$loadClass(NetworkChannelTests$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NetworkChannelTests$3);
	});
	return class$;
}

$Class* NetworkChannelTests$3::class$ = nullptr;