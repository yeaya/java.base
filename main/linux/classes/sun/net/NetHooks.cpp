#include <sun/net/NetHooks.h>

#include <java/io/FileDescriptor.h>
#include <java/net/InetAddress.h>
#include <sun/net/NetHooks$Provider.h>
#include <sun/net/sdp/SdpProvider.h>
#include <jcpp.h>

using $FileDescriptor = ::java::io::FileDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $NetHooks$Provider = ::sun::net::NetHooks$Provider;
using $SdpProvider = ::sun::net::sdp::SdpProvider;

namespace sun {
	namespace net {

$FieldInfo _NetHooks_FieldInfo_[] = {
	{"provider", "Lsun/net/NetHooks$Provider;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NetHooks, provider)},
	{}
};

$MethodInfo _NetHooks_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NetHooks::*)()>(&NetHooks::init$))},
	{"beforeTcpBind", "(Ljava/io/FileDescriptor;Ljava/net/InetAddress;I)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($FileDescriptor*,$InetAddress*,int32_t)>(&NetHooks::beforeTcpBind)), "java.io.IOException"},
	{"beforeTcpConnect", "(Ljava/io/FileDescriptor;Ljava/net/InetAddress;I)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($FileDescriptor*,$InetAddress*,int32_t)>(&NetHooks::beforeTcpConnect)), "java.io.IOException"},
	{}
};

$InnerClassInfo _NetHooks_InnerClassesInfo_[] = {
	{"sun.net.NetHooks$Provider", "sun.net.NetHooks", "Provider", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _NetHooks_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.net.NetHooks",
	"java.lang.Object",
	nullptr,
	_NetHooks_FieldInfo_,
	_NetHooks_MethodInfo_,
	nullptr,
	nullptr,
	_NetHooks_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.net.NetHooks$Provider"
};

$Object* allocate$NetHooks($Class* clazz) {
	return $of($alloc(NetHooks));
}

$NetHooks$Provider* NetHooks::provider = nullptr;

void NetHooks::init$() {
}

void NetHooks::beforeTcpBind($FileDescriptor* fdObj, $InetAddress* address, int32_t port) {
	$init(NetHooks);
	$nc(NetHooks::provider)->implBeforeTcpBind(fdObj, address, port);
}

void NetHooks::beforeTcpConnect($FileDescriptor* fdObj, $InetAddress* address, int32_t port) {
	$init(NetHooks);
	$nc(NetHooks::provider)->implBeforeTcpConnect(fdObj, address, port);
}

void clinit$NetHooks($Class* class$) {
	$assignStatic(NetHooks::provider, $new($SdpProvider));
}

NetHooks::NetHooks() {
}

$Class* NetHooks::load$($String* name, bool initialize) {
	$loadClass(NetHooks, name, initialize, &_NetHooks_ClassInfo_, clinit$NetHooks, allocate$NetHooks);
	return class$;
}

$Class* NetHooks::class$ = nullptr;

	} // net
} // sun