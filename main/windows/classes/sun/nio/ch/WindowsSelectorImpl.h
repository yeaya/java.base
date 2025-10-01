#ifndef _sun_nio_ch_WindowsSelectorImpl_h_
#define _sun_nio_ch_WindowsSelectorImpl_h_
//$ class sun.nio.ch.WindowsSelectorImpl
//$ extends sun.nio.ch.SelectorImpl

#include <java/lang/Array.h>
#include <sun/nio/ch/SelectorImpl.h>

#pragma push_macro("INIT_CAP")
#undef INIT_CAP
#pragma push_macro("MAX_SELECTABLE_FDS")
#undef MAX_SELECTABLE_FDS
#pragma push_macro("SIZEOF_FD_SET")
#undef SIZEOF_FD_SET

namespace java {
	namespace nio {
		namespace channels {
			class Pipe;
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
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}
namespace sun {
	namespace nio {
		namespace ch {
			class PollArrayWrapper;
			class SelectionKeyImpl;
			class WindowsSelectorImpl$FdMap;
			class WindowsSelectorImpl$FinishLock;
			class WindowsSelectorImpl$StartLock;
			class WindowsSelectorImpl$SubSelector;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class WindowsSelectorImpl : public ::sun::nio::ch::SelectorImpl {
	$class(WindowsSelectorImpl, 0, ::sun::nio::ch::SelectorImpl)
public:
	WindowsSelectorImpl();
	using ::sun::nio::ch::SelectorImpl::begin;
	using ::sun::nio::ch::SelectorImpl::end;
	using ::sun::nio::ch::SelectorImpl::cancel;
	void init$(::java::nio::channels::spi::SelectorProvider* sp);
	void adjustThreadsCount();
	static int32_t dependsArch(int32_t value32, int32_t value64);
	virtual int32_t doSelect(::java::util::function::Consumer* action, int64_t timeout) override;
	void ensureOpen();
	void growIfNeeded();
	virtual void implClose() override;
	virtual void implDereg(::sun::nio::ch::SelectionKeyImpl* ski) override;
	virtual void implRegister(::sun::nio::ch::SelectionKeyImpl* ski) override;
	void processUpdateQueue();
	void resetWakeupSocket();
	void resetWakeupSocket0(int32_t wakeupSourceFd);
	virtual void setEventOps(::sun::nio::ch::SelectionKeyImpl* ski) override;
	void setWakeupSocket();
	void setWakeupSocket0(int32_t wakeupSinkFd);
	int32_t updateSelectedKeys(::java::util::function::Consumer* action);
	virtual ::java::nio::channels::Selector* wakeup() override;
	static bool $assertionsDisabled;
	static ::jdk::internal::misc::Unsafe* unsafe;
	static int32_t addressSize;
	static const int32_t INIT_CAP = 8;
	static const int32_t MAX_SELECTABLE_FDS = 1024;
	static int64_t SIZEOF_FD_SET;
	$Array<::sun::nio::ch::SelectionKeyImpl>* channelArray = nullptr;
	::sun::nio::ch::PollArrayWrapper* pollWrapper = nullptr;
	int32_t totalChannels = 0;
	int32_t threadsCount = 0;
	::java::util::List* threads = nullptr;
	::java::nio::channels::Pipe* wakeupPipe = nullptr;
	int32_t wakeupSourceFd = 0;
	int32_t wakeupSinkFd = 0;
	::sun::nio::ch::WindowsSelectorImpl$FdMap* fdMap = nullptr;
	::sun::nio::ch::WindowsSelectorImpl$SubSelector* subSelector = nullptr;
	int64_t timeout = 0;
	$Object* interruptLock = nullptr;
	$volatile(bool) interruptTriggered = false;
	$Object* updateLock = nullptr;
	::java::util::Deque* newKeys = nullptr;
	::java::util::Deque* updateKeys = nullptr;
	::sun::nio::ch::WindowsSelectorImpl$StartLock* startLock = nullptr;
	::sun::nio::ch::WindowsSelectorImpl$FinishLock* finishLock = nullptr;
	int64_t updateCount = 0;
};

		} // ch
	} // nio
} // sun

#pragma pop_macro("INIT_CAP")
#pragma pop_macro("MAX_SELECTABLE_FDS")
#pragma pop_macro("SIZEOF_FD_SET")

#endif // _sun_nio_ch_WindowsSelectorImpl_h_