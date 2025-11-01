#ifndef _sun_nio_ch_AsynchronousServerSocketChannelImpl_h_
#define _sun_nio_ch_AsynchronousServerSocketChannelImpl_h_
//$ class sun.nio.ch.AsynchronousServerSocketChannelImpl
//$ extends java.nio.channels.AsynchronousServerSocketChannel
//$ implements sun.nio.ch.Cancellable,sun.nio.ch.Groupable

#include <java/nio/channels/AsynchronousServerSocketChannel.h>
#include <sun/nio/ch/Cancellable.h>
#include <sun/nio/ch/Groupable.h>

namespace java {
	namespace io {
		class FileDescriptor;
	}
}
namespace java {
	namespace net {
		class InetSocketAddress;
		class SocketAddress;
		class SocketOption;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class CompletionHandler;
			class NetworkChannel;
		}
	}
}
namespace java {
	namespace util {
		class Set;
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
			namespace locks {
				class ReadWriteLock;
			}
		}
	}
}
namespace sun {
	namespace nio {
		namespace ch {
			class AsynchronousChannelGroupImpl;
			class PendingFuture;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class AsynchronousServerSocketChannelImpl : public ::java::nio::channels::AsynchronousServerSocketChannel, public ::sun::nio::ch::Cancellable, public ::sun::nio::ch::Groupable {
	$class(AsynchronousServerSocketChannelImpl, $NO_CLASS_INIT, ::java::nio::channels::AsynchronousServerSocketChannel, ::sun::nio::ch::Cancellable, ::sun::nio::ch::Groupable)
public:
	AsynchronousServerSocketChannelImpl();
	using ::java::nio::channels::AsynchronousServerSocketChannel::bind;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::nio::ch::AsynchronousChannelGroupImpl* group);
	virtual ::java::util::concurrent::Future* accept() override;
	virtual void accept(Object$* attachment, ::java::nio::channels::CompletionHandler* handler) override;
	void begin();
	virtual ::java::nio::channels::AsynchronousServerSocketChannel* bind(::java::net::SocketAddress* local, int32_t backlog) override;
	virtual void close() override;
	void end();
	virtual ::java::net::SocketAddress* getLocalAddress() override;
	virtual $Object* getOption(::java::net::SocketOption* name) override;
	virtual ::java::util::concurrent::Future* implAccept(Object$* attachment, ::java::nio::channels::CompletionHandler* handler) {return nullptr;}
	virtual void implClose() {}
	bool isAcceptKilled();
	virtual bool isOpen() override;
	virtual void onCancel(::sun::nio::ch::PendingFuture* task) override;
	virtual ::java::nio::channels::NetworkChannel* setOption(::java::net::SocketOption* name, Object$* value) override;
	virtual ::java::util::Set* supportedOptions() override;
	virtual $String* toString() override;
	::java::io::FileDescriptor* fd = nullptr;
	$volatile(::java::net::InetSocketAddress*) localAddress = nullptr;
	$Object* stateLock = nullptr;
	::java::util::concurrent::locks::ReadWriteLock* closeLock = nullptr;
	$volatile(bool) closed = false;
	$volatile(bool) acceptKilled = false;
	bool isReuseAddress = false;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_AsynchronousServerSocketChannelImpl_h_