#ifndef _sun_nio_ch_EPollSelectorImpl_h_
#define _sun_nio_ch_EPollSelectorImpl_h_
//$ class sun.nio.ch.EPollSelectorImpl
//$ extends sun.nio.ch.SelectorImpl

#include <sun/nio/ch/SelectorImpl.h>

#pragma push_macro("NUM_EPOLLEVENTS")
#undef NUM_EPOLLEVENTS

namespace java {
	namespace nio {
		namespace channels {
			class Selector;
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
namespace java {
	namespace util {
		class Deque;
		class Map;
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
			class EventFD;
			class SelectionKeyImpl;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class EPollSelectorImpl : public ::sun::nio::ch::SelectorImpl {
	$class(EPollSelectorImpl, 0, ::sun::nio::ch::SelectorImpl)
public:
	EPollSelectorImpl();
	using ::sun::nio::ch::SelectorImpl::begin;
	using ::sun::nio::ch::SelectorImpl::end;
	using ::sun::nio::ch::SelectorImpl::cancel;
	void init$(::java::nio::channels::spi::SelectorProvider* sp);
	void clearInterrupt();
	virtual int32_t doSelect(::java::util::function::Consumer* action, int64_t timeout) override;
	void ensureOpen();
	virtual void implClose() override;
	virtual void implDereg(::sun::nio::ch::SelectionKeyImpl* ski) override;
	int32_t processEvents(int32_t numEntries, ::java::util::function::Consumer* action);
	void processUpdateQueue();
	virtual void setEventOps(::sun::nio::ch::SelectionKeyImpl* ski) override;
	virtual ::java::nio::channels::Selector* wakeup() override;
	static bool $assertionsDisabled;
	static int32_t NUM_EPOLLEVENTS;
	int32_t epfd = 0;
	int64_t pollArrayAddress = 0;
	::sun::nio::ch::EventFD* eventfd = nullptr;
	::java::util::Map* fdToKey = nullptr;
	$Object* updateLock = nullptr;
	::java::util::Deque* updateKeys = nullptr;
	$Object* interruptLock = nullptr;
	bool interruptTriggered = false;
};

		} // ch
	} // nio
} // sun

#pragma pop_macro("NUM_EPOLLEVENTS")

#endif // _sun_nio_ch_EPollSelectorImpl_h_