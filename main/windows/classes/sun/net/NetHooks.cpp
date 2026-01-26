#include <sun/net/NetHooks.h>

#include <java/io/FileDescriptor.h>
#include <java/net/InetAddress.h>
#include <jcpp.h>

using $FileDescriptor = ::java::io::FileDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;

namespace sun {
	namespace net {

$MethodInfo _NetHooks_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(NetHooks, init$, void)},
	{"beforeTcpBind", "(Ljava/io/FileDescriptor;Ljava/net/InetAddress;I)V", nullptr, $PUBLIC | $STATIC, $staticMethod(NetHooks, beforeTcpBind, void, $FileDescriptor*, $InetAddress*, int32_t), "java.io.IOException"},
	{"beforeTcpConnect", "(Ljava/io/FileDescriptor;Ljava/net/InetAddress;I)V", nullptr, $PUBLIC | $STATIC, $staticMethod(NetHooks, beforeTcpConnect, void, $FileDescriptor*, $InetAddress*, int32_t), "java.io.IOException"},
	{}
};

$ClassInfo _NetHooks_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.net.NetHooks",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NetHooks_MethodInfo_
};

$Object* allocate$NetHooks($Class* clazz) {
	return $of($alloc(NetHooks));
}

void NetHooks::init$() {
}

void NetHooks::beforeTcpBind($FileDescriptor* fdObj, $InetAddress* address, int32_t port) {
}

void NetHooks::beforeTcpConnect($FileDescriptor* fdObj, $InetAddress* address, int32_t port) {
}

NetHooks::NetHooks() {
}

$Class* NetHooks::load$($String* name, bool initialize) {
	$loadClass(NetHooks, name, initialize, &_NetHooks_ClassInfo_, allocate$NetHooks);
	return class$;
}

$Class* NetHooks::class$ = nullptr;

	} // net
} // sun