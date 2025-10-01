#ifndef _SocksServer$ClientHandler_h_
#define _SocksServer$ClientHandler_h_
//$ class SocksServer$ClientHandler
//$ extends java.lang.Thread

#include <java/lang/Array.h>
#include <java/lang/Thread.h>

class SocksServer;
namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace net {
		class InetSocketAddress;
		class Socket;
	}
}

class $export SocksServer$ClientHandler : public ::java::lang::Thread {
	$class(SocksServer$ClientHandler, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	SocksServer$ClientHandler();
	void init$(::SocksServer* this$0, ::java::net::Socket* s);
	void doBind(::java::net::InetSocketAddress* addr);
	void doConnect(::java::net::InetSocketAddress* addr);
	void getRequest();
	void getRequestV4();
	void negociate();
	void purge();
	void readBuf(::java::io::InputStream* is, $bytes* buf);
	virtual void run() override;
	void sendError(int32_t code);
	bool userPassAuth();
	::SocksServer* this$0 = nullptr;
	::java::io::InputStream* in = nullptr;
	::java::io::OutputStream* out = nullptr;
	::java::net::Socket* client = nullptr;
	::java::net::Socket* dest = nullptr;
};

#endif // _SocksServer$ClientHandler_h_