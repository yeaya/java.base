#ifndef _java_net_Socket$SocketInputStream_h_
#define _java_net_Socket$SocketInputStream_h_
//$ class java.net.Socket$SocketInputStream
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace net {
		class Socket;
	}
}

namespace java {
	namespace net {

class Socket$SocketInputStream : public ::java::io::InputStream {
	$class(Socket$SocketInputStream, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	Socket$SocketInputStream();
	void init$(::java::net::Socket* parent, ::java::io::InputStream* in);
	virtual int32_t available() override;
	virtual void close() override;
	using ::java::io::InputStream::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	::java::net::Socket* parent = nullptr;
	::java::io::InputStream* in = nullptr;
};

	} // net
} // java

#endif // _java_net_Socket$SocketInputStream_h_