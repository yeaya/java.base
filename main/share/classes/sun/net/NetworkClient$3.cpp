#include <sun/net/NetworkClient$3.h>
#include <java/net/InetAddress.h>
#include <java/net/Socket.h>
#include <sun/net/NetworkClient.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NetworkClient = ::sun::net::NetworkClient;

namespace sun {
	namespace net {

void NetworkClient$3::init$($NetworkClient* this$0) {
	$set(this, this$0, this$0);
}

$Object* NetworkClient$3::run() {
	return $nc(this->this$0->serverSocket)->getLocalAddress();
}

NetworkClient$3::NetworkClient$3() {
}

$Class* NetworkClient$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/net/NetworkClient;", nullptr, $FINAL | $SYNTHETIC, $field(NetworkClient$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/net/NetworkClient;)V", nullptr, 0, $method(NetworkClient$3, init$, void, $NetworkClient*)},
		{"run", "()Ljava/net/InetAddress;", nullptr, $PUBLIC, $virtualMethod(NetworkClient$3, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.net.NetworkClient",
		"getLocalAddress",
		"()Ljava/net/InetAddress;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.NetworkClient$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.NetworkClient$3",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/net/InetAddress;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.NetworkClient"
	};
	$loadClass(NetworkClient$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NetworkClient$3);
	});
	return class$;
}

$Class* NetworkClient$3::class$ = nullptr;

	} // net
} // sun