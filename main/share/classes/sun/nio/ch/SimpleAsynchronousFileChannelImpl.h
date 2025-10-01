#ifndef _sun_nio_ch_SimpleAsynchronousFileChannelImpl_h_
#define _sun_nio_ch_SimpleAsynchronousFileChannelImpl_h_
//$ class sun.nio.ch.SimpleAsynchronousFileChannelImpl
//$ extends sun.nio.ch.AsynchronousFileChannelImpl

#include <sun/nio/ch/AsynchronousFileChannelImpl.h>

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
			class AsynchronousFileChannel;
			class CompletionHandler;
			class FileLock;
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
namespace sun {
	namespace nio {
		namespace ch {
			class FileDispatcher;
			class FileLockImpl;
			class NativeThreadSet;
			class ThreadPool;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class $export SimpleAsynchronousFileChannelImpl : public ::sun::nio::ch::AsynchronousFileChannelImpl {
	$class(SimpleAsynchronousFileChannelImpl, 0, ::sun::nio::ch::AsynchronousFileChannelImpl)
public:
	SimpleAsynchronousFileChannelImpl();
	void init$(::java::io::FileDescriptor* fdObj, bool reading, bool writing, ::java::util::concurrent::ExecutorService* executor);
	virtual void close() override;
	virtual void force(bool metaData) override;
	virtual ::java::util::concurrent::Future* implLock(int64_t position, int64_t size, bool shared, Object$* attachment, ::java::nio::channels::CompletionHandler* handler) override;
	virtual ::java::util::concurrent::Future* implRead(::java::nio::ByteBuffer* dst, int64_t position, Object$* attachment, ::java::nio::channels::CompletionHandler* handler) override;
	virtual void implRelease(::sun::nio::ch::FileLockImpl* fli) override;
	virtual ::java::util::concurrent::Future* implWrite(::java::nio::ByteBuffer* src, int64_t position, Object$* attachment, ::java::nio::channels::CompletionHandler* handler) override;
	using ::sun::nio::ch::AsynchronousFileChannelImpl::lock;
	static ::java::nio::channels::AsynchronousFileChannel* open(::java::io::FileDescriptor* fdo, bool reading, bool writing, ::sun::nio::ch::ThreadPool* pool);
	virtual int64_t size() override;
	virtual ::java::nio::channels::AsynchronousFileChannel* truncate(int64_t size) override;
	using ::sun::nio::ch::AsynchronousFileChannelImpl::tryLock;
	virtual ::java::nio::channels::FileLock* tryLock(int64_t position, int64_t size, bool shared) override;
	static ::sun::nio::ch::FileDispatcher* nd;
	::sun::nio::ch::NativeThreadSet* threads = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_SimpleAsynchronousFileChannelImpl_h_