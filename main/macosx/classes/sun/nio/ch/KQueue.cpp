#include <sun/nio/ch/KQueue.h>

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

#undef EVFILT_WRITE
#undef EV_ONESHOT
#undef EV_ADD
#undef EV_CLEAR
#undef EVFILT_READ
#undef SIZEOF_KQUEUEEVENT
#undef OFFSET_IDENT
#undef EV_DELETE
#undef OFFSET_FLAGS
#undef OFFSET_FILTER

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $IOUtil = ::sun::nio::ch::IOUtil;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _KQueue_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(KQueue, unsafe)},
	{"SIZEOF_KQUEUEEVENT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(KQueue, SIZEOF_KQUEUEEVENT)},
	{"OFFSET_IDENT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(KQueue, OFFSET_IDENT)},
	{"OFFSET_FILTER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(KQueue, OFFSET_FILTER)},
	{"OFFSET_FLAGS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(KQueue, OFFSET_FLAGS)},
	{"EVFILT_READ", "I", nullptr, $STATIC | $FINAL, $constField(KQueue, EVFILT_READ)},
	{"EVFILT_WRITE", "I", nullptr, $STATIC | $FINAL, $constField(KQueue, EVFILT_WRITE)},
	{"EV_ADD", "I", nullptr, $STATIC | $FINAL, $constField(KQueue, EV_ADD)},
	{"EV_DELETE", "I", nullptr, $STATIC | $FINAL, $constField(KQueue, EV_DELETE)},
	{"EV_ONESHOT", "I", nullptr, $STATIC | $FINAL, $constField(KQueue, EV_ONESHOT)},
	{"EV_CLEAR", "I", nullptr, $STATIC | $FINAL, $constField(KQueue, EV_CLEAR)},
	{}
};

$MethodInfo _KQueue_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(KQueue::*)()>(&KQueue::init$))},
	{"allocatePollArray", "(I)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int32_t)>(&KQueue::allocatePollArray))},
	{"create", "()I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&KQueue::create)), "java.io.IOException"},
	{"filterOffset", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&KQueue::filterOffset))},
	{"flagsOffset", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&KQueue::flagsOffset))},
	{"freePollArray", "(J)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t)>(&KQueue::freePollArray))},
	{"getDescriptor", "(J)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int64_t)>(&KQueue::getDescriptor))},
	{"getEvent", "(JI)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int64_t,int32_t)>(&KQueue::getEvent))},
	{"getFilter", "(J)S", nullptr, $STATIC, $method(static_cast<int16_t(*)(int64_t)>(&KQueue::getFilter))},
	{"getFlags", "(J)S", nullptr, $STATIC, $method(static_cast<int16_t(*)(int64_t)>(&KQueue::getFlags))},
	{"identOffset", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&KQueue::identOffset))},
	{"keventSize", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&KQueue::keventSize))},
	{"poll", "(IJIJ)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t,int64_t,int32_t,int64_t)>(&KQueue::poll)), "java.io.IOException"},
	{"register", "(IIII)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t,int32_t,int32_t,int32_t)>(&KQueue::register$))},
	{}
};

#define _METHOD_INDEX_create 2
#define _METHOD_INDEX_filterOffset 3
#define _METHOD_INDEX_flagsOffset 4
#define _METHOD_INDEX_identOffset 10
#define _METHOD_INDEX_keventSize 11
#define _METHOD_INDEX_poll 12
#define _METHOD_INDEX_register$ 13

$ClassInfo _KQueue_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.KQueue",
	"java.lang.Object",
	nullptr,
	_KQueue_FieldInfo_,
	_KQueue_MethodInfo_
};

$Object* allocate$KQueue($Class* clazz) {
	return $of($alloc(KQueue));
}

$Unsafe* KQueue::unsafe = nullptr;

int32_t KQueue::SIZEOF_KQUEUEEVENT = 0;
int32_t KQueue::OFFSET_IDENT = 0;
int32_t KQueue::OFFSET_FILTER = 0;
int32_t KQueue::OFFSET_FLAGS = 0;

void KQueue::init$() {
}

int64_t KQueue::allocatePollArray(int32_t count) {
	$init(KQueue);
	return $nc(KQueue::unsafe)->allocateMemory(count * KQueue::SIZEOF_KQUEUEEVENT);
}

void KQueue::freePollArray(int64_t address) {
	$init(KQueue);
	$nc(KQueue::unsafe)->freeMemory(address);
}

int64_t KQueue::getEvent(int64_t address, int32_t i) {
	$init(KQueue);
	return address + (KQueue::SIZEOF_KQUEUEEVENT * i);
}

int32_t KQueue::getDescriptor(int64_t address) {
	$init(KQueue);
	return $nc(KQueue::unsafe)->getInt(address + KQueue::OFFSET_IDENT);
}

int16_t KQueue::getFilter(int64_t address) {
	$init(KQueue);
	return $nc(KQueue::unsafe)->getShort(address + KQueue::OFFSET_FILTER);
}

int16_t KQueue::getFlags(int64_t address) {
	$init(KQueue);
	return $nc(KQueue::unsafe)->getShort(address + KQueue::OFFSET_FLAGS);
}

int32_t KQueue::keventSize() {
	$init(KQueue);
	int32_t $ret = 0;
	$prepareNativeStatic(KQueue, keventSize, int32_t);
	$ret = $invokeNativeStatic(KQueue, keventSize);
	$finishNativeStatic();
	return $ret;
}

int32_t KQueue::identOffset() {
	$init(KQueue);
	int32_t $ret = 0;
	$prepareNativeStatic(KQueue, identOffset, int32_t);
	$ret = $invokeNativeStatic(KQueue, identOffset);
	$finishNativeStatic();
	return $ret;
}

int32_t KQueue::filterOffset() {
	$init(KQueue);
	int32_t $ret = 0;
	$prepareNativeStatic(KQueue, filterOffset, int32_t);
	$ret = $invokeNativeStatic(KQueue, filterOffset);
	$finishNativeStatic();
	return $ret;
}

int32_t KQueue::flagsOffset() {
	$init(KQueue);
	int32_t $ret = 0;
	$prepareNativeStatic(KQueue, flagsOffset, int32_t);
	$ret = $invokeNativeStatic(KQueue, flagsOffset);
	$finishNativeStatic();
	return $ret;
}

int32_t KQueue::create() {
	$init(KQueue);
	int32_t $ret = 0;
	$prepareNativeStatic(KQueue, create, int32_t);
	$ret = $invokeNativeStatic(KQueue, create);
	$finishNativeStatic();
	return $ret;
}

int32_t KQueue::register$(int32_t kqfd, int32_t fd, int32_t filter, int32_t flags) {
	$init(KQueue);
	int32_t $ret = 0;
	$prepareNativeStatic(KQueue, register$, int32_t, int32_t kqfd, int32_t fd, int32_t filter, int32_t flags);
	$ret = $invokeNativeStatic(KQueue, register$, kqfd, fd, filter, flags);
	$finishNativeStatic();
	return $ret;
}

int32_t KQueue::poll(int32_t kqfd, int64_t pollAddress, int32_t nevents, int64_t timeout) {
	$init(KQueue);
	int32_t $ret = 0;
	$prepareNativeStatic(KQueue, poll, int32_t, int32_t kqfd, int64_t pollAddress, int32_t nevents, int64_t timeout);
	$ret = $invokeNativeStatic(KQueue, poll, kqfd, pollAddress, nevents, timeout);
	$finishNativeStatic();
	return $ret;
}

void clinit$KQueue($Class* class$) {
	$assignStatic(KQueue::unsafe, $Unsafe::getUnsafe());
	KQueue::SIZEOF_KQUEUEEVENT = KQueue::keventSize();
	KQueue::OFFSET_IDENT = KQueue::identOffset();
	KQueue::OFFSET_FILTER = KQueue::filterOffset();
	KQueue::OFFSET_FLAGS = KQueue::flagsOffset();
	{
		$IOUtil::load();
	}
}

KQueue::KQueue() {
}

$Class* KQueue::load$($String* name, bool initialize) {
	$loadClass(KQueue, name, initialize, &_KQueue_ClassInfo_, clinit$KQueue, allocate$KQueue);
	return class$;
}

$Class* KQueue::class$ = nullptr;

		} // ch
	} // nio
} // sun