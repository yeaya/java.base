#ifndef _sun_nio_ch_KQueue_h_
#define _sun_nio_ch_KQueue_h_
//$ class sun.nio.ch.KQueue
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("EVFILT_WRITE")
#undef EVFILT_WRITE
#pragma push_macro("EV_ONESHOT")
#undef EV_ONESHOT
#pragma push_macro("EV_ADD")
#undef EV_ADD
#pragma push_macro("EV_CLEAR")
#undef EV_CLEAR
#pragma push_macro("EVFILT_READ")
#undef EVFILT_READ
#pragma push_macro("SIZEOF_KQUEUEEVENT")
#undef SIZEOF_KQUEUEEVENT
#pragma push_macro("OFFSET_IDENT")
#undef OFFSET_IDENT
#pragma push_macro("EV_DELETE")
#undef EV_DELETE
#pragma push_macro("OFFSET_FLAGS")
#undef OFFSET_FLAGS
#pragma push_macro("OFFSET_FILTER")
#undef OFFSET_FILTER

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

class KQueue : public ::java::lang::Object {
	$class(KQueue, 0, ::java::lang::Object)
public:
	KQueue();
	void init$();
	static int64_t allocatePollArray(int32_t count);
	static int32_t create();
	static int32_t filterOffset();
	static int32_t flagsOffset();
	static void freePollArray(int64_t address);
	static int32_t getDescriptor(int64_t address);
	static int64_t getEvent(int64_t address, int32_t i);
	static int16_t getFilter(int64_t address);
	static int16_t getFlags(int64_t address);
	static int32_t identOffset();
	static int32_t keventSize();
	static int32_t poll(int32_t kqfd, int64_t pollAddress, int32_t nevents, int64_t timeout);
	static int32_t register$(int32_t kqfd, int32_t fd, int32_t filter, int32_t flags);
	static ::jdk::internal::misc::Unsafe* unsafe;
	static int32_t SIZEOF_KQUEUEEVENT;
	static int32_t OFFSET_IDENT;
	static int32_t OFFSET_FILTER;
	static int32_t OFFSET_FLAGS;
	static const int32_t EVFILT_READ = (-1);
	static const int32_t EVFILT_WRITE = (-2);
	static const int32_t EV_ADD = 1;
	static const int32_t EV_DELETE = 2;
	static const int32_t EV_ONESHOT = 16;
	static const int32_t EV_CLEAR = 32;
};

		} // ch
	} // nio
} // sun

#pragma pop_macro("EVFILT_WRITE")
#pragma pop_macro("EV_ONESHOT")
#pragma pop_macro("EV_ADD")
#pragma pop_macro("EV_CLEAR")
#pragma pop_macro("EVFILT_READ")
#pragma pop_macro("SIZEOF_KQUEUEEVENT")
#pragma pop_macro("OFFSET_IDENT")
#pragma pop_macro("EV_DELETE")
#pragma pop_macro("OFFSET_FLAGS")
#pragma pop_macro("OFFSET_FILTER")

#endif // _sun_nio_ch_KQueue_h_