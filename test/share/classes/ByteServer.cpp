#include <ByteServer.h>
#include <java/io/OutputStream.h>
#include <java/lang/IllegalStateException.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;

void ByteServer::init$() {
	$set(this, ss, $new($ServerSocket, 0));
}

$SocketAddress* ByteServer::address() {
	$var($InetAddress, var$0, $nc(this->ss)->getInetAddress());
	return $new($InetSocketAddress, var$0, this->ss->getLocalPort());
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
	$useLocalObjectStack();
	if (this->s == nullptr) {
		$throwNew($IllegalStateException, "no connection"_s);
	}
	$$nc($nc(this->s)->getOutputStream())->write($$new($bytes, count));
}

void ByteServer::close() {
	if (this->s != nullptr) {
		this->s->close();
	}
	$nc(this->ss)->close();
}

ByteServer::ByteServer() {
}

$Class* ByteServer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ss", "Ljava/net/ServerSocket;", nullptr, $PRIVATE | $FINAL, $field(ByteServer, ss)},
		{"s", "Ljava/net/Socket;", nullptr, $PRIVATE, $field(ByteServer, s)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ByteServer, init$, void), "java.io.IOException"},
		{"acceptConnection", "()V", nullptr, 0, $virtualMethod(ByteServer, acceptConnection, void), "java.io.IOException"},
		{"address", "()Ljava/net/SocketAddress;", nullptr, 0, $virtualMethod(ByteServer, address, $SocketAddress*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(ByteServer, close, void), "java.io.IOException"},
		{"closeConnection", "()V", nullptr, 0, $virtualMethod(ByteServer, closeConnection, void), "java.io.IOException"},
		{"write", "(I)V", nullptr, 0, $virtualMethod(ByteServer, write, void, int32_t), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ByteServer",
		"java.lang.Object",
		"java.io.Closeable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ByteServer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ByteServer);
	});
	return class$;
}

$Class* ByteServer::class$ = nullptr;