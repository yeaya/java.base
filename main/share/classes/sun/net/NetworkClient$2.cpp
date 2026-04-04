#include <sun/net/NetworkClient$2.h>
#include <java/net/Proxy.h>
#include <java/net/Socket.h>
#include <sun/net/NetworkClient.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Socket = ::java::net::Socket;
using $NetworkClient = ::sun::net::NetworkClient;

namespace sun {
	namespace net {

void NetworkClient$2::init$($NetworkClient* this$0) {
	$set(this, this$0, this$0);
}

$Object* NetworkClient$2::run() {
	return $new($Socket, this->this$0->proxy);
}

NetworkClient$2::NetworkClient$2() {
}

$Class* NetworkClient$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/net/NetworkClient;", nullptr, $FINAL | $SYNTHETIC, $field(NetworkClient$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/net/NetworkClient;)V", nullptr, 0, $method(NetworkClient$2, init$, void, $NetworkClient*)},
		{"run", "()Ljava/net/Socket;", nullptr, $PUBLIC, $virtualMethod(NetworkClient$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.net.NetworkClient",
		"doConnect",
		"(Ljava/lang/String;I)Ljava/net/Socket;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.NetworkClient$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.NetworkClient$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/net/Socket;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.NetworkClient"
	};
	$loadClass(NetworkClient$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NetworkClient$2);
	});
	return class$;
}

$Class* NetworkClient$2::class$ = nullptr;

	} // net
} // sun