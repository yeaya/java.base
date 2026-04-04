#include <sun/net/SocksProxy.h>
#include <java/net/Proxy$Type.h>
#include <java/net/Proxy.h>
#include <java/net/SocketAddress.h>
#include <jcpp.h>

#undef SOCKS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Proxy = ::java::net::Proxy;
using $Proxy$Type = ::java::net::Proxy$Type;
using $SocketAddress = ::java::net::SocketAddress;

namespace sun {
	namespace net {

void SocksProxy::init$($SocketAddress* addr, int32_t version) {
	$init($Proxy$Type);
	$Proxy::init$($Proxy$Type::SOCKS, addr);
	this->version = version;
}

SocksProxy* SocksProxy::create($SocketAddress* addr, int32_t version) {
	$init(SocksProxy);
	return $new(SocksProxy, addr, version);
}

int32_t SocksProxy::protocolVersion() {
	return this->version;
}

SocksProxy::SocksProxy() {
}

$Class* SocksProxy::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"version", "I", nullptr, $PRIVATE | $FINAL, $field(SocksProxy, version)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/SocketAddress;I)V", nullptr, $PRIVATE, $method(SocksProxy, init$, void, $SocketAddress*, int32_t)},
		{"create", "(Ljava/net/SocketAddress;I)Lsun/net/SocksProxy;", nullptr, $PUBLIC | $STATIC, $staticMethod(SocksProxy, create, SocksProxy*, $SocketAddress*, int32_t)},
		{"protocolVersion", "()I", nullptr, $PUBLIC, $method(SocksProxy, protocolVersion, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.net.SocksProxy",
		"java.net.Proxy",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SocksProxy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SocksProxy);
	});
	return class$;
}

$Class* SocksProxy::class$ = nullptr;

	} // net
} // sun