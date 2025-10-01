#ifndef _java_net_Socket$SocketOutputStream_h_
#define _java_net_Socket$SocketOutputStream_h_
//$ class java.net.Socket$SocketOutputStream
//$ extends java.io.OutputStream

#include <java/io/OutputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace net {
		class Socket;
	}
}

namespace java {
	namespace net {

class Socket$SocketOutputStream : public ::java::io::OutputStream {
	$class(Socket$SocketOutputStream, $NO_CLASS_INIT, ::java::io::OutputStream)
public:
	Socket$SocketOutputStream();
	void init$(::java::net::Socket* parent, ::java::io::OutputStream* out);
	virtual void close() override;
	using ::java::io::OutputStream::write;
	virtual void write(int32_t b) override;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	::java::net::Socket* parent = nullptr;
	::java::io::OutputStream* out = nullptr;
};

	} // net
} // java

#endif // _java_net_Socket$SocketOutputStream_h_