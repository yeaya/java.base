#include <java/net/MulticastSocket.h>
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

MulticastSocket* MulticastSocket::delegate() {
	return $cast(MulticastSocket, $DatagramSocket::delegate());
}

void MulticastSocket::init$(MulticastSocket* delegate) {
	$DatagramSocket::init$(delegate);
}

void MulticastSocket::init$() {
	MulticastSocket::init$($$new($InetSocketAddress, 0));
}

void MulticastSocket::init$(int32_t port) {
	MulticastSocket::init$($$new($InetSocketAddress, port));
}

void MulticastSocket::init$($SocketAddress* bindaddr) {
	MulticastSocket::init$($$cast(MulticastSocket, createDelegate(bindaddr, MulticastSocket::class$)));
}

void MulticastSocket::setTTL(int8_t ttl) {
	$$nc(delegate())->setTTL(ttl);
}

void MulticastSocket::setTimeToLive(int32_t ttl) {
	$$nc(delegate())->setTimeToLive(ttl);
}

int8_t MulticastSocket::getTTL() {
	return $$nc(delegate())->getTTL();
}

int32_t MulticastSocket::getTimeToLive() {
	return $$nc(delegate())->getTimeToLive();
}

void MulticastSocket::joinGroup($InetAddress* mcastaddr) {
	$$nc(delegate())->joinGroup(mcastaddr);
}

void MulticastSocket::leaveGroup($InetAddress* mcastaddr) {
	$$nc(delegate())->leaveGroup(mcastaddr);
}

void MulticastSocket::joinGroup($SocketAddress* mcastaddr, $NetworkInterface* netIf) {
	$DatagramSocket::joinGroup(mcastaddr, netIf);
}

void MulticastSocket::leaveGroup($SocketAddress* mcastaddr, $NetworkInterface* netIf) {
	$DatagramSocket::leaveGroup(mcastaddr, netIf);
}

void MulticastSocket::setInterface($InetAddress* inf) {
	$$nc(delegate())->setInterface(inf);
}

$InetAddress* MulticastSocket::getInterface() {
	return $$nc(delegate())->getInterface();
}

void MulticastSocket::setNetworkInterface($NetworkInterface* netIf) {
	$$nc(delegate())->setNetworkInterface(netIf);
}

$NetworkInterface* MulticastSocket::getNetworkInterface() {
	return $$nc(delegate())->getNetworkInterface();
}

void MulticastSocket::setLoopbackMode(bool disable) {
	$$nc(delegate())->setLoopbackMode(disable);
}

bool MulticastSocket::getLoopbackMode() {
	return $$nc(delegate())->getLoopbackMode();
}

void MulticastSocket::send($DatagramPacket* p, int8_t ttl) {
	$$nc(delegate())->send(p, ttl);
}

MulticastSocket::MulticastSocket() {
}

$Class* MulticastSocket::load$($String* name, bool initialize) {
	$NamedAttribute getInterfacemethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "14"},
		{}
	};
	$CompoundAttribute getInterfacemethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", getInterfacemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getLoopbackModemethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "14"},
		{}
	};
	$CompoundAttribute getLoopbackModemethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", getLoopbackModemethodAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute getTTLmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$NamedAttribute joinGroupmethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "14"},
		{}
	};
	$CompoundAttribute joinGroupmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", joinGroupmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute leaveGroupmethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "14"},
		{}
	};
	$CompoundAttribute leaveGroupmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", leaveGroupmethodAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute sendmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$NamedAttribute setInterfacemethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "14"},
		{}
	};
	$CompoundAttribute setInterfacemethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", setInterfacemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setLoopbackModemethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "14"},
		{}
	};
	$CompoundAttribute setLoopbackModemethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", setLoopbackModemethodAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute setTTLmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/MulticastSocket;)V", nullptr, 0, $method(MulticastSocket, init$, void, MulticastSocket*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(MulticastSocket, init$, void), "java.io.IOException"},
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(MulticastSocket, init$, void, int32_t), "java.io.IOException"},
		{"<init>", "(Ljava/net/SocketAddress;)V", nullptr, $PUBLIC, $method(MulticastSocket, init$, void, $SocketAddress*), "java.io.IOException"},
		{"delegate", "()Ljava/net/MulticastSocket;", nullptr, $FINAL, $virtualMethod(MulticastSocket, delegate, MulticastSocket*)},
		{"getInterface", "()Ljava/net/InetAddress;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(MulticastSocket, getInterface, $InetAddress*), "java.net.SocketException", nullptr, getInterfacemethodAnnotations$$},
		{"getLoopbackMode", "()Z", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(MulticastSocket, getLoopbackMode, bool), "java.net.SocketException", nullptr, getLoopbackModemethodAnnotations$$},
		{"getNetworkInterface", "()Ljava/net/NetworkInterface;", nullptr, $PUBLIC, $virtualMethod(MulticastSocket, getNetworkInterface, $NetworkInterface*), "java.net.SocketException"},
		{"getTTL", "()B", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(MulticastSocket, getTTL, int8_t), "java.io.IOException", nullptr, getTTLmethodAnnotations$$},
		{"getTimeToLive", "()I", nullptr, $PUBLIC, $virtualMethod(MulticastSocket, getTimeToLive, int32_t), "java.io.IOException"},
		{"joinGroup", "(Ljava/net/InetAddress;)V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(MulticastSocket, joinGroup, void, $InetAddress*), "java.io.IOException", nullptr, joinGroupmethodAnnotations$$},
		{"joinGroup", "(Ljava/net/SocketAddress;Ljava/net/NetworkInterface;)V", nullptr, $PUBLIC, $virtualMethod(MulticastSocket, joinGroup, void, $SocketAddress*, $NetworkInterface*), "java.io.IOException"},
		{"leaveGroup", "(Ljava/net/InetAddress;)V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(MulticastSocket, leaveGroup, void, $InetAddress*), "java.io.IOException", nullptr, leaveGroupmethodAnnotations$$},
		{"leaveGroup", "(Ljava/net/SocketAddress;Ljava/net/NetworkInterface;)V", nullptr, $PUBLIC, $virtualMethod(MulticastSocket, leaveGroup, void, $SocketAddress*, $NetworkInterface*), "java.io.IOException"},
		{"send", "(Ljava/net/DatagramPacket;B)V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(MulticastSocket, send, void, $DatagramPacket*, int8_t), "java.io.IOException", nullptr, sendmethodAnnotations$$},
		{"setInterface", "(Ljava/net/InetAddress;)V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(MulticastSocket, setInterface, void, $InetAddress*), "java.net.SocketException", nullptr, setInterfacemethodAnnotations$$},
		{"setLoopbackMode", "(Z)V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(MulticastSocket, setLoopbackMode, void, bool), "java.net.SocketException", nullptr, setLoopbackModemethodAnnotations$$},
		{"setNetworkInterface", "(Ljava/net/NetworkInterface;)V", nullptr, $PUBLIC, $virtualMethod(MulticastSocket, setNetworkInterface, void, $NetworkInterface*), "java.net.SocketException"},
		{"setTTL", "(B)V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(MulticastSocket, setTTL, void, int8_t), "java.io.IOException", nullptr, setTTLmethodAnnotations$$},
		{"setTimeToLive", "(I)V", nullptr, $PUBLIC, $virtualMethod(MulticastSocket, setTimeToLive, void, int32_t), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.net.MulticastSocket",
		"java.net.DatagramSocket",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MulticastSocket, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MulticastSocket);
	});
	return class$;
}

$Class* MulticastSocket::class$ = nullptr;

	} // net
} // java