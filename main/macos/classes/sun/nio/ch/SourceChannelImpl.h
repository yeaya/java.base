#ifndef _sun_nio_ch_SourceChannelImpl_h_
#define _sun_nio_ch_SourceChannelImpl_h_
//$ class sun.nio.ch.SourceChannelImpl
//$ extends java.nio.channels.Pipe$SourceChannel
//$ implements sun.nio.ch.SelChImpl

#include <java/lang/Array.h>
#include <java/nio/channels/Pipe$SourceChannel.h>
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

class SourceChannelImpl : public ::java::nio::channels::Pipe$SourceChannel, public ::sun::nio::ch::SelChImpl {
	$class(SourceChannelImpl, 0, ::java::nio::channels::Pipe$SourceChannel, ::sun::nio::ch::SelChImpl)
public:
	SourceChannelImpl();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void close() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	virtual bool isOpen() override;
	void init$(::java::nio::channels::spi::SelectorProvider* sp, ::java::io::FileDescriptor* fd);
	void beginRead(bool blocking);
	void endRead(bool blocking, bool completed);
	virtual ::java::io::FileDescriptor* getFD() override;
	virtual int32_t getFDVal() override;
	void implCloseBlockingMode();
	void implCloseNonBlockingMode();
	virtual void implCloseSelectableChannel() override;
	virtual void implConfigureBlocking(bool block) override;
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
	bool tryClose();
	void tryFinishClose();
	static bool $assertionsDisabled;
	static ::sun::nio::ch::NativeDispatcher* nd;
	::java::io::FileDescriptor* fd = nullptr;
	int32_t fdVal = 0;
	::java::util::concurrent::locks::ReentrantLock* readLock = nullptr;
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

#endif // _sun_nio_ch_SourceChannelImpl_h_