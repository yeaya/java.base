#ifndef _sun_nio_ch_SinkChannelImpl_h_
#define _sun_nio_ch_SinkChannelImpl_h_
//$ class sun.nio.ch.SinkChannelImpl
//$ extends java.nio.channels.Pipe$SinkChannel
//$ implements sun.nio.ch.SelChImpl

#include <java/lang/Array.h>
#include <java/nio/channels/Pipe$SinkChannel.h>
#include <sun/nio/ch/SelChImpl.h>

namespace java {
	namespace io {
		class FileDescriptor;
	}
}
namespace java {
	namespace net {
		class SocketOption;
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
			class SocketChannel;
		}
	}
}
namespace java {
	namespace nio {
		namespace channels {
			namespace spi {
				class SelectorProvider;
			}
		}
	}
}
namespace sun {
	namespace nio {
		namespace ch {
			class SelectionKeyImpl;
			class SocketChannelImpl;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class SinkChannelImpl : public ::java::nio::channels::Pipe$SinkChannel, public ::sun::nio::ch::SelChImpl {
	$class(SinkChannelImpl, $NO_CLASS_INIT, ::java::nio::channels::Pipe$SinkChannel, ::sun::nio::ch::SelChImpl)
public:
	SinkChannelImpl();
	virtual $Object* clone() override;
	virtual void close() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::nio::channels::spi::SelectorProvider* sp, ::java::nio::channels::SocketChannel* sc);
	virtual ::java::io::FileDescriptor* getFD() override;
	virtual int32_t getFDVal() override;
	virtual void implCloseSelectableChannel() override;
	virtual void implConfigureBlocking(bool block) override;
	virtual bool isNetSocket();
	virtual bool isOpen() override;
	virtual void kill() override;
	using ::java::nio::channels::Pipe$SinkChannel::register$;
	virtual void setOption(::java::net::SocketOption* name, Object$* value);
	virtual $String* toString() override;
	virtual bool translateAndSetReadyOps(int32_t ops, ::sun::nio::ch::SelectionKeyImpl* ski) override;
	virtual bool translateAndUpdateReadyOps(int32_t ops, ::sun::nio::ch::SelectionKeyImpl* ski) override;
	virtual int32_t translateInterestOps(int32_t ops) override;
	virtual bool translateReadyOps(int32_t ops, int32_t initialOps, ::sun::nio::ch::SelectionKeyImpl* ski);
	virtual int32_t write(::java::nio::ByteBuffer* src) override;
	virtual int64_t write($Array<::java::nio::ByteBuffer>* srcs) override;
	virtual int64_t write($Array<::java::nio::ByteBuffer>* srcs, int32_t offset, int32_t length) override;
	::sun::nio::ch::SocketChannelImpl* sc = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_SinkChannelImpl_h_