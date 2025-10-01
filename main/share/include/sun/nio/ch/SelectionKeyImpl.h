#ifndef _sun_nio_ch_SelectionKeyImpl_h_
#define _sun_nio_ch_SelectionKeyImpl_h_
//$ class sun.nio.ch.SelectionKeyImpl
//$ extends java.nio.channels.spi.AbstractSelectionKey

#include <java/nio/channels/spi/AbstractSelectionKey.h>

#pragma push_macro("INTERESTOPS")
#undef INTERESTOPS

namespace java {
	namespace io {
		class FileDescriptor;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class VarHandle;
		}
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class SelectableChannel;
			class SelectionKey;
			class Selector;
		}
	}
}
namespace sun {
	namespace nio {
		namespace ch {
			class SelChImpl;
			class SelectorImpl;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class $import SelectionKeyImpl : public ::java::nio::channels::spi::AbstractSelectionKey {
	$class(SelectionKeyImpl, 0, ::java::nio::channels::spi::AbstractSelectionKey)
public:
	SelectionKeyImpl();
	void init$(::sun::nio::ch::SelChImpl* ch, ::sun::nio::ch::SelectorImpl* sel);
	virtual ::java::nio::channels::SelectableChannel* channel() override;
	void ensureValid();
	bool getAndClearReset();
	::java::io::FileDescriptor* getFD();
	int32_t getFDVal();
	int32_t getIndex();
	virtual int32_t interestOps() override;
	virtual ::java::nio::channels::SelectionKey* interestOps(int32_t ops) override;
	virtual int32_t interestOpsAnd(int32_t ops) override;
	virtual int32_t interestOpsOr(int32_t ops) override;
	::java::nio::channels::SelectionKey* nioInterestOps(int32_t ops);
	int32_t nioInterestOps();
	void nioReadyOps(int32_t ops);
	int32_t nioReadyOps();
	virtual int32_t readyOps() override;
	void registeredEvents(int32_t events);
	int32_t registeredEvents();
	void reset();
	virtual ::java::nio::channels::Selector* selector() override;
	void setIndex(int32_t i);
	virtual $String* toString() override;
	bool translateAndSetReadyOps(int32_t ops);
	bool translateAndUpdateReadyOps(int32_t ops);
	int32_t translateInterestOps();
	static bool $assertionsDisabled;
	static ::java::lang::invoke::VarHandle* INTERESTOPS;
	::sun::nio::ch::SelChImpl* channel$ = nullptr;
	::sun::nio::ch::SelectorImpl* selector$ = nullptr;
	$volatile(int32_t) interestOps$ = 0;
	$volatile(int32_t) readyOps$ = 0;
	int32_t registeredEvents$ = 0;
	$volatile(bool) reset$ = false;
	int32_t index = 0;
	int32_t lastPolled = 0;
};

		} // ch
	} // nio
} // sun

#pragma pop_macro("INTERESTOPS")

#endif // _sun_nio_ch_SelectionKeyImpl_h_