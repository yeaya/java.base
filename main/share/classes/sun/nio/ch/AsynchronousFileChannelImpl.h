#ifndef _sun_nio_ch_AsynchronousFileChannelImpl_h_
#define _sun_nio_ch_AsynchronousFileChannelImpl_h_
//$ class sun.nio.ch.AsynchronousFileChannelImpl
//$ extends java.nio.channels.AsynchronousFileChannel

#include <java/nio/channels/AsynchronousFileChannel.h>

namespace java {
	namespace io {
		class FileDescriptor;
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
			class CompletionHandler;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ExecutorService;
			class Future;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class ReadWriteLock;
			}
		}
	}
}
namespace sun {
	namespace nio {
		namespace ch {
			class FileLockImpl;
			class FileLockTable;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class $export AsynchronousFileChannelImpl : public ::java::nio::channels::AsynchronousFileChannel {
	$class(AsynchronousFileChannelImpl, $NO_CLASS_INIT, ::java::nio::channels::AsynchronousFileChannel)
public:
	AsynchronousFileChannelImpl();
	void init$(::java::io::FileDescriptor* fdObj, bool reading, bool writing, ::java::util::concurrent::ExecutorService* executor);
	::sun::nio::ch::FileLockImpl* addToFileLockTable(int64_t position, int64_t size, bool shared);
	void begin();
	void end();
	void end(bool completed);
	void ensureFileLockTableInitialized();
	::java::util::concurrent::ExecutorService* executor();
	virtual ::java::util::concurrent::Future* implLock(int64_t position, int64_t size, bool shared, Object$* attachment, ::java::nio::channels::CompletionHandler* handler) {return nullptr;}
	virtual ::java::util::concurrent::Future* implRead(::java::nio::ByteBuffer* dst, int64_t position, Object$* attachment, ::java::nio::channels::CompletionHandler* handler) {return nullptr;}
	virtual void implRelease(::sun::nio::ch::FileLockImpl* fli) {}
	virtual ::java::util::concurrent::Future* implWrite(::java::nio::ByteBuffer* src, int64_t position, Object$* attachment, ::java::nio::channels::CompletionHandler* handler) {return nullptr;}
	void invalidateAllLocks();
	virtual bool isOpen() override;
	using ::java::nio::channels::AsynchronousFileChannel::lock;
	virtual ::java::util::concurrent::Future* lock(int64_t position, int64_t size, bool shared) override;
	virtual void lock(int64_t position, int64_t size, bool shared, Object$* attachment, ::java::nio::channels::CompletionHandler* handler) override;
	virtual ::java::util::concurrent::Future* read(::java::nio::ByteBuffer* dst, int64_t position) override;
	virtual void read(::java::nio::ByteBuffer* dst, int64_t position, Object$* attachment, ::java::nio::channels::CompletionHandler* handler) override;
	void release(::sun::nio::ch::FileLockImpl* fli);
	void removeFromFileLockTable(::sun::nio::ch::FileLockImpl* fli);
	virtual ::java::util::concurrent::Future* write(::java::nio::ByteBuffer* src, int64_t position) override;
	virtual void write(::java::nio::ByteBuffer* src, int64_t position, Object$* attachment, ::java::nio::channels::CompletionHandler* handler) override;
	::java::util::concurrent::locks::ReadWriteLock* closeLock = nullptr;
	$volatile(bool) closed = false;
	::java::io::FileDescriptor* fdObj = nullptr;
	bool reading = false;
	bool writing = false;
	::java::util::concurrent::ExecutorService* executor$ = nullptr;
	$volatile(::sun::nio::ch::FileLockTable*) fileLockTable = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_AsynchronousFileChannelImpl_h_