#include <CustomSocketImplFactory$CustomSocketImpl.h>

#include <CustomSocketImplFactory.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/net/InetAddress.h>
#include <java/net/SocketAddress.h>
#include <java/net/SocketImpl.h>
#include <jcpp.h>

using $CustomSocketImplFactory = ::CustomSocketImplFactory;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $SocketAddress = ::java::net::SocketAddress;
using $SocketImpl = ::java::net::SocketImpl;

$FieldInfo _CustomSocketImplFactory$CustomSocketImpl_FieldInfo_[] = {
	{"this$0", "LCustomSocketImplFactory;", nullptr, $FINAL | $SYNTHETIC, $field(CustomSocketImplFactory$CustomSocketImpl, this$0)},
	{}
};

$MethodInfo _CustomSocketImplFactory$CustomSocketImpl_MethodInfo_[] = {
	{"<init>", "(LCustomSocketImplFactory;)V", nullptr, 0, $method(static_cast<void(CustomSocketImplFactory$CustomSocketImpl::*)($CustomSocketImplFactory*)>(&CustomSocketImplFactory$CustomSocketImpl::init$))},
	{"accept", "(Ljava/net/SocketImpl;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"available", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"bind", "(Ljava/net/InetAddress;I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"connect", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"connect", "(Ljava/net/InetAddress;I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"connect", "(Ljava/net/SocketAddress;I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"create", "(Z)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getOption", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.net.SocketException"},
	{"getOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"listen", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"sendUrgentData", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"setOption", "(ILjava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "java.net.SocketException"},
	{}
};

$InnerClassInfo _CustomSocketImplFactory$CustomSocketImpl_InnerClassesInfo_[] = {
	{"CustomSocketImplFactory$CustomSocketImpl", "CustomSocketImplFactory", "CustomSocketImpl", 0},
	{}
};

$ClassInfo _CustomSocketImplFactory$CustomSocketImpl_ClassInfo_ = {
	$ACC_SUPER,
	"CustomSocketImplFactory$CustomSocketImpl",
	"java.net.SocketImpl",
	nullptr,
	_CustomSocketImplFactory$CustomSocketImpl_FieldInfo_,
	_CustomSocketImplFactory$CustomSocketImpl_MethodInfo_,
	nullptr,
	nullptr,
	_CustomSocketImplFactory$CustomSocketImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"CustomSocketImplFactory"
};

$Object* allocate$CustomSocketImplFactory$CustomSocketImpl($Class* clazz) {
	return $of($alloc(CustomSocketImplFactory$CustomSocketImpl));
}

void CustomSocketImplFactory$CustomSocketImpl::init$($CustomSocketImplFactory* this$0) {
	$set(this, this$0, this$0);
	$SocketImpl::init$();
}

void CustomSocketImplFactory$CustomSocketImpl::create(bool stream) {
}

void CustomSocketImplFactory$CustomSocketImpl::connect($String* host, int32_t port) {
}

void CustomSocketImplFactory$CustomSocketImpl::connect($InetAddress* addr, int32_t port) {
}

void CustomSocketImplFactory$CustomSocketImpl::connect($SocketAddress* addr, int32_t timeout) {
}

void CustomSocketImplFactory$CustomSocketImpl::bind($InetAddress* host, int32_t port) {
}

void CustomSocketImplFactory$CustomSocketImpl::listen(int32_t backlog) {
}

void CustomSocketImplFactory$CustomSocketImpl::accept($SocketImpl* s) {
}

$InputStream* CustomSocketImplFactory$CustomSocketImpl::getInputStream() {
	return nullptr;
}

$OutputStream* CustomSocketImplFactory$CustomSocketImpl::getOutputStream() {
	return nullptr;
}

int32_t CustomSocketImplFactory$CustomSocketImpl::available() {
	return 0;
}

void CustomSocketImplFactory$CustomSocketImpl::close() {
}

void CustomSocketImplFactory$CustomSocketImpl::sendUrgentData(int32_t data) {
}

$Object* CustomSocketImplFactory$CustomSocketImpl::getOption(int32_t i) {
	return $of(nullptr);
}

void CustomSocketImplFactory$CustomSocketImpl::setOption(int32_t i, Object$* o) {
}

CustomSocketImplFactory$CustomSocketImpl::CustomSocketImplFactory$CustomSocketImpl() {
}

$Class* CustomSocketImplFactory$CustomSocketImpl::load$($String* name, bool initialize) {
	$loadClass(CustomSocketImplFactory$CustomSocketImpl, name, initialize, &_CustomSocketImplFactory$CustomSocketImpl_ClassInfo_, allocate$CustomSocketImplFactory$CustomSocketImpl);
	return class$;
}

$Class* CustomSocketImplFactory$CustomSocketImpl::class$ = nullptr;