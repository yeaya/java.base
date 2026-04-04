#include <NetworkChannelTests$ChannelFactory.h>
#include <NetworkChannelTests.h>
#include <java/nio/channels/NetworkChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NetworkChannel = ::java::nio::channels::NetworkChannel;

$Class* NetworkChannelTests$ChannelFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"open", "()Ljava/nio/channels/NetworkChannel;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NetworkChannelTests$ChannelFactory, open, $NetworkChannel*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"NetworkChannelTests$ChannelFactory", "NetworkChannelTests", "ChannelFactory", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"NetworkChannelTests$ChannelFactory",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"NetworkChannelTests"
	};
	$loadClass(NetworkChannelTests$ChannelFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NetworkChannelTests$ChannelFactory);
	});
	return class$;
}

$Class* NetworkChannelTests$ChannelFactory::class$ = nullptr;