#include <java/net/DelegatingSocketImpl.h>

#include <java/io/FileDescriptor.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/AssertionError.h>
#include <java/net/InetAddress.h>
#include <java/net/SocketAddress.h>
#include <java/net/SocketImpl.h>
#include <java/net/SocketOption.h>
#include <java/net/SocketOptions.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <sun/net/PlatformSocketImpl.h>
#include <jcpp.h>

using $FileDescriptor = ::java::io::FileDescriptor;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $SocketAddress = ::java::net::SocketAddress;
using $SocketImpl = ::java::net::SocketImpl;
using $SocketOption = ::java::net::SocketOption;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $PlatformSocketImpl = ::sun::net::PlatformSocketImpl;

namespace java {
	namespace net {

$FieldInfo _DelegatingSocketImpl_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DelegatingSocketImpl, $assertionsDisabled)},
	{"delegate", "Ljava/net/SocketImpl;", nullptr, $PROTECTED | $FINAL, $field(DelegatingSocketImpl, delegate$)},
	{}
};

$MethodInfo _DelegatingSocketImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/net/SocketImpl;)V", nullptr, 0, $method(DelegatingSocketImpl, init$, void, $SocketImpl*)},
	{"accept", "(Ljava/net/SocketImpl;)V", nullptr, $PROTECTED, $virtualMethod(DelegatingSocketImpl, accept, void, $SocketImpl*), "java.io.IOException"},
	{"available", "()I", nullptr, $PROTECTED, $virtualMethod(DelegatingSocketImpl, available, int32_t), "java.io.IOException"},
	{"bind", "(Ljava/net/InetAddress;I)V", nullptr, $PROTECTED, $virtualMethod(DelegatingSocketImpl, bind, void, $InetAddress*, int32_t), "java.io.IOException"},
	{"close", "()V", nullptr, $PROTECTED, $virtualMethod(DelegatingSocketImpl, close, void), "java.io.IOException"},
	{"connect", "(Ljava/lang/String;I)V", nullptr, $PROTECTED, $virtualMethod(DelegatingSocketImpl, connect, void, $String*, int32_t), "java.io.IOException"},
	{"connect", "(Ljava/net/InetAddress;I)V", nullptr, $PROTECTED, $virtualMethod(DelegatingSocketImpl, connect, void, $InetAddress*, int32_t), "java.io.IOException"},
	{"connect", "(Ljava/net/SocketAddress;I)V", nullptr, $PROTECTED, $virtualMethod(DelegatingSocketImpl, connect, void, $SocketAddress*, int32_t), "java.io.IOException"},
	{"create", "(Z)V", nullptr, $PROTECTED, $virtualMethod(DelegatingSocketImpl, create, void, bool), "java.io.IOException"},
	{"delegate", "()Ljava/net/SocketImpl;", nullptr, $FINAL, $method(DelegatingSocketImpl, delegate, $SocketImpl*)},
	{"getFileDescriptor", "()Ljava/io/FileDescriptor;", nullptr, $PROTECTED, $virtualMethod(DelegatingSocketImpl, getFileDescriptor, $FileDescriptor*)},
	{"getInetAddress", "()Ljava/net/InetAddress;", nullptr, $PROTECTED, $virtualMethod(DelegatingSocketImpl, getInetAddress, $InetAddress*)},
	{"getInputStream", "()Ljava/io/InputStream;", nullptr, $PROTECTED, $virtualMethod(DelegatingSocketImpl, getInputStream, $InputStream*), "java.io.IOException"},
	{"getLocalPort", "()I", nullptr, $PROTECTED, $virtualMethod(DelegatingSocketImpl, getLocalPort, int32_t)},
	{"getOption", "(Ljava/net/SocketOption;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/net/SocketOption<TT;>;)TT;", $PROTECTED, $virtualMethod(DelegatingSocketImpl, getOption, $Object*, $SocketOption*), "java.io.IOException"},
	{"getOption", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DelegatingSocketImpl, getOption, $Object*, int32_t), "java.net.SocketException"},
	{"getOutputStream", "()Ljava/io/OutputStream;", nullptr, $PROTECTED, $virtualMethod(DelegatingSocketImpl, getOutputStream, $OutputStream*), "java.io.IOException"},
	{"getPort", "()I", nullptr, $PROTECTED, $virtualMethod(DelegatingSocketImpl, getPort, int32_t)},
	{"listen", "(I)V", nullptr, $PROTECTED, $virtualMethod(DelegatingSocketImpl, listen, void, int32_t), "java.io.IOException"},
	{"sendUrgentData", "(I)V", nullptr, $PROTECTED, $virtualMethod(DelegatingSocketImpl, sendUrgentData, void, int32_t), "java.io.IOException"},
	{"setOption", "(Ljava/net/SocketOption;Ljava/lang/Object;)V", "<T:Ljava/lang/Object;>(Ljava/net/SocketOption<TT;>;TT;)V", $PROTECTED, $virtualMethod(DelegatingSocketImpl, setOption, void, $SocketOption*, Object$*), "java.io.IOException"},
	{"setOption", "(ILjava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(DelegatingSocketImpl, setOption, void, int32_t, Object$*), "java.net.SocketException"},
	{"shutdownInput", "()V", nullptr, $PROTECTED, $virtualMethod(DelegatingSocketImpl, shutdownInput, void), "java.io.IOException"},
	{"shutdownOutput", "()V", nullptr, $PROTECTED, $virtualMethod(DelegatingSocketImpl, shutdownOutput, void), "java.io.IOException"},
	{"supportedOptions", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $PROTECTED, $virtualMethod(DelegatingSocketImpl, supportedOptions, $Set*)},
	{"supportsUrgentData", "()Z", nullptr, $PROTECTED, $virtualMethod(DelegatingSocketImpl, supportsUrgentData, bool)},
	{}
};

$ClassInfo _DelegatingSocketImpl_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.DelegatingSocketImpl",
	"java.net.SocketImpl",
	nullptr,
	_DelegatingSocketImpl_FieldInfo_,
	_DelegatingSocketImpl_MethodInfo_
};

$Object* allocate$DelegatingSocketImpl($Class* clazz) {
	return $of($alloc(DelegatingSocketImpl));
}

bool DelegatingSocketImpl::$assertionsDisabled = false;

void DelegatingSocketImpl::init$($SocketImpl* delegate) {
	$SocketImpl::init$();
	if (!DelegatingSocketImpl::$assertionsDisabled && !$instanceOf($PlatformSocketImpl, delegate)) {
		$throwNew($AssertionError);
	}
	$set(this, delegate$, $cast($SocketImpl, $Objects::requireNonNull(delegate)));
}

$SocketImpl* DelegatingSocketImpl::delegate() {
	return this->delegate$;
}

$FileDescriptor* DelegatingSocketImpl::getFileDescriptor() {
	return $nc(this->delegate$)->getFileDescriptor();
}

$InetAddress* DelegatingSocketImpl::getInetAddress() {
	return $nc(this->delegate$)->getInetAddress();
}

int32_t DelegatingSocketImpl::getPort() {
	return $nc(this->delegate$)->getPort();
}

int32_t DelegatingSocketImpl::getLocalPort() {
	return $nc(this->delegate$)->getLocalPort();
}

void DelegatingSocketImpl::create(bool stream) {
	$nc(this->delegate$)->create(stream);
}

void DelegatingSocketImpl::connect($String* host, int32_t port) {
	$nc(this->delegate$)->connect(host, port);
}

void DelegatingSocketImpl::connect($InetAddress* address, int32_t port) {
	$nc(this->delegate$)->connect(address, port);
}

void DelegatingSocketImpl::connect($SocketAddress* address, int32_t timeout) {
	$nc(this->delegate$)->connect(address, timeout);
}

void DelegatingSocketImpl::bind($InetAddress* host, int32_t port) {
	$nc(this->delegate$)->bind(host, port);
}

void DelegatingSocketImpl::listen(int32_t backlog) {
	$nc(this->delegate$)->listen(backlog);
}

void DelegatingSocketImpl::accept($SocketImpl* s) {
	$nc(this->delegate$)->accept(s);
}

$InputStream* DelegatingSocketImpl::getInputStream() {
	return $nc(this->delegate$)->getInputStream();
}

$OutputStream* DelegatingSocketImpl::getOutputStream() {
	return $nc(this->delegate$)->getOutputStream();
}

int32_t DelegatingSocketImpl::available() {
	return $nc(this->delegate$)->available();
}

void DelegatingSocketImpl::close() {
	$nc(this->delegate$)->close();
}

bool DelegatingSocketImpl::supportsUrgentData() {
	return $nc(this->delegate$)->supportsUrgentData();
}

void DelegatingSocketImpl::sendUrgentData(int32_t data) {
	$nc(this->delegate$)->sendUrgentData(data);
}

$Set* DelegatingSocketImpl::supportedOptions() {
	return $nc(this->delegate$)->supportedOptions();
}

void DelegatingSocketImpl::setOption($SocketOption* opt, Object$* value) {
	$nc(this->delegate$)->setOption(opt, value);
}

$Object* DelegatingSocketImpl::getOption($SocketOption* opt) {
	return $of($nc(this->delegate$)->getOption(opt));
}

void DelegatingSocketImpl::setOption(int32_t optID, Object$* value) {
	$nc(this->delegate$)->setOption(optID, value);
}

$Object* DelegatingSocketImpl::getOption(int32_t optID) {
	return $of($nc(this->delegate$)->getOption(optID));
}

void DelegatingSocketImpl::shutdownInput() {
	$nc(this->delegate$)->shutdownInput();
}

void DelegatingSocketImpl::shutdownOutput() {
	$nc(this->delegate$)->shutdownOutput();
}

void clinit$DelegatingSocketImpl($Class* class$) {
	DelegatingSocketImpl::$assertionsDisabled = !DelegatingSocketImpl::class$->desiredAssertionStatus();
}

DelegatingSocketImpl::DelegatingSocketImpl() {
}

$Class* DelegatingSocketImpl::load$($String* name, bool initialize) {
	$loadClass(DelegatingSocketImpl, name, initialize, &_DelegatingSocketImpl_ClassInfo_, clinit$DelegatingSocketImpl, allocate$DelegatingSocketImpl);
	return class$;
}

$Class* DelegatingSocketImpl::class$ = nullptr;

	} // net
} // java