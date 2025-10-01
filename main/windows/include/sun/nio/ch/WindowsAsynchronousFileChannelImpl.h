#ifndef _sun_nio_ch_WindowsAsynchronousFileChannelImpl_h_
#define _sun_nio_ch_WindowsAsynchronousFileChannelImpl_h_
//$ class sun.nio.ch.WindowsAsynchronousFileChannelImpl
//$ extends sun.nio.ch.AsynchronousFileChannelImpl
//$ implements sun.nio.ch.Iocp$OverlappedChannel,sun.nio.ch.Groupable

#include <sun/nio/ch/AsynchronousFileChannelImpl.h>
#include <sun/nio/ch/Groupable.h>
#include <sun/nio/ch/Iocp$OverlappedChannel.h>

#pragma push_macro("ERROR_HANDLE_EOF")
#undef ERROR_HANDLE_EOF
#pragma push_macro("LOCKED")
#undef LOCKED
#pragma push_macro("NO_LOCK")
#undef NO_LOCK

namespace java {
	namespace io {
		class FileDescriptor;
		class IOException;
	}
}
namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class AsynchronousFileChannel;
			class CompletionHandler;
			class FileLock;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Future;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaIOFileDescriptorAccess;
		}
	}
}
namespace sun {
	namespace nio {
		namespace ch {
			class AsynchronousChannelGroupImpl;
			class FileDispatcher;
			class FileLockImpl;
			class Iocp;
			class PendingFuture;
			class PendingIoCache;
			class ThreadPool;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class $import WindowsAsynchronousFileChannelImpl : public ::sun::nio::ch::AsynchronousFileChannelImpl, public ::sun::nio::ch::Iocp$OverlappedChannel, public ::sun::nio::ch::Groupable {
	$class(WindowsAsynchronousFileChannelImpl, 0, ::sun::nio::ch::AsynchronousFileChannelImpl, ::sun::nio::ch::Iocp$OverlappedChannel, ::sun::nio::ch::Groupable)
public:
	WindowsAsynchronousFileChannelImpl();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::io::FileDescriptor* fdObj, bool reading, bool writing, ::sun::nio::ch::Iocp* iocp, bool isDefaultIocp);
	virtual void close() override;
	virtual void force(bool metaData) override;
	virtual ::sun::nio::ch::PendingFuture* getByOverlapped(int64_t overlapped) override;
	virtual ::sun::nio::ch::AsynchronousChannelGroupImpl* group() override;
	virtual ::java::util::concurrent::Future* implLock(int64_t position, int64_t size, bool shared, Object$* attachment, ::java::nio::channels::CompletionHandler* handler) override;
	virtual ::java::util::concurrent::Future* implRead(::java::nio::ByteBuffer* dst, int64_t position, Object$* attachment, ::java::nio::channels::CompletionHandler* handler) override;
	virtual void implRelease(::sun::nio::ch::FileLockImpl* fli) override;
	virtual ::java::util::concurrent::Future* implWrite(::java::nio::ByteBuffer* src, int64_t position, Object$* attachment, ::java::nio::channels::CompletionHandler* handler) override;
	using ::sun::nio::ch::AsynchronousFileChannelImpl::lock;
	static int32_t lockFile(int64_t handle, int64_t position, int64_t size, bool shared, int64_t overlapped);
	static ::java::nio::channels::AsynchronousFileChannel* open(::java::io::FileDescriptor* fdo, bool reading, bool writing, ::sun::nio::ch::ThreadPool* pool);
	static int32_t readFile(int64_t handle, int64_t address, int32_t len, int64_t offset, int64_t overlapped);
	virtual int64_t size() override;
	static ::java::io::IOException* toIOException($Throwable* x);
	virtual $String* toString() override;
	virtual ::java::nio::channels::AsynchronousFileChannel* truncate(int64_t size) override;
	using ::sun::nio::ch::AsynchronousFileChannelImpl::tryLock;
	virtual ::java::nio::channels::FileLock* tryLock(int64_t position, int64_t size, bool shared) override;
	static int32_t writeFile(int64_t handle, int64_t address, int32_t len, int64_t offset, int64_t overlapped);
	static bool $assertionsDisabled;
	static ::jdk::internal::access::JavaIOFileDescriptorAccess* fdAccess;
	static const int32_t ERROR_HANDLE_EOF = 38;
	static ::sun::nio::ch::FileDispatcher* nd;
	int64_t handle = 0;
	int32_t completionKey = 0;
	::sun::nio::ch::Iocp* iocp = nullptr;
	bool isDefaultIocp = false;
	::sun::nio::ch::PendingIoCache* ioCache = nullptr;
	static const int32_t NO_LOCK = (-1);
	static const int32_t LOCKED = 0;
};

		} // ch
	} // nio
} // sun

#pragma pop_macro("ERROR_HANDLE_EOF")
#pragma pop_macro("LOCKED")
#pragma pop_macro("NO_LOCK")

#endif // _sun_nio_ch_WindowsAsynchronousFileChannelImpl_h_