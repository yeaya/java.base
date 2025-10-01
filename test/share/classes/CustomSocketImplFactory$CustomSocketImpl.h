#ifndef _CustomSocketImplFactory$CustomSocketImpl_h_
#define _CustomSocketImplFactory$CustomSocketImpl_h_
//$ class CustomSocketImplFactory$CustomSocketImpl
//$ extends java.net.SocketImpl

#include <java/net/SocketImpl.h>

class CustomSocketImplFactory;
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
	}
}

class $export CustomSocketImplFactory$CustomSocketImpl : public ::java::net::SocketImpl {
	$class(CustomSocketImplFactory$CustomSocketImpl, $NO_CLASS_INIT, ::java::net::SocketImpl)
public:
	CustomSocketImplFactory$CustomSocketImpl();
	using ::java::net::SocketImpl::getOption;
	void init$(::CustomSocketImplFactory* this$0);
	virtual void accept(::java::net::SocketImpl* s) override;
	virtual int32_t available() override;
	virtual void bind(::java::net::InetAddress* host, int32_t port) override;
	virtual void close() override;
	virtual void connect($String* host, int32_t port) override;
	virtual void connect(::java::net::InetAddress* addr, int32_t port) override;
	virtual void connect(::java::net::SocketAddress* addr, int32_t timeout) override;
	virtual void create(bool stream) override;
	virtual ::java::io::InputStream* getInputStream() override;
	virtual $Object* getOption(int32_t i) override;
	virtual ::java::io::OutputStream* getOutputStream() override;
	virtual void listen(int32_t backlog) override;
	virtual void sendUrgentData(int32_t data) override;
	using ::java::net::SocketImpl::setOption;
	virtual void setOption(int32_t i, Object$* o) override;
	::CustomSocketImplFactory* this$0 = nullptr;
};

#endif // _CustomSocketImplFactory$CustomSocketImpl_h_