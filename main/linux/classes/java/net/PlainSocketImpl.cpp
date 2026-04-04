#include <java/net/PlainSocketImpl.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/net/AbstractPlainSocketImpl.h>
#include <java/net/InetAddress.h>
#include <java/net/SocketException.h>
#include <java/net/SocketImpl.h>
#include <java/net/SocketOption.h>
#include <java/net/SocketOptions.h>
#include <java/net/StandardSocketOptions.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef SO_REUSEPORT

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AbstractPlainSocketImpl = ::java::net::AbstractPlainSocketImpl;
using $InetAddress = ::java::net::InetAddress;
using $SocketException = ::java::net::SocketException;
using $SocketImpl = ::java::net::SocketImpl;
using $SocketOptions = ::java::net::SocketOptions;
using $StandardSocketOptions = ::java::net::StandardSocketOptions;

namespace java {
	namespace net {

void PlainSocketImpl::init$(bool isServer) {
	$AbstractPlainSocketImpl::init$(isServer);
}

void PlainSocketImpl::socketSetOption(int32_t opt, bool b, Object$* val) {
	$init($StandardSocketOptions);
	if (opt == $SocketOptions::SO_REUSEPORT && !$$nc(supportedOptions())->contains($StandardSocketOptions::SO_REUSEPORT)) {
		$throwNew($UnsupportedOperationException, "unsupported option"_s);
	}
	try {
		socketSetOption0(opt, b, val);
	} catch ($SocketException& se) {
		if (!this->isConnected) {
			$throw(se);
		}
	}
}

void PlainSocketImpl::socketCreate(bool stream) {
	socketCreate(stream, this->isServer);
}

void PlainSocketImpl::socketCreate(bool stream, bool isServer) {
	$prepareNative(socketCreate, void, bool stream, bool isServer);
	$invokeNative(stream, isServer);
	$finishNative();
}

void PlainSocketImpl::socketConnect($InetAddress* address, int32_t port, int32_t timeout) {
	$prepareNative(socketConnect, void, $InetAddress* address, int32_t port, int32_t timeout);
	$invokeNative(address, port, timeout);
	$finishNative();
}

void PlainSocketImpl::socketBind($InetAddress* address, int32_t port) {
	$prepareNative(socketBind, void, $InetAddress* address, int32_t port);
	$invokeNative(address, port);
	$finishNative();
}

void PlainSocketImpl::socketListen(int32_t count) {
	$prepareNative(socketListen, void, int32_t count);
	$invokeNative(count);
	$finishNative();
}

void PlainSocketImpl::socketAccept($SocketImpl* s) {
	$prepareNative(socketAccept, void, $SocketImpl* s);
	$invokeNative(s);
	$finishNative();
}

int32_t PlainSocketImpl::socketAvailable() {
	$prepareNative(socketAvailable, int32_t);
	int32_t $ret = $invokeNative();
	$finishNative();
	return $ret;
}

void PlainSocketImpl::socketClose0(bool useDeferredClose) {
	$prepareNative(socketClose0, void, bool useDeferredClose);
	$invokeNative(useDeferredClose);
	$finishNative();
}

void PlainSocketImpl::socketShutdown(int32_t howto) {
	$prepareNative(socketShutdown, void, int32_t howto);
	$invokeNative(howto);
	$finishNative();
}

void PlainSocketImpl::initProto() {
	$init(PlainSocketImpl);
	$prepareNativeStatic(initProto, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void PlainSocketImpl::socketSetOption0(int32_t cmd, bool on, Object$* value) {
	$prepareNative(socketSetOption0, void, int32_t cmd, bool on, Object$* value);
	$invokeNative(cmd, on, value);
	$finishNative();
}

int32_t PlainSocketImpl::socketGetOption(int32_t opt, Object$* iaContainerObj) {
	$prepareNative(socketGetOption, int32_t, int32_t opt, Object$* iaContainerObj);
	int32_t $ret = $invokeNative(opt, iaContainerObj);
	$finishNative();
	return $ret;
}

void PlainSocketImpl::socketSendUrgentData(int32_t data) {
	$prepareNative(socketSendUrgentData, void, int32_t data);
	$invokeNative(data);
	$finishNative();
}

void PlainSocketImpl::clinit$($Class* clazz) {
	{
		PlainSocketImpl::initProto();
	}
}

PlainSocketImpl::PlainSocketImpl() {
}

$Class* PlainSocketImpl::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Z)V", nullptr, 0, $method(PlainSocketImpl, init$, void, bool)},
		{"initProto", "()V", nullptr, $STATIC | $NATIVE, $staticMethod(PlainSocketImpl, initProto, void)},
		{"socketAccept", "(Ljava/net/SocketImpl;)V", nullptr, $NATIVE, $virtualMethod(PlainSocketImpl, socketAccept, void, $SocketImpl*), "java.io.IOException"},
		{"socketAvailable", "()I", nullptr, $NATIVE, $virtualMethod(PlainSocketImpl, socketAvailable, int32_t), "java.io.IOException"},
		{"socketBind", "(Ljava/net/InetAddress;I)V", nullptr, $NATIVE, $virtualMethod(PlainSocketImpl, socketBind, void, $InetAddress*, int32_t), "java.io.IOException"},
		{"socketClose0", "(Z)V", nullptr, $NATIVE, $virtualMethod(PlainSocketImpl, socketClose0, void, bool), "java.io.IOException"},
		{"socketConnect", "(Ljava/net/InetAddress;II)V", nullptr, $NATIVE, $virtualMethod(PlainSocketImpl, socketConnect, void, $InetAddress*, int32_t, int32_t), "java.io.IOException"},
		{"socketCreate", "(Z)V", nullptr, 0, $virtualMethod(PlainSocketImpl, socketCreate, void, bool), "java.io.IOException"},
		{"socketCreate", "(ZZ)V", nullptr, $NATIVE, $virtualMethod(PlainSocketImpl, socketCreate, void, bool, bool), "java.io.IOException"},
		{"socketGetOption", "(ILjava/lang/Object;)I", nullptr, $NATIVE, $virtualMethod(PlainSocketImpl, socketGetOption, int32_t, int32_t, Object$*), "java.net.SocketException"},
		{"socketListen", "(I)V", nullptr, $NATIVE, $virtualMethod(PlainSocketImpl, socketListen, void, int32_t), "java.io.IOException"},
		{"socketSendUrgentData", "(I)V", nullptr, $NATIVE, $virtualMethod(PlainSocketImpl, socketSendUrgentData, void, int32_t), "java.io.IOException"},
		{"socketSetOption", "(IZLjava/lang/Object;)V", nullptr, $PROTECTED, $virtualMethod(PlainSocketImpl, socketSetOption, void, int32_t, bool, Object$*), "java.net.SocketException"},
		{"socketSetOption0", "(IZLjava/lang/Object;)V", nullptr, $NATIVE, $virtualMethod(PlainSocketImpl, socketSetOption0, void, int32_t, bool, Object$*), "java.net.SocketException"},
		{"socketShutdown", "(I)V", nullptr, $NATIVE, $virtualMethod(PlainSocketImpl, socketShutdown, void, int32_t), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.PlainSocketImpl",
		"java.net.AbstractPlainSocketImpl",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(PlainSocketImpl, name, initialize, &classInfo$$, PlainSocketImpl::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(PlainSocketImpl));
	});
	return class$;
}

$Class* PlainSocketImpl::class$ = nullptr;

	} // net
} // java