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
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DummySocketImpl::*)()>(&DummySocketImpl::init$))},
	{"accept", "(Ljava/net/SocketImpl;)V", nullptr, $PROTECTED},
	{"available", "()I", nullptr, $PROTECTED},
	{"bind", "(Ljava/net/InetAddress;I)V", nullptr, $PROTECTED},
	{"close", "()V", nullptr, $PROTECTED},
	{"connect", "(Ljava/net/SocketAddress;I)V", nullptr, $PROTECTED},
	{"connect", "(Ljava/lang/String;I)V", nullptr, $PROTECTED},
	{"connect", "(Ljava/net/InetAddress;I)V", nullptr, $PROTECTED},
	{"create", "()Ljava/net/SocketImpl;", nullptr, $STATIC, $method(static_cast<$SocketImpl*(*)()>(&DummySocketImpl::create))},
	{"create", "(Z)V", nullptr, $PROTECTED},
	{"getInputStream", "()Ljava/io/InputStream;", nullptr, $PROTECTED},
	{"getOption", "(Ljava/net/SocketOption;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/net/SocketOption<TT;>;)TT;", $PROTECTED},
	{"getOption", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getOutputStream", "()Ljava/io/OutputStream;", nullptr, $PROTECTED},
	{"listen", "(I)V", nullptr, $PROTECTED},
	{"sendUrgentData", "(I)V", nullptr, $PROTECTED},
	{"setOption", "(Ljava/net/SocketOption;Ljava/lang/Object;)V", "<T:Ljava/lang/Object;>(Ljava/net/SocketOption<TT;>;TT;)V", $PROTECTED},
	{"setOption", "(ILjava/lang/Object;)V", nullptr, $PUBLIC},
	{"shouldNotGetHere", "()Ljava/lang/Object;", "<T:Ljava/lang/Object;>()TT;", $PRIVATE | $STATIC, $method(static_cast<$Object*(*)()>(&DummySocketImpl::shouldNotGetHere))},
	{"shutdownInput", "()V", nullptr, $PROTECTED},
	{"shutdownOutput", "()V", nullptr, $PROTECTED},
	{"supportedOptions", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $PROTECTED},
	{"supportsUrgentData", "()Z", nullptr, $PROTECTED},
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