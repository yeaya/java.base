#include <NetworkChannelTests$2.h>

#include <NetworkChannelTests.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <jcpp.h>

using $NetworkChannelTests = ::NetworkChannelTests;
using $NetworkChannelTests$ChannelFactory = ::NetworkChannelTests$ChannelFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NetworkChannel = ::java::nio::channels::NetworkChannel;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;

$MethodInfo _NetworkChannelTests$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NetworkChannelTests$2::*)()>(&NetworkChannelTests$2::init$))},
	{"open", "()Ljava/nio/channels/NetworkChannel;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _NetworkChannelTests$2_EnclosingMethodInfo_ = {
	"NetworkChannelTests",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _NetworkChannelTests$2_InnerClassesInfo_[] = {
	{"NetworkChannelTests$2", nullptr, nullptr, 0},
	{"NetworkChannelTests$ChannelFactory", "NetworkChannelTests", "ChannelFactory", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _NetworkChannelTests$2_ClassInfo_ = {
	$ACC_SUPER,
	"NetworkChannelTests$2",
	"java.lang.Object",
	"NetworkChannelTests$ChannelFactory",
	nullptr,
	_NetworkChannelTests$2_MethodInfo_,
	nullptr,
	&_NetworkChannelTests$2_EnclosingMethodInfo_,
	_NetworkChannelTests$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"NetworkChannelTests"
};

$Object* allocate$NetworkChannelTests$2($Class* clazz) {
	return $of($alloc(NetworkChannelTests$2));
}

void NetworkChannelTests$2::init$() {
}

$NetworkChannel* NetworkChannelTests$2::open() {
	return $ServerSocketChannel::open();
}

NetworkChannelTests$2::NetworkChannelTests$2() {
}

$Class* NetworkChannelTests$2::load$($String* name, bool initialize) {
	$loadClass(NetworkChannelTests$2, name, initialize, &_NetworkChannelTests$2_ClassInfo_, allocate$NetworkChannelTests$2);
	return class$;
}

$Class* NetworkChannelTests$2::class$ = nullptr;