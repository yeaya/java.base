#ifndef _sun_nio_ch_Iocp_h_
#define _sun_nio_ch_Iocp_h_
//$ class sun.nio.ch.Iocp
//$ extends sun.nio.ch.AsynchronousChannelGroupImpl

#include <sun/nio/ch/AsynchronousChannelGroupImpl.h>

#pragma push_macro("INVALID_HANDLE_VALUE")
#undef INVALID_HANDLE_VALUE

namespace java {
	namespace io {
		class FileDescriptor;
		class IOException;
	}
}
namespace java {
	namespace lang {
		class Long;
		class Runnable;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class Channel;
		}
	}
}
namespace java {
	namespace nio {
		namespace channels {
			namespace spi {
				class AsynchronousChannelProvider;
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
		class Set;
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
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}
namespace sun {
	namespace nio {
		namespace ch {
			class Iocp$CompletionStatus;
			class Iocp$OverlappedChannel;
			class ThreadPool;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class Iocp : public ::sun::nio::ch::AsynchronousChannelGroupImpl {
	$class(Iocp, 0, ::sun::nio::ch::AsynchronousChannelGroupImpl)
public:
	Iocp();
	void init$(::java::nio::channels::spi::AsynchronousChannelProvider* provider, ::sun::nio::ch::ThreadPool* pool);
	virtual int32_t associate(::sun::nio::ch::Iocp$OverlappedChannel* ch, int64_t handle);
	virtual $Object* attachForeignChannel(::java::nio::channels::Channel* channel, ::java::io::FileDescriptor* fdObj) override;
	void checkIfStale(int64_t ov);
	static void close0(int64_t handle);
	virtual void closeAllChannels() override;
	static int64_t createIoCompletionPort(int64_t handle, int64_t existingPort, int32_t completionKey, int32_t concurrency);
	virtual void detachForeignChannel(Object$* key) override;
	virtual void disassociate(int32_t key);
	virtual void executeOnHandlerTask(::java::lang::Runnable* task) override;
	static $String* getErrorMessage(int32_t error);
	static void getQueuedCompletionStatus(int64_t completionPort, ::sun::nio::ch::Iocp$CompletionStatus* status);
	virtual void implClose();
	static void initIDs();
	virtual bool isEmpty() override;
	virtual void makeStale(::java::lang::Long* overlapped);
	static void postQueuedCompletionStatus(int64_t completionPort, int32_t completionKey);
	virtual void shutdownHandlerTasks() override;
	virtual ::sun::nio::ch::Iocp* start();
	static ::java::io::IOException* translateErrorToIOException(int32_t error);
	void wakeup();
	static ::jdk::internal::misc::Unsafe* unsafe;
	static const int64_t INVALID_HANDLE_VALUE = (int64_t)-1;
	::java::util::concurrent::locks::ReadWriteLock* keyToChannelLock = nullptr;
	::java::util::Map* keyToChannel = nullptr;
	int32_t nextCompletionKey = 0;
	int64_t port = 0;
	bool closed = false;
	::java::util::Set* staleIoSet = nullptr;
};

		} // ch
	} // nio
} // sun

#pragma pop_macro("INVALID_HANDLE_VALUE")

#endif // _sun_nio_ch_Iocp_h_