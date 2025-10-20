#include <sun/nio/ch/WindowsSelectorImpl$SubSelector.h>

#include <java/io/FileDescriptor.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/util/function/Consumer.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/nio/ch/Net.h>
#include <sun/nio/ch/PollArrayWrapper.h>
#include <sun/nio/ch/SelectionKeyImpl.h>
#include <sun/nio/ch/SocketChannelImpl.h>
#include <sun/nio/ch/WindowsSelectorImpl$FdMap.h>
#include <sun/nio/ch/WindowsSelectorImpl$MapEntry.h>
#include <sun/nio/ch/WindowsSelectorImpl.h>
#include <jcpp.h>

#undef POLLCONN
#undef POLLIN
#undef POLLOUT
#undef SIZEOF_FD_SET
#undef SIZE_POLLFD

using $FileDescriptor = ::java::io::FileDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $SelectableChannel = ::java::nio::channels::SelectableChannel;
using $Consumer = ::java::util::function::Consumer;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $Net = ::sun::nio::ch::Net;
using $PollArrayWrapper = ::sun::nio::ch::PollArrayWrapper;
using $SelectionKeyImpl = ::sun::nio::ch::SelectionKeyImpl;
using $SelectorImpl = ::sun::nio::ch::SelectorImpl;
using $SocketChannelImpl = ::sun::nio::ch::SocketChannelImpl;
using $WindowsSelectorImpl = ::sun::nio::ch::WindowsSelectorImpl;
using $WindowsSelectorImpl$FdMap = ::sun::nio::ch::WindowsSelectorImpl$FdMap;
using $WindowsSelectorImpl$MapEntry = ::sun::nio::ch::WindowsSelectorImpl$MapEntry;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _WindowsSelectorImpl$SubSelector_FieldInfo_[] = {
	{"this$0", "Lsun/nio/ch/WindowsSelectorImpl;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsSelectorImpl$SubSelector, this$0)},
	{"pollArrayIndex", "I", nullptr, $PRIVATE | $FINAL, $field(WindowsSelectorImpl$SubSelector, pollArrayIndex)},
	{"readFds", "[I", nullptr, $PRIVATE | $FINAL, $field(WindowsSelectorImpl$SubSelector, readFds)},
	{"writeFds", "[I", nullptr, $PRIVATE | $FINAL, $field(WindowsSelectorImpl$SubSelector, writeFds)},
	{"exceptFds", "[I", nullptr, $PRIVATE | $FINAL, $field(WindowsSelectorImpl$SubSelector, exceptFds)},
	{"fdsBuffer", "J", nullptr, $PRIVATE | $FINAL, $field(WindowsSelectorImpl$SubSelector, fdsBuffer)},
	{}
};

$MethodInfo _WindowsSelectorImpl$SubSelector_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/ch/WindowsSelectorImpl;)V", nullptr, $PRIVATE, $method(static_cast<void(WindowsSelectorImpl$SubSelector::*)($WindowsSelectorImpl*)>(&WindowsSelectorImpl$SubSelector::init$))},
	{"<init>", "(Lsun/nio/ch/WindowsSelectorImpl;I)V", nullptr, $PRIVATE, $method(static_cast<void(WindowsSelectorImpl$SubSelector::*)($WindowsSelectorImpl*,int32_t)>(&WindowsSelectorImpl$SubSelector::init$))},
	{"freeFDSetBuffer", "()V", nullptr, $PRIVATE, $method(static_cast<void(WindowsSelectorImpl$SubSelector::*)()>(&WindowsSelectorImpl$SubSelector::freeFDSetBuffer))},
	{"poll", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(WindowsSelectorImpl$SubSelector::*)()>(&WindowsSelectorImpl$SubSelector::poll)), "java.io.IOException"},
	{"poll", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(WindowsSelectorImpl$SubSelector::*)(int32_t)>(&WindowsSelectorImpl$SubSelector::poll)), "java.io.IOException"},
	{"poll0", "(JI[I[I[IJJ)I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int32_t(WindowsSelectorImpl$SubSelector::*)(int64_t,int32_t,$ints*,$ints*,$ints*,int64_t,int64_t)>(&WindowsSelectorImpl$SubSelector::poll0))},
	{"processFDSet", "(JLjava/util/function/Consumer;[IIZ)I", "(JLjava/util/function/Consumer<Ljava/nio/channels/SelectionKey;>;[IIZ)I", $PRIVATE, $method(static_cast<int32_t(WindowsSelectorImpl$SubSelector::*)(int64_t,$Consumer*,$ints*,int32_t,bool)>(&WindowsSelectorImpl$SubSelector::processFDSet)), "java.io.IOException"},
	{"processSelectedKeys", "(JLjava/util/function/Consumer;)I", "(JLjava/util/function/Consumer<Ljava/nio/channels/SelectionKey;>;)I", $PRIVATE, $method(static_cast<int32_t(WindowsSelectorImpl$SubSelector::*)(int64_t,$Consumer*)>(&WindowsSelectorImpl$SubSelector::processSelectedKeys)), "java.io.IOException"},
	{}
};

#define _METHOD_INDEX_poll0 5

$InnerClassInfo _WindowsSelectorImpl$SubSelector_InnerClassesInfo_[] = {
	{"sun.nio.ch.WindowsSelectorImpl$SubSelector", "sun.nio.ch.WindowsSelectorImpl", "SubSelector", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _WindowsSelectorImpl$SubSelector_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.nio.ch.WindowsSelectorImpl$SubSelector",
	"java.lang.Object",
	nullptr,
	_WindowsSelectorImpl$SubSelector_FieldInfo_,
	_WindowsSelectorImpl$SubSelector_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsSelectorImpl$SubSelector_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.WindowsSelectorImpl"
};

$Object* allocate$WindowsSelectorImpl$SubSelector($Class* clazz) {
	return $of($alloc(WindowsSelectorImpl$SubSelector));
}

void WindowsSelectorImpl$SubSelector::init$($WindowsSelectorImpl* this$0) {
	$set(this, this$0, this$0);
	$set(this, readFds, $new($ints, 1024 + 1));
	$set(this, writeFds, $new($ints, 1024 + 1));
	$set(this, exceptFds, $new($ints, 1024 + 1));
	$init($WindowsSelectorImpl);
	this->fdsBuffer = $nc($WindowsSelectorImpl::unsafe)->allocateMemory($WindowsSelectorImpl::SIZEOF_FD_SET * 3);
	this->pollArrayIndex = 0;
}

void WindowsSelectorImpl$SubSelector::init$($WindowsSelectorImpl* this$0, int32_t threadIndex) {
	$set(this, this$0, this$0);
	$set(this, readFds, $new($ints, 1024 + 1));
	$set(this, writeFds, $new($ints, 1024 + 1));
	$set(this, exceptFds, $new($ints, 1024 + 1));
	$init($WindowsSelectorImpl);
	this->fdsBuffer = $nc($WindowsSelectorImpl::unsafe)->allocateMemory($WindowsSelectorImpl::SIZEOF_FD_SET * 3);
	this->pollArrayIndex = (threadIndex + 1) * 1024;
}

int32_t WindowsSelectorImpl$SubSelector::poll() {
	return poll0($nc(this->this$0->pollWrapper)->pollArrayAddress, $Math::min(this->this$0->totalChannels, 1024), this->readFds, this->writeFds, this->exceptFds, this->this$0->timeout, this->fdsBuffer);
}

int32_t WindowsSelectorImpl$SubSelector::poll(int32_t index) {
	$init($PollArrayWrapper);
	return poll0($nc(this->this$0->pollWrapper)->pollArrayAddress + (this->pollArrayIndex * $PollArrayWrapper::SIZE_POLLFD), $Math::min(1024, this->this$0->totalChannels - (index + 1) * 1024), this->readFds, this->writeFds, this->exceptFds, this->this$0->timeout, this->fdsBuffer);
}

int32_t WindowsSelectorImpl$SubSelector::poll0(int64_t pollAddress, int32_t numfds, $ints* readFds, $ints* writeFds, $ints* exceptFds, int64_t timeout, int64_t fdsBuffer) {
	int32_t $ret = 0;
	$prepareNative(WindowsSelectorImpl$SubSelector, poll0, int32_t, int64_t pollAddress, int32_t numfds, $ints* readFds, $ints* writeFds, $ints* exceptFds, int64_t timeout, int64_t fdsBuffer);
	$ret = $invokeNative(WindowsSelectorImpl$SubSelector, poll0, pollAddress, numfds, readFds, writeFds, exceptFds, timeout, fdsBuffer);
	$finishNative();
	return $ret;
}

int32_t WindowsSelectorImpl$SubSelector::processSelectedKeys(int64_t updateCount, $Consumer* action) {
	int32_t numKeysUpdated = 0;
	$init($Net);
	numKeysUpdated += processFDSet(updateCount, action, this->readFds, $Net::POLLIN, false);
	numKeysUpdated += processFDSet(updateCount, action, this->writeFds, $Net::POLLCONN | $Net::POLLOUT, false);
	numKeysUpdated += processFDSet(updateCount, action, this->exceptFds, ($Net::POLLIN | $Net::POLLCONN) | $Net::POLLOUT, true);
	return numKeysUpdated;
}

int32_t WindowsSelectorImpl$SubSelector::processFDSet(int64_t updateCount, $Consumer* action, $ints* fds, int32_t rOps, bool isExceptFds) {
	$useLocalCurrentObjectStackCache();
	int32_t numKeysUpdated = 0;
	for (int32_t i = 1; i <= $nc(fds)->get(0); ++i) {
		int32_t desc = fds->get(i);
		if (desc == this->this$0->wakeupSourceFd) {
			$synchronized(this->this$0->interruptLock) {
				this->this$0->interruptTriggered = true;
			}
			continue;
		}
		$var($WindowsSelectorImpl$MapEntry, me, $nc(this->this$0->fdMap)->get(desc));
		if (me == nullptr) {
			continue;
		}
		$var($SelectionKeyImpl, ski, $nc(me)->ski);
		$var($SelectableChannel, sc, $nc(ski)->channel());
		bool var$0 = isExceptFds && ($instanceOf($SocketChannelImpl, sc)) && $nc(($cast($SocketChannelImpl, sc)))->isNetSocket();
		if (var$0 && $Net::discardOOB($(ski->getFD()))) {
			continue;
		}
		int32_t updated = this->this$0->processReadyEvents(rOps, ski, action);
		if (updated > 0 && me->updateCount != updateCount) {
			me->updateCount = updateCount;
			++numKeysUpdated;
		}
	}
	return numKeysUpdated;
}

void WindowsSelectorImpl$SubSelector::freeFDSetBuffer() {
	$init($WindowsSelectorImpl);
	$nc($WindowsSelectorImpl::unsafe)->freeMemory(this->fdsBuffer);
}

WindowsSelectorImpl$SubSelector::WindowsSelectorImpl$SubSelector() {
}

$Class* WindowsSelectorImpl$SubSelector::load$($String* name, bool initialize) {
	$loadClass(WindowsSelectorImpl$SubSelector, name, initialize, &_WindowsSelectorImpl$SubSelector_ClassInfo_, allocate$WindowsSelectorImpl$SubSelector);
	return class$;
}

$Class* WindowsSelectorImpl$SubSelector::class$ = nullptr;

		} // ch
	} // nio
} // sun