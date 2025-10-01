#include <java/net/MulticastSocket.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/DatagramPacket.h>
#include <java/net/DatagramSocket.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/NetworkInterface.h>
#include <java/net/SocketAddress.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $DatagramPacket = ::java::net::DatagramPacket;
using $DatagramSocket = ::java::net::DatagramSocket;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $NetworkInterface = ::java::net::NetworkInterface;
using $SocketAddress = ::java::net::SocketAddress;

namespace java {
	namespace net {

$NamedAttribute MulticastSocket_Attribute_var$0[] = {
	{"since", 's', "14"},
	{}
};

$CompoundAttribute _MulticastSocket_MethodAnnotations_getInterface5[] = {
	{"Ljava/lang/Deprecated;", MulticastSocket_Attribute_var$0},
	{}
};

$NamedAttribute MulticastSocket_Attribute_var$1[] = {
	{"since", 's', "14"},
	{}
};

$CompoundAttribute _MulticastSocket_MethodAnnotations_getLoopbackMode6[] = {
	{"Ljava/lang/Deprecated;", MulticastSocket_Attribute_var$1},
	{}
};

$CompoundAttribute _MulticastSocket_MethodAnnotations_getTTL8[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$NamedAttribute MulticastSocket_Attribute_var$2[] = {
	{"since", 's', "14"},
	{}
};

$CompoundAttribute _MulticastSocket_MethodAnnotations_joinGroup10[] = {
	{"Ljava/lang/Deprecated;", MulticastSocket_Attribute_var$2},
	{}
};

$NamedAttribute MulticastSocket_Attribute_var$3[] = {
	{"since", 's', "14"},
	{}
};

$CompoundAttribute _MulticastSocket_MethodAnnotations_leaveGroup12[] = {
	{"Ljava/lang/Deprecated;", MulticastSocket_Attribute_var$3},
	{}
};

$CompoundAttribute _MulticastSocket_MethodAnnotations_send14[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$NamedAttribute MulticastSocket_Attribute_var$4[] = {
	{"since", 's', "14"},
	{}
};

$CompoundAttribute _MulticastSocket_MethodAnnotations_setInterface15[] = {
	{"Ljava/lang/Deprecated;", MulticastSocket_Attribute_var$4},
	{}
};

$NamedAttribute MulticastSocket_Attribute_var$5[] = {
	{"since", 's', "14"},
	{}
};

$CompoundAttribute _MulticastSocket_MethodAnnotations_setLoopbackMode16[] = {
	{"Ljava/lang/Deprecated;", MulticastSocket_Attribute_var$5},
	{}
};

$CompoundAttribute _MulticastSocket_MethodAnnotations_setTTL18[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$MethodInfo _MulticastSocket_MethodInfo_[] = {
	{"<init>", "(Ljava/net/MulticastSocket;)V", nullptr, 0, $method(static_cast<void(MulticastSocket::*)(MulticastSocket*)>(&MulticastSocket::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MulticastSocket::*)()>(&MulticastSocket::init$)), "java.io.IOException"},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(MulticastSocket::*)(int32_t)>(&MulticastSocket::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/net/SocketAddress;)V", nullptr, $PUBLIC, $method(static_cast<void(MulticastSocket::*)($SocketAddress*)>(&MulticastSocket::init$)), "java.io.IOException"},
	{"delegate", "()Ljava/net/MulticastSocket;", nullptr, $FINAL},
	{"getInterface", "()Ljava/net/InetAddress;", nullptr, $PUBLIC | $DEPRECATED, nullptr, "java.net.SocketException", nullptr, _MulticastSocket_MethodAnnotations_getInterface5},
	{"getLoopbackMode", "()Z", nullptr, $PUBLIC | $DEPRECATED, nullptr, "java.net.SocketException", nullptr, _MulticastSocket_MethodAnnotations_getLoopbackMode6},
	{"getNetworkInterface", "()Ljava/net/NetworkInterface;", nullptr, $PUBLIC, nullptr, "java.net.SocketException"},
	{"getTTL", "()B", nullptr, $PUBLIC | $DEPRECATED, nullptr, "java.io.IOException", nullptr, _MulticastSocket_MethodAnnotations_getTTL8},
	{"getTimeToLive", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"joinGroup", "(Ljava/net/InetAddress;)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, "java.io.IOException", nullptr, _MulticastSocket_MethodAnnotations_joinGroup10},
	{"joinGroup", "(Ljava/net/SocketAddress;Ljava/net/NetworkInterface;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"leaveGroup", "(Ljava/net/InetAddress;)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, "java.io.IOException", nullptr, _MulticastSocket_MethodAnnotations_leaveGroup12},
	{"leaveGroup", "(Ljava/net/SocketAddress;Ljava/net/NetworkInterface;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"send", "(Ljava/net/DatagramPacket;B)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, "java.io.IOException", nullptr, _MulticastSocket_MethodAnnotations_send14},
	{"setInterface", "(Ljava/net/InetAddress;)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, "java.net.SocketException", nullptr, _MulticastSocket_MethodAnnotations_setInterface15},
	{"setLoopbackMode", "(Z)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, "java.net.SocketException", nullptr, _MulticastSocket_MethodAnnotations_setLoopbackMode16},
	{"setNetworkInterface", "(Ljava/net/NetworkInterface;)V", nullptr, $PUBLIC, nullptr, "java.net.SocketException"},
	{"setTTL", "(B)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, "java.io.IOException", nullptr, _MulticastSocket_MethodAnnotations_setTTL18},
	{"setTimeToLive", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _MulticastSocket_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.net.MulticastSocket",
	"java.net.DatagramSocket",
	nullptr,
	nullptr,
	_MulticastSocket_MethodInfo_
};

$Object* allocate$MulticastSocket($Class* clazz) {
	return $of($alloc(MulticastSocket));
}

MulticastSocket* MulticastSocket::delegate() {
	return $cast(MulticastSocket, $DatagramSocket::delegate());
}

void MulticastSocket::init$(MulticastSocket* delegate) {
	$DatagramSocket::init$(static_cast<$DatagramSocket*>(delegate));
}

void MulticastSocket::init$() {
	MulticastSocket::init$(static_cast<$SocketAddress*>($$new($InetSocketAddress, 0)));
}

void MulticastSocket::init$(int32_t port) {
	MulticastSocket::init$(static_cast<$SocketAddress*>($$new($InetSocketAddress, port)));
}

void MulticastSocket::init$($SocketAddress* bindaddr) {
	MulticastSocket::init$($cast(MulticastSocket, $(createDelegate(bindaddr, MulticastSocket::class$))));
}

void MulticastSocket::setTTL(int8_t ttl) {
	$nc($(delegate()))->setTTL(ttl);
}

void MulticastSocket::setTimeToLive(int32_t ttl) {
	$nc($(delegate()))->setTimeToLive(ttl);
}

int8_t MulticastSocket::getTTL() {
	return $nc($(delegate()))->getTTL();
}

int32_t MulticastSocket::getTimeToLive() {
	return $nc($(delegate()))->getTimeToLive();
}

void MulticastSocket::joinGroup($InetAddress* mcastaddr) {
	$nc($(delegate()))->joinGroup(mcastaddr);
}

void MulticastSocket::leaveGroup($InetAddress* mcastaddr) {
	$nc($(delegate()))->leaveGroup(mcastaddr);
}

void MulticastSocket::joinGroup($SocketAddress* mcastaddr, $NetworkInterface* netIf) {
	$DatagramSocket::joinGroup(mcastaddr, netIf);
}

void MulticastSocket::leaveGroup($SocketAddress* mcastaddr, $NetworkInterface* netIf) {
	$DatagramSocket::leaveGroup(mcastaddr, netIf);
}

void MulticastSocket::setInterface($InetAddress* inf) {
	$nc($(delegate()))->setInterface(inf);
}

$InetAddress* MulticastSocket::getInterface() {
	return $nc($(delegate()))->getInterface();
}

void MulticastSocket::setNetworkInterface($NetworkInterface* netIf) {
	$nc($(delegate()))->setNetworkInterface(netIf);
}

$NetworkInterface* MulticastSocket::getNetworkInterface() {
	return $nc($(delegate()))->getNetworkInterface();
}

void MulticastSocket::setLoopbackMode(bool disable) {
	$nc($(delegate()))->setLoopbackMode(disable);
}

bool MulticastSocket::getLoopbackMode() {
	return $nc($(delegate()))->getLoopbackMode();
}

void MulticastSocket::send($DatagramPacket* p, int8_t ttl) {
	$nc($(delegate()))->send(p, ttl);
}

MulticastSocket::MulticastSocket() {
}

$Class* MulticastSocket::load$($String* name, bool initialize) {
	$loadClass(MulticastSocket, name, initialize, &_MulticastSocket_ClassInfo_, allocate$MulticastSocket);
	return class$;
}

$Class* MulticastSocket::class$ = nullptr;

	} // net
} // java