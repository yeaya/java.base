#ifndef _sun_nio_ch_WindowsAsynchronousFileChannelImpl$LockTask_h_
#define _sun_nio_ch_WindowsAsynchronousFileChannelImpl$LockTask_h_
//$ class sun.nio.ch.WindowsAsynchronousFileChannelImpl$LockTask
//$ extends java.lang.Runnable
//$ implements sun.nio.ch.Iocp$ResultHandler

#include <java/lang/Runnable.h>
#include <sun/nio/ch/Iocp$ResultHandler.h>

namespace java {
	namespace io {
		class IOException;
	}
}
namespace sun {
	namespace nio {
		namespace ch {
			class FileLockImpl;
			class PendingFuture;
			class WindowsAsynchronousFileChannelImpl;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class WindowsAsynchronousFileChannelImpl$LockTask : public ::java::lang::Runnable, public ::sun::nio::ch::Iocp$ResultHandler {
	$class(WindowsAsynchronousFileChannelImpl$LockTask, $NO_CLASS_INIT, ::java::lang::Runnable, ::sun::nio::ch::Iocp$ResultHandler)
public:
	WindowsAsynchronousFileChannelImpl$LockTask();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::nio::ch::WindowsAsynchronousFileChannelImpl* this$0, int64_t position, ::sun::nio::ch::FileLockImpl* fli, ::sun::nio::ch::PendingFuture* result);
	virtual void completed(int32_t bytesTransferred, bool canInvokeDirect) override;
	virtual void failed(int32_t error, ::java::io::IOException* x) override;
	virtual void run() override;
	virtual $String* toString() override;
	::sun::nio::ch::WindowsAsynchronousFileChannelImpl* this$0 = nullptr;
	int64_t position = 0;
	::sun::nio::ch::FileLockImpl* fli = nullptr;
	::sun::nio::ch::PendingFuture* result = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_WindowsAsynchronousFileChannelImpl$LockTask_h_