#ifndef _sun_nio_ch_WindowsAsynchronousSocketChannelImpl$ReadTask_h_
#define _sun_nio_ch_WindowsAsynchronousSocketChannelImpl$ReadTask_h_
//$ class sun.nio.ch.WindowsAsynchronousSocketChannelImpl$ReadTask
//$ extends java.lang.Runnable
//$ implements sun.nio.ch.Iocp$ResultHandler

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>
#include <sun/nio/ch/Iocp$ResultHandler.h>

namespace java {
	namespace io {
		class IOException;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
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

class WindowsAsynchronousSocketChannelImpl$ReadTask : public ::java::lang::Runnable, public ::sun::nio::ch::Iocp$ResultHandler {
	$class(WindowsAsynchronousSocketChannelImpl$ReadTask, 0, ::java::lang::Runnable, ::sun::nio::ch::Iocp$ResultHandler)
public:
	WindowsAsynchronousSocketChannelImpl$ReadTask();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::nio::ch::WindowsAsynchronousSocketChannelImpl* this$0, $Array<::java::nio::ByteBuffer>* bufs, bool scatteringRead, ::sun::nio::ch::PendingFuture* result);
	virtual void completed(int32_t bytesTransferred, bool canInvokeDirect) override;
	virtual void failed(int32_t error, ::java::io::IOException* x) override;
	virtual void prepareBuffers();
	virtual void releaseBuffers();
	virtual void run() override;
	virtual void timeout();
	virtual $String* toString() override;
	virtual void updateBuffers(int32_t bytesRead);
	::sun::nio::ch::WindowsAsynchronousSocketChannelImpl* this$0 = nullptr;
	static bool $assertionsDisabled;
	$Array<::java::nio::ByteBuffer>* bufs = nullptr;
	int32_t numBufs = 0;
	bool scatteringRead = false;
	::sun::nio::ch::PendingFuture* result = nullptr;
	$Array<::java::nio::ByteBuffer>* shadow = nullptr;
	::java::lang::Runnable* scopeHandleReleasers = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_WindowsAsynchronousSocketChannelImpl$ReadTask_h_