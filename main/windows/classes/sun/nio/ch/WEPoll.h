#ifndef _sun_nio_ch_WEPoll_h_
#define _sun_nio_ch_WEPoll_h_
//$ class sun.nio.ch.WEPoll
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ADDRESS_SIZE")
#undef ADDRESS_SIZE
#pragma push_macro("EPOLLERR")
#undef EPOLLERR
#pragma push_macro("EPOLLHUP")
#undef EPOLLHUP
#pragma push_macro("EPOLLIN")
#undef EPOLLIN
#pragma push_macro("EPOLLONESHOT")
#undef EPOLLONESHOT
#pragma push_macro("EPOLLOUT")
#undef EPOLLOUT
#pragma push_macro("EPOLLPRI")
#undef EPOLLPRI
#pragma push_macro("EPOLL_CTL_ADD")
#undef EPOLL_CTL_ADD
#pragma push_macro("EPOLL_CTL_DEL")
#undef EPOLL_CTL_DEL
#pragma push_macro("EPOLL_CTL_MOD")
#undef EPOLL_CTL_MOD
#pragma push_macro("OFFSETOF_EVENTS")
#undef OFFSETOF_EVENTS
#pragma push_macro("OFFSETOF_SOCK")
#undef OFFSETOF_SOCK
#pragma push_macro("SIZEOF_EPOLLEVENT")
#undef SIZEOF_EPOLLEVENT
#pragma push_macro("UNSAFE")
#undef UNSAFE

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

class WEPoll : public ::java::lang::Object {
	$class(WEPoll, 0, ::java::lang::Object)
public:
	WEPoll();
	void init$();
	static int64_t allocatePollArray(int32_t count);
	static void close(int64_t h);
	static int64_t create();
	static int32_t ctl(int64_t h, int32_t opcode, int64_t s, int32_t events);
	static int32_t dataOffset();
	static int32_t eventSize();
	static int32_t eventsOffset();
	static void freePollArray(int64_t address);
	static int32_t getDescriptor(int64_t eventAddress);
	static int64_t getEvent(int64_t address, int32_t i);
	static int32_t getEvents(int64_t eventAddress);
	static int64_t getSocket(int64_t eventAddress);
	static int32_t wait(int64_t h, int64_t pollAddress, int32_t numfds, int32_t timeout);
	static bool $assertionsDisabled;
	static ::jdk::internal::misc::Unsafe* UNSAFE;
	static int32_t ADDRESS_SIZE;
	static int32_t SIZEOF_EPOLLEVENT;
	static int32_t OFFSETOF_EVENTS;
	static int32_t OFFSETOF_SOCK;
	static const int32_t EPOLL_CTL_ADD = 1;
	static const int32_t EPOLL_CTL_MOD = 2;
	static const int32_t EPOLL_CTL_DEL = 3;
	static const int32_t EPOLLIN = (1 << 0);
	static const int32_t EPOLLPRI = (1 << 1);
	static const int32_t EPOLLOUT = (1 << 2);
	static const int32_t EPOLLERR = (1 << 3);
	static const int32_t EPOLLHUP = (1 << 4);
	static const int32_t EPOLLONESHOT = (1 << 31);
};

		} // ch
	} // nio
} // sun

#pragma pop_macro("ADDRESS_SIZE")
#pragma pop_macro("EPOLLERR")
#pragma pop_macro("EPOLLHUP")
#pragma pop_macro("EPOLLIN")
#pragma pop_macro("EPOLLONESHOT")
#pragma pop_macro("EPOLLOUT")
#pragma pop_macro("EPOLLPRI")
#pragma pop_macro("EPOLL_CTL_ADD")
#pragma pop_macro("EPOLL_CTL_DEL")
#pragma pop_macro("EPOLL_CTL_MOD")
#pragma pop_macro("OFFSETOF_EVENTS")
#pragma pop_macro("OFFSETOF_SOCK")
#pragma pop_macro("SIZEOF_EPOLLEVENT")
#pragma pop_macro("UNSAFE")

#endif // _sun_nio_ch_WEPoll_h_