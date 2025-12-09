#include <sun/nio/ch/EPoll.h>

#include <jdk/internal/misc/Unsafe.h>
#include <sun/nio/ch/IOUtil.h>
#include <jcpp.h>

#undef EPOLLIN
#undef EPOLLONESHOT
#undef EPOLLOUT
#undef EPOLL_CTL_ADD
#undef EPOLL_CTL_DEL
#undef EPOLL_CTL_MOD
#undef OFFSETOF_EVENTS
#undef OFFSETOF_FD
#undef SIZEOF_EPOLLEVENT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $IOUtil = ::sun::nio::ch::IOUtil;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _EPoll_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(EPoll, unsafe)},
	{"SIZEOF_EPOLLEVENT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(EPoll, SIZEOF_EPOLLEVENT)},
	{"OFFSETOF_EVENTS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(EPoll, OFFSETOF_EVENTS)},
	{"OFFSETOF_FD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(EPoll, OFFSETOF_FD)},
	{"EPOLL_CTL_ADD", "I", nullptr, $STATIC | $FINAL, $constField(EPoll, EPOLL_CTL_ADD)},
	{"EPOLL_CTL_DEL", "I", nullptr, $STATIC | $FINAL, $constField(EPoll, EPOLL_CTL_DEL)},
	{"EPOLL_CTL_MOD", "I", nullptr, $STATIC | $FINAL, $constField(EPoll, EPOLL_CTL_MOD)},
	{"EPOLLIN", "I", nullptr, $STATIC | $FINAL, $constField(EPoll, EPOLLIN)},
	{"EPOLLOUT", "I", nullptr, $STATIC | $FINAL, $constField(EPoll, EPOLLOUT)},
	{"EPOLLONESHOT", "I", nullptr, $STATIC | $FINAL, $constField(EPoll, EPOLLONESHOT)},
	{}
};

$MethodInfo _EPoll_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(EPoll::*)()>(&EPoll::init$))},
	{"allocatePollArray", "(I)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int32_t)>(&EPoll::allocatePollArray))},
	{"create", "()I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&EPoll::create)), "java.io.IOException"},
	{"ctl", "(IIII)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t,int32_t,int32_t,int32_t)>(&EPoll::ctl))},
	{"dataOffset", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&EPoll::dataOffset))},
	{"eventSize", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&EPoll::eventSize))},
	{"eventsOffset", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&EPoll::eventsOffset))},
	{"freePollArray", "(J)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t)>(&EPoll::freePollArray))},
	{"getDescriptor", "(J)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int64_t)>(&EPoll::getDescriptor))},
	{"getEvent", "(JI)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int64_t,int32_t)>(&EPoll::getEvent))},
	{"getEvents", "(J)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int64_t)>(&EPoll::getEvents))},
	{"wait", "(IJII)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t,int64_t,int32_t,int32_t)>(&EPoll::wait)), "java.io.IOException"},
	{}
};

#define _METHOD_INDEX_create 2
#define _METHOD_INDEX_ctl 3
#define _METHOD_INDEX_dataOffset 4
#define _METHOD_INDEX_eventSize 5
#define _METHOD_INDEX_eventsOffset 6
#define _METHOD_INDEX_wait 11

$ClassInfo _EPoll_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.EPoll",
	"java.lang.Object",
	nullptr,
	_EPoll_FieldInfo_,
	_EPoll_MethodInfo_
};

$Object* allocate$EPoll($Class* clazz) {
	return $of($alloc(EPoll));
}

$Unsafe* EPoll::unsafe = nullptr;
int32_t EPoll::SIZEOF_EPOLLEVENT = 0;
int32_t EPoll::OFFSETOF_EVENTS = 0;
int32_t EPoll::OFFSETOF_FD = 0;

void EPoll::init$() {
}

int64_t EPoll::allocatePollArray(int32_t count) {
	$init(EPoll);
	return $nc(EPoll::unsafe)->allocateMemory(count * EPoll::SIZEOF_EPOLLEVENT);
}

void EPoll::freePollArray(int64_t address) {
	$init(EPoll);
	$nc(EPoll::unsafe)->freeMemory(address);
}

int64_t EPoll::getEvent(int64_t address, int32_t i) {
	$init(EPoll);
	return address + (EPoll::SIZEOF_EPOLLEVENT * i);
}

int32_t EPoll::getDescriptor(int64_t eventAddress) {
	$init(EPoll);
	return $nc(EPoll::unsafe)->getInt(eventAddress + EPoll::OFFSETOF_FD);
}

int32_t EPoll::getEvents(int64_t eventAddress) {
	$init(EPoll);
	return $nc(EPoll::unsafe)->getInt(eventAddress + EPoll::OFFSETOF_EVENTS);
}

int32_t EPoll::eventSize() {
	$init(EPoll);
	int32_t $ret = 0;
	$prepareNativeStatic(EPoll, eventSize, int32_t);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

int32_t EPoll::eventsOffset() {
	$init(EPoll);
	int32_t $ret = 0;
	$prepareNativeStatic(EPoll, eventsOffset, int32_t);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

int32_t EPoll::dataOffset() {
	$init(EPoll);
	int32_t $ret = 0;
	$prepareNativeStatic(EPoll, dataOffset, int32_t);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

int32_t EPoll::create() {
	$init(EPoll);
	int32_t $ret = 0;
	$prepareNativeStatic(EPoll, create, int32_t);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

int32_t EPoll::ctl(int32_t epfd, int32_t opcode, int32_t fd, int32_t events) {
	$init(EPoll);
	int32_t $ret = 0;
	$prepareNativeStatic(EPoll, ctl, int32_t, int32_t epfd, int32_t opcode, int32_t fd, int32_t events);
	$ret = $invokeNativeStatic(epfd, opcode, fd, events);
	$finishNativeStatic();
	return $ret;
}

int32_t EPoll::wait(int32_t epfd, int64_t pollAddress, int32_t numfds, int32_t timeout) {
	$init(EPoll);
	int32_t $ret = 0;
	$prepareNativeStatic(EPoll, wait, int32_t, int32_t epfd, int64_t pollAddress, int32_t numfds, int32_t timeout);
	$ret = $invokeNativeStatic(epfd, pollAddress, numfds, timeout);
	$finishNativeStatic();
	return $ret;
}

void clinit$EPoll($Class* class$) {
	$assignStatic(EPoll::unsafe, $Unsafe::getUnsafe());
	EPoll::SIZEOF_EPOLLEVENT = EPoll::eventSize();
	EPoll::OFFSETOF_EVENTS = EPoll::eventsOffset();
	EPoll::OFFSETOF_FD = EPoll::dataOffset();
	{
		$IOUtil::load();
	}
}

EPoll::EPoll() {
}

$Class* EPoll::load$($String* name, bool initialize) {
	$loadClass(EPoll, name, initialize, &_EPoll_ClassInfo_, clinit$EPoll, allocate$EPoll);
	return class$;
}

$Class* EPoll::class$ = nullptr;

		} // ch
	} // nio
} // sun