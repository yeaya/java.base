#include <java/net/NetMulticastSocket$1.h>

#include <java/lang/reflect/Method.h>
#include <java/net/DatagramPacket.h>
#include <java/net/DatagramSocketImpl.h>
#include <java/net/NetMulticastSocket.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DatagramPacket = ::java::net::DatagramPacket;
using $DatagramSocketImpl = ::java::net::DatagramSocketImpl;

namespace java {
	namespace net {

$FieldInfo _NetMulticastSocket$1_FieldInfo_[] = {
	{"val$impl", "Ljava/net/DatagramSocketImpl;", nullptr, $FINAL | $SYNTHETIC, $field(NetMulticastSocket$1, val$impl)},
	{}
};

$MethodInfo _NetMulticastSocket$1_MethodInfo_[] = {
	{"<init>", "(Ljava/net/DatagramSocketImpl;)V", nullptr, 0, $method(static_cast<void(NetMulticastSocket$1::*)($DatagramSocketImpl*)>(&NetMulticastSocket$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, nullptr, "java.lang.NoSuchMethodException"},
	{}
};

$EnclosingMethodInfo _NetMulticastSocket$1_EnclosingMethodInfo_ = {
	"java.net.NetMulticastSocket",
	"checkOldImpl",
	"(Ljava/net/DatagramSocketImpl;)Z"
};

$InnerClassInfo _NetMulticastSocket$1_InnerClassesInfo_[] = {
	{"java.net.NetMulticastSocket$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NetMulticastSocket$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.NetMulticastSocket$1",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_NetMulticastSocket$1_FieldInfo_,
	_NetMulticastSocket$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Object;>;",
	&_NetMulticastSocket$1_EnclosingMethodInfo_,
	_NetMulticastSocket$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.NetMulticastSocket"
};

$Object* allocate$NetMulticastSocket$1($Class* clazz) {
	return $of($alloc(NetMulticastSocket$1));
}

void NetMulticastSocket$1::init$($DatagramSocketImpl* val$impl) {
	$set(this, val$impl, val$impl);
}

$Object* NetMulticastSocket$1::run() {
	$beforeCallerSensitive();
	$var($ClassArray, cl, $new($ClassArray, 1));
	$load($DatagramPacket);
	cl->set(0, $DatagramPacket::class$);
	$nc($of(this->val$impl))->getClass()->getDeclaredMethod("peekData"_s, cl);
	return $of(nullptr);
}

NetMulticastSocket$1::NetMulticastSocket$1() {
}

$Class* NetMulticastSocket$1::load$($String* name, bool initialize) {
	$loadClass(NetMulticastSocket$1, name, initialize, &_NetMulticastSocket$1_ClassInfo_, allocate$NetMulticastSocket$1);
	return class$;
}

$Class* NetMulticastSocket$1::class$ = nullptr;

	} // net
} // java