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
using $Set = ::java::util::Set;

namespace java {
	namespace net {

$MethodInfo _PlainSocketImpl_MethodInfo_[] = {
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

#define _METHOD_INDEX_initProto 1
#define _METHOD_INDEX_socketAccept 2
#define _METHOD_INDEX_socketAvailable 3
#define _METHOD_INDEX_socketBind 4
#define _METHOD_INDEX_socketClose0 5
#define _METHOD_INDEX_socketConnect 6
#define _METHOD_INDEX_socketCreate 8
#define _METHOD_INDEX_socketGetOption 9
#define _METHOD_INDEX_socketListen 10
#define _METHOD_INDEX_socketSendUrgentData 11
#define _METHOD_INDEX_socketSetOption0 13
#define _METHOD_INDEX_socketShutdown 14

$ClassInfo _PlainSocketImpl_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.PlainSocketImpl",
	"java.net.AbstractPlainSocketImpl",
	nullptr,
	nullptr,
	_PlainSocketImpl_MethodInfo_
};

$Object* allocate$PlainSocketImpl($Class* clazz) {
	return $of($alloc(PlainSocketImpl));
}

void PlainSocketImpl::init$(bool isServer) {
	$AbstractPlainSocketImpl::init$(isServer);
}

void PlainSocketImpl::socketSetOption(int32_t opt, bool b, Object$* val) {
	$init($StandardSocketOptions);
	if (opt == $SocketOptions::SO_REUSEPORT && !$nc($(supportedOptions()))->contains($StandardSocketOptions::SO_REUSEPORT)) {
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
	$prepareNative(PlainSocketImpl, socketCreate, void, bool stream, bool isServer);
	$invokeNative(stream, isServer);
	$finishNative();
}

void PlainSocketImpl::socketConnect($InetAddress* address, int32_t port, int32_t timeout) {
	$prepareNative(PlainSocketImpl, socketConnect, void, $InetAddress* address, int32_t port, int32_t timeout);
	$invokeNative(address, port, timeout);
	$finishNative();
}

void PlainSocketImpl::socketBind($InetAddress* address, int32_t port) {
	$prepareNative(PlainSocketImpl, socketBind, void, $InetAddress* address, int32_t port);
	$invokeNative(address, port);
	$finishNative();
}

void PlainSocketImpl::socketListen(int32_t count) {
	$prepareNative(PlainSocketImpl, socketListen, void, int32_t count);
	$invokeNative(count);
	$finishNative();
}

void PlainSocketImpl::socketAccept($SocketImpl* s) {
	$prepareNative(PlainSocketImpl, socketAccept, void, $SocketImpl* s);
	$invokeNative(s);
	$finishNative();
}

int32_t PlainSocketImpl::socketAvailable() {
	int32_t $ret = 0;
	$prepareNative(PlainSocketImpl, socketAvailable, int32_t);
	$ret = $invokeNative();
	$finishNative();
	return $ret;
}

void PlainSocketImpl::socketClose0(bool useDeferredClose) {
	$prepareNative(PlainSocketImpl, socketClose0, void, bool useDeferredClose);
	$invokeNative(useDeferredClose);
	$finishNative();
}

void PlainSocketImpl::socketShutdown(int32_t howto) {
	$prepareNative(PlainSocketImpl, socketShutdown, void, int32_t howto);
	$invokeNative(howto);
	$finishNative();
}

void PlainSocketImpl::initProto() {
	$init(PlainSocketImpl);
	$prepareNativeStatic(PlainSocketImpl, initProto, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void PlainSocketImpl::socketSetOption0(int32_t cmd, bool on, Object$* value) {
	$prepareNative(PlainSocketImpl, socketSetOption0, void, int32_t cmd, bool on, Object$* value);
	$invokeNative(cmd, on, value);
	$finishNative();
}

int32_t PlainSocketImpl::socketGetOption(int32_t opt, Object$* iaContainerObj) {
	int32_t $ret = 0;
	$prepareNative(PlainSocketImpl, socketGetOption, int32_t, int32_t opt, Object$* iaContainerObj);
	$ret = $invokeNative(opt, iaContainerObj);
	$finishNative();
	return $ret;
}

void PlainSocketImpl::socketSendUrgentData(int32_t data) {
	$prepareNative(PlainSocketImpl, socketSendUrgentData, void, int32_t data);
	$invokeNative(data);
	$finishNative();
}

void clinit$PlainSocketImpl($Class* class$) {
	{
		PlainSocketImpl::initProto();
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