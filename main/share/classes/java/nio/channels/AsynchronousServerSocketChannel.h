#ifndef _java_nio_channels_AsynchronousServerSocketChannel_h_
#define _java_nio_channels_AsynchronousServerSocketChannel_h_
//$ class java.nio.channels.AsynchronousServerSocketChannel
//$ extends java.nio.channels.AsynchronousChannel
//$ implements java.nio.channels.NetworkChannel

#include <java/nio/channels/AsynchronousChannel.h>
#include <java/nio/channels/NetworkChannel.h>

namespace java {
	namespace net {
		class SocketAddress;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class AsynchronousChannelGroup;
			class CompletionHandler;
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
		namespace concurrent {
			class Future;
		}
	}
}

namespace java {
	namespace nio {
		namespace channels {

class $export AsynchronousServerSocketChannel : public ::java::nio::channels::AsynchronousChannel, public ::java::nio::channels::NetworkChannel {
	$class(AsynchronousServerSocketChannel, $NO_CLASS_INIT, ::java::nio::channels::AsynchronousChannel, ::java::nio::channels::NetworkChannel)
public:
	AsynchronousServerSocketChannel();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void close() override {}
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual ::java::net::SocketAddress* getLocalAddress() override {return nullptr;}
	virtual int32_t hashCode() override;
	void init$(::java::nio::channels::spi::AsynchronousChannelProvider* provider);
	virtual void accept(Object$* attachment, ::java::nio::channels::CompletionHandler* handler) {}
	virtual ::java::util::concurrent::Future* accept() {return nullptr;}
	virtual ::java::nio::channels::NetworkChannel* bind(::java::net::SocketAddress* local) override;
	virtual ::java::nio::channels::AsynchronousServerSocketChannel* bind(::java::net::SocketAddress* local, int32_t backlog) {return nullptr;}
	virtual bool isOpen() override {return false;}
	static ::java::nio::channels::AsynchronousServerSocketChannel* open(::java::nio::channels::AsynchronousChannelGroup* group);
	static ::java::nio::channels::AsynchronousServerSocketChannel* open();
	::java::nio::channels::spi::AsynchronousChannelProvider* provider();
	virtual ::java::nio::channels::NetworkChannel* setOption(::java::net::SocketOption* name, Object$* value) override {return nullptr;}
	virtual $String* toString() override;
	::java::nio::channels::spi::AsynchronousChannelProvider* provider$ = nullptr;
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_AsynchronousServerSocketChannel_h_