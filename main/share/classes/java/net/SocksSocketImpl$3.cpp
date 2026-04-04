#include <java/net/SocksSocketImpl$3.h>
#include <java/net/ProxySelector.h>
#include <java/net/SocksSocketImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProxySelector = ::java::net::ProxySelector;
using $SocksSocketImpl = ::java::net::SocksSocketImpl;

namespace java {
	namespace net {

void SocksSocketImpl$3::init$($SocksSocketImpl* this$0) {
	$set(this, this$0, this$0);
}

$Object* SocksSocketImpl$3::run() {
	return $ProxySelector::getDefault();
}

SocksSocketImpl$3::SocksSocketImpl$3() {
}

$Class* SocksSocketImpl$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/net/SocksSocketImpl;", nullptr, $FINAL | $SYNTHETIC, $field(SocksSocketImpl$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/SocksSocketImpl;)V", nullptr, 0, $method(SocksSocketImpl$3, init$, void, $SocksSocketImpl*)},
		{"run", "()Ljava/net/ProxySelector;", nullptr, $PUBLIC, $virtualMethod(SocksSocketImpl$3, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.net.SocksSocketImpl",
		"connect",
		"(Ljava/net/SocketAddress;I)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.SocksSocketImpl$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.SocksSocketImpl$3",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/net/ProxySelector;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.net.SocksSocketImpl"
	};
	$loadClass(SocksSocketImpl$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SocksSocketImpl$3);
	});
	return class$;
}

$Class* SocksSocketImpl$3::class$ = nullptr;

	} // net
} // java