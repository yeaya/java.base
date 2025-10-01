#ifndef _sun_nio_ch_SelectorImpl_h_
#define _sun_nio_ch_SelectorImpl_h_
//$ class sun.nio.ch.SelectorImpl
//$ extends java.nio.channels.spi.AbstractSelector

#include <java/nio/channels/spi/AbstractSelector.h>

namespace java {
	namespace nio {
		namespace channels {
			class SelectionKey;
		}
	}
}
namespace java {
	namespace nio {
		namespace channels {
			namespace spi {
				class AbstractSelectableChannel;
				class SelectorProvider;
			}
		}
	}
}
namespace java {
	namespace util {
		class Deque;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
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

class $export SelectorImpl : public ::java::nio::channels::spi::AbstractSelector {
	$class(SelectorImpl, 0, ::java::nio::channels::spi::AbstractSelector)
public:
	SelectorImpl();
	using ::java::nio::channels::spi::AbstractSelector::cancel;
	using ::java::nio::channels::spi::AbstractSelector::begin;
	using ::java::nio::channels::spi::AbstractSelector::end;
	void init$(::java::nio::channels::spi::SelectorProvider* sp);
	void begin(bool blocking);
	virtual void cancel(::sun::nio::ch::SelectionKeyImpl* ski);
	virtual int32_t doSelect(::java::util::function::Consumer* action, int64_t timeout) {return 0;}
	void end(bool blocking);
	void ensureOpen();
	virtual void implClose() {}
	virtual void implCloseSelector() override;
	virtual void implDereg(::sun::nio::ch::SelectionKeyImpl* ski) {}
	virtual void implRegister(::sun::nio::ch::SelectionKeyImpl* ski);
	virtual ::java::util::Set* keys() override;
	int32_t lockAndDoSelect(::java::util::function::Consumer* action, int64_t timeout);
	void processDeregisterQueue();
	int32_t processReadyEvents(int32_t rOps, ::sun::nio::ch::SelectionKeyImpl* ski, ::java::util::function::Consumer* action);
	virtual ::java::nio::channels::SelectionKey* register$(::java::nio::channels::spi::AbstractSelectableChannel* ch, int32_t ops, Object$* attachment) override;
	virtual int32_t select(int64_t timeout) override;
	virtual int32_t select() override;
	virtual int32_t select(::java::util::function::Consumer* action, int64_t timeout) override;
	virtual int32_t select(::java::util::function::Consumer* action) override;
	virtual int32_t selectNow() override;
	virtual int32_t selectNow(::java::util::function::Consumer* action) override;
	virtual ::java::util::Set* selectedKeys() override;
	virtual void setEventOps(::sun::nio::ch::SelectionKeyImpl* ski) {}
	static bool $assertionsDisabled;
	::java::util::Set* keys$ = nullptr;
	::java::util::Set* selectedKeys$ = nullptr;
	::java::util::Set* publicKeys = nullptr;
	::java::util::Set* publicSelectedKeys = nullptr;
	::java::util::Deque* cancelledKeys$ = nullptr;
	bool inSelect = false;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_SelectorImpl_h_