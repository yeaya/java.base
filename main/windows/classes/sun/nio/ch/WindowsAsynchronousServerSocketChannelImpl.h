#ifndef _sun_nio_ch_WindowsAsynchronousServerSocketChannelImpl_h_
#define _sun_nio_ch_WindowsAsynchronousServerSocketChannelImpl_h_
//$ class sun.nio.ch.WindowsAsynchronousServerSocketChannelImpl
//$ extends sun.nio.ch.AsynchronousServerSocketChannelImpl
//$ implements sun.nio.ch.Iocp$OverlappedChannel

#include <sun/nio/ch/AsynchronousServerSocketChannelImpl.h>
#include <sun/nio/ch/Iocp$OverlappedChannel.h>

#pragma push_macro("DATA_BUFFER_SIZE")
#undef DATA_BUFFER_SIZE

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
			class Future;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicBoolean;
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
			class AsynchronousChannelGroupImpl;
			class Iocp;
			class PendingFuture;
			class PendingIoCache;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class WindowsAsynchronousServerSocketChannelImpl : public ::sun::nio::ch::AsynchronousServerSocketChannelImpl, public ::sun::nio::ch::Iocp$OverlappedChannel {
	$class(WindowsAsynchronousServerSocketChannelImpl, 0, ::sun::nio::ch::AsynchronousServerSocketChannelImpl, ::sun::nio::ch::Iocp$OverlappedChannel)
public:
	WindowsAsynchronousServerSocketChannelImpl();
	using ::sun::nio::ch::AsynchronousServerSocketChannelImpl::bind;
	virtual $Object* clone() override;
	virtual void close() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::nio::ch::Iocp* iocp);
	static int32_t accept0(int64_t listenSocket, int64_t acceptSocket, int64_t overlapped, int64_t dataBuffer);
	static void closesocket0(int64_t socket);
	virtual ::sun::nio::ch::PendingFuture* getByOverlapped(int64_t overlapped) override;
	virtual ::sun::nio::ch::AsynchronousChannelGroupImpl* group() override;
	virtual ::java::util::concurrent::Future* implAccept(Object$* attachment, ::java::nio::channels::CompletionHandler* handler) override;
	virtual void implClose() override;
	static void initIDs();
	virtual $String* toString() override;
	static void updateAcceptContext(int64_t listenSocket, int64_t acceptSocket);
	static ::jdk::internal::misc::Unsafe* unsafe;
	static const int32_t DATA_BUFFER_SIZE = 88;
	int64_t handle = 0;
	int32_t completionKey = 0;
	::sun::nio::ch::Iocp* iocp = nullptr;
	::sun::nio::ch::PendingIoCache* ioCache = nullptr;
	int64_t dataBuffer = 0;
	::java::util::concurrent::atomic::AtomicBoolean* accepting = nullptr;
};

		} // ch
	} // nio
} // sun

#pragma pop_macro("DATA_BUFFER_SIZE")

#endif // _sun_nio_ch_WindowsAsynchronousServerSocketChannelImpl_h_