#ifndef _sun_nio_ch_UnixAsynchronousServerSocketChannelImpl_h_
#define _sun_nio_ch_UnixAsynchronousServerSocketChannelImpl_h_
//$ class sun.nio.ch.UnixAsynchronousServerSocketChannelImpl
//$ extends sun.nio.ch.AsynchronousServerSocketChannelImpl
//$ implements sun.nio.ch.Port$PollableChannel

#include <sun/nio/ch/AsynchronousServerSocketChannelImpl.h>
#include <sun/nio/ch/Port$PollableChannel.h>

namespace java {
	namespace io {
		class FileDescriptor;
	}
}
namespace java {
	namespace net {
		class InetSocketAddress;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class AsynchronousSocketChannel;
			class CompletionHandler;
		}
	}
}
namespace java {
	namespace security {
		class AccessControlContext;
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
namespace sun {
	namespace nio {
		namespace ch {
			class AsynchronousChannelGroupImpl;
			class NativeDispatcher;
			class PendingFuture;
			class Port;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class UnixAsynchronousServerSocketChannelImpl : public ::sun::nio::ch::AsynchronousServerSocketChannelImpl, public ::sun::nio::ch::Port$PollableChannel {
	$class(UnixAsynchronousServerSocketChannelImpl, 0, ::sun::nio::ch::AsynchronousServerSocketChannelImpl, ::sun::nio::ch::Port$PollableChannel)
public:
	UnixAsynchronousServerSocketChannelImpl();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::sun::nio::ch::AsynchronousServerSocketChannelImpl::bind;
	virtual $Object* clone() override;
	virtual void close() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::nio::ch::Port* port);
	void enableAccept();
	::java::nio::channels::AsynchronousSocketChannel* finishAccept(::java::io::FileDescriptor* newfd, ::java::net::InetSocketAddress* remote, ::java::security::AccessControlContext* acc);
	virtual ::sun::nio::ch::AsynchronousChannelGroupImpl* group() override;
	virtual ::java::util::concurrent::Future* implAccept(Object$* att, ::java::nio::channels::CompletionHandler* handler) override;
	virtual void implClose() override;
	virtual void onEvent(int32_t events, bool mayInvokeDirect) override;
	virtual $String* toString() override;
	static ::sun::nio::ch::NativeDispatcher* nd;
	::sun::nio::ch::Port* port = nullptr;
	int32_t fdVal = 0;
	::java::util::concurrent::atomic::AtomicBoolean* accepting = nullptr;
	$Object* updateLock = nullptr;
	bool acceptPending = false;
	::java::nio::channels::CompletionHandler* acceptHandler = nullptr;
	$Object* acceptAttachment = nullptr;
	::sun::nio::ch::PendingFuture* acceptFuture = nullptr;
	::java::security::AccessControlContext* acceptAcc = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_UnixAsynchronousServerSocketChannelImpl_h_