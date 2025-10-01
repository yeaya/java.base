#include <sun/nio/ch/WEPoll.h>

#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/nio/ch/IOUtil.h>
#include <jcpp.h>

#undef SIZEOF_EPOLLEVENT
#undef EPOLLERR
#undef EPOLL_CTL_DEL
#undef EPOLLPRI
#undef EPOLLIN
#undef OFFSETOF_SOCK
#undef EPOLL_CTL_MOD
#undef EPOLL_CTL_ADD
#undef ADDRESS_SIZE
#undef EPOLLOUT
#undef OFFSETOF_EVENTS
#undef EPOLLHUP
#undef UNSAFE
#undef EPOLLONESHOT

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $IOUtil = ::sun::nio::ch::IOUtil;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _WEPoll_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(WEPoll, $assertionsDisabled)},
	{"UNSAFE", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WEPoll, UNSAFE)},
	{"ADDRESS_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WEPoll, ADDRESS_SIZE)},
	{"SIZEOF_EPOLLEVENT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WEPoll, SIZEOF_EPOLLEVENT)},
	{"OFFSETOF_EVENTS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WEPoll, OFFSETOF_EVENTS)},
	{"OFFSETOF_SOCK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WEPoll, OFFSETOF_SOCK)},
	{"EPOLL_CTL_ADD", "I", nullptr, $STATIC | $FINAL, $constField(WEPoll, EPOLL_CTL_ADD)},
	{"EPOLL_CTL_MOD", "I", nullptr, $STATIC | $FINAL, $constField(WEPoll, EPOLL_CTL_MOD)},
	{"EPOLL_CTL_DEL", "I", nullptr, $STATIC | $FINAL, $constField(WEPoll, EPOLL_CTL_DEL)},
	{"EPOLLIN", "I", nullptr, $STATIC | $FINAL, $constField(WEPoll, EPOLLIN)},
	{"EPOLLPRI", "I", nullptr, $STATIC | $FINAL, $constField(WEPoll, EPOLLPRI)},
	{"EPOLLOUT", "I", nullptr, $STATIC | $FINAL, $constField(WEPoll, EPOLLOUT)},
	{"EPOLLERR", "I", nullptr, $STATIC | $FINAL, $constField(WEPoll, EPOLLERR)},
	{"EPOLLHUP", "I", nullptr, $STATIC | $FINAL, $constField(WEPoll, EPOLLHUP)},
	{"EPOLLONESHOT", "I", nullptr, $STATIC | $FINAL, $constField(WEPoll, EPOLLONESHOT)},
	{}
};

$MethodInfo _WEPoll_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(WEPoll::*)()>(&WEPoll::init$))},
	{"allocatePollArray", "(I)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int32_t)>(&WEPoll::allocatePollArray))},
	{"close", "(J)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&WEPoll::close))},
	{"create", "()J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)()>(&WEPoll::create)), "java.io.IOException"},
	{"ctl", "(JIJI)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,int32_t,int64_t,int32_t)>(&WEPoll::ctl))},
	{"dataOffset", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&WEPoll::dataOffset))},
	{"eventSize", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&WEPoll::eventSize))},
	{"eventsOffset", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&WEPoll::eventsOffset))},
	{"freePollArray", "(J)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t)>(&WEPoll::freePollArray))},
	{"getDescriptor", "(J)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int64_t)>(&WEPoll::getDescriptor))},
	{"getEvent", "(JI)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int64_t,int32_t)>(&WEPoll::getEvent))},
	{"getEvents", "(J)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int64_t)>(&WEPoll::getEvents))},
	{"getSocket", "(J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&WEPoll::getSocket))},
	{"wait", "(JJII)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,int64_t,int32_t,int32_t)>(&WEPoll::wait)), "java.io.IOException"},
	{}
};

#define _METHOD_INDEX_close 2
#define _METHOD_INDEX_create 3
#define _METHOD_INDEX_ctl 4
#define _METHOD_INDEX_dataOffset 5
#define _METHOD_INDEX_eventSize 6
#define _METHOD_INDEX_eventsOffset 7
#define _METHOD_INDEX_wait 13

$ClassInfo _WEPoll_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.WEPoll",
	"java.lang.Object",
	nullptr,
	_WEPoll_FieldInfo_,
	_WEPoll_MethodInfo_
};

$Object* allocate$WEPoll($Class* clazz) {
	return $of($alloc(WEPoll));
}

bool WEPoll::$assertionsDisabled = false;
$Unsafe* WEPoll::UNSAFE = nullptr;
int32_t WEPoll::ADDRESS_SIZE = 0;

int32_t WEPoll::SIZEOF_EPOLLEVENT = 0;
int32_t WEPoll::OFFSETOF_EVENTS = 0;
int32_t WEPoll::OFFSETOF_SOCK = 0;

void WEPoll::init$() {
}

int64_t WEPoll::allocatePollArray(int32_t count) {
	$init(WEPoll);
	int64_t size = (int64_t)count * WEPoll::SIZEOF_EPOLLEVENT;
	int64_t base = $nc(WEPoll::UNSAFE)->allocateMemory(size);
	$nc(WEPoll::UNSAFE)->setMemory(base, size, (int8_t)0);
	return base;
}

void WEPoll::freePollArray(int64_t address) {
	$init(WEPoll);
	$nc(WEPoll::UNSAFE)->freeMemory(address);
}

int64_t WEPoll::getEvent(int64_t address, int32_t i) {
	$init(WEPoll);
	return address + (WEPoll::SIZEOF_EPOLLEVENT * i);
}

int64_t WEPoll::getSocket(int64_t eventAddress) {
	$init(WEPoll);
	if (WEPoll::ADDRESS_SIZE == 8) {
		return $nc(WEPoll::UNSAFE)->getLong(eventAddress + WEPoll::OFFSETOF_SOCK);
	} else {
		return $nc(WEPoll::UNSAFE)->getInt(eventAddress + WEPoll::OFFSETOF_SOCK);
	}
}

int32_t WEPoll::getDescriptor(int64_t eventAddress) {
	$init(WEPoll);
	int64_t s = getSocket(eventAddress);
	int32_t fd = (int32_t)s;
	if (!WEPoll::$assertionsDisabled && !(((int64_t)fd) == s)) {
		$throwNew($AssertionError);
	}
	return fd;
}

int32_t WEPoll::getEvents(int64_t eventAddress) {
	$init(WEPoll);
	return $nc(WEPoll::UNSAFE)->getInt(eventAddress + WEPoll::OFFSETOF_EVENTS);
}

int32_t WEPoll::eventSize() {
	$init(WEPoll);
	int32_t $ret = 0;
	$prepareNativeStatic(WEPoll, eventSize, int32_t);
	$ret = $invokeNativeStatic(WEPoll, eventSize);
	$finishNativeStatic();
	return $ret;
}

int32_t WEPoll::eventsOffset() {
	$init(WEPoll);
	int32_t $ret = 0;
	$prepareNativeStatic(WEPoll, eventsOffset, int32_t);
	$ret = $invokeNativeStatic(WEPoll, eventsOffset);
	$finishNativeStatic();
	return $ret;
}

int32_t WEPoll::dataOffset() {
	$init(WEPoll);
	int32_t $ret = 0;
	$prepareNativeStatic(WEPoll, dataOffset, int32_t);
	$ret = $invokeNativeStatic(WEPoll, dataOffset);
	$finishNativeStatic();
	return $ret;
}

int64_t WEPoll::create() {
	$init(WEPoll);
	int64_t $ret = 0;
	$prepareNativeStatic(WEPoll, create, int64_t);
	$ret = $invokeNativeStatic(WEPoll, create);
	$finishNativeStatic();
	return $ret;
}

int32_t WEPoll::ctl(int64_t h, int32_t opcode, int64_t s, int32_t events) {
	$init(WEPoll);
	int32_t $ret = 0;
	$prepareNativeStatic(WEPoll, ctl, int32_t, int64_t h, int32_t opcode, int64_t s, int32_t events);
	$ret = $invokeNativeStatic(WEPoll, ctl, h, opcode, s, events);
	$finishNativeStatic();
	return $ret;
}

int32_t WEPoll::wait(int64_t h, int64_t pollAddress, int32_t numfds, int32_t timeout) {
	$init(WEPoll);
	int32_t $ret = 0;
	$prepareNativeStatic(WEPoll, wait, int32_t, int64_t h, int64_t pollAddress, int32_t numfds, int32_t timeout);
	$ret = $invokeNativeStatic(WEPoll, wait, h, pollAddress, numfds, timeout);
	$finishNativeStatic();
	return $ret;
}

void WEPoll::close(int64_t h) {
	$init(WEPoll);
	$prepareNativeStatic(WEPoll, close, void, int64_t h);
	$invokeNativeStatic(WEPoll, close, h);
	$finishNativeStatic();
}

void clinit$WEPoll($Class* class$) {
	WEPoll::$assertionsDisabled = !WEPoll::class$->desiredAssertionStatus();
	$assignStatic(WEPoll::UNSAFE, $Unsafe::getUnsafe());
	WEPoll::ADDRESS_SIZE = $nc(WEPoll::UNSAFE)->addressSize();
	WEPoll::SIZEOF_EPOLLEVENT = WEPoll::eventSize();
	WEPoll::OFFSETOF_EVENTS = WEPoll::eventsOffset();
	WEPoll::OFFSETOF_SOCK = WEPoll::dataOffset();
	{
		$IOUtil::load();
	}
}

WEPoll::WEPoll() {
}

$Class* WEPoll::load$($String* name, bool initialize) {
	$loadClass(WEPoll, name, initialize, &_WEPoll_ClassInfo_, clinit$WEPoll, allocate$WEPoll);
	return class$;
}

$Class* WEPoll::class$ = nullptr;

		} // ch
	} // nio
} // sun