#ifndef _sun_nio_ch_SourceChannelImpl_h_
#define _sun_nio_ch_SourceChannelImpl_h_
//$ class sun.nio.ch.SourceChannelImpl
//$ extends java.nio.channels.Pipe$SourceChannel
//$ implements sun.nio.ch.SelChImpl

#include <java/lang/Array.h>
#include <java/nio/channels/Pipe$SourceChannel.h>
#include <sun/nio/ch/SelChImpl.h>

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
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class SourceChannelImpl : public ::java::nio::channels::Pipe$SourceChannel, public ::sun::nio::ch::SelChImpl {
	$class(SourceChannelImpl, $NO_CLASS_INIT, ::java::nio::channels::Pipe$SourceChannel, ::sun::nio::ch::SelChImpl)
public:
	SourceChannelImpl();
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
	virtual bool isOpen() override;
	virtual void kill() override;
	virtual int32_t read(::java::nio::ByteBuffer* dst) override;
	virtual int64_t read($Array<::java::nio::ByteBuffer>* dsts, int32_t offset, int32_t length) override;
	virtual int64_t read($Array<::java::nio::ByteBuffer>* dsts) override;
	using ::java::nio::channels::Pipe$SourceChannel::register$;
	virtual $String* toString() override;
	virtual bool translateAndSetReadyOps(int32_t ops, ::sun::nio::ch::SelectionKeyImpl* ski) override;
	virtual bool translateAndUpdateReadyOps(int32_t ops, ::sun::nio::ch::SelectionKeyImpl* ski) override;
	virtual int32_t translateInterestOps(int32_t ops) override;
	virtual bool translateReadyOps(int32_t ops, int32_t initialOps, ::sun::nio::ch::SelectionKeyImpl* ski);
	::java::nio::channels::SocketChannel* sc = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_SourceChannelImpl_h_