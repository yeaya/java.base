#ifndef _sun_nio_ch_SinkChannelImpl_h_
#define _sun_nio_ch_SinkChannelImpl_h_
//$ class sun.nio.ch.SinkChannelImpl
//$ extends java.nio.channels.Pipe$SinkChannel
//$ implements sun.nio.ch.SelChImpl

#include <java/lang/Array.h>
#include <java/nio/channels/Pipe$SinkChannel.h>
#include <sun/nio/ch/SelChImpl.h>

#pragma push_macro("ST_CLOSED")
#undef ST_CLOSED
#pragma push_macro("ST_CLOSING")
#undef ST_CLOSING
#pragma push_macro("ST_INUSE")
#undef ST_INUSE

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
			namespace spi {
				class SelectorProvider;
			}
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class ReentrantLock;
			}
		}
	}
}
namespace sun {
	namespace nio {
		namespace ch {
			class NativeDispatcher;
			class SelectionKeyImpl;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class SinkChannelImpl : public ::java::nio::channels::Pipe$SinkChannel, public ::sun::nio::ch::SelChImpl {
	$class(SinkChannelImpl, 0, ::java::nio::channels::Pipe$SinkChannel, ::sun::nio::ch::SelChImpl)
public:
	SinkChannelImpl();
	virtual $Object* clone() override;
	virtual void close() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	virtual bool isOpen() override;
	void init$(::java::nio::channels::spi::SelectorProvider* sp, ::java::io::FileDescriptor* fd);
	void beginWrite(bool blocking);
	void endWrite(bool blocking, bool completed);
	virtual ::java::io::FileDescriptor* getFD() override;
	virtual int32_t getFDVal() override;
	void implCloseBlockingMode();
	void implCloseNonBlockingMode();
	virtual void implCloseSelectableChannel() override;
	virtual void implConfigureBlocking(bool block) override;
	virtual void kill() override;
	using ::java::nio::channels::Pipe$SinkChannel::register$;
	virtual $String* toString() override;
	virtual bool translateAndSetReadyOps(int32_t ops, ::sun::nio::ch::SelectionKeyImpl* ski) override;
	virtual bool translateAndUpdateReadyOps(int32_t ops, ::sun::nio::ch::SelectionKeyImpl* ski) override;
	virtual int32_t translateInterestOps(int32_t ops) override;
	virtual bool translateReadyOps(int32_t ops, int32_t initialOps, ::sun::nio::ch::SelectionKeyImpl* ski);
	bool tryClose();
	void tryFinishClose();
	virtual int32_t write(::java::nio::ByteBuffer* src) override;
	virtual int64_t write($Array<::java::nio::ByteBuffer>* srcs, int32_t offset, int32_t length) override;
	virtual int64_t write($Array<::java::nio::ByteBuffer>* srcs) override;
	static bool $assertionsDisabled;
	static ::sun::nio::ch::NativeDispatcher* nd;
	::java::io::FileDescriptor* fd = nullptr;
	int32_t fdVal = 0;
	::java::util::concurrent::locks::ReentrantLock* writeLock = nullptr;
	$Object* stateLock = nullptr;
	static const int32_t ST_INUSE = 0;
	static const int32_t ST_CLOSING = 1;
	static const int32_t ST_CLOSED = 2;
	int32_t state = 0;
	int64_t thread = 0;
};

		} // ch
	} // nio
} // sun

#pragma pop_macro("ST_CLOSED")
#pragma pop_macro("ST_CLOSING")
#pragma pop_macro("ST_INUSE")

#endif // _sun_nio_ch_SinkChannelImpl_h_