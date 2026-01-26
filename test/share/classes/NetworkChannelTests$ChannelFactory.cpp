#include <NetworkChannelTests$ChannelFactory.h>

#include <NetworkChannelTests.h>
#include <java/nio/channels/NetworkChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NetworkChannel = ::java::nio::channels::NetworkChannel;

$MethodInfo _NetworkChannelTests$ChannelFactory_MethodInfo_[] = {
	{"open", "()Ljava/nio/channels/NetworkChannel;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NetworkChannelTests$ChannelFactory, open, $NetworkChannel*), "java.io.IOException"},
	{}
};

$InnerClassInfo _NetworkChannelTests$ChannelFactory_InnerClassesInfo_[] = {
	{"NetworkChannelTests$ChannelFactory", "NetworkChannelTests", "ChannelFactory", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _NetworkChannelTests$ChannelFactory_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"NetworkChannelTests$ChannelFactory",
	nullptr,
	nullptr,
	nullptr,
	_NetworkChannelTests$ChannelFactory_MethodInfo_,
	nullptr,
	nullptr,
	_NetworkChannelTests$ChannelFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"NetworkChannelTests"
};

$Object* allocate$NetworkChannelTests$ChannelFactory($Class* clazz) {
	return $of($alloc(NetworkChannelTests$ChannelFactory));
}

$Class* NetworkChannelTests$ChannelFactory::load$($String* name, bool initialize) {
	$loadClass(NetworkChannelTests$ChannelFactory, name, initialize, &_NetworkChannelTests$ChannelFactory_ClassInfo_, allocate$NetworkChannelTests$ChannelFactory);
	return class$;
}

$Class* NetworkChannelTests$ChannelFactory::class$ = nullptr;