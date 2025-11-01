#ifndef _sun_nio_ch_WindowsAsynchronousSocketChannelImpl$ConnectTask_h_
#define _sun_nio_ch_WindowsAsynchronousSocketChannelImpl$ConnectTask_h_
//$ class sun.nio.ch.WindowsAsynchronousSocketChannelImpl$ConnectTask
//$ extends java.lang.Runnable
//$ implements sun.nio.ch.Iocp$ResultHandler

#include <java/lang/Runnable.h>
#include <sun/nio/ch/Iocp$ResultHandler.h>

namespace java {
	namespace io {
		class IOException;
	}
}
namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace java {
	namespace net {
		class InetSocketAddress;
	}
}
namespace sun {
	namespace nio {
		namespace ch {
			class PendingFuture;
			class WindowsAsynchronousSocketChannelImpl;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class WindowsAsynchronousSocketChannelImpl$ConnectTask : public ::java::lang::Runnable, public ::sun::nio::ch::Iocp$ResultHandler {
	$class(WindowsAsynchronousSocketChannelImpl$ConnectTask, $NO_CLASS_INIT, ::java::lang::Runnable, ::sun::nio::ch::Iocp$ResultHandler)
public:
	WindowsAsynchronousSocketChannelImpl$ConnectTask();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::nio::ch::WindowsAsynchronousSocketChannelImpl* this$0, ::java::net::InetSocketAddress* remote, ::sun::nio::ch::PendingFuture* result);
	void afterConnect();
	void closeChannel();
	virtual void completed(int32_t bytesTransferred, bool canInvokeDirect) override;
	virtual void failed(int32_t error, ::java::io::IOException* x) override;
	virtual void run() override;
	::java::io::IOException* toIOException($Throwable* x);
	virtual $String* toString() override;
	::sun::nio::ch::WindowsAsynchronousSocketChannelImpl* this$0 = nullptr;
	::java::net::InetSocketAddress* remote = nullptr;
	::sun::nio::ch::PendingFuture* result = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_WindowsAsynchronousSocketChannelImpl$ConnectTask_h_