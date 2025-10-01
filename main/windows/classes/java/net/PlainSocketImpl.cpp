#include <java/net/PlainSocketImpl.h>

#include <java/io/FileDescriptor.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/AbstractPlainSocketImpl.h>
#include <java/net/Inet4Address.h>
#include <java/net/InetAddress.h>
#include <java/net/InetAddressContainer.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketException.h>
#include <java/net/SocketImpl.h>
#include <java/net/SocketOptions.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <jdk/internal/access/JavaIOFileDescriptorAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef SO_LINGER
#undef SO_BINDADDR
#undef SO_RCVBUF
#undef IP_TOS
#undef SO_TIMEOUT
#undef SO_KEEPALIVE
#undef SO_SNDBUF
#undef WOULDBLOCK
#undef SO_REUSEADDR
#undef SO_OOBINLINE
#undef SO_REUSEPORT
#undef TCP_NODELAY

using $InetSocketAddressArray = $Array<::java::net::InetSocketAddress>;
using $FileDescriptor = ::java::io::FileDescriptor;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AbstractPlainSocketImpl = ::java::net::AbstractPlainSocketImpl;
using $Inet4Address = ::java::net::Inet4Address;
using $InetAddress = ::java::net::InetAddress;
using $InetAddressContainer = ::java::net::InetAddressContainer;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketException = ::java::net::SocketException;
using $SocketImpl = ::java::net::SocketImpl;
using $SocketOptions = ::java::net::SocketOptions;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $JavaIOFileDescriptorAccess = ::jdk::internal::access::JavaIOFileDescriptorAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace java {
	namespace net {

$FieldInfo _PlainSocketImpl_FieldInfo_[] = {
	{"fdAccess", "Ljdk/internal/access/JavaIOFileDescriptorAccess;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PlainSocketImpl, fdAccess)},
	{"preferIPv4Stack", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PlainSocketImpl, preferIPv4Stack)},
	{"useExclusiveBind", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PlainSocketImpl, useExclusiveBind)},
	{"isReuseAddress", "Z", nullptr, $PRIVATE, $field(PlainSocketImpl, isReuseAddress)},
	{"WOULDBLOCK", "I", nullptr, $STATIC | $FINAL, $constField(PlainSocketImpl, WOULDBLOCK)},
	{}
};

$MethodInfo _PlainSocketImpl_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, 0, $method(static_cast<void(PlainSocketImpl::*)(bool)>(&PlainSocketImpl::init$))},
	{"accept0", "(I[Ljava/net/InetSocketAddress;)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t,$InetSocketAddressArray*)>(&PlainSocketImpl::accept0)), "java.io.IOException"},
	{"available0", "(I)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t)>(&PlainSocketImpl::available0)), "java.io.IOException"},
	{"bind0", "(ILjava/net/InetAddress;IZ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,$InetAddress*,int32_t,bool)>(&PlainSocketImpl::bind0)), "java.io.IOException"},
	{"checkAndReturnNativeFD", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(PlainSocketImpl::*)()>(&PlainSocketImpl::checkAndReturnNativeFD)), "java.net.SocketException"},
	{"close0", "(I)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t)>(&PlainSocketImpl::close0)), "java.io.IOException"},
	{"configureBlocking", "(IZ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,bool)>(&PlainSocketImpl::configureBlocking)), "java.io.IOException"},
	{"connect0", "(ILjava/net/InetAddress;I)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t,$InetAddress*,int32_t)>(&PlainSocketImpl::connect0)), "java.io.IOException"},
	{"getIntOption", "(II)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&PlainSocketImpl::getIntOption)), "java.net.SocketException"},
	{"initIDs", "()V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)()>(&PlainSocketImpl::initIDs))},
	{"listen0", "(II)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,int32_t)>(&PlainSocketImpl::listen0)), "java.io.IOException"},
	{"localAddress", "(ILjava/net/InetAddressContainer;)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,$InetAddressContainer*)>(&PlainSocketImpl::localAddress)), "java.net.SocketException"},
	{"localPort0", "(I)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t)>(&PlainSocketImpl::localPort0)), "java.io.IOException"},
	{"sendOOB", "(II)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,int32_t)>(&PlainSocketImpl::sendOOB)), "java.io.IOException"},
	{"setIntOption", "(III)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,int32_t,int32_t)>(&PlainSocketImpl::setIntOption)), "java.net.SocketException"},
	{"setSoTimeout0", "(II)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,int32_t)>(&PlainSocketImpl::setSoTimeout0)), "java.net.SocketException"},
	{"shutdown0", "(II)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,int32_t)>(&PlainSocketImpl::shutdown0)), "java.io.IOException"},
	{"socket0", "(Z)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(bool)>(&PlainSocketImpl::socket0)), "java.io.IOException"},
	{"socketAccept", "(Ljava/net/SocketImpl;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"socketAvailable", "()I", nullptr, 0, nullptr, "java.io.IOException"},
	{"socketBind", "(Ljava/net/InetAddress;I)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"socketClose0", "(Z)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"socketConnect", "(Ljava/net/InetAddress;II)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"socketCreate", "(Z)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"socketGetOption", "(ILjava/lang/Object;)I", nullptr, 0, nullptr, "java.net.SocketException"},
	{"socketListen", "(I)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"socketSendUrgentData", "(I)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"socketSetOption", "(IZLjava/lang/Object;)V", nullptr, 0, nullptr, "java.net.SocketException"},
	{"socketShutdown", "(I)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"waitForConnect", "(II)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,int32_t)>(&PlainSocketImpl::waitForConnect)), "java.io.IOException"},
	{"waitForNewConnection", "(II)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,int32_t)>(&PlainSocketImpl::waitForNewConnection)), "java.io.IOException"},
	{}
};

#define _METHOD_INDEX_accept0 1
#define _METHOD_INDEX_available0 2
#define _METHOD_INDEX_bind0 3
#define _METHOD_INDEX_close0 5
#define _METHOD_INDEX_configureBlocking 6
#define _METHOD_INDEX_connect0 7
#define _METHOD_INDEX_getIntOption 8
#define _METHOD_INDEX_initIDs 9
#define _METHOD_INDEX_listen0 10
#define _METHOD_INDEX_localAddress 11
#define _METHOD_INDEX_localPort0 12
#define _METHOD_INDEX_sendOOB 13
#define _METHOD_INDEX_setIntOption 14
#define _METHOD_INDEX_setSoTimeout0 15
#define _METHOD_INDEX_shutdown0 16
#define _METHOD_INDEX_socket0 17
#define _METHOD_INDEX_waitForConnect 29
#define _METHOD_INDEX_waitForNewConnection 30

$ClassInfo _PlainSocketImpl_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.PlainSocketImpl",
	"java.net.AbstractPlainSocketImpl",
	nullptr,
	_PlainSocketImpl_FieldInfo_,
	_PlainSocketImpl_MethodInfo_
};

$Object* allocate$PlainSocketImpl($Class* clazz) {
	return $of($alloc(PlainSocketImpl));
}

$JavaIOFileDescriptorAccess* PlainSocketImpl::fdAccess = nullptr;
bool PlainSocketImpl::preferIPv4Stack = false;

bool PlainSocketImpl::useExclusiveBind = false;

void PlainSocketImpl::init$(bool isServer) {
	$AbstractPlainSocketImpl::init$(isServer);
}

void PlainSocketImpl::socketCreate(bool stream) {
	if (this->fd == nullptr) {
		$throwNew($SocketException, "Socket closed"_s);
	}
	int32_t newfd = socket0(stream);
	$nc(PlainSocketImpl::fdAccess)->set(this->fd, newfd);
}

void PlainSocketImpl::socketConnect($InetAddress* address, int32_t port, int32_t timeout) {
	int32_t nativefd = checkAndReturnNativeFD();
	if (address == nullptr) {
		$throwNew($NullPointerException, "inet address argument is null."_s);
	}
	if (PlainSocketImpl::preferIPv4Stack && !($instanceOf($Inet4Address, address))) {
		$throwNew($SocketException, "Protocol family not supported"_s);
	}
	int32_t connectResult = 0;
	if (timeout <= 0) {
		connectResult = connect0(nativefd, address, port);
	} else {
		configureBlocking(nativefd, false);
		{
			$var($Throwable, var$0, nullptr);
			try {
				connectResult = connect0(nativefd, address, port);
				if (connectResult == PlainSocketImpl::WOULDBLOCK) {
					waitForConnect(nativefd, timeout);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				configureBlocking(nativefd, true);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	if (this->localport == 0) {
		this->localport = localPort0(nativefd);
	}
}

void PlainSocketImpl::socketBind($InetAddress* address, int32_t port) {
	int32_t nativefd = checkAndReturnNativeFD();
	if (address == nullptr) {
		$throwNew($NullPointerException, "inet address argument is null."_s);
	}
	if (PlainSocketImpl::preferIPv4Stack && !($instanceOf($Inet4Address, address))) {
		$throwNew($SocketException, "Protocol family not supported"_s);
	}
	bind0(nativefd, address, port, PlainSocketImpl::useExclusiveBind);
	if (port == 0) {
		this->localport = localPort0(nativefd);
	} else {
		this->localport = port;
	}
	$set(this, address, address);
}

void PlainSocketImpl::socketListen(int32_t backlog) {
	int32_t nativefd = checkAndReturnNativeFD();
	listen0(nativefd, backlog);
}

void PlainSocketImpl::socketAccept($SocketImpl* s) {
	int32_t nativefd = checkAndReturnNativeFD();
	if (s == nullptr) {
		$throwNew($NullPointerException, "socket is null"_s);
	}
	int32_t newfd = -1;
	$var($InetSocketAddressArray, isaa, $new($InetSocketAddressArray, 1));
	if (this->timeout <= 0) {
		newfd = accept0(nativefd, isaa);
	} else {
		configureBlocking(nativefd, false);
		{
			$var($Throwable, var$0, nullptr);
			try {
				waitForNewConnection(nativefd, this->timeout);
				newfd = accept0(nativefd, isaa);
				if (newfd != -1) {
					configureBlocking(newfd, true);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				configureBlocking(nativefd, true);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	$nc(PlainSocketImpl::fdAccess)->set($nc(s)->fd, newfd);
	$var($InetSocketAddress, isa, isaa->get(0));
	$nc(s)->port = $nc(isa)->getPort();
	$set(s, address, isa->getAddress());
	s->localport = this->localport;
	if (PlainSocketImpl::preferIPv4Stack && !($instanceOf($Inet4Address, s->address))) {
		$throwNew($SocketException, "Protocol family not supported"_s);
	}
}

int32_t PlainSocketImpl::socketAvailable() {
	int32_t nativefd = checkAndReturnNativeFD();
	return available0(nativefd);
}

void PlainSocketImpl::socketClose0(bool useDeferredClose) {
	if (this->fd == nullptr) {
		$throwNew($SocketException, "Socket closed"_s);
	}
	if (!$nc(this->fd)->valid()) {
		return;
	}
	int32_t nativefd = $nc(PlainSocketImpl::fdAccess)->get(this->fd);
	$nc(PlainSocketImpl::fdAccess)->set(this->fd, -1);
	close0(nativefd);
}

void PlainSocketImpl::socketShutdown(int32_t howto) {
	int32_t nativefd = checkAndReturnNativeFD();
	shutdown0(nativefd, howto);
}

void PlainSocketImpl::socketSetOption(int32_t opt, bool on, Object$* value) {
	if (opt == $SocketOptions::SO_REUSEPORT) {
		$throwNew($UnsupportedOperationException, "unsupported option"_s);
	}
	int32_t nativefd = checkAndReturnNativeFD();
	if (opt == $SocketOptions::SO_TIMEOUT) {
		if (PlainSocketImpl::preferIPv4Stack) {
			if (!this->isServer) {
				setSoTimeout0(nativefd, $nc(($cast($Integer, value)))->intValue());
			}
		}
		return;
	}
	int32_t optionValue = 0;
	switch (opt) {
	case $SocketOptions::SO_REUSEADDR:
		{
			if (PlainSocketImpl::useExclusiveBind) {
				this->isReuseAddress = on;
				return;
			}
		}
	case $SocketOptions::TCP_NODELAY:
		{}
	case $SocketOptions::SO_OOBINLINE:
		{}
	case $SocketOptions::SO_KEEPALIVE:
		{
			optionValue = on ? 1 : 0;
			break;
		}
	case $SocketOptions::SO_SNDBUF:
		{}
	case $SocketOptions::SO_RCVBUF:
		{}
	case $SocketOptions::IP_TOS:
		{
			optionValue = $nc(($cast($Integer, value)))->intValue();
			break;
		}
	case $SocketOptions::SO_LINGER:
		{
			if (on) {
				optionValue = $nc(($cast($Integer, value)))->intValue();
			} else {
				optionValue = -1;
			}
			break;
		}
	default:
		{
			$throwNew($SocketException, "Option not supported"_s);
		}
	}
	setIntOption(nativefd, opt, optionValue);
}

int32_t PlainSocketImpl::socketGetOption(int32_t opt, Object$* iaContainerObj) {
	if (opt == $SocketOptions::SO_REUSEPORT) {
		$throwNew($UnsupportedOperationException, "unsupported option"_s);
	}
	int32_t nativefd = checkAndReturnNativeFD();
	if (opt == $SocketOptions::SO_BINDADDR) {
		localAddress(nativefd, $cast($InetAddressContainer, iaContainerObj));
		return 0;
	}
	if (opt == $SocketOptions::SO_REUSEADDR && PlainSocketImpl::useExclusiveBind) {
		return this->isReuseAddress ? 1 : -1;
	}
	int32_t value = getIntOption(nativefd, opt);
	switch (opt) {
	case $SocketOptions::TCP_NODELAY:
		{}
	case $SocketOptions::SO_OOBINLINE:
		{}
	case $SocketOptions::SO_KEEPALIVE:
		{}
	case $SocketOptions::SO_REUSEADDR:
		{
			return (value == 0) ? -1 : 1;
		}
	}
	return value;
}

void PlainSocketImpl::socketSendUrgentData(int32_t data) {
	int32_t nativefd = checkAndReturnNativeFD();
	sendOOB(nativefd, data);
}

int32_t PlainSocketImpl::checkAndReturnNativeFD() {
	if (this->fd == nullptr || !$nc(this->fd)->valid()) {
		$throwNew($SocketException, "Socket closed"_s);
	}
	return $nc(PlainSocketImpl::fdAccess)->get(this->fd);
}

void PlainSocketImpl::initIDs() {
	$init(PlainSocketImpl);
	$prepareNativeStatic(PlainSocketImpl, initIDs, void);
	$invokeNativeStatic(PlainSocketImpl, initIDs);
	$finishNativeStatic();
}

int32_t PlainSocketImpl::socket0(bool stream) {
	$init(PlainSocketImpl);
	int32_t $ret = 0;
	$prepareNativeStatic(PlainSocketImpl, socket0, int32_t, bool stream);
	$ret = $invokeNativeStatic(PlainSocketImpl, socket0, stream);
	$finishNativeStatic();
	return $ret;
}

void PlainSocketImpl::bind0(int32_t fd, $InetAddress* localAddress, int32_t localport, bool exclBind) {
	$init(PlainSocketImpl);
	$prepareNativeStatic(PlainSocketImpl, bind0, void, int32_t fd, $InetAddress* localAddress, int32_t localport, bool exclBind);
	$invokeNativeStatic(PlainSocketImpl, bind0, fd, localAddress, localport, exclBind);
	$finishNativeStatic();
}

int32_t PlainSocketImpl::connect0(int32_t fd, $InetAddress* remote, int32_t remotePort) {
	$init(PlainSocketImpl);
	int32_t $ret = 0;
	$prepareNativeStatic(PlainSocketImpl, connect0, int32_t, int32_t fd, $InetAddress* remote, int32_t remotePort);
	$ret = $invokeNativeStatic(PlainSocketImpl, connect0, fd, remote, remotePort);
	$finishNativeStatic();
	return $ret;
}

void PlainSocketImpl::waitForConnect(int32_t fd, int32_t timeout) {
	$init(PlainSocketImpl);
	$prepareNativeStatic(PlainSocketImpl, waitForConnect, void, int32_t fd, int32_t timeout);
	$invokeNativeStatic(PlainSocketImpl, waitForConnect, fd, timeout);
	$finishNativeStatic();
}

int32_t PlainSocketImpl::localPort0(int32_t fd) {
	$init(PlainSocketImpl);
	int32_t $ret = 0;
	$prepareNativeStatic(PlainSocketImpl, localPort0, int32_t, int32_t fd);
	$ret = $invokeNativeStatic(PlainSocketImpl, localPort0, fd);
	$finishNativeStatic();
	return $ret;
}

void PlainSocketImpl::localAddress(int32_t fd, $InetAddressContainer* in) {
	$init(PlainSocketImpl);
	$prepareNativeStatic(PlainSocketImpl, localAddress, void, int32_t fd, $InetAddressContainer* in);
	$invokeNativeStatic(PlainSocketImpl, localAddress, fd, in);
	$finishNativeStatic();
}

void PlainSocketImpl::listen0(int32_t fd, int32_t backlog) {
	$init(PlainSocketImpl);
	$prepareNativeStatic(PlainSocketImpl, listen0, void, int32_t fd, int32_t backlog);
	$invokeNativeStatic(PlainSocketImpl, listen0, fd, backlog);
	$finishNativeStatic();
}

int32_t PlainSocketImpl::accept0(int32_t fd, $InetSocketAddressArray* isaa) {
	$init(PlainSocketImpl);
	int32_t $ret = 0;
	$prepareNativeStatic(PlainSocketImpl, accept0, int32_t, int32_t fd, $InetSocketAddressArray* isaa);
	$ret = $invokeNativeStatic(PlainSocketImpl, accept0, fd, isaa);
	$finishNativeStatic();
	return $ret;
}

void PlainSocketImpl::waitForNewConnection(int32_t fd, int32_t timeout) {
	$init(PlainSocketImpl);
	$prepareNativeStatic(PlainSocketImpl, waitForNewConnection, void, int32_t fd, int32_t timeout);
	$invokeNativeStatic(PlainSocketImpl, waitForNewConnection, fd, timeout);
	$finishNativeStatic();
}

int32_t PlainSocketImpl::available0(int32_t fd) {
	$init(PlainSocketImpl);
	int32_t $ret = 0;
	$prepareNativeStatic(PlainSocketImpl, available0, int32_t, int32_t fd);
	$ret = $invokeNativeStatic(PlainSocketImpl, available0, fd);
	$finishNativeStatic();
	return $ret;
}

void PlainSocketImpl::close0(int32_t fd) {
	$init(PlainSocketImpl);
	$prepareNativeStatic(PlainSocketImpl, close0, void, int32_t fd);
	$invokeNativeStatic(PlainSocketImpl, close0, fd);
	$finishNativeStatic();
}

void PlainSocketImpl::shutdown0(int32_t fd, int32_t howto) {
	$init(PlainSocketImpl);
	$prepareNativeStatic(PlainSocketImpl, shutdown0, void, int32_t fd, int32_t howto);
	$invokeNativeStatic(PlainSocketImpl, shutdown0, fd, howto);
	$finishNativeStatic();
}

void PlainSocketImpl::setIntOption(int32_t fd, int32_t cmd, int32_t optionValue) {
	$init(PlainSocketImpl);
	$prepareNativeStatic(PlainSocketImpl, setIntOption, void, int32_t fd, int32_t cmd, int32_t optionValue);
	$invokeNativeStatic(PlainSocketImpl, setIntOption, fd, cmd, optionValue);
	$finishNativeStatic();
}

void PlainSocketImpl::setSoTimeout0(int32_t fd, int32_t timeout) {
	$init(PlainSocketImpl);
	$prepareNativeStatic(PlainSocketImpl, setSoTimeout0, void, int32_t fd, int32_t timeout);
	$invokeNativeStatic(PlainSocketImpl, setSoTimeout0, fd, timeout);
	$finishNativeStatic();
}

int32_t PlainSocketImpl::getIntOption(int32_t fd, int32_t cmd) {
	$init(PlainSocketImpl);
	int32_t $ret = 0;
	$prepareNativeStatic(PlainSocketImpl, getIntOption, int32_t, int32_t fd, int32_t cmd);
	$ret = $invokeNativeStatic(PlainSocketImpl, getIntOption, fd, cmd);
	$finishNativeStatic();
	return $ret;
}

void PlainSocketImpl::sendOOB(int32_t fd, int32_t data) {
	$init(PlainSocketImpl);
	$prepareNativeStatic(PlainSocketImpl, sendOOB, void, int32_t fd, int32_t data);
	$invokeNativeStatic(PlainSocketImpl, sendOOB, fd, data);
	$finishNativeStatic();
}

void PlainSocketImpl::configureBlocking(int32_t fd, bool blocking) {
	$init(PlainSocketImpl);
	$prepareNativeStatic(PlainSocketImpl, configureBlocking, void, int32_t fd, bool blocking);
	$invokeNativeStatic(PlainSocketImpl, configureBlocking, fd, blocking);
	$finishNativeStatic();
}

void clinit$PlainSocketImpl($Class* class$) {
	$beforeCallerSensitive();
	$assignStatic(PlainSocketImpl::fdAccess, $SharedSecrets::getJavaIOFileDescriptorAccess());
	PlainSocketImpl::preferIPv4Stack = $Boolean::parseBoolean($cast($String, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "java.net.preferIPv4Stack"_s, "false"_s))))));
	{
		$var($String, exclBindProp, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "sun.net.useExclusiveBind"_s, ""_s)))));
		bool var$0 = $nc(exclBindProp)->isEmpty();
		PlainSocketImpl::useExclusiveBind = var$0 || $Boolean::parseBoolean(exclBindProp);
	}
	{
		PlainSocketImpl::initIDs();
	}
}

PlainSocketImpl::PlainSocketImpl() {
}

$Class* PlainSocketImpl::load$($String* name, bool initialize) {
	$loadClass(PlainSocketImpl, name, initialize, &_PlainSocketImpl_ClassInfo_, clinit$PlainSocketImpl, allocate$PlainSocketImpl);
	return class$;
}

$Class* PlainSocketImpl::class$ = nullptr;

	} // net
} // java