#ifndef _java_nio_channels_AsynchronousSocketChannel_h_
#define _java_nio_channels_AsynchronousSocketChannel_h_
//$ class java.nio.channels.AsynchronousSocketChannel
//$ extends java.nio.channels.AsynchronousByteChannel
//$ implements java.nio.channels.NetworkChannel

#include <java/lang/Array.h>
#include <java/nio/channels/AsynchronousByteChannel.h>
#include <java/nio/channels/NetworkChannel.h>

namespace java {
	namespace net {
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
			class TimeUnit;
		}
	}
}

namespace java {
	namespace nio {
		namespace channels {

class $export AsynchronousSocketChannel : public ::java::nio::channels::AsynchronousByteChannel, public ::java::nio::channels::NetworkChannel {
	$class(AsynchronousSocketChannel, $NO_CLASS_INIT, ::java::nio::channels::AsynchronousByteChannel, ::java::nio::channels::NetworkChannel)
public:
	AsynchronousSocketChannel();
	virtual ::java::nio::channels::NetworkChannel* bind(::java::net::SocketAddress* local) override {return nullptr;}
	virtual $Object* clone() override;
	virtual void close() override {}
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual ::java::net::SocketAddress* getLocalAddress() override {return nullptr;}
	virtual int32_t hashCode() override;
	void init$(::java::nio::channels::spi::AsynchronousChannelProvider* provider);
	virtual void connect(::java::net::SocketAddress* remote, Object$* attachment, ::java::nio::channels::CompletionHandler* handler) {}
	virtual ::java::util::concurrent::Future* connect(::java::net::SocketAddress* remote) {return nullptr;}
	virtual ::java::net::SocketAddress* getRemoteAddress() {return nullptr;}
	virtual bool isOpen() override {return false;}
	static ::java::nio::channels::AsynchronousSocketChannel* open(::java::nio::channels::AsynchronousChannelGroup* group);
	static ::java::nio::channels::AsynchronousSocketChannel* open();
	::java::nio::channels::spi::AsynchronousChannelProvider* provider();
	virtual ::java::util::concurrent::Future* read(::java::nio::ByteBuffer* dst) override {return nullptr;}
	virtual void read(::java::nio::ByteBuffer* dst, int64_t timeout, ::java::util::concurrent::TimeUnit* unit, Object$* attachment, ::java::nio::channels::CompletionHandler* handler) {}
	virtual void read(::java::nio::ByteBuffer* dst, Object$* attachment, ::java::nio::channels::CompletionHandler* handler) override;
	virtual void read($Array<::java::nio::ByteBuffer>* dsts, int32_t offset, int32_t length, int64_t timeout, ::java::util::concurrent::TimeUnit* unit, Object$* attachment, ::java::nio::channels::CompletionHandler* handler) {}
	virtual ::java::nio::channels::NetworkChannel* setOption(::java::net::SocketOption* name, Object$* value) override {return nullptr;}
	virtual ::java::nio::channels::AsynchronousSocketChannel* shutdownInput() {return nullptr;}
	virtual ::java::nio::channels::AsynchronousSocketChannel* shutdownOutput() {return nullptr;}
	virtual $String* toString() override;
	virtual ::java::util::concurrent::Future* write(::java::nio::ByteBuffer* src) override {return nullptr;}
	virtual void write(::java::nio::ByteBuffer* src, int64_t timeout, ::java::util::concurrent::TimeUnit* unit, Object$* attachment, ::java::nio::channels::CompletionHandler* handler) {}
	virtual void write(::java::nio::ByteBuffer* src, Object$* attachment, ::java::nio::channels::CompletionHandler* handler) override;
	virtual void write($Array<::java::nio::ByteBuffer>* srcs, int32_t offset, int32_t length, int64_t timeout, ::java::util::concurrent::TimeUnit* unit, Object$* attachment, ::java::nio::channels::CompletionHandler* handler) {}
	::java::nio::channels::spi::AsynchronousChannelProvider* provider$ = nullptr;
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_AsynchronousSocketChannel_h_