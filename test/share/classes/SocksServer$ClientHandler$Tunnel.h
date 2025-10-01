#ifndef _SocksServer$ClientHandler$Tunnel_h_
#define _SocksServer$ClientHandler$Tunnel_h_
//$ class SocksServer$ClientHandler$Tunnel
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

class SocksServer$ClientHandler;
namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}

class $export SocksServer$ClientHandler$Tunnel : public ::java::lang::Thread {
	$class(SocksServer$ClientHandler$Tunnel, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	SocksServer$ClientHandler$Tunnel();
	void init$(::SocksServer$ClientHandler* this$1, ::java::io::InputStream* in, ::java::io::OutputStream* out);
	virtual void run() override;
	::SocksServer$ClientHandler* this$1 = nullptr;
	::java::io::InputStream* tin = nullptr;
	::java::io::OutputStream* tout = nullptr;
};

#endif // _SocksServer$ClientHandler$Tunnel_h_