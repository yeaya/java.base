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

$NetHooks$Provider* NetHooks::provider = nullptr;

void NetHooks::init$() {
}

void NetHooks::beforeTcpBind($FileDescriptor* fdObj, $InetAddress* address, int32_t port) {
	$init(NetHooks);
	NetHooks::provider->implBeforeTcpBind(fdObj, address, port);
}

void NetHooks::beforeTcpConnect($FileDescriptor* fdObj, $InetAddress* address, int32_t port) {
	$init(NetHooks);
	NetHooks::provider->implBeforeTcpConnect(fdObj, address, port);
}

void NetHooks::clinit$($Class* clazz) {
	$assignStatic(NetHooks::provider, $new($SdpProvider));
}

NetHooks::NetHooks() {
}

$Class* NetHooks::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"provider", "Lsun/net/NetHooks$Provider;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NetHooks, provider)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NetHooks, init$, void)},
		{"beforeTcpBind", "(Ljava/io/FileDescriptor;Ljava/net/InetAddress;I)V", nullptr, $PUBLIC | $STATIC, $staticMethod(NetHooks, beforeTcpBind, void, $FileDescriptor*, $InetAddress*, int32_t), "java.io.IOException"},
		{"beforeTcpConnect", "(Ljava/io/FileDescriptor;Ljava/net/InetAddress;I)V", nullptr, $PUBLIC | $STATIC, $staticMethod(NetHooks, beforeTcpConnect, void, $FileDescriptor*, $InetAddress*, int32_t), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.NetHooks$Provider", "sun.net.NetHooks", "Provider", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.net.NetHooks",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.net.NetHooks$Provider"
	};
	$loadClass(NetHooks, name, initialize, &classInfo$$, NetHooks::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(NetHooks);
	});
	return class$;
}

$Class* NetHooks::class$ = nullptr;

	} // net
} // sun