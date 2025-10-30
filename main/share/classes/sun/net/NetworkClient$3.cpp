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
using $InetAddress = ::java::net::InetAddress;
using $Socket = ::java::net::Socket;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $NetworkClient = ::sun::net::NetworkClient;

namespace sun {
	namespace net {

$FieldInfo _NetworkClient$3_FieldInfo_[] = {
	{"this$0", "Lsun/net/NetworkClient;", nullptr, $FINAL | $SYNTHETIC, $field(NetworkClient$3, this$0)},
	{}
};

$MethodInfo _NetworkClient$3_MethodInfo_[] = {
	{"<init>", "(Lsun/net/NetworkClient;)V", nullptr, 0, $method(static_cast<void(NetworkClient$3::*)($NetworkClient*)>(&NetworkClient$3::init$))},
	{"run", "()Ljava/net/InetAddress;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _NetworkClient$3_EnclosingMethodInfo_ = {
	"sun.net.NetworkClient",
	"getLocalAddress",
	"()Ljava/net/InetAddress;"
};

$InnerClassInfo _NetworkClient$3_InnerClassesInfo_[] = {
	{"sun.net.NetworkClient$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NetworkClient$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.NetworkClient$3",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_NetworkClient$3_FieldInfo_,
	_NetworkClient$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/net/InetAddress;>;",
	&_NetworkClient$3_EnclosingMethodInfo_,
	_NetworkClient$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.NetworkClient"
};

$Object* allocate$NetworkClient$3($Class* clazz) {
	return $of($alloc(NetworkClient$3));
}

void NetworkClient$3::init$($NetworkClient* this$0) {
	$set(this, this$0, this$0);
}

$Object* NetworkClient$3::run() {
	return $of($nc(this->this$0->serverSocket)->getLocalAddress());
}

NetworkClient$3::NetworkClient$3() {
}

$Class* NetworkClient$3::load$($String* name, bool initialize) {
	$loadClass(NetworkClient$3, name, initialize, &_NetworkClient$3_ClassInfo_, allocate$NetworkClient$3);
	return class$;
}

$Class* NetworkClient$3::class$ = nullptr;

	} // net
} // sun