#include <NetworkChannelTests$BogusSocketAddress.h>

#include <NetworkChannelTests.h>
#include <java/net/SocketAddress.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketAddress = ::java::net::SocketAddress;

$MethodInfo _NetworkChannelTests$BogusSocketAddress_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NetworkChannelTests$BogusSocketAddress::*)()>(&NetworkChannelTests$BogusSocketAddress::init$))},
	{}
};

$InnerClassInfo _NetworkChannelTests$BogusSocketAddress_InnerClassesInfo_[] = {
	{"NetworkChannelTests$BogusSocketAddress", "NetworkChannelTests", "BogusSocketAddress", $STATIC},
	{}
};

$ClassInfo _NetworkChannelTests$BogusSocketAddress_ClassInfo_ = {
	$ACC_SUPER,
	"NetworkChannelTests$BogusSocketAddress",
	"java.net.SocketAddress",
	nullptr,
	nullptr,
	_NetworkChannelTests$BogusSocketAddress_MethodInfo_,
	nullptr,
	nullptr,
	_NetworkChannelTests$BogusSocketAddress_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"NetworkChannelTests"
};

$Object* allocate$NetworkChannelTests$BogusSocketAddress($Class* clazz) {
	return $of($alloc(NetworkChannelTests$BogusSocketAddress));
}

void NetworkChannelTests$BogusSocketAddress::init$() {
	$SocketAddress::init$();
}

NetworkChannelTests$BogusSocketAddress::NetworkChannelTests$BogusSocketAddress() {
}

$Class* NetworkChannelTests$BogusSocketAddress::load$($String* name, bool initialize) {
	$loadClass(NetworkChannelTests$BogusSocketAddress, name, initialize, &_NetworkChannelTests$BogusSocketAddress_ClassInfo_, allocate$NetworkChannelTests$BogusSocketAddress);
	return class$;
}

$Class* NetworkChannelTests$BogusSocketAddress::class$ = nullptr;