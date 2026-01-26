#include <sun/nio/ch/DummySocketImpl.h>

#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/InternalError.h>
#include <java/net/InetAddress.h>
#include <java/net/SocketAddress.h>
#include <java/net/SocketImpl.h>
#include <java/net/SocketOption.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $SocketAddress = ::java::net::SocketAddress;
using $SocketImpl = ::java::net::SocketImpl;
using $SocketOption = ::java::net::SocketOption;
using $Set = ::java::util::Set;

namespace sun {
	namespace nio {
		namespace ch {

$MethodInfo _DummySocketImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(DummySocketImpl, init$, void)},
	{"accept", "(Ljava/net/SocketImpl;)V", nullptr, $PROTECTED, $virtualMethod(DummySocketImpl, accept, void, $SocketImpl*)},
	{"available", "()I", nullptr, $PROTECTED, $virtualMethod(DummySocketImpl, available, int32_t)},
	{"bind", "(Ljava/net/InetAddress;I)V", nullptr, $PROTECTED, $virtualMethod(DummySocketImpl, bind, void, $InetAddress*, int32_t)},
	{"close", "()V", nullptr, $PROTECTED, $virtualMethod(DummySocketImpl, close, void)},
	{"connect", "(Ljava/net/SocketAddress;I)V", nullptr, $PROTECTED, $virtualMethod(DummySocketImpl, connect, void, $SocketAddress*, int32_t)},
	{"connect", "(Ljava/lang/String;I)V", nullptr, $PROTECTED, $virtualMethod(DummySocketImpl, connect, void, $String*, int32_t)},
	{"connect", "(Ljava/net/InetAddress;I)V", nullptr, $PROTECTED, $virtualMethod(DummySocketImpl, connect, void, $InetAddress*, int32_t)},
	{"create", "()Ljava/net/SocketImpl;", nullptr, $STATIC, $staticMethod(DummySocketImpl, create, $SocketImpl*)},
	{"create", "(Z)V", nullptr, $PROTECTED, $virtualMethod(DummySocketImpl, create, void, bool)},
	{"getInputStream", "()Ljava/io/InputStream;", nullptr, $PROTECTED, $virtualMethod(DummySocketImpl, getInputStream, $InputStream*)},
	{"getOption", "(Ljava/net/SocketOption;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/net/SocketOption<TT;>;)TT;", $PROTECTED, $virtualMethod(DummySocketImpl, getOption, $Object*, $SocketOption*)},
	{"getOption", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DummySocketImpl, getOption, $Object*, int32_t)},
	{"getOutputStream", "()Ljava/io/OutputStream;", nullptr, $PROTECTED, $virtualMethod(DummySocketImpl, getOutputStream, $OutputStream*)},
	{"listen", "(I)V", nullptr, $PROTECTED, $virtualMethod(DummySocketImpl, listen, void, int32_t)},
	{"sendUrgentData", "(I)V", nullptr, $PROTECTED, $virtualMethod(DummySocketImpl, sendUrgentData, void, int32_t)},
	{"setOption", "(Ljava/net/SocketOption;Ljava/lang/Object;)V", "<T:Ljava/lang/Object;>(Ljava/net/SocketOption<TT;>;TT;)V", $PROTECTED, $virtualMethod(DummySocketImpl, setOption, void, $SocketOption*, Object$*)},
	{"setOption", "(ILjava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(DummySocketImpl, setOption, void, int32_t, Object$*)},
	{"shouldNotGetHere", "()Ljava/lang/Object;", "<T:Ljava/lang/Object;>()TT;", $PRIVATE | $STATIC, $staticMethod(DummySocketImpl, shouldNotGetHere, $Object*)},
	{"shutdownInput", "()V", nullptr, $PROTECTED, $virtualMethod(DummySocketImpl, shutdownInput, void)},
	{"shutdownOutput", "()V", nullptr, $PROTECTED, $virtualMethod(DummySocketImpl, shutdownOutput, void)},
	{"supportedOptions", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $PROTECTED, $virtualMethod(DummySocketImpl, supportedOptions, $Set*)},
	{"supportsUrgentData", "()Z", nullptr, $PROTECTED, $virtualMethod(DummySocketImpl, supportsUrgentData, bool)},
	{}
};

$ClassInfo _DummySocketImpl_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.DummySocketImpl",
	"java.net.SocketImpl",
	nullptr,
	nullptr,
	_DummySocketImpl_MethodInfo_
};

$Object* allocate$DummySocketImpl($Class* clazz) {
	return $of($alloc(DummySocketImpl));
}

void DummySocketImpl::init$() {
	$SocketImpl::init$();
}

$SocketImpl* DummySocketImpl::create() {
	$init(DummySocketImpl);
	return $new(DummySocketImpl);
}

$Object* DummySocketImpl::shouldNotGetHere() {
	$init(DummySocketImpl);
	$throwNew($InternalError, "Should not get here"_s);
	$shouldNotReachHere();
}

void DummySocketImpl::create(bool stream) {
	shouldNotGetHere();
}

void DummySocketImpl::connect($SocketAddress* remote, int32_t millis) {
	shouldNotGetHere();
}

void DummySocketImpl::connect($String* host, int32_t port) {
	shouldNotGetHere();
}

void DummySocketImpl::connect($InetAddress* address, int32_t port) {
	shouldNotGetHere();
}

void DummySocketImpl::bind($InetAddress* host, int32_t port) {
	shouldNotGetHere();
}

void DummySocketImpl::listen(int32_t backlog) {
	shouldNotGetHere();
}

void DummySocketImpl::accept($SocketImpl* si) {
	shouldNotGetHere();
}

$InputStream* DummySocketImpl::getInputStream() {
	return $cast($InputStream, shouldNotGetHere());
}

$OutputStream* DummySocketImpl::getOutputStream() {
	return $cast($OutputStream, shouldNotGetHere());
}

int32_t DummySocketImpl::available() {
	return $nc(($cast($Integer, $(shouldNotGetHere()))))->intValue();
}

void DummySocketImpl::close() {
	shouldNotGetHere();
}

$Set* DummySocketImpl::supportedOptions() {
	return $cast($Set, shouldNotGetHere());
}

void DummySocketImpl::setOption($SocketOption* opt, Object$* value) {
	shouldNotGetHere();
}

$Object* DummySocketImpl::getOption($SocketOption* opt) {
	return $of(shouldNotGetHere());
}

void DummySocketImpl::setOption(int32_t opt, Object$* value) {
	shouldNotGetHere();
}

$Object* DummySocketImpl::getOption(int32_t opt) {
	return $of(shouldNotGetHere());
}

void DummySocketImpl::shutdownInput() {
	shouldNotGetHere();
}

void DummySocketImpl::shutdownOutput() {
	shouldNotGetHere();
}

bool DummySocketImpl::supportsUrgentData() {
	return $nc(($cast($Boolean, $(shouldNotGetHere()))))->booleanValue();
}

void DummySocketImpl::sendUrgentData(int32_t data) {
	shouldNotGetHere();
}

DummySocketImpl::DummySocketImpl() {
}

$Class* DummySocketImpl::load$($String* name, bool initialize) {
	$loadClass(DummySocketImpl, name, initialize, &_DummySocketImpl_ClassInfo_, allocate$DummySocketImpl);
	return class$;
}

$Class* DummySocketImpl::class$ = nullptr;

		} // ch
	} // nio
} // sun