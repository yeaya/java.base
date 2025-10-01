#ifndef _sun_nio_ch_WindowsAsynchronousFileChannelImpl$ReadTask_h_
#define _sun_nio_ch_WindowsAsynchronousFileChannelImpl$ReadTask_h_
//$ class sun.nio.ch.WindowsAsynchronousFileChannelImpl$ReadTask
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
	namespace nio {
		class ByteBuffer;
	}
}
namespace sun {
	namespace nio {
		namespace ch {
			class PendingFuture;
			class WindowsAsynchronousFileChannelImpl;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class WindowsAsynchronousFileChannelImpl$ReadTask : public ::java::lang::Runnable, public ::sun::nio::ch::Iocp$ResultHandler {
	$class(WindowsAsynchronousFileChannelImpl$ReadTask, $NO_CLASS_INIT, ::java::lang::Runnable, ::sun::nio::ch::Iocp$ResultHandler)
public:
	WindowsAsynchronousFileChannelImpl$ReadTask();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::nio::ch::WindowsAsynchronousFileChannelImpl* this$0, ::java::nio::ByteBuffer* dst, int32_t pos, int32_t rem, int64_t position, ::sun::nio::ch::PendingFuture* result);
	virtual void completed(int32_t bytesTransferred, bool canInvokeDirect) override;
	virtual void failed(int32_t error, ::java::io::IOException* x) override;
	virtual void releaseBufferIfSubstituted();
	virtual void run() override;
	virtual $String* toString() override;
	virtual void updatePosition(int32_t bytesTransferred);
	::sun::nio::ch::WindowsAsynchronousFileChannelImpl* this$0 = nullptr;
	::java::nio::ByteBuffer* dst = nullptr;
	int32_t pos = 0;
	int32_t rem = 0;
	int64_t position = 0;
	::sun::nio::ch::PendingFuture* result = nullptr;
	$volatile(::java::nio::ByteBuffer*) buf = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_WindowsAsynchronousFileChannelImpl$ReadTask_h_