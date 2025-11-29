#include <ByteServer.h>

#include <java/io/OutputStream.h>
#include <java/lang/IllegalStateException.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <jcpp.h>

using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;

$FieldInfo _ByteServer_FieldInfo_[] = {
	{"ss", "Ljava/net/ServerSocket;", nullptr, $PRIVATE | $FINAL, $field(ByteServer, ss)},
	{"s", "Ljava/net/Socket;", nullptr, $PRIVATE, $field(ByteServer, s)},
	{}
};

$MethodInfo _ByteServer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ByteServer::*)()>(&ByteServer::init$)), "java.io.IOException"},
	{"acceptConnection", "()V", nullptr, 0, nullptr, "java.io.IOException"},
	{"address", "()Ljava/net/SocketAddress;", nullptr, 0},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"closeConnection", "()V", nullptr, 0, nullptr, "java.io.IOException"},
	{"write", "(I)V", nullptr, 0, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _ByteServer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ByteServer",
	"java.lang.Object",
	"java.io.Closeable",
	_ByteServer_FieldInfo_,
	_ByteServer_MethodInfo_
};

$Object* allocate$ByteServer($Class* clazz) {
	return $of($alloc(ByteServer));
}

void ByteServer::init$() {
	$set(this, ss, $new($ServerSocket, 0));
}

$SocketAddress* ByteServer::address() {
	$var($InetAddress, var$0, $nc(this->ss)->getInetAddress());
	return $new($InetSocketAddress, var$0, $nc(this->ss)->getLocalPort());
}

void ByteServer::acceptConnection() {
	if (this->s != nullptr) {
		$throwNew($IllegalStateException, "already connected"_s);
	}
	$set(this, s, $nc(this->ss)->accept());
}

void ByteServer::closeConnection() {
	$var($Socket, s, this->s);
	if (s != nullptr) {
		$set(this, s, nullptr);
		s->close();
	}
}

void ByteServer::write(int32_t count) {
	$useLocalCurrentObjectStackCache();
	if (this->s == nullptr) {
		$throwNew($IllegalStateException, "no connection"_s);
	}
	$nc($($nc(this->s)->getOutputStream()))->write($$new($bytes, count));
}

void ByteServer::close() {
	if (this->s != nullptr) {
		$nc(this->s)->close();
	}
	$nc(this->ss)->close();
}

ByteServer::ByteServer() {
}

$Class* ByteServer::load$($String* name, bool initialize) {
	$loadClass(ByteServer, name, initialize, &_ByteServer_ClassInfo_, allocate$ByteServer);
	return class$;
}

$Class* ByteServer::class$ = nullptr;