#ifndef _sun_nio_ch_WindowsAsynchronousSocketChannelImpl_h_
#define _sun_nio_ch_WindowsAsynchronousSocketChannelImpl_h_
//$ class sun.nio.ch.WindowsAsynchronousSocketChannelImpl
//$ extends sun.nio.ch.AsynchronousSocketChannelImpl
//$ implements sun.nio.ch.Iocp$OverlappedChannel

#include <java/lang/Array.h>
#include <sun/nio/ch/AsynchronousSocketChannelImpl.h>
#include <sun/nio/ch/Iocp$OverlappedChannel.h>

#pragma push_macro("OFFSETOF_LEN")
#undef OFFSETOF_LEN
#pragma push_macro("SIZEOF_WSABUFARRAY")
#undef SIZEOF_WSABUFARRAY
#pragma push_macro("MAX_WSABUF")
#undef MAX_WSABUF
#pragma push_macro("SIZEOF_WSABUF")
#undef SIZEOF_WSABUF
#pragma push_macro("OFFSETOF_BUF")
#undef OFFSETOF_BUF

namespace java {
	namespace net {
		class InetAddress;
		class InetSocketAddress;
		class SocketAddress;
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
			class Future;
			class TimeUnit;
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

class WindowsAsynchronousSocketChannelImpl : public ::sun::nio::ch::AsynchronousSocketChannelImpl, public ::sun::nio::ch::Iocp$OverlappedChannel {
	$class(WindowsAsynchronousSocketChannelImpl, 0, ::sun::nio::ch::AsynchronousSocketChannelImpl, ::sun::nio::ch::Iocp$OverlappedChannel)
public:
	WindowsAsynchronousSocketChannelImpl();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void close() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::nio::ch::Iocp* iocp, bool failIfGroupShutdown);
	void init$(::sun::nio::ch::Iocp* iocp);
	static void closesocket0(int64_t socket);
	static int32_t connect0(int64_t socket, bool preferIPv6, ::java::net::InetAddress* remote, int32_t remotePort, int64_t overlapped);
	static int32_t dependsArch(int32_t value32, int32_t value64);
	void doPrivilegedBind(::java::net::SocketAddress* sa);
	virtual ::sun::nio::ch::PendingFuture* getByOverlapped(int64_t overlapped) override;
	virtual ::sun::nio::ch::AsynchronousChannelGroupImpl* group() override;
	virtual int64_t handle();
	virtual void implClose() override;
	virtual ::java::util::concurrent::Future* implConnect(::java::net::SocketAddress* remote, Object$* attachment, ::java::nio::channels::CompletionHandler* handler) override;
	virtual ::java::util::concurrent::Future* implRead(bool isScatteringRead, ::java::nio::ByteBuffer* dst, $Array<::java::nio::ByteBuffer>* dsts, int64_t timeout, ::java::util::concurrent::TimeUnit* unit, Object$* attachment, ::java::nio::channels::CompletionHandler* handler) override;
	virtual ::java::util::concurrent::Future* implWrite(bool gatheringWrite, ::java::nio::ByteBuffer* src, $Array<::java::nio::ByteBuffer>* srcs, int64_t timeout, ::java::util::concurrent::TimeUnit* unit, Object$* attachment, ::java::nio::channels::CompletionHandler* handler) override;
	static void initIDs();
	virtual void onCancel(::sun::nio::ch::PendingFuture* task) override;
	using ::sun::nio::ch::AsynchronousSocketChannelImpl::read;
	static int32_t read0(int64_t socket, int32_t count, int64_t addres, int64_t overlapped);
	virtual void setConnected(::java::net::InetSocketAddress* localAddress, ::java::net::InetSocketAddress* remoteAddress);
	static void shutdown0(int64_t socket, int32_t how);
	virtual $String* toString() override;
	static void updateConnectContext(int64_t socket);
	using ::sun::nio::ch::AsynchronousSocketChannelImpl::write;
	static int32_t write0(int64_t socket, int32_t count, int64_t address, int64_t overlapped);
	static ::jdk::internal::misc::Unsafe* unsafe;
	static int32_t addressSize;
	static int32_t SIZEOF_WSABUF;
	static const int32_t OFFSETOF_LEN = 0;
	static int32_t OFFSETOF_BUF;
	static const int32_t MAX_WSABUF = 16;
	static int32_t SIZEOF_WSABUFARRAY;
	int64_t handle$ = 0;
	::sun::nio::ch::Iocp* iocp = nullptr;
	int32_t completionKey = 0;
	::sun::nio::ch::PendingIoCache* ioCache = nullptr;
	int64_t readBufferArray = 0;
	int64_t writeBufferArray = 0;
};

		} // ch
	} // nio
} // sun

#pragma pop_macro("OFFSETOF_LEN")
#pragma pop_macro("SIZEOF_WSABUFARRAY")
#pragma pop_macro("MAX_WSABUF")
#pragma pop_macro("SIZEOF_WSABUF")
#pragma pop_macro("OFFSETOF_BUF")

#endif // _sun_nio_ch_WindowsAsynchronousSocketChannelImpl_h_