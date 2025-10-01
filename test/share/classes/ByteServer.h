#ifndef _ByteServer_h_
#define _ByteServer_h_
//$ class ByteServer
//$ extends java.io.Closeable

#include <java/io/Closeable.h>

namespace java {
	namespace net {
		class ServerSocket;
		class Socket;
		class SocketAddress;
	}
}

class $export ByteServer : public ::java::io::Closeable {
	$class(ByteServer, $NO_CLASS_INIT, ::java::io::Closeable)
public:
	ByteServer();
	void init$();
	virtual void acceptConnection();
	virtual ::java::net::SocketAddress* address();
	virtual void close() override;
	virtual void closeConnection();
	virtual void write(int32_t count);
	::java::net::ServerSocket* ss = nullptr;
	::java::net::Socket* s = nullptr;
};

#endif // _ByteServer_h_