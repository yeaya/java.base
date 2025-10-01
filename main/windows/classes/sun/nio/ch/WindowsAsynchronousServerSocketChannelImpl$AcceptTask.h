#ifndef _sun_nio_ch_WindowsAsynchronousServerSocketChannelImpl$AcceptTask_h_
#define _sun_nio_ch_WindowsAsynchronousServerSocketChannelImpl$AcceptTask_h_
//$ class sun.nio.ch.WindowsAsynchronousServerSocketChannelImpl$AcceptTask
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
	namespace security {
		class AccessControlContext;
	}
}
namespace sun {
	namespace nio {
		namespace ch {
			class PendingFuture;
			class WindowsAsynchronousServerSocketChannelImpl;
			class WindowsAsynchronousSocketChannelImpl;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class WindowsAsynchronousServerSocketChannelImpl$AcceptTask : public ::java::lang::Runnable, public ::sun::nio::ch::Iocp$ResultHandler {
	$class(WindowsAsynchronousServerSocketChannelImpl$AcceptTask, $NO_CLASS_INIT, ::java::lang::Runnable, ::sun::nio::ch::Iocp$ResultHandler)
public:
	WindowsAsynchronousServerSocketChannelImpl$AcceptTask();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::nio::ch::WindowsAsynchronousServerSocketChannelImpl* this$0, ::sun::nio::ch::WindowsAsynchronousSocketChannelImpl* channel, ::java::security::AccessControlContext* acc, ::sun::nio::ch::PendingFuture* result);
	virtual void closeChildChannel();
	virtual void completed(int32_t bytesTransferred, bool canInvokeDirect) override;
	virtual void enableAccept();
	virtual void failed(int32_t error, ::java::io::IOException* x) override;
	virtual void finishAccept();
	virtual void run() override;
	virtual $String* toString() override;
	::sun::nio::ch::WindowsAsynchronousServerSocketChannelImpl* this$0 = nullptr;
	::sun::nio::ch::WindowsAsynchronousSocketChannelImpl* channel = nullptr;
	::java::security::AccessControlContext* acc = nullptr;
	::sun::nio::ch::PendingFuture* result = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_WindowsAsynchronousServerSocketChannelImpl$AcceptTask_h_