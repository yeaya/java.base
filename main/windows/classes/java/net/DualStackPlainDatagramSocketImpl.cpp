#include <java/net/DualStackPlainDatagramSocketImpl.h>
#include <java/io/FileDescriptor.h>
#include <java/io/IOException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/net/AbstractPlainDatagramSocketImpl.h>
#include <java/net/DatagramPacket.h>
#include <java/net/DatagramSocketImpl.h>
#include <java/net/InetAddress.h>
#include <java/net/NetworkInterface.h>
#include <java/net/SocketException.h>
#include <java/net/SocketOption.h>
#include <java/net/SocketOptions.h>
#include <java/net/StandardSocketOptions.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Collections.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <jdk/internal/access/JavaIOFileDescriptorAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <sun/net/ext/ExtendedSocketOptions.h>
#include <jcpp.h>

#undef FALSE
#undef IP_TOS
#undef SO_BINDADDR
#undef SO_BROADCAST
#undef SO_RCVBUF
#undef SO_REUSEADDR
#undef SO_REUSEPORT
#undef SO_SNDBUF
#undef TRUE

using $IOException = ::java::io::IOException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AbstractPlainDatagramSocketImpl = ::java::net::AbstractPlainDatagramSocketImpl;
using $DatagramPacket = ::java::net::DatagramPacket;
using $InetAddress = ::java::net::InetAddress;
using $NetworkInterface = ::java::net::NetworkInterface;
using $SocketException = ::java::net::SocketException;
using $SocketOptions = ::java::net::SocketOptions;
using $StandardSocketOptions = ::java::net::StandardSocketOptions;
using $Collections = ::java::util::Collections;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;
using $JavaIOFileDescriptorAccess = ::jdk::internal::access::JavaIOFileDescriptorAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $ExtendedSocketOptions = ::sun::net::ext::ExtendedSocketOptions;

namespace java {
	namespace net {

$JavaIOFileDescriptorAccess* DualStackPlainDatagramSocketImpl::fdAccess = nullptr;

void DualStackPlainDatagramSocketImpl::init$(bool exclBind) {
	$AbstractPlainDatagramSocketImpl::init$(false);
	this->exclusiveBind = exclBind;
}

void DualStackPlainDatagramSocketImpl::datagramSocketCreate() {
	if (this->fd == nullptr) {
		$throwNew($SocketException, "Socket closed"_s);
	}
	int32_t newfd = socketCreate();
	$nc(DualStackPlainDatagramSocketImpl::fdAccess)->set(this->fd, newfd);
}

void DualStackPlainDatagramSocketImpl::bind0(int32_t lport, $InetAddress* laddr) {
	$synchronized(this) {
		int32_t nativefd = checkAndReturnNativeFD();
		if (laddr == nullptr) {
			$throwNew($NullPointerException, "argument address"_s);
		}
		socketBind(nativefd, laddr, lport, this->exclusiveBind);
		if (lport == 0) {
			this->localPort = socketLocalPort(nativefd);
		} else {
			this->localPort = lport;
		}
	}
}

int32_t DualStackPlainDatagramSocketImpl::peek($InetAddress* address$renamed) {
	$synchronized(this) {
		$useLocalObjectStack();
		$var($InetAddress, address, address$renamed);
		int32_t nativefd = checkAndReturnNativeFD();
		if (address == nullptr) {
			$throwNew($NullPointerException, "Null address in peek()"_s);
		}
		$var($DatagramPacket, peekPacket, $new($DatagramPacket, $$new($bytes, 1), 1));
		int32_t peekPort = peekData(peekPacket);
		$assign(address, peekPacket->getAddress());
		return peekPort;
	}
}

int32_t DualStackPlainDatagramSocketImpl::peekData($DatagramPacket* p) {
	$synchronized(this) {
		int32_t nativefd = checkAndReturnNativeFD();
		if (p == nullptr) {
			$throwNew($NullPointerException, "packet"_s);
		}
		if ($nc(p)->getData() == nullptr) {
			$throwNew($NullPointerException, "packet buffer"_s);
		}
		return socketReceiveOrPeekData(nativefd, p, this->timeout, this->connected, true);
	}
}

void DualStackPlainDatagramSocketImpl::receive0($DatagramPacket* p) {
	$synchronized(this) {
		int32_t nativefd = checkAndReturnNativeFD();
		if (p == nullptr) {
			$throwNew($NullPointerException, "packet"_s);
		}
		if ($nc(p)->getData() == nullptr) {
			$throwNew($NullPointerException, "packet buffer"_s);
		}
		socketReceiveOrPeekData(nativefd, p, this->timeout, this->connected, false);
	}
}

void DualStackPlainDatagramSocketImpl::send0($DatagramPacket* p) {
	$useLocalObjectStack();
	int32_t nativefd = checkAndReturnNativeFD();
	if (p == nullptr) {
		$throwNew($NullPointerException, "null packet"_s);
	}
	bool var$0 = $nc(p)->getAddress() == nullptr;
	if (var$0 || p->getData() == nullptr) {
		$throwNew($NullPointerException, "null address || null buffer"_s);
	}
	$var($bytes, var$1, p->getData());
	int32_t var$2 = p->getOffset();
	int32_t var$3 = p->getLength();
	$var($InetAddress, var$4, p->getAddress());
	socketSend(nativefd, var$1, var$2, var$3, var$4, p->getPort(), this->connected);
}

void DualStackPlainDatagramSocketImpl::connect0($InetAddress* address, int32_t port) {
	int32_t nativefd = checkAndReturnNativeFD();
	if (address == nullptr) {
		$throwNew($NullPointerException, "address"_s);
	}
	socketConnect(nativefd, address, port);
}

void DualStackPlainDatagramSocketImpl::disconnect0(int32_t family) {
	if (this->fd == nullptr || !this->fd->valid()) {
		return;
	}
	socketDisconnect($nc(DualStackPlainDatagramSocketImpl::fdAccess)->get(this->fd));
}

void DualStackPlainDatagramSocketImpl::datagramSocketClose() {
	if (this->fd == nullptr || !this->fd->valid()) {
		return;
	}
	socketClose($nc(DualStackPlainDatagramSocketImpl::fdAccess)->get(this->fd));
	$nc(DualStackPlainDatagramSocketImpl::fdAccess)->set(this->fd, -1);
}

void DualStackPlainDatagramSocketImpl::socketSetOption(int32_t opt, Object$* val) {
	int32_t nativefd = checkAndReturnNativeFD();
	int32_t optionValue = 0;
	if (opt == $SocketOptions::SO_REUSEPORT) {
		$throwNew($UnsupportedOperationException, "unsupported option"_s);
	}
	switch (opt) {
	case $SocketOptions::IP_TOS:
	case $SocketOptions::SO_RCVBUF:
	case $SocketOptions::SO_SNDBUF:
		optionValue = $nc($cast($Integer, val))->intValue();
		break;
	case $SocketOptions::SO_REUSEADDR:
		if (this->exclusiveBind && this->localPort != 0) {
			this->reuseAddressEmulated = true;
			this->isReuseAddress = $nc($cast($Boolean, val))->booleanValue();
			return;
		}
	case $SocketOptions::SO_BROADCAST:
		optionValue = $nc($cast($Boolean, val))->booleanValue() ? 1 : 0;
		break;
	default:
		$throwNew($SocketException, "Option not supported"_s);
	}
	socketSetIntOption(nativefd, opt, optionValue);
}

$Object* DualStackPlainDatagramSocketImpl::socketGetOption(int32_t opt) {
	int32_t nativefd = checkAndReturnNativeFD();
	if (opt == $SocketOptions::SO_BINDADDR) {
		return socketLocalAddress(nativefd);
	}
	if (opt == $SocketOptions::SO_REUSEADDR && this->reuseAddressEmulated) {
		return $of($Boolean::valueOf(this->isReuseAddress));
	}
	if (opt == $SocketOptions::SO_REUSEPORT) {
		$throwNew($UnsupportedOperationException, "unsupported option"_s);
	}
	int32_t value = socketGetIntOption(nativefd, opt);
	$var($Object, returnValue, nullptr);
	switch (opt) {
	case $SocketOptions::SO_REUSEADDR:
	case $SocketOptions::SO_BROADCAST:
		$assign(returnValue, (value == 0) ? $Boolean::FALSE : $Boolean::TRUE);
		break;
	case $SocketOptions::IP_TOS:
	case $SocketOptions::SO_RCVBUF:
	case $SocketOptions::SO_SNDBUF:
		$assign(returnValue, $Integer::valueOf(value));
		break;
	default:
		$throwNew($SocketException, "Option not supported"_s);
	}
	return returnValue;
}

$Set* DualStackPlainDatagramSocketImpl::supportedOptions() {
	$useLocalObjectStack();
	$var($HashSet, options, $new($HashSet));
	$init($StandardSocketOptions);
	options->add($StandardSocketOptions::SO_SNDBUF);
	options->add($StandardSocketOptions::SO_RCVBUF);
	options->add($StandardSocketOptions::SO_REUSEADDR);
	options->add($StandardSocketOptions::SO_BROADCAST);
	options->add($StandardSocketOptions::IP_TOS);
	options->addAll($($ExtendedSocketOptions::datagramSocketOptions()));
	return $Collections::unmodifiableSet(options);
}

void DualStackPlainDatagramSocketImpl::join($InetAddress* inetaddr, $NetworkInterface* netIf) {
	$throwNew($IOException, "Method not implemented!"_s);
}

void DualStackPlainDatagramSocketImpl::leave($InetAddress* inetaddr, $NetworkInterface* netIf) {
	$throwNew($IOException, "Method not implemented!"_s);
}

void DualStackPlainDatagramSocketImpl::setTimeToLive(int32_t ttl) {
	$throwNew($IOException, "Method not implemented!"_s);
}

int32_t DualStackPlainDatagramSocketImpl::getTimeToLive() {
	$throwNew($IOException, "Method not implemented!"_s);
	$shouldNotReachHere();
}

void DualStackPlainDatagramSocketImpl::setTTL(int8_t ttl) {
	$throwNew($IOException, "Method not implemented!"_s);
}

int8_t DualStackPlainDatagramSocketImpl::getTTL() {
	$throwNew($IOException, "Method not implemented!"_s);
	$shouldNotReachHere();
}

int32_t DualStackPlainDatagramSocketImpl::checkAndReturnNativeFD() {
	if (this->fd == nullptr || !this->fd->valid()) {
		$throwNew($SocketException, "Socket closed"_s);
	}
	return $nc(DualStackPlainDatagramSocketImpl::fdAccess)->get(this->fd);
}

void DualStackPlainDatagramSocketImpl::initIDs() {
	$init(DualStackPlainDatagramSocketImpl);
	$prepareNativeStatic(initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

int32_t DualStackPlainDatagramSocketImpl::socketCreate() {
	$init(DualStackPlainDatagramSocketImpl);
	$prepareNativeStatic(socketCreate, int32_t);
	int32_t $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

void DualStackPlainDatagramSocketImpl::socketBind(int32_t fd, $InetAddress* localAddress, int32_t localport, bool exclBind) {
	$init(DualStackPlainDatagramSocketImpl);
	$prepareNativeStatic(socketBind, void, int32_t fd, $InetAddress* localAddress, int32_t localport, bool exclBind);
	$invokeNativeStatic(fd, localAddress, localport, exclBind);
	$finishNativeStatic();
}

void DualStackPlainDatagramSocketImpl::socketConnect(int32_t fd, $InetAddress* address, int32_t port) {
	$init(DualStackPlainDatagramSocketImpl);
	$prepareNativeStatic(socketConnect, void, int32_t fd, $InetAddress* address, int32_t port);
	$invokeNativeStatic(fd, address, port);
	$finishNativeStatic();
}

void DualStackPlainDatagramSocketImpl::socketDisconnect(int32_t fd) {
	$init(DualStackPlainDatagramSocketImpl);
	$prepareNativeStatic(socketDisconnect, void, int32_t fd);
	$invokeNativeStatic(fd);
	$finishNativeStatic();
}

void DualStackPlainDatagramSocketImpl::socketClose(int32_t fd) {
	$init(DualStackPlainDatagramSocketImpl);
	$prepareNativeStatic(socketClose, void, int32_t fd);
	$invokeNativeStatic(fd);
	$finishNativeStatic();
}

int32_t DualStackPlainDatagramSocketImpl::socketLocalPort(int32_t fd) {
	$init(DualStackPlainDatagramSocketImpl);
	$prepareNativeStatic(socketLocalPort, int32_t, int32_t fd);
	int32_t $ret = $invokeNativeStatic(fd);
	$finishNativeStatic();
	return $ret;
}

$Object* DualStackPlainDatagramSocketImpl::socketLocalAddress(int32_t fd) {
	$init(DualStackPlainDatagramSocketImpl);
	$prepareNativeStatic(socketLocalAddress, $Object*, int32_t fd);
	$var($Object, $ret, $invokeNativeStaticObject(fd));
	$finishNativeStatic();
	return $ret;
}

int32_t DualStackPlainDatagramSocketImpl::socketReceiveOrPeekData(int32_t fd, $DatagramPacket* packet, int32_t timeout, bool connected, bool peek) {
	$init(DualStackPlainDatagramSocketImpl);
	$prepareNativeStatic(socketReceiveOrPeekData, int32_t, int32_t fd, $DatagramPacket* packet, int32_t timeout, bool connected, bool peek);
	int32_t $ret = $invokeNativeStatic(fd, packet, timeout, connected, peek);
	$finishNativeStatic();
	return $ret;
}

void DualStackPlainDatagramSocketImpl::socketSend(int32_t fd, $bytes* data, int32_t offset, int32_t length, $InetAddress* address, int32_t port, bool connected) {
	$init(DualStackPlainDatagramSocketImpl);
	$prepareNativeStatic(socketSend, void, int32_t fd, $bytes* data, int32_t offset, int32_t length, $InetAddress* address, int32_t port, bool connected);
	$invokeNativeStatic(fd, data, offset, length, address, port, connected);
	$finishNativeStatic();
}

void DualStackPlainDatagramSocketImpl::socketSetIntOption(int32_t fd, int32_t cmd, int32_t optionValue) {
	$init(DualStackPlainDatagramSocketImpl);
	$prepareNativeStatic(socketSetIntOption, void, int32_t fd, int32_t cmd, int32_t optionValue);
	$invokeNativeStatic(fd, cmd, optionValue);
	$finishNativeStatic();
}

int32_t DualStackPlainDatagramSocketImpl::socketGetIntOption(int32_t fd, int32_t cmd) {
	$init(DualStackPlainDatagramSocketImpl);
	$prepareNativeStatic(socketGetIntOption, int32_t, int32_t fd, int32_t cmd);
	int32_t $ret = $invokeNativeStatic(fd, cmd);
	$finishNativeStatic();
	return $ret;
}

int32_t DualStackPlainDatagramSocketImpl::dataAvailable() {
	$prepareNative(dataAvailable, int32_t);
	int32_t $ret = $invokeNative();
	$finishNative();
	return $ret;
}

void DualStackPlainDatagramSocketImpl::clinit$($Class* clazz) {
	$assignStatic(DualStackPlainDatagramSocketImpl::fdAccess, $SharedSecrets::getJavaIOFileDescriptorAccess());
	{
		DualStackPlainDatagramSocketImpl::initIDs();
	}
}

DualStackPlainDatagramSocketImpl::DualStackPlainDatagramSocketImpl() {
}

$Class* DualStackPlainDatagramSocketImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fdAccess", "Ljdk/internal/access/JavaIOFileDescriptorAccess;", nullptr, $STATIC, $staticField(DualStackPlainDatagramSocketImpl, fdAccess)},
		{"exclusiveBind", "Z", nullptr, $PRIVATE | $FINAL, $field(DualStackPlainDatagramSocketImpl, exclusiveBind)},
		{"reuseAddressEmulated", "Z", nullptr, $PRIVATE, $field(DualStackPlainDatagramSocketImpl, reuseAddressEmulated)},
		{"isReuseAddress", "Z", nullptr, $PRIVATE, $field(DualStackPlainDatagramSocketImpl, isReuseAddress)},
		{}
	};
	$CompoundAttribute getTTLmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute setTTLmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Z)V", nullptr, 0, $method(DualStackPlainDatagramSocketImpl, init$, void, bool)},
		{"bind0", "(ILjava/net/InetAddress;)V", nullptr, $PROTECTED | $SYNCHRONIZED, $virtualMethod(DualStackPlainDatagramSocketImpl, bind0, void, int32_t, $InetAddress*), "java.net.SocketException"},
		{"checkAndReturnNativeFD", "()I", nullptr, $PRIVATE, $method(DualStackPlainDatagramSocketImpl, checkAndReturnNativeFD, int32_t), "java.net.SocketException"},
		{"connect0", "(Ljava/net/InetAddress;I)V", nullptr, $PROTECTED, $virtualMethod(DualStackPlainDatagramSocketImpl, connect0, void, $InetAddress*, int32_t), "java.net.SocketException"},
		{"dataAvailable", "()I", nullptr, $NATIVE, $virtualMethod(DualStackPlainDatagramSocketImpl, dataAvailable, int32_t)},
		{"datagramSocketClose", "()V", nullptr, $PROTECTED, $virtualMethod(DualStackPlainDatagramSocketImpl, datagramSocketClose, void)},
		{"datagramSocketCreate", "()V", nullptr, $PROTECTED, $virtualMethod(DualStackPlainDatagramSocketImpl, datagramSocketCreate, void), "java.net.SocketException"},
		{"disconnect0", "(I)V", nullptr, $PROTECTED, $virtualMethod(DualStackPlainDatagramSocketImpl, disconnect0, void, int32_t)},
		{"getTTL", "()B", nullptr, $PROTECTED | $DEPRECATED, $virtualMethod(DualStackPlainDatagramSocketImpl, getTTL, int8_t), "java.io.IOException", nullptr, getTTLmethodAnnotations$$},
		{"getTimeToLive", "()I", nullptr, $PROTECTED, $virtualMethod(DualStackPlainDatagramSocketImpl, getTimeToLive, int32_t), "java.io.IOException"},
		{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(DualStackPlainDatagramSocketImpl, initIDs, void)},
		{"join", "(Ljava/net/InetAddress;Ljava/net/NetworkInterface;)V", nullptr, $PROTECTED, $virtualMethod(DualStackPlainDatagramSocketImpl, join, void, $InetAddress*, $NetworkInterface*), "java.io.IOException"},
		{"leave", "(Ljava/net/InetAddress;Ljava/net/NetworkInterface;)V", nullptr, $PROTECTED, $virtualMethod(DualStackPlainDatagramSocketImpl, leave, void, $InetAddress*, $NetworkInterface*), "java.io.IOException"},
		{"peek", "(Ljava/net/InetAddress;)I", nullptr, $PROTECTED | $SYNCHRONIZED, $virtualMethod(DualStackPlainDatagramSocketImpl, peek, int32_t, $InetAddress*), "java.io.IOException"},
		{"peekData", "(Ljava/net/DatagramPacket;)I", nullptr, $PROTECTED | $SYNCHRONIZED, $virtualMethod(DualStackPlainDatagramSocketImpl, peekData, int32_t, $DatagramPacket*), "java.io.IOException"},
		{"receive0", "(Ljava/net/DatagramPacket;)V", nullptr, $PROTECTED | $SYNCHRONIZED, $virtualMethod(DualStackPlainDatagramSocketImpl, receive0, void, $DatagramPacket*), "java.io.IOException"},
		{"send0", "(Ljava/net/DatagramPacket;)V", nullptr, $PROTECTED, $virtualMethod(DualStackPlainDatagramSocketImpl, send0, void, $DatagramPacket*), "java.io.IOException"},
		{"setTTL", "(B)V", nullptr, $PROTECTED | $DEPRECATED, $virtualMethod(DualStackPlainDatagramSocketImpl, setTTL, void, int8_t), "java.io.IOException", nullptr, setTTLmethodAnnotations$$},
		{"setTimeToLive", "(I)V", nullptr, $PROTECTED, $virtualMethod(DualStackPlainDatagramSocketImpl, setTimeToLive, void, int32_t), "java.io.IOException"},
		{"socketBind", "(ILjava/net/InetAddress;IZ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(DualStackPlainDatagramSocketImpl, socketBind, void, int32_t, $InetAddress*, int32_t, bool), "java.net.SocketException"},
		{"socketClose", "(I)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(DualStackPlainDatagramSocketImpl, socketClose, void, int32_t)},
		{"socketConnect", "(ILjava/net/InetAddress;I)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(DualStackPlainDatagramSocketImpl, socketConnect, void, int32_t, $InetAddress*, int32_t), "java.net.SocketException"},
		{"socketCreate", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(DualStackPlainDatagramSocketImpl, socketCreate, int32_t)},
		{"socketDisconnect", "(I)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(DualStackPlainDatagramSocketImpl, socketDisconnect, void, int32_t)},
		{"socketGetIntOption", "(II)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(DualStackPlainDatagramSocketImpl, socketGetIntOption, int32_t, int32_t, int32_t), "java.net.SocketException"},
		{"socketGetOption", "(I)Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(DualStackPlainDatagramSocketImpl, socketGetOption, $Object*, int32_t), "java.net.SocketException"},
		{"socketLocalAddress", "(I)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(DualStackPlainDatagramSocketImpl, socketLocalAddress, $Object*, int32_t), "java.net.SocketException"},
		{"socketLocalPort", "(I)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(DualStackPlainDatagramSocketImpl, socketLocalPort, int32_t, int32_t), "java.net.SocketException"},
		{"socketReceiveOrPeekData", "(ILjava/net/DatagramPacket;IZZ)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(DualStackPlainDatagramSocketImpl, socketReceiveOrPeekData, int32_t, int32_t, $DatagramPacket*, int32_t, bool, bool), "java.io.IOException"},
		{"socketSend", "(I[BIILjava/net/InetAddress;IZ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(DualStackPlainDatagramSocketImpl, socketSend, void, int32_t, $bytes*, int32_t, int32_t, $InetAddress*, int32_t, bool), "java.io.IOException"},
		{"socketSetIntOption", "(III)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(DualStackPlainDatagramSocketImpl, socketSetIntOption, void, int32_t, int32_t, int32_t), "java.net.SocketException"},
		{"socketSetOption", "(ILjava/lang/Object;)V", nullptr, $PROTECTED, $virtualMethod(DualStackPlainDatagramSocketImpl, socketSetOption, void, int32_t, Object$*), "java.net.SocketException"},
		{"supportedOptions", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $PROTECTED, $virtualMethod(DualStackPlainDatagramSocketImpl, supportedOptions, $Set*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.DualStackPlainDatagramSocketImpl",
		"java.net.AbstractPlainDatagramSocketImpl",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DualStackPlainDatagramSocketImpl, name, initialize, &classInfo$$, DualStackPlainDatagramSocketImpl::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DualStackPlainDatagramSocketImpl);
	});
	return class$;
}

$Class* DualStackPlainDatagramSocketImpl::class$ = nullptr;

	} // net
} // java