#ifndef _sun_nio_ch_WEPollSelectorImpl_h_
#define _sun_nio_ch_WEPollSelectorImpl_h_
//$ class sun.nio.ch.WEPollSelectorImpl
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
			class PipeImpl;
			class SelectionKeyImpl;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class WEPollSelectorImpl : public ::sun::nio::ch::SelectorImpl {
	$class(WEPollSelectorImpl, 0, ::sun::nio::ch::SelectorImpl)
public:
	WEPollSelectorImpl();
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
	static int32_t toEPollEvents(int32_t ops);
	static int32_t toReadyOps(int32_t events);
	virtual ::java::nio::channels::Selector* wakeup() override;
	static bool $assertionsDisabled;
	static const int32_t NUM_EPOLLEVENTS = 256;
	int64_t eph = 0;
	int64_t pollArrayAddress = 0;
	::java::util::Map* fdToKey = nullptr;
	$Object* updateLock = nullptr;
	::java::util::Deque* updateKeys = nullptr;
	$Object* interruptLock = nullptr;
	bool interruptTriggered = false;
	::sun::nio::ch::PipeImpl* pipe = nullptr;
	int32_t fd0Val = 0;
	int32_t fd1Val = 0;
};

		} // ch
	} // nio
} // sun

#pragma pop_macro("NUM_EPOLLEVENTS")

#endif // _sun_nio_ch_WEPollSelectorImpl_h_