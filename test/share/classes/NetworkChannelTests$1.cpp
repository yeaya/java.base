#include <NetworkChannelTests$1.h>

#include <NetworkChannelTests.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <jcpp.h>

using $NetworkChannelTests = ::NetworkChannelTests;
using $NetworkChannelTests$ChannelFactory = ::NetworkChannelTests$ChannelFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NetworkChannel = ::java::nio::channels::NetworkChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;

$MethodInfo _NetworkChannelTests$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NetworkChannelTests$1::*)()>(&NetworkChannelTests$1::init$))},
	{"open", "()Ljava/nio/channels/NetworkChannel;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _NetworkChannelTests$1_EnclosingMethodInfo_ = {
	"NetworkChannelTests",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _NetworkChannelTests$1_InnerClassesInfo_[] = {
	{"NetworkChannelTests$1", nullptr, nullptr, 0},
	{"NetworkChannelTests$ChannelFactory", "NetworkChannelTests", "ChannelFactory", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _NetworkChannelTests$1_ClassInfo_ = {
	$ACC_SUPER,
	"NetworkChannelTests$1",
	"java.lang.Object",
	"NetworkChannelTests$ChannelFactory",
	nullptr,
	_NetworkChannelTests$1_MethodInfo_,
	nullptr,
	&_NetworkChannelTests$1_EnclosingMethodInfo_,
	_NetworkChannelTests$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"NetworkChannelTests"
};

$Object* allocate$NetworkChannelTests$1($Class* clazz) {
	return $of($alloc(NetworkChannelTests$1));
}

void NetworkChannelTests$1::init$() {
}

$NetworkChannel* NetworkChannelTests$1::open() {
	return $SocketChannel::open();
}

NetworkChannelTests$1::NetworkChannelTests$1() {
}

$Class* NetworkChannelTests$1::load$($String* name, bool initialize) {
	$loadClass(NetworkChannelTests$1, name, initialize, &_NetworkChannelTests$1_ClassInfo_, allocate$NetworkChannelTests$1);
	return class$;
}

$Class* NetworkChannelTests$1::class$ = nullptr;