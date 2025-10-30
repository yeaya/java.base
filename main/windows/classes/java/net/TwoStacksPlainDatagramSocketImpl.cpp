#include <java/net/TwoStacksPlainDatagramSocketImpl.h>

#include <java/io/FileDescriptor.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/net/AbstractPlainDatagramSocketImpl.h>
#include <java/net/DatagramPacket.h>
#include <java/net/DatagramSocketImpl.h>
#include <java/net/InetAddress$InetAddressHolder.h>
#include <java/net/InetAddress.h>
#include <java/net/NetworkInterface.h>
#include <java/net/SocketCleanable.h>
#include <java/net/SocketException.h>
#include <java/net/SocketOptions.h>
#include <sun/net/ResourceManager.h>
#include <jcpp.h>

#undef SO_BINDADDR
#undef SO_REUSEADDR
#undef SO_REUSEPORT

using $FileDescriptor = ::java::io::FileDescriptor;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AbstractPlainDatagramSocketImpl = ::java::net::AbstractPlainDatagramSocketImpl;
using $DatagramPacket = ::java::net::DatagramPacket;
using $DatagramSocketImpl = ::java::net::DatagramSocketImpl;
using $InetAddress = ::java::net::InetAddress;
using $InetAddress$InetAddressHolder = ::java::net::InetAddress$InetAddressHolder;
using $NetworkInterface = ::java::net::NetworkInterface;
using $SocketCleanable = ::java::net::SocketCleanable;
using $SocketException = ::java::net::SocketException;
using $SocketOptions = ::java::net::SocketOptions;
using $ResourceManager = ::sun::net::ResourceManager;

namespace java {
	namespace net {

$CompoundAttribute _TwoStacksPlainDatagramSocketImpl_MethodAnnotations_getTTL12[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _TwoStacksPlainDatagramSocketImpl_MethodAnnotations_setTTL23[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _TwoStacksPlainDatagramSocketImpl_FieldInfo_[] = {
	{"fd1", "Ljava/io/FileDescriptor;", nullptr, $PRIVATE, $field(TwoStacksPlainDatagramSocketImpl, fd1)},
	{"anyLocalBoundAddr", "Ljava/net/InetAddress;", nullptr, $PRIVATE, $field(TwoStacksPlainDatagramSocketImpl, anyLocalBoundAddr)},
	{"fduse", "I", nullptr, $PRIVATE, $field(TwoStacksPlainDatagramSocketImpl, fduse)},
	{"lastfd", "I", nullptr, $PRIVATE, $field(TwoStacksPlainDatagramSocketImpl, lastfd)},
	{"exclusiveBind", "Z", nullptr, $PRIVATE | $FINAL, $field(TwoStacksPlainDatagramSocketImpl, exclusiveBind)},
	{"reuseAddressEmulated", "Z", nullptr, $PRIVATE, $field(TwoStacksPlainDatagramSocketImpl, reuseAddressEmulated)},
	{"isReuseAddress", "Z", nullptr, $PRIVATE, $field(TwoStacksPlainDatagramSocketImpl, isReuseAddress)},
	{}
};

$MethodInfo _TwoStacksPlainDatagramSocketImpl_MethodInfo_[] = {
	{"<init>", "(ZZ)V", nullptr, 0, $method(static_cast<void(TwoStacksPlainDatagramSocketImpl::*)(bool,bool)>(&TwoStacksPlainDatagramSocketImpl::init$))},
	{"bind", "(ILjava/net/InetAddress;)V", nullptr, $PROTECTED | $SYNCHRONIZED, nullptr, "java.net.SocketException"},
	{"bind0", "(ILjava/net/InetAddress;)V", nullptr, $PROTECTED | $SYNCHRONIZED, nullptr, "java.net.SocketException"},
	{"bind0", "(ILjava/net/InetAddress;Z)V", nullptr, $PROTECTED | $SYNCHRONIZED | $NATIVE, $method(static_cast<void(TwoStacksPlainDatagramSocketImpl::*)(int32_t,$InetAddress*,bool)>(&TwoStacksPlainDatagramSocketImpl::bind0)), "java.net.SocketException"},
	{"close", "()V", nullptr, $PROTECTED},
	{"connect0", "(Ljava/net/InetAddress;I)V", nullptr, $PROTECTED | $NATIVE, nullptr, "java.net.SocketException"},
	{"create", "()V", nullptr, $PROTECTED | $SYNCHRONIZED, nullptr, "java.net.SocketException"},
	{"dataAvailable", "()I", nullptr, $NATIVE},
	{"datagramSocketClose", "()V", nullptr, $PROTECTED | $NATIVE},
	{"datagramSocketCreate", "()V", nullptr, $PROTECTED | $NATIVE, nullptr, "java.net.SocketException"},
	{"disconnect0", "(I)V", nullptr, $PROTECTED | $NATIVE},
	{"getOption", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.net.SocketException"},
	{"getTTL", "()B", nullptr, $PROTECTED | $NATIVE | $DEPRECATED, nullptr, "java.io.IOException", nullptr, _TwoStacksPlainDatagramSocketImpl_MethodAnnotations_getTTL12},
	{"getTimeToLive", "()I", nullptr, $PROTECTED | $NATIVE, nullptr, "java.io.IOException"},
	{"init", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&TwoStacksPlainDatagramSocketImpl::init))},
	{"isClosed", "()Z", nullptr, $PROTECTED},
	{"join", "(Ljava/net/InetAddress;Ljava/net/NetworkInterface;)V", nullptr, $PROTECTED | $NATIVE, nullptr, "java.io.IOException"},
	{"leave", "(Ljava/net/InetAddress;Ljava/net/NetworkInterface;)V", nullptr, $PROTECTED | $NATIVE, nullptr, "java.io.IOException"},
	{"peek", "(Ljava/net/InetAddress;)I", nullptr, $PROTECTED | $SYNCHRONIZED | $NATIVE, nullptr, "java.io.IOException"},
	{"peekData", "(Ljava/net/DatagramPacket;)I", nullptr, $PROTECTED | $SYNCHRONIZED | $NATIVE, nullptr, "java.io.IOException"},
	{"receive", "(Ljava/net/DatagramPacket;)V", nullptr, $PROTECTED | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"receive0", "(Ljava/net/DatagramPacket;)V", nullptr, $PROTECTED | $SYNCHRONIZED | $NATIVE, nullptr, "java.io.IOException"},
	{"send0", "(Ljava/net/DatagramPacket;)V", nullptr, $PROTECTED | $NATIVE, nullptr, "java.io.IOException"},
	{"setTTL", "(B)V", nullptr, $PROTECTED | $NATIVE | $DEPRECATED, nullptr, "java.io.IOException", nullptr, _TwoStacksPlainDatagramSocketImpl_MethodAnnotations_setTTL23},
	{"setTimeToLive", "(I)V", nullptr, $PROTECTED | $NATIVE, nullptr, "java.io.IOException"},
	{"socketGetOption", "(I)Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE, nullptr, "java.net.SocketException"},
	{"socketLocalAddress", "(I)Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE, $method(static_cast<$Object*(TwoStacksPlainDatagramSocketImpl::*)(int32_t)>(&TwoStacksPlainDatagramSocketImpl::socketLocalAddress)), "java.net.SocketException"},
	{"socketNativeSetOption", "(ILjava/lang/Object;)V", nullptr, $PROTECTED | $NATIVE, $method(static_cast<void(TwoStacksPlainDatagramSocketImpl::*)(int32_t,Object$*)>(&TwoStacksPlainDatagramSocketImpl::socketNativeSetOption)), "java.net.SocketException"},
	{"socketSetOption", "(ILjava/lang/Object;)V", nullptr, $PROTECTED, nullptr, "java.net.SocketException"},
	{}
};

#define _METHOD_INDEX_bind0 3
#define _METHOD_INDEX_connect0 5
#define _METHOD_INDEX_dataAvailable 7
#define _METHOD_INDEX_datagramSocketClose 8
#define _METHOD_INDEX_datagramSocketCreate 9
#define _METHOD_INDEX_disconnect0 10
#define _METHOD_INDEX_getTTL 12
#define _METHOD_INDEX_getTimeToLive 13
#define _METHOD_INDEX_init 14
#define _METHOD_INDEX_join 16
#define _METHOD_INDEX_leave 17
#define _METHOD_INDEX_peek 18
#define _METHOD_INDEX_peekData 19
#define _METHOD_INDEX_receive0 21
#define _METHOD_INDEX_send0 22
#define _METHOD_INDEX_setTTL 23
#define _METHOD_INDEX_setTimeToLive 24
#define _METHOD_INDEX_socketGetOption 25
#define _METHOD_INDEX_socketLocalAddress 26
#define _METHOD_INDEX_socketNativeSetOption 27

$ClassInfo _TwoStacksPlainDatagramSocketImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.net.TwoStacksPlainDatagramSocketImpl",
	"java.net.AbstractPlainDatagramSocketImpl",
	nullptr,
	_TwoStacksPlainDatagramSocketImpl_FieldInfo_,
	_TwoStacksPlainDatagramSocketImpl_MethodInfo_
};

$Object* allocate$TwoStacksPlainDatagramSocketImpl($Class* clazz) {
	return $of($alloc(TwoStacksPlainDatagramSocketImpl));
}

void TwoStacksPlainDatagramSocketImpl::init$(bool exclBind, bool isMulticast) {
	$AbstractPlainDatagramSocketImpl::init$(isMulticast);
	$set(this, anyLocalBoundAddr, nullptr);
	this->fduse = -1;
	this->lastfd = -1;
	this->exclusiveBind = exclBind;
}

void TwoStacksPlainDatagramSocketImpl::create() {
	$synchronized(this) {
		$set(this, fd1, $new($FileDescriptor));
		try {
			$AbstractPlainDatagramSocketImpl::create();
			$SocketCleanable::register$(this->fd1, true);
		} catch ($SocketException& e) {
			$set(this, fd1, nullptr);
			$throw(e);
		}
	}
}

void TwoStacksPlainDatagramSocketImpl::bind(int32_t lport, $InetAddress* laddr) {
	$synchronized(this) {
		$AbstractPlainDatagramSocketImpl::bind(lport, laddr);
		if ($nc(laddr)->isAnyLocalAddress()) {
			$set(this, anyLocalBoundAddr, laddr);
		}
	}
}

void TwoStacksPlainDatagramSocketImpl::bind0(int32_t lport, $InetAddress* laddr) {
	$synchronized(this) {
		$SocketCleanable::unregister(this->fd);
		$SocketCleanable::unregister(this->fd1);
		bind0(lport, laddr, this->exclusiveBind);
		$SocketCleanable::register$(this->fd, false);
		$SocketCleanable::register$(this->fd1, true);
	}
}

void TwoStacksPlainDatagramSocketImpl::receive($DatagramPacket* p) {
	$synchronized(this) {
		{
			$var($Throwable, var$0, nullptr);
			try {
				receive0(p);
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				this->fduse = -1;
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

$Object* TwoStacksPlainDatagramSocketImpl::getOption(int32_t optID) {
	if (isClosed()) {
		$throwNew($SocketException, "Socket Closed"_s);
	}
	if (optID == $SocketOptions::SO_BINDADDR) {
		if ((this->fd != nullptr && this->fd1 != nullptr) && !this->connected) {
			return $of(this->anyLocalBoundAddr);
		}
		int32_t family = this->connectedAddress == nullptr ? -1 : $nc($($nc(this->connectedAddress)->holder()))->getFamily();
		return $of(socketLocalAddress(family));
	} else if (optID == $SocketOptions::SO_REUSEADDR && this->reuseAddressEmulated) {
		return $of($Boolean::valueOf(this->isReuseAddress));
	} else if (optID == $SocketOptions::SO_REUSEPORT) {
		$throwNew($UnsupportedOperationException, "unsupported option"_s);
	} else {
		return $of($AbstractPlainDatagramSocketImpl::getOption(optID));
	}
}

void TwoStacksPlainDatagramSocketImpl::socketSetOption(int32_t opt, Object$* val) {
	if (opt == $SocketOptions::SO_REUSEADDR && this->exclusiveBind && this->localPort != 0) {
		this->reuseAddressEmulated = true;
		this->isReuseAddress = $nc(($cast($Boolean, val)))->booleanValue();
	} else if (opt == $SocketOptions::SO_REUSEPORT) {
		$throwNew($UnsupportedOperationException, "unsupported option"_s);
	} else {
		socketNativeSetOption(opt, val);
	}
}

bool TwoStacksPlainDatagramSocketImpl::isClosed() {
	return (this->fd == nullptr && this->fd1 == nullptr) ? true : false;
}

void TwoStacksPlainDatagramSocketImpl::close() {
	if (this->fd != nullptr || this->fd1 != nullptr) {
		$SocketCleanable::unregister(this->fd);
		$SocketCleanable::unregister(this->fd1);
		datagramSocketClose();
		$ResourceManager::afterUdpClose();
		$set(this, fd, nullptr);
		$set(this, fd1, nullptr);
	}
}

void TwoStacksPlainDatagramSocketImpl::bind0(int32_t lport, $InetAddress* laddr, bool exclBind) {
	$prepareNative(TwoStacksPlainDatagramSocketImpl, bind0, void, int32_t lport, $InetAddress* laddr, bool exclBind);
	$invokeNative(TwoStacksPlainDatagramSocketImpl, bind0, lport, laddr, exclBind);
	$finishNative();
}

void TwoStacksPlainDatagramSocketImpl::send0($DatagramPacket* p) {
	$prepareNative(TwoStacksPlainDatagramSocketImpl, send0, void, $DatagramPacket* p);
	$invokeNative(TwoStacksPlainDatagramSocketImpl, send0, p);
	$finishNative();
}

int32_t TwoStacksPlainDatagramSocketImpl::peek($InetAddress* i) {
	int32_t $ret = 0;
	$prepareNative(TwoStacksPlainDatagramSocketImpl, peek, int32_t, $InetAddress* i);
	$ret = $invokeNative(TwoStacksPlainDatagramSocketImpl, peek, i);
	$finishNative();
	return $ret;
}

int32_t TwoStacksPlainDatagramSocketImpl::peekData($DatagramPacket* p) {
	int32_t $ret = 0;
	$prepareNative(TwoStacksPlainDatagramSocketImpl, peekData, int32_t, $DatagramPacket* p);
	$ret = $invokeNative(TwoStacksPlainDatagramSocketImpl, peekData, p);
	$finishNative();
	return $ret;
}

void TwoStacksPlainDatagramSocketImpl::receive0($DatagramPacket* p) {
	$prepareNative(TwoStacksPlainDatagramSocketImpl, receive0, void, $DatagramPacket* p);
	$invokeNative(TwoStacksPlainDatagramSocketImpl, receive0, p);
	$finishNative();
}

void TwoStacksPlainDatagramSocketImpl::setTimeToLive(int32_t ttl) {
	$prepareNative(TwoStacksPlainDatagramSocketImpl, setTimeToLive, void, int32_t ttl);
	$invokeNative(TwoStacksPlainDatagramSocketImpl, setTimeToLive, ttl);
	$finishNative();
}

int32_t TwoStacksPlainDatagramSocketImpl::getTimeToLive() {
	int32_t $ret = 0;
	$prepareNative(TwoStacksPlainDatagramSocketImpl, getTimeToLive, int32_t);
	$ret = $invokeNative(TwoStacksPlainDatagramSocketImpl, getTimeToLive);
	$finishNative();
	return $ret;
}

void TwoStacksPlainDatagramSocketImpl::setTTL(int8_t ttl) {
	$prepareNative(TwoStacksPlainDatagramSocketImpl, setTTL, void, int8_t ttl);
	$invokeNative(TwoStacksPlainDatagramSocketImpl, setTTL, ttl);
	$finishNative();
}

int8_t TwoStacksPlainDatagramSocketImpl::getTTL() {
	int8_t $ret = 0;
	$prepareNative(TwoStacksPlainDatagramSocketImpl, getTTL, int8_t);
	$ret = $invokeNative(TwoStacksPlainDatagramSocketImpl, getTTL);
	$finishNative();
	return $ret;
}

void TwoStacksPlainDatagramSocketImpl::join($InetAddress* inetaddr, $NetworkInterface* netIf) {
	$prepareNative(TwoStacksPlainDatagramSocketImpl, join, void, $InetAddress* inetaddr, $NetworkInterface* netIf);
	$invokeNative(TwoStacksPlainDatagramSocketImpl, join, inetaddr, netIf);
	$finishNative();
}

void TwoStacksPlainDatagramSocketImpl::leave($InetAddress* inetaddr, $NetworkInterface* netIf) {
	$prepareNative(TwoStacksPlainDatagramSocketImpl, leave, void, $InetAddress* inetaddr, $NetworkInterface* netIf);
	$invokeNative(TwoStacksPlainDatagramSocketImpl, leave, inetaddr, netIf);
	$finishNative();
}

void TwoStacksPlainDatagramSocketImpl::datagramSocketCreate() {
	$prepareNative(TwoStacksPlainDatagramSocketImpl, datagramSocketCreate, void);
	$invokeNative(TwoStacksPlainDatagramSocketImpl, datagramSocketCreate);
	$finishNative();
}

void TwoStacksPlainDatagramSocketImpl::datagramSocketClose() {
	$prepareNative(TwoStacksPlainDatagramSocketImpl, datagramSocketClose, void);
	$invokeNative(TwoStacksPlainDatagramSocketImpl, datagramSocketClose);
	$finishNative();
}

void TwoStacksPlainDatagramSocketImpl::socketNativeSetOption(int32_t opt, Object$* val) {
	$prepareNative(TwoStacksPlainDatagramSocketImpl, socketNativeSetOption, void, int32_t opt, Object$* val);
	$invokeNative(TwoStacksPlainDatagramSocketImpl, socketNativeSetOption, opt, val);
	$finishNative();
}

$Object* TwoStacksPlainDatagramSocketImpl::socketGetOption(int32_t opt) {
	$var($Object, $ret, nullptr);
	$prepareNative(TwoStacksPlainDatagramSocketImpl, socketGetOption, $Object*, int32_t opt);
	$assign($ret, $invokeNative(TwoStacksPlainDatagramSocketImpl, socketGetOption, opt));
	$finishNative();
	return $ret;
}

void TwoStacksPlainDatagramSocketImpl::connect0($InetAddress* address, int32_t port) {
	$prepareNative(TwoStacksPlainDatagramSocketImpl, connect0, void, $InetAddress* address, int32_t port);
	$invokeNative(TwoStacksPlainDatagramSocketImpl, connect0, address, port);
	$finishNative();
}

$Object* TwoStacksPlainDatagramSocketImpl::socketLocalAddress(int32_t family) {
	$var($Object, $ret, nullptr);
	$prepareNative(TwoStacksPlainDatagramSocketImpl, socketLocalAddress, $Object*, int32_t family);
	$assign($ret, $invokeNative(TwoStacksPlainDatagramSocketImpl, socketLocalAddress, family));
	$finishNative();
	return $ret;
}

void TwoStacksPlainDatagramSocketImpl::disconnect0(int32_t family) {
	$prepareNative(TwoStacksPlainDatagramSocketImpl, disconnect0, void, int32_t family);
	$invokeNative(TwoStacksPlainDatagramSocketImpl, disconnect0, family);
	$finishNative();
}

int32_t TwoStacksPlainDatagramSocketImpl::dataAvailable() {
	int32_t $ret = 0;
	$prepareNative(TwoStacksPlainDatagramSocketImpl, dataAvailable, int32_t);
	$ret = $invokeNative(TwoStacksPlainDatagramSocketImpl, dataAvailable);
	$finishNative();
	return $ret;
}

void TwoStacksPlainDatagramSocketImpl::init() {
	$init(TwoStacksPlainDatagramSocketImpl);
	$prepareNativeStatic(TwoStacksPlainDatagramSocketImpl, init, void);
	$invokeNativeStatic(TwoStacksPlainDatagramSocketImpl, init);
	$finishNativeStatic();
}

void clinit$TwoStacksPlainDatagramSocketImpl($Class* class$) {
	{
		TwoStacksPlainDatagramSocketImpl::init();
	}
}

TwoStacksPlainDatagramSocketImpl::TwoStacksPlainDatagramSocketImpl() {
}

$Class* TwoStacksPlainDatagramSocketImpl::load$($String* name, bool initialize) {
	$loadClass(TwoStacksPlainDatagramSocketImpl, name, initialize, &_TwoStacksPlainDatagramSocketImpl_ClassInfo_, clinit$TwoStacksPlainDatagramSocketImpl, allocate$TwoStacksPlainDatagramSocketImpl);
	return class$;
}

$Class* TwoStacksPlainDatagramSocketImpl::class$ = nullptr;

	} // net
} // java