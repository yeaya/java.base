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
using $Set = ::java::util::Set;

namespace java {
	namespace net {

$CompoundAttribute _PlainDatagramSocketImpl_MethodAnnotations_getTTL7[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _PlainDatagramSocketImpl_MethodAnnotations_setTTL16[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$MethodInfo _PlainDatagramSocketImpl_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, 0, $method(PlainDatagramSocketImpl, init$, void, bool)},
	{"bind0", "(ILjava/net/InetAddress;)V", nullptr, $PROTECTED | $SYNCHRONIZED | $NATIVE, $virtualMethod(PlainDatagramSocketImpl, bind0, void, int32_t, $InetAddress*), "java.net.SocketException"},
	{"connect0", "(Ljava/net/InetAddress;I)V", nullptr, $PROTECTED | $NATIVE, $virtualMethod(PlainDatagramSocketImpl, connect0, void, $InetAddress*, int32_t), "java.net.SocketException"},
	{"dataAvailable", "()I", nullptr, $NATIVE, $virtualMethod(PlainDatagramSocketImpl, dataAvailable, int32_t)},
	{"datagramSocketClose", "()V", nullptr, $PROTECTED | $NATIVE, $virtualMethod(PlainDatagramSocketImpl, datagramSocketClose, void)},
	{"datagramSocketCreate", "()V", nullptr, $PROTECTED | $NATIVE, $virtualMethod(PlainDatagramSocketImpl, datagramSocketCreate, void), "java.net.SocketException"},
	{"disconnect0", "(I)V", nullptr, $PROTECTED | $NATIVE, $virtualMethod(PlainDatagramSocketImpl, disconnect0, void, int32_t)},
	{"getTTL", "()B", nullptr, $PROTECTED | $NATIVE | $DEPRECATED, $virtualMethod(PlainDatagramSocketImpl, getTTL, int8_t), "java.io.IOException", nullptr, _PlainDatagramSocketImpl_MethodAnnotations_getTTL7},
	{"getTimeToLive", "()I", nullptr, $PROTECTED | $NATIVE, $virtualMethod(PlainDatagramSocketImpl, getTimeToLive, int32_t), "java.io.IOException"},
	{"init", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(PlainDatagramSocketImpl, init, void)},
	{"join", "(Ljava/net/InetAddress;Ljava/net/NetworkInterface;)V", nullptr, $PROTECTED | $NATIVE, $virtualMethod(PlainDatagramSocketImpl, join, void, $InetAddress*, $NetworkInterface*), "java.io.IOException"},
	{"leave", "(Ljava/net/InetAddress;Ljava/net/NetworkInterface;)V", nullptr, $PROTECTED | $NATIVE, $virtualMethod(PlainDatagramSocketImpl, leave, void, $InetAddress*, $NetworkInterface*), "java.io.IOException"},
	{"peek", "(Ljava/net/InetAddress;)I", nullptr, $PROTECTED | $SYNCHRONIZED | $NATIVE, $virtualMethod(PlainDatagramSocketImpl, peek, int32_t, $InetAddress*), "java.io.IOException"},
	{"peekData", "(Ljava/net/DatagramPacket;)I", nullptr, $PROTECTED | $SYNCHRONIZED | $NATIVE, $virtualMethod(PlainDatagramSocketImpl, peekData, int32_t, $DatagramPacket*), "java.io.IOException"},
	{"receive0", "(Ljava/net/DatagramPacket;)V", nullptr, $PROTECTED | $SYNCHRONIZED | $NATIVE, $virtualMethod(PlainDatagramSocketImpl, receive0, void, $DatagramPacket*), "java.io.IOException"},
	{"send0", "(Ljava/net/DatagramPacket;)V", nullptr, $PROTECTED | $NATIVE, $virtualMethod(PlainDatagramSocketImpl, send0, void, $DatagramPacket*), "java.io.IOException"},
	{"setTTL", "(B)V", nullptr, $PROTECTED | $NATIVE | $DEPRECATED, $virtualMethod(PlainDatagramSocketImpl, setTTL, void, int8_t), "java.io.IOException", nullptr, _PlainDatagramSocketImpl_MethodAnnotations_setTTL16},
	{"setTimeToLive", "(I)V", nullptr, $PROTECTED | $NATIVE, $virtualMethod(PlainDatagramSocketImpl, setTimeToLive, void, int32_t), "java.io.IOException"},
	{"socketGetOption", "(I)Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE, $virtualMethod(PlainDatagramSocketImpl, socketGetOption, $Object*, int32_t), "java.net.SocketException"},
	{"socketSetOption", "(ILjava/lang/Object;)V", nullptr, $PROTECTED, $virtualMethod(PlainDatagramSocketImpl, socketSetOption, void, int32_t, Object$*), "java.net.SocketException"},
	{"socketSetOption0", "(ILjava/lang/Object;)V", nullptr, $PROTECTED | $NATIVE, $virtualMethod(PlainDatagramSocketImpl, socketSetOption0, void, int32_t, Object$*), "java.net.SocketException"},
	{}
};

#define _METHOD_INDEX_bind0 1
#define _METHOD_INDEX_connect0 2
#define _METHOD_INDEX_dataAvailable 3
#define _METHOD_INDEX_datagramSocketClose 4
#define _METHOD_INDEX_datagramSocketCreate 5
#define _METHOD_INDEX_disconnect0 6
#define _METHOD_INDEX_getTTL 7
#define _METHOD_INDEX_getTimeToLive 8
#define _METHOD_INDEX_init 9
#define _METHOD_INDEX_join 10
#define _METHOD_INDEX_leave 11
#define _METHOD_INDEX_peek 12
#define _METHOD_INDEX_peekData 13
#define _METHOD_INDEX_receive0 14
#define _METHOD_INDEX_send0 15
#define _METHOD_INDEX_setTTL 16
#define _METHOD_INDEX_setTimeToLive 17
#define _METHOD_INDEX_socketGetOption 18
#define _METHOD_INDEX_socketSetOption0 20

$ClassInfo _PlainDatagramSocketImpl_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.PlainDatagramSocketImpl",
	"java.net.AbstractPlainDatagramSocketImpl",
	nullptr,
	nullptr,
	_PlainDatagramSocketImpl_MethodInfo_
};

$Object* allocate$PlainDatagramSocketImpl($Class* clazz) {
	return $of($alloc(PlainDatagramSocketImpl));
}

void PlainDatagramSocketImpl::init$(bool isMulticast) {
	$AbstractPlainDatagramSocketImpl::init$(isMulticast);
}

void PlainDatagramSocketImpl::socketSetOption(int32_t opt, Object$* val) {
	$init($StandardSocketOptions);
	if (opt == $SocketOptions::SO_REUSEPORT && !$nc($(supportedOptions()))->contains($StandardSocketOptions::SO_REUSEPORT)) {
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
	$prepareNative(PlainDatagramSocketImpl, bind0, void, int32_t lport, $InetAddress* laddr);
	$invokeNative(lport, laddr);
	$finishNative();
}

void PlainDatagramSocketImpl::send0($DatagramPacket* p) {
	$prepareNative(PlainDatagramSocketImpl, send0, void, $DatagramPacket* p);
	$invokeNative(p);
	$finishNative();
}

int32_t PlainDatagramSocketImpl::peek($InetAddress* i) {
	int32_t $ret = 0;
	$prepareNative(PlainDatagramSocketImpl, peek, int32_t, $InetAddress* i);
	$ret = $invokeNative(i);
	$finishNative();
	return $ret;
}

int32_t PlainDatagramSocketImpl::peekData($DatagramPacket* p) {
	int32_t $ret = 0;
	$prepareNative(PlainDatagramSocketImpl, peekData, int32_t, $DatagramPacket* p);
	$ret = $invokeNative(p);
	$finishNative();
	return $ret;
}

void PlainDatagramSocketImpl::receive0($DatagramPacket* p) {
	$prepareNative(PlainDatagramSocketImpl, receive0, void, $DatagramPacket* p);
	$invokeNative(p);
	$finishNative();
}

void PlainDatagramSocketImpl::setTimeToLive(int32_t ttl) {
	$prepareNative(PlainDatagramSocketImpl, setTimeToLive, void, int32_t ttl);
	$invokeNative(ttl);
	$finishNative();
}

int32_t PlainDatagramSocketImpl::getTimeToLive() {
	int32_t $ret = 0;
	$prepareNative(PlainDatagramSocketImpl, getTimeToLive, int32_t);
	$ret = $invokeNative();
	$finishNative();
	return $ret;
}

void PlainDatagramSocketImpl::setTTL(int8_t ttl) {
	$prepareNative(PlainDatagramSocketImpl, setTTL, void, int8_t ttl);
	$invokeNative(ttl);
	$finishNative();
}

int8_t PlainDatagramSocketImpl::getTTL() {
	int8_t $ret = 0;
	$prepareNative(PlainDatagramSocketImpl, getTTL, int8_t);
	$ret = $invokeNative();
	$finishNative();
	return $ret;
}

void PlainDatagramSocketImpl::join($InetAddress* inetaddr, $NetworkInterface* netIf) {
	$prepareNative(PlainDatagramSocketImpl, join, void, $InetAddress* inetaddr, $NetworkInterface* netIf);
	$invokeNative(inetaddr, netIf);
	$finishNative();
}

void PlainDatagramSocketImpl::leave($InetAddress* inetaddr, $NetworkInterface* netIf) {
	$prepareNative(PlainDatagramSocketImpl, leave, void, $InetAddress* inetaddr, $NetworkInterface* netIf);
	$invokeNative(inetaddr, netIf);
	$finishNative();
}

void PlainDatagramSocketImpl::datagramSocketCreate() {
	$prepareNative(PlainDatagramSocketImpl, datagramSocketCreate, void);
	$invokeNative();
	$finishNative();
}

void PlainDatagramSocketImpl::datagramSocketClose() {
	$prepareNative(PlainDatagramSocketImpl, datagramSocketClose, void);
	$invokeNative();
	$finishNative();
}

void PlainDatagramSocketImpl::socketSetOption0(int32_t opt, Object$* val) {
	$prepareNative(PlainDatagramSocketImpl, socketSetOption0, void, int32_t opt, Object$* val);
	$invokeNative(opt, val);
	$finishNative();
}

$Object* PlainDatagramSocketImpl::socketGetOption(int32_t opt) {
	$var($Object, $ret, nullptr);
	$prepareNative(PlainDatagramSocketImpl, socketGetOption, $Object*, int32_t opt);
	$assign($ret, $invokeNativeObject(opt));
	$finishNative();
	return $ret;
}

void PlainDatagramSocketImpl::connect0($InetAddress* address, int32_t port) {
	$prepareNative(PlainDatagramSocketImpl, connect0, void, $InetAddress* address, int32_t port);
	$invokeNative(address, port);
	$finishNative();
}

void PlainDatagramSocketImpl::disconnect0(int32_t family) {
	$prepareNative(PlainDatagramSocketImpl, disconnect0, void, int32_t family);
	$invokeNative(family);
	$finishNative();
}

int32_t PlainDatagramSocketImpl::dataAvailable() {
	int32_t $ret = 0;
	$prepareNative(PlainDatagramSocketImpl, dataAvailable, int32_t);
	$ret = $invokeNative();
	$finishNative();
	return $ret;
}

void PlainDatagramSocketImpl::init() {
	$init(PlainDatagramSocketImpl);
	$prepareNativeStatic(PlainDatagramSocketImpl, init, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void clinit$PlainDatagramSocketImpl($Class* class$) {
	{
		PlainDatagramSocketImpl::init();
	}
}

PlainDatagramSocketImpl::PlainDatagramSocketImpl() {
}

$Class* PlainDatagramSocketImpl::load$($String* name, bool initialize) {
	$loadClass(PlainDatagramSocketImpl, name, initialize, &_PlainDatagramSocketImpl_ClassInfo_, clinit$PlainDatagramSocketImpl, allocate$PlainDatagramSocketImpl);
	return class$;
}

$Class* PlainDatagramSocketImpl::class$ = nullptr;

	} // net
} // java