#ifndef _sun_nio_ch_DummySocketImpl_h_
#define _sun_nio_ch_DummySocketImpl_h_
//$ class sun.nio.ch.DummySocketImpl
//$ extends java.net.SocketImpl

#include <java/net/SocketImpl.h>

namespace java {
	namespace io {
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

namespace sun {
	namespace nio {
		namespace ch {

class DummySocketImpl : public ::java::net::SocketImpl {
	$class(DummySocketImpl, $NO_CLASS_INIT, ::java::net::SocketImpl)
public:
	DummySocketImpl();
	void init$();
	virtual void accept(::java::net::SocketImpl* si) override;
	virtual int32_t available() override;
	virtual void bind(::java::net::InetAddress* host, int32_t port) override;
	virtual void close() override;
	virtual void connect(::java::net::SocketAddress* remote, int32_t millis) override;
	virtual void connect($String* host, int32_t port) override;
	virtual void connect(::java::net::InetAddress* address, int32_t port) override;
	static ::java::net::SocketImpl* create();
	virtual void create(bool stream) override;
	virtual ::java::io::InputStream* getInputStream() override;
	virtual $Object* getOption(::java::net::SocketOption* opt) override;
	virtual $Object* getOption(int32_t opt) override;
	virtual ::java::io::OutputStream* getOutputStream() override;
	virtual void listen(int32_t backlog) override;
	virtual void sendUrgentData(int32_t data) override;
	virtual void setOption(::java::net::SocketOption* opt, Object$* value) override;
	virtual void setOption(int32_t opt, Object$* value) override;
	static $Object* shouldNotGetHere();
	virtual void shutdownInput() override;
	virtual void shutdownOutput() override;
	virtual ::java::util::Set* supportedOptions() override;
	virtual bool supportsUrgentData() override;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_DummySocketImpl_h_