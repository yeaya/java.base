#include <java/net/PlainDatagramSocketImpl.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/net/AbstractPlainDatagramSocketImpl.h>
#include <java/net/DatagramPacket.h>
#include <java/net/InetAddress.h>
#include <java/net/NetworkInterface.h>
#include <java/net/SocketException.h>
#include <java/net/SocketOption.h>
#include <java/net/SocketOptions.h>
#include <java/net/StandardSocketOptions.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef SO_REUSEPORT

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AbstractPlainDatagramSocketImpl = ::java::net::AbstractPlainDatagramSocketImpl;
using $DatagramPacket = ::java::net::DatagramPacket;
using $InetAddress = ::java::net::InetAddress;
using $NetworkInterface = ::java::net::NetworkInterface;
using $SocketException = ::java::net::SocketException;
using $SocketOptions = ::java::net::SocketOptions;
using $StandardSocketOptions = ::java::net::StandardSocketOptions;

namespace java {
	namespace net {

void PlainDatagramSocketImpl::init$(bool isMulticast) {
	$AbstractPlainDatagramSocketImpl::init$(isMulticast);
}

void PlainDatagramSocketImpl::socketSetOption(int32_t opt, Object$* val) {
	$init($StandardSocketOptions);
	if (opt == $SocketOptions::SO_REUSEPORT && !$$nc(supportedOptions())->contains($StandardSocketOptions::SO_REUSEPORT)) {
		$throwNew($UnsupportedOperationException, "unsupported option"_s);
	}
	try {
		socketSetOption0(opt, val);
	} catch ($SocketException& se) {
		if (!this->connected) {
			$throw(se);
		}
	}
}

void PlainDatagramSocketImpl::bind0(int32_t lport, $InetAddress* laddr) {
	$prepareNative(bind0, void, int32_t lport, $InetAddress* laddr);
	$invokeNative(lport, laddr);
	$finishNative();
}

void PlainDatagramSocketImpl::send0($DatagramPacket* p) {
	$prepareNative(send0, void, $DatagramPacket* p);
	$invokeNative(p);
	$finishNative();
}

int32_t PlainDatagramSocketImpl::peek($InetAddress* i) {
	$prepareNative(peek, int32_t, $InetAddress* i);
	int32_t $ret = $invokeNative(i);
	$finishNative();
	return $ret;
}

int32_t PlainDatagramSocketImpl::peekData($DatagramPacket* p) {
	$prepareNative(peekData, int32_t, $DatagramPacket* p);
	int32_t $ret = $invokeNative(p);
	$finishNative();
	return $ret;
}

void PlainDatagramSocketImpl::receive0($DatagramPacket* p) {
	$prepareNative(receive0, void, $DatagramPacket* p);
	$invokeNative(p);
	$finishNative();
}

void PlainDatagramSocketImpl::setTimeToLive(int32_t ttl) {
	$prepareNative(setTimeToLive, void, int32_t ttl);
	$invokeNative(ttl);
	$finishNative();
}

int32_t PlainDatagramSocketImpl::getTimeToLive() {
	$prepareNative(getTimeToLive, int32_t);
	int32_t $ret = $invokeNative();
	$finishNative();
	return $ret;
}

void PlainDatagramSocketImpl::setTTL(int8_t ttl) {
	$prepareNative(setTTL, void, int8_t ttl);
	$invokeNative(ttl);
	$finishNative();
}

int8_t PlainDatagramSocketImpl::getTTL() {
	$prepareNative(getTTL, int8_t);
	int8_t $ret = $invokeNative();
	$finishNative();
	return $ret;
}

void PlainDatagramSocketImpl::join($InetAddress* inetaddr, $NetworkInterface* netIf) {
	$prepareNative(join, void, $InetAddress* inetaddr, $NetworkInterface* netIf);
	$invokeNative(inetaddr, netIf);
	$finishNative();
}

void PlainDatagramSocketImpl::leave($InetAddress* inetaddr, $NetworkInterface* netIf) {
	$prepareNative(leave, void, $InetAddress* inetaddr, $NetworkInterface* netIf);
	$invokeNative(inetaddr, netIf);
	$finishNative();
}

void PlainDatagramSocketImpl::datagramSocketCreate() {
	$prepareNative(datagramSocketCreate, void);
	$invokeNative();
	$finishNative();
}

void PlainDatagramSocketImpl::datagramSocketClose() {
	$prepareNative(datagramSocketClose, void);
	$invokeNative();
	$finishNative();
}

void PlainDatagramSocketImpl::socketSetOption0(int32_t opt, Object$* val) {
	$prepareNative(socketSetOption0, void, int32_t opt, Object$* val);
	$invokeNative(opt, val);
	$finishNative();
}

$Object* PlainDatagramSocketImpl::socketGetOption(int32_t opt) {
	$prepareNative(socketGetOption, $Object*, int32_t opt);
	$var($Object, $ret, $invokeNativeObject(opt));
	$finishNative();
	return $ret;
}

void PlainDatagramSocketImpl::connect0($InetAddress* address, int32_t port) {
	$prepareNative(connect0, void, $InetAddress* address, int32_t port);
	$invokeNative(address, port);
	$finishNative();
}

void PlainDatagramSocketImpl::disconnect0(int32_t family) {
	$prepareNative(disconnect0, void, int32_t family);
	$invokeNative(family);
	$finishNative();
}

int32_t PlainDatagramSocketImpl::dataAvailable() {
	$prepareNative(dataAvailable, int32_t);
	int32_t $ret = $invokeNative();
	$finishNative();
	return $ret;
}

void PlainDatagramSocketImpl::init() {
	$init(PlainDatagramSocketImpl);
	$prepareNativeStatic(init, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void PlainDatagramSocketImpl::clinit$($Class* clazz) {
	{
		PlainDatagramSocketImpl::init();
	}
}

PlainDatagramSocketImpl::PlainDatagramSocketImpl() {
}

$Class* PlainDatagramSocketImpl::load$($String* name, bool initialize) {
	$CompoundAttribute getTTLmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute setTTLmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Z)V", nullptr, 0, $method(PlainDatagramSocketImpl, init$, void, bool)},
		{"bind0", "(ILjava/net/InetAddress;)V", nullptr, $PROTECTED | $SYNCHRONIZED | $NATIVE, $virtualMethod(PlainDatagramSocketImpl, bind0, void, int32_t, $InetAddress*), "java.net.SocketException"},
		{"connect0", "(Ljava/net/InetAddress;I)V", nullptr, $PROTECTED | $NATIVE, $virtualMethod(PlainDatagramSocketImpl, connect0, void, $InetAddress*, int32_t), "java.net.SocketException"},
		{"dataAvailable", "()I", nullptr, $NATIVE, $virtualMethod(PlainDatagramSocketImpl, dataAvailable, int32_t)},
		{"datagramSocketClose", "()V", nullptr, $PROTECTED | $NATIVE, $virtualMethod(PlainDatagramSocketImpl, datagramSocketClose, void)},
		{"datagramSocketCreate", "()V", nullptr, $PROTECTED | $NATIVE, $virtualMethod(PlainDatagramSocketImpl, datagramSocketCreate, void), "java.net.SocketException"},
		{"disconnect0", "(I)V", nullptr, $PROTECTED | $NATIVE, $virtualMethod(PlainDatagramSocketImpl, disconnect0, void, int32_t)},
		{"getTTL", "()B", nullptr, $PROTECTED | $NATIVE | $DEPRECATED, $virtualMethod(PlainDatagramSocketImpl, getTTL, int8_t), "java.io.IOException", nullptr, getTTLmethodAnnotations$$},
		{"getTimeToLive", "()I", nullptr, $PROTECTED | $NATIVE, $virtualMethod(PlainDatagramSocketImpl, getTimeToLive, int32_t), "java.io.IOException"},
		{"init", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(PlainDatagramSocketImpl, init, void)},
		{"join", "(Ljava/net/InetAddress;Ljava/net/NetworkInterface;)V", nullptr, $PROTECTED | $NATIVE, $virtualMethod(PlainDatagramSocketImpl, join, void, $InetAddress*, $NetworkInterface*), "java.io.IOException"},
		{"leave", "(Ljava/net/InetAddress;Ljava/net/NetworkInterface;)V", nullptr, $PROTECTED | $NATIVE, $virtualMethod(PlainDatagramSocketImpl, leave, void, $InetAddress*, $NetworkInterface*), "java.io.IOException"},
		{"peek", "(Ljava/net/InetAddress;)I", nullptr, $PROTECTED | $SYNCHRONIZED | $NATIVE, $virtualMethod(PlainDatagramSocketImpl, peek, int32_t, $InetAddress*), "java.io.IOException"},
		{"peekData", "(Ljava/net/DatagramPacket;)I", nullptr, $PROTECTED | $SYNCHRONIZED | $NATIVE, $virtualMethod(PlainDatagramSocketImpl, peekData, int32_t, $DatagramPacket*), "java.io.IOException"},
		{"receive0", "(Ljava/net/DatagramPacket;)V", nullptr, $PROTECTED | $SYNCHRONIZED | $NATIVE, $virtualMethod(PlainDatagramSocketImpl, receive0, void, $DatagramPacket*), "java.io.IOException"},
		{"send0", "(Ljava/net/DatagramPacket;)V", nullptr, $PROTECTED | $NATIVE, $virtualMethod(PlainDatagramSocketImpl, send0, void, $DatagramPacket*), "java.io.IOException"},
		{"setTTL", "(B)V", nullptr, $PROTECTED | $NATIVE | $DEPRECATED, $virtualMethod(PlainDatagramSocketImpl, setTTL, void, int8_t), "java.io.IOException", nullptr, setTTLmethodAnnotations$$},
		{"setTimeToLive", "(I)V", nullptr, $PROTECTED | $NATIVE, $virtualMethod(PlainDatagramSocketImpl, setTimeToLive, void, int32_t), "java.io.IOException"},
		{"socketGetOption", "(I)Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE, $virtualMethod(PlainDatagramSocketImpl, socketGetOption, $Object*, int32_t), "java.net.SocketException"},
		{"socketSetOption", "(ILjava/lang/Object;)V", nullptr, $PROTECTED, $virtualMethod(PlainDatagramSocketImpl, socketSetOption, void, int32_t, Object$*), "java.net.SocketException"},
		{"socketSetOption0", "(ILjava/lang/Object;)V", nullptr, $PROTECTED | $NATIVE, $virtualMethod(PlainDatagramSocketImpl, socketSetOption0, void, int32_t, Object$*), "java.net.SocketException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.PlainDatagramSocketImpl",
		"java.net.AbstractPlainDatagramSocketImpl",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(PlainDatagramSocketImpl, name, initialize, &classInfo$$, PlainDatagramSocketImpl::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PlainDatagramSocketImpl);
	});
	return class$;
}

$Class* PlainDatagramSocketImpl::class$ = nullptr;

	} // net
} // java