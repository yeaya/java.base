#ifndef _sun_nio_ch_PollSelectorImpl_h_
#define _sun_nio_ch_PollSelectorImpl_h_
//$ class sun.nio.ch.PollSelectorImpl
//$ extends sun.nio.ch.SelectorImpl

#include <sun/nio/ch/SelectorImpl.h>

#pragma push_macro("INITIAL_CAPACITY")
#undef INITIAL_CAPACITY
#pragma push_macro("FD_OFFSET")
#undef FD_OFFSET
#pragma push_macro("REVENT_OFFSET")
#undef REVENT_OFFSET
#pragma push_macro("SIZE_POLLFD")
#undef SIZE_POLLFD
#pragma push_macro("EVENT_OFFSET")
#undef EVENT_OFFSET

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
		class List;
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
			class AllocatedNativeObject;
			class SelectionKeyImpl;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class PollSelectorImpl : public ::sun::nio::ch::SelectorImpl {
	$class(PollSelectorImpl, 0, ::sun::nio::ch::SelectorImpl)
public:
	PollSelectorImpl();
	using ::sun::nio::ch::SelectorImpl::begin;
	using ::sun::nio::ch::SelectorImpl::end;
	using ::sun::nio::ch::SelectorImpl::cancel;
	void init$(::java::nio::channels::spi::SelectorProvider* sp);
	void add(::sun::nio::ch::SelectionKeyImpl* ski, int32_t ops);
	void clearInterrupt();
	virtual int32_t doSelect(::java::util::function::Consumer* action, int64_t timeout) override;
	void ensureOpen();
	void expandIfNeeded();
	int32_t getDescriptor(int32_t i);
	int32_t getEventOps(int32_t i);
	int32_t getReventOps(int32_t i);
	virtual void implClose() override;
	virtual void implDereg(::sun::nio::ch::SelectionKeyImpl* ski) override;
	virtual void implRegister(::sun::nio::ch::SelectionKeyImpl* ski) override;
	static int32_t poll(int64_t pollAddress, int32_t numfds, int32_t timeout);
	int32_t processEvents(::java::util::function::Consumer* action);
	void processUpdateQueue();
	void putDescriptor(int32_t i, int32_t fd);
	void putEventOps(int32_t i, int32_t event);
	void putReventOps(int32_t i, int32_t revent);
	void remove(::sun::nio::ch::SelectionKeyImpl* ski);
	virtual void setEventOps(::sun::nio::ch::SelectionKeyImpl* ski) override;
	void setFirst(int32_t fd, int32_t ops);
	void update(::sun::nio::ch::SelectionKeyImpl* ski, int32_t ops);
	virtual ::java::nio::channels::Selector* wakeup() override;
	static bool $assertionsDisabled;
	static const int32_t INITIAL_CAPACITY = 16;
	int32_t pollArrayCapacity = 0;
	int32_t pollArraySize = 0;
	::sun::nio::ch::AllocatedNativeObject* pollArray = nullptr;
	int32_t fd0 = 0;
	int32_t fd1 = 0;
	::java::util::List* pollKeys = nullptr;
	$Object* updateLock = nullptr;
	::java::util::Deque* updateKeys = nullptr;
	$Object* interruptLock = nullptr;
	bool interruptTriggered = false;
	static const int16_t SIZE_POLLFD = 8;
	static const int16_t FD_OFFSET = 0;
	static const int16_t EVENT_OFFSET = 4;
	static const int16_t REVENT_OFFSET = 6;
};

		} // ch
	} // nio
} // sun

#pragma pop_macro("INITIAL_CAPACITY")
#pragma pop_macro("FD_OFFSET")
#pragma pop_macro("REVENT_OFFSET")
#pragma pop_macro("SIZE_POLLFD")
#pragma pop_macro("EVENT_OFFSET")

#endif // _sun_nio_ch_PollSelectorImpl_h_