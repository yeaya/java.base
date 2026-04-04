#include <java/net/InetAddress$CachedLocalHost.h>
#include <java/net/InetAddress.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;

namespace java {
	namespace net {

void InetAddress$CachedLocalHost::init$($String* host, $InetAddress* addr) {
	this->expiryTime = $System::nanoTime() + (int64_t)5000000000;
	$set(this, host, host);
	$set(this, addr, addr);
}

InetAddress$CachedLocalHost::InetAddress$CachedLocalHost() {
}

$Class* InetAddress$CachedLocalHost::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"host", "Ljava/lang/String;", nullptr, $FINAL, $field(InetAddress$CachedLocalHost, host)},
		{"addr", "Ljava/net/InetAddress;", nullptr, $FINAL, $field(InetAddress$CachedLocalHost, addr)},
		{"expiryTime", "J", nullptr, $FINAL, $field(InetAddress$CachedLocalHost, expiryTime)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/net/InetAddress;)V", nullptr, 0, $method(InetAddress$CachedLocalHost, init$, void, $String*, $InetAddress*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.InetAddress$CachedLocalHost", "java.net.InetAddress", "CachedLocalHost", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.net.InetAddress$CachedLocalHost",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.net.InetAddress"
	};
	$loadClass(InetAddress$CachedLocalHost, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InetAddress$CachedLocalHost);
	});
	return class$;
}

$Class* InetAddress$CachedLocalHost::class$ = nullptr;

	} // net
} // java