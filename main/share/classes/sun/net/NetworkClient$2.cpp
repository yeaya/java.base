#include <sun/net/NetworkClient$2.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/Proxy.h>
#include <java/net/Socket.h>
#include <sun/net/NetworkClient.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Proxy = ::java::net::Proxy;
using $Socket = ::java::net::Socket;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $NetworkClient = ::sun::net::NetworkClient;

namespace sun {
	namespace net {

$FieldInfo _NetworkClient$2_FieldInfo_[] = {
	{"this$0", "Lsun/net/NetworkClient;", nullptr, $FINAL | $SYNTHETIC, $field(NetworkClient$2, this$0)},
	{}
};

$MethodInfo _NetworkClient$2_MethodInfo_[] = {
	{"<init>", "(Lsun/net/NetworkClient;)V", nullptr, 0, $method(static_cast<void(NetworkClient$2::*)($NetworkClient*)>(&NetworkClient$2::init$))},
	{"run", "()Ljava/net/Socket;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _NetworkClient$2_EnclosingMethodInfo_ = {
	"sun.net.NetworkClient",
	"doConnect",
	"(Ljava/lang/String;I)Ljava/net/Socket;"
};

$InnerClassInfo _NetworkClient$2_InnerClassesInfo_[] = {
	{"sun.net.NetworkClient$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NetworkClient$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.NetworkClient$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_NetworkClient$2_FieldInfo_,
	_NetworkClient$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/net/Socket;>;",
	&_NetworkClient$2_EnclosingMethodInfo_,
	_NetworkClient$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.NetworkClient"
};

$Object* allocate$NetworkClient$2($Class* clazz) {
	return $of($alloc(NetworkClient$2));
}

void NetworkClient$2::init$($NetworkClient* this$0) {
	$set(this, this$0, this$0);
}

$Object* NetworkClient$2::run() {
	return $of($new($Socket, this->this$0->proxy));
}

NetworkClient$2::NetworkClient$2() {
}

$Class* NetworkClient$2::load$($String* name, bool initialize) {
	$loadClass(NetworkClient$2, name, initialize, &_NetworkClient$2_ClassInfo_, allocate$NetworkClient$2);
	return class$;
}

$Class* NetworkClient$2::class$ = nullptr;

	} // net
} // sun