#ifndef _java_net_DelegatingSocketImpl_h_
#define _java_net_DelegatingSocketImpl_h_
//$ class java.net.DelegatingSocketImpl
//$ extends java.net.SocketImpl

#include <java/net/SocketImpl.h>

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

class DelegatingSocketImpl : public ::java::net::SocketImpl {
	$class(DelegatingSocketImpl, 0, ::java::net::SocketImpl)
public:
	DelegatingSocketImpl();
	void init$(::java::net::SocketImpl* delegate);
	virtual void accept(::java::net::SocketImpl* s) override;
	virtual int32_t available() override;
	virtual void bind(::java::net::InetAddress* host, int32_t port) override;
	virtual void close() override;
	virtual void connect($String* host, int32_t port) override;
	virtual void connect(::java::net::InetAddress* address, int32_t port) override;
	virtual void connect(::java::net::SocketAddress* address, int32_t timeout) override;
	virtual void create(bool stream) override;
	::java::net::SocketImpl* delegate();
	virtual ::java::io::FileDescriptor* getFileDescriptor() override;
	virtual ::java::net::InetAddress* getInetAddress() override;
	virtual ::java::io::InputStream* getInputStream() override;
	virtual int32_t getLocalPort() override;
	virtual $Object* getOption(::java::net::SocketOption* opt) override;
	virtual $Object* getOption(int32_t optID) override;
	virtual ::java::io::OutputStream* getOutputStream() override;
	virtual int32_t getPort() override;
	virtual void listen(int32_t backlog) override;
	virtual void sendUrgentData(int32_t data) override;
	virtual void setOption(::java::net::SocketOption* opt, Object$* value) override;
	virtual void setOption(int32_t optID, Object$* value) override;
	virtual void shutdownInput() override;
	virtual void shutdownOutput() override;
	virtual ::java::util::Set* supportedOptions() override;
	virtual bool supportsUrgentData() override;
	static bool $assertionsDisabled;
	::java::net::SocketImpl* delegate$ = nullptr;
};

	} // net
} // java

#endif // _java_net_DelegatingSocketImpl_h_