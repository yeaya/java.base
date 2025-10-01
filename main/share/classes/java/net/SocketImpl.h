#ifndef _java_net_SocketImpl_h_
#define _java_net_SocketImpl_h_
//$ class java.net.SocketImpl
//$ extends java.net.SocketOptions

#include <java/net/SocketOptions.h>

#pragma push_macro("USE_PLAINSOCKETIMPL")
#undef USE_PLAINSOCKETIMPL

namespace java {
	namespace io {
		class FileDescriptor;
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace net {
		class InetAddress;
		class SocketAddress;
		class SocketOption;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace java {
	namespace net {

class $export SocketImpl : public ::java::net::SocketOptions {
	$class(SocketImpl, 0, ::java::net::SocketOptions)
public:
	SocketImpl();
	using ::java::net::SocketOptions::getOption;
	void init$();
	virtual void accept(::java::net::SocketImpl* s) {}
	virtual int32_t available() {return 0;}
	virtual void bind(::java::net::InetAddress* host, int32_t port) {}
	virtual void close() {}
	virtual void closeQuietly();
	virtual void connect($String* host, int32_t port) {}
	virtual void connect(::java::net::InetAddress* address, int32_t port) {}
	virtual void connect(::java::net::SocketAddress* address, int32_t timeout) {}
	virtual void copyOptionsTo(::java::net::SocketImpl* target);
	virtual void create(bool stream) {}
	static ::java::net::SocketImpl* createPlatformSocketImpl(bool server);
	virtual ::java::io::FileDescriptor* getFileDescriptor();
	virtual ::java::net::InetAddress* getInetAddress();
	virtual ::java::io::InputStream* getInputStream() {return nullptr;}
	virtual int32_t getLocalPort();
	virtual $Object* getOption(::java::net::SocketOption* name);
	virtual ::java::io::OutputStream* getOutputStream() {return nullptr;}
	virtual int32_t getPort();
	static $String* lambda$usePlainSocketImpl$0();
	virtual void listen(int32_t backlog) {}
	virtual void reset();
	virtual void sendUrgentData(int32_t data) {}
	using ::java::net::SocketOptions::setOption;
	virtual void setOption(::java::net::SocketOption* name, Object$* value);
	virtual void setPerformancePreferences(int32_t connectionTime, int32_t latency, int32_t bandwidth);
	virtual void shutdownInput();
	virtual void shutdownOutput();
	virtual ::java::util::Set* supportedOptions();
	virtual bool supportsUrgentData();
	virtual $String* toString() override;
	static bool usePlainSocketImpl();
	static bool USE_PLAINSOCKETIMPL;
	::java::io::FileDescriptor* fd = nullptr;
	::java::net::InetAddress* address = nullptr;
	int32_t port = 0;
	int32_t localport = 0;
};

	} // net
} // java

#pragma pop_macro("USE_PLAINSOCKETIMPL")

#endif // _java_net_SocketImpl_h_