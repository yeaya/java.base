#ifndef _sun_net_NetworkClient_h_
#define _sun_net_NetworkClient_h_
//$ class sun.net.NetworkClient
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DEFAULT_CONNECT_TIMEOUT")
#undef DEFAULT_CONNECT_TIMEOUT
#pragma push_macro("DEFAULT_READ_TIMEOUT")
#undef DEFAULT_READ_TIMEOUT

namespace java {
	namespace io {
		class InputStream;
		class PrintStream;
	}
}
namespace java {
	namespace net {
		class InetAddress;
		class Proxy;
		class Socket;
	}
}

namespace sun {
	namespace net {

class $import NetworkClient : public ::java::lang::Object {
	$class(NetworkClient, 0, ::java::lang::Object)
public:
	NetworkClient();
	void init$($String* host, int32_t port);
	void init$();
	virtual void closeServer();
	virtual ::java::net::Socket* createSocket();
	virtual ::java::net::Socket* doConnect($String* server, int32_t port);
	virtual int32_t getConnectTimeout();
	virtual ::java::net::InetAddress* getLocalAddress();
	virtual int32_t getReadTimeout();
	static bool isASCIISuperset($String* encoding);
	virtual void openServer($String* server, int32_t port);
	virtual bool serverIsOpen();
	virtual void setConnectTimeout(int32_t timeout);
	virtual void setReadTimeout(int32_t timeout);
	static const int32_t DEFAULT_READ_TIMEOUT = (-1);
	static const int32_t DEFAULT_CONNECT_TIMEOUT = (-1);
	::java::net::Proxy* proxy = nullptr;
	::java::net::Socket* serverSocket = nullptr;
	::java::io::PrintStream* serverOutput = nullptr;
	::java::io::InputStream* serverInput = nullptr;
	static int32_t defaultSoTimeout;
	static int32_t defaultConnectTimeout;
	int32_t readTimeout = 0;
	int32_t connectTimeout = 0;
	static $String* encoding;
};

	} // net
} // sun

#pragma pop_macro("DEFAULT_CONNECT_TIMEOUT")
#pragma pop_macro("DEFAULT_READ_TIMEOUT")

#endif // _sun_net_NetworkClient_h_