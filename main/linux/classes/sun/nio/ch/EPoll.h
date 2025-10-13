#ifndef _sun_nio_ch_EPoll_h_
#define _sun_nio_ch_EPoll_h_
//$ class sun.nio.ch.EPoll
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("EPOLLIN")
#undef EPOLLIN
#pragma push_macro("EPOLLONESHOT")
#undef EPOLLONESHOT
#pragma push_macro("EPOLLOUT")
#undef EPOLLOUT
#pragma push_macro("EPOLL_CTL_ADD")
#undef EPOLL_CTL_ADD
#pragma push_macro("EPOLL_CTL_DEL")
#undef EPOLL_CTL_DEL
#pragma push_macro("EPOLL_CTL_MOD")
#undef EPOLL_CTL_MOD
#pragma push_macro("OFFSETOF_EVENTS")
#undef OFFSETOF_EVENTS
#pragma push_macro("OFFSETOF_FD")
#undef OFFSETOF_FD
#pragma push_macro("SIZEOF_EPOLLEVENT")
#undef SIZEOF_EPOLLEVENT

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

class EPoll : public ::java::lang::Object {
	$class(EPoll, 0, ::java::lang::Object)
public:
	EPoll();
	void init$();
	static int64_t allocatePollArray(int32_t count);
	static int32_t create();
	static int32_t ctl(int32_t epfd, int32_t opcode, int32_t fd, int32_t events);
	static int32_t dataOffset();
	static int32_t eventSize();
	static int32_t eventsOffset();
	static void freePollArray(int64_t address);
	static int32_t getDescriptor(int64_t eventAddress);
	static int64_t getEvent(int64_t address, int32_t i);
	static int32_t getEvents(int64_t eventAddress);
	static int32_t wait(int32_t epfd, int64_t pollAddress, int32_t numfds, int32_t timeout);
	static ::jdk::internal::misc::Unsafe* unsafe;
	static int32_t SIZEOF_EPOLLEVENT;
	static int32_t OFFSETOF_EVENTS;
	static int32_t OFFSETOF_FD;
	static const int32_t EPOLL_CTL_ADD = 1;
	static const int32_t EPOLL_CTL_DEL = 2;
	static const int32_t EPOLL_CTL_MOD = 3;
	static const int32_t EPOLLIN = 1;
	static const int32_t EPOLLOUT = 4;
	static const int32_t EPOLLONESHOT = (1 << 30);
};

		} // ch
	} // nio
} // sun

#pragma pop_macro("EPOLLIN")
#pragma pop_macro("EPOLLONESHOT")
#pragma pop_macro("EPOLLOUT")
#pragma pop_macro("EPOLL_CTL_ADD")
#pragma pop_macro("EPOLL_CTL_DEL")
#pragma pop_macro("EPOLL_CTL_MOD")
#pragma pop_macro("OFFSETOF_EVENTS")
#pragma pop_macro("OFFSETOF_FD")
#pragma pop_macro("SIZEOF_EPOLLEVENT")

#endif // _sun_nio_ch_EPoll_h_