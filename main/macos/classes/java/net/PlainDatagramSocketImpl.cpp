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
	{"<init>", "(Z)V", nullptr, 0, $method(static_cast<void(PlainDatagramSocketImpl::*)(bool)>(&PlainDatagramSocketImpl::init$))},
	{"bind0", "(ILjava/net/InetAddress;)V", nullptr, $PROTECTED | $SYNCHRONIZED | $NATIVE, nullptr, "java.net.SocketException"},
	{"connect0", "(Ljava/net/InetAddress;I)V", nullptr, $PROTECTED | $NATIVE, nullptr, "java.net.SocketException"},
	{"dataAvailable", "()I", nullptr, $NATIVE},
	{"datagramSocketClose", "()V", nullptr, $PROTECTED | $NATIVE},
	{"datagramSocketCreate", "()V", nullptr, $PROTECTED | $NATIVE, nullptr, "java.net.SocketException"},
	{"disconnect0", "(I)V", nullptr, $PROTECTED | $NATIVE},
	{"getTTL", "()B", nullptr, $PROTECTED | $NATIVE | $DEPRECATED, nullptr, "java.io.IOException", nullptr, _PlainDatagramSocketImpl_MethodAnnotations_getTTL7},
	{"getTimeToLive", "()I", nullptr, $PROTECTED | $NATIVE, nullptr, "java.io.IOException"},
	{"init", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&PlainDatagramSocketImpl::init))},
	{"join", "(Ljava/net/InetAddress;Ljava/net/NetworkInterface;)V", nullptr, $PROTECTED | $NATIVE, nullptr, "java.io.IOException"},
	{"leave", "(Ljava/net/InetAddress;Ljava/net/NetworkInterface;)V", nullptr, $PROTECTED | $NATIVE, nullptr, "java.io.IOException"},
	{"peek", "(Ljava/net/InetAddress;)I", nullptr, $PROTECTED | $SYNCHRONIZED | $NATIVE, nullptr, "java.io.IOException"},
	{"peekData", "(Ljava/net/DatagramPacket;)I", nullptr, $PROTECTED | $SYNCHRONIZED | $NATIVE, nullptr, "java.io.IOException"},
	{"receive0", "(Ljava/net/DatagramPacket;)V", nullptr, $PROTECTED | $SYNCHRONIZED | $NATIVE, nullptr, "java.io.IOException"},
	{"send0", "(Ljava/net/DatagramPacket;)V", nullptr, $PROTECTED | $NATIVE, nullptr, "java.io.IOException"},
	{"setTTL", "(B)V", nullptr, $PROTECTED | $NATIVE | $DEPRECATED, nullptr, "java.io.IOException", nullptr, _PlainDatagramSocketImpl_MethodAnnotations_setTTL16},
	{"setTimeToLive", "(I)V", nullptr, $PROTECTED | $NATIVE, nullptr, "java.io.IOException"},
	{"socketGetOption", "(I)Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE, nullptr, "java.net.SocketException"},
	{"socketSetOption", "(ILjava/lang/Object;)V", nullptr, $PROTECTED, nullptr, "java.net.SocketException"},
	{"socketSetOption0", "(ILjava/lang/Object;)V", nullptr, $PROTECTED | $NATIVE, nullptr, "java.net.SocketException"},
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
	$invokeNative(PlainDatagramSocketImpl, bind0, lport, laddr);
	$finishNative();
}

void PlainDatagramSocketImpl::send0($DatagramPacket* p) {
	$prepareNative(PlainDatagramSocketImpl, send0, void, $DatagramPacket* p);
	$invokeNative(PlainDatagramSocketImpl, send0, p);
	$finishNative();
}

int32_t PlainDatagramSocketImpl::peek($InetAddress* i) {
	int32_t $ret = 0;
	$prepareNative(PlainDatagramSocketImpl, peek, int32_t, $InetAddress* i);
	$ret = $invokeNative(PlainDatagramSocketImpl, peek, i);
	$finishNative();
	return $ret;
}

int32_t PlainDatagramSocketImpl::peekData($DatagramPacket* p) {
	int32_t $ret = 0;
	$prepareNative(PlainDatagramSocketImpl, peekData, int32_t, $DatagramPacket* p);
	$ret = $invokeNative(PlainDatagramSocketImpl, peekData, p);
	$finishNative();
	return $ret;
}

void PlainDatagramSocketImpl::receive0($DatagramPacket* p) {
	$prepareNative(PlainDatagramSocketImpl, receive0, void, $DatagramPacket* p);
	$invokeNative(PlainDatagramSocketImpl, receive0, p);
	$finishNative();
}

void PlainDatagramSocketImpl::setTimeToLive(int32_t ttl) {
	$prepareNative(PlainDatagramSocketImpl, setTimeToLive, void, int32_t ttl);
	$invokeNative(PlainDatagramSocketImpl, setTimeToLive, ttl);
	$finishNative();
}

int32_t PlainDatagramSocketImpl::getTimeToLive() {
	int32_t $ret = 0;
	$prepareNative(PlainDatagramSocketImpl, getTimeToLive, int32_t);
	$ret = $invokeNative(PlainDatagramSocketImpl, getTimeToLive);
	$finishNative();
	return $ret;
}

void PlainDatagramSocketImpl::setTTL(int8_t ttl) {
	$prepareNative(PlainDatagramSocketImpl, setTTL, void, int8_t ttl);
	$invokeNative(PlainDatagramSocketImpl, setTTL, ttl);
	$finishNative();
}

int8_t PlainDatagramSocketImpl::getTTL() {
	int8_t $ret = 0;
	$prepareNative(PlainDatagramSocketImpl, getTTL, int8_t);
	$ret = $invokeNative(PlainDatagramSocketImpl, getTTL);
	$finishNative();
	return $ret;
}

void PlainDatagramSocketImpl::join($InetAddress* inetaddr, $NetworkInterface* netIf) {
	$prepareNative(PlainDatagramSocketImpl, join, void, $InetAddress* inetaddr, $NetworkInterface* netIf);
	$invokeNative(PlainDatagramSocketImpl, join, inetaddr, netIf);
	$finishNative();
}

void PlainDatagramSocketImpl::leave($InetAddress* inetaddr, $NetworkInterface* netIf) {
	$prepareNative(PlainDatagramSocketImpl, leave, void, $InetAddress* inetaddr, $NetworkInterface* netIf);
	$invokeNative(PlainDatagramSocketImpl, leave, inetaddr, netIf);
	$finishNative();
}

void PlainDatagramSocketImpl::datagramSocketCreate() {
	$prepareNative(PlainDatagramSocketImpl, datagramSocketCreate, void);
	$invokeNative(PlainDatagramSocketImpl, datagramSocketCreate);
	$finishNative();
}

void PlainDatagramSocketImpl::datagramSocketClose() {
	$prepareNative(PlainDatagramSocketImpl, datagramSocketClose, void);
	$invokeNative(PlainDatagramSocketImpl, datagramSocketClose);
	$finishNative();
}

void PlainDatagramSocketImpl::socketSetOption0(int32_t opt, Object$* val) {
	$prepareNative(PlainDatagramSocketImpl, socketSetOption0, void, int32_t opt, Object$* val);
	$invokeNative(PlainDatagramSocketImpl, socketSetOption0, opt, val);
	$finishNative();
}

$Object* PlainDatagramSocketImpl::socketGetOption(int32_t opt) {
	$var($Object, $ret, nullptr);
	$prepareNative(PlainDatagramSocketImpl, socketGetOption, $Object*, int32_t opt);
	$assign($ret, $invokeNative(PlainDatagramSocketImpl, socketGetOption, opt));
	$finishNative();
	return $ret;
}

void PlainDatagramSocketImpl::connect0($InetAddress* address, int32_t port) {
	$prepareNative(PlainDatagramSocketImpl, connect0, void, $InetAddress* address, int32_t port);
	$invokeNative(PlainDatagramSocketImpl, connect0, address, port);
	$finishNative();
}

void PlainDatagramSocketImpl::disconnect0(int32_t family) {
	$prepareNative(PlainDatagramSocketImpl, disconnect0, void, int32_t family);
	$invokeNative(PlainDatagramSocketImpl, disconnect0, family);
	$finishNative();
}

int32_t PlainDatagramSocketImpl::dataAvailable() {
	int32_t $ret = 0;
	$prepareNative(PlainDatagramSocketImpl, dataAvailable, int32_t);
	$ret = $invokeNative(PlainDatagramSocketImpl, dataAvailable);
	$finishNative();
	return $ret;
}

void PlainDatagramSocketImpl::init() {
	$init(PlainDatagramSocketImpl);
	$prepareNativeStatic(PlainDatagramSocketImpl, init, void);
	$invokeNativeStatic(PlainDatagramSocketImpl, init);
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