#include <sun/nio/ch/WindowsSelectorImpl.h>
#include <java/io/IOException.h>
#include <java/lang/AssertionError.h>
#include <java/nio/channels/ClosedSelectorException.h>
#include <java/nio/channels/Pipe$SinkChannel.h>
#include <java/nio/channels/Pipe$SourceChannel.h>
#include <java/nio/channels/Pipe.h>
#include <java/nio/channels/Selector.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <java/nio/channels/spi/AbstractSelector.h>
#include <java/nio/channels/spi/SelectorProvider.h>
#include <java/util/ArrayDeque.h>
#include <java/util/ArrayList.h>
#include <java/util/Deque.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/function/Consumer.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/nio/ch/IOUtil.h>
#include <sun/nio/ch/PipeImpl.h>
#include <sun/nio/ch/PollArrayWrapper.h>
#include <sun/nio/ch/SelChImpl.h>
#include <sun/nio/ch/SelectionKeyImpl.h>
#include <sun/nio/ch/SelectorImpl.h>
#include <sun/nio/ch/WindowsSelectorImpl$FdMap.h>
#include <sun/nio/ch/WindowsSelectorImpl$FinishLock.h>
#include <sun/nio/ch/WindowsSelectorImpl$MapEntry.h>
#include <sun/nio/ch/WindowsSelectorImpl$SelectThread.h>
#include <sun/nio/ch/WindowsSelectorImpl$StartLock.h>
#include <sun/nio/ch/WindowsSelectorImpl$SubSelector.h>
#include <jcpp.h>

#undef INIT_CAP
#undef MAX_SELECTABLE_FDS
#undef SIZEOF_FD_SET

using $SelectionKeyImplArray = $Array<::sun::nio::ch::SelectionKeyImpl>;
using $IOException = ::java::io::IOException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClosedSelectorException = ::java::nio::channels::ClosedSelectorException;
using $Selector = ::java::nio::channels::Selector;
using $SelectorProvider = ::java::nio::channels::spi::SelectorProvider;
using $ArrayDeque = ::java::util::ArrayDeque;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $Consumer = ::java::util::function::Consumer;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $IOUtil = ::sun::nio::ch::IOUtil;
using $PipeImpl = ::sun::nio::ch::PipeImpl;
using $PollArrayWrapper = ::sun::nio::ch::PollArrayWrapper;
using $SelChImpl = ::sun::nio::ch::SelChImpl;
using $SelectionKeyImpl = ::sun::nio::ch::SelectionKeyImpl;
using $SelectorImpl = ::sun::nio::ch::SelectorImpl;
using $WindowsSelectorImpl$FdMap = ::sun::nio::ch::WindowsSelectorImpl$FdMap;
using $WindowsSelectorImpl$FinishLock = ::sun::nio::ch::WindowsSelectorImpl$FinishLock;
using $WindowsSelectorImpl$MapEntry = ::sun::nio::ch::WindowsSelectorImpl$MapEntry;
using $WindowsSelectorImpl$SelectThread = ::sun::nio::ch::WindowsSelectorImpl$SelectThread;
using $WindowsSelectorImpl$StartLock = ::sun::nio::ch::WindowsSelectorImpl$StartLock;
using $WindowsSelectorImpl$SubSelector = ::sun::nio::ch::WindowsSelectorImpl$SubSelector;

namespace sun {
	namespace nio {
		namespace ch {

bool WindowsSelectorImpl::$assertionsDisabled = false;
$Unsafe* WindowsSelectorImpl::unsafe = nullptr;
int32_t WindowsSelectorImpl::addressSize = 0;
int64_t WindowsSelectorImpl::SIZEOF_FD_SET = 0;

int32_t WindowsSelectorImpl::dependsArch(int32_t value32, int32_t value64) {
	$init(WindowsSelectorImpl);
	return (WindowsSelectorImpl::addressSize == 4) ? value32 : value64;
}

void WindowsSelectorImpl::init$($SelectorProvider* sp) {
	$useLocalObjectStack();
	$SelectorImpl::init$(sp);
	$set(this, channelArray, $new($SelectionKeyImplArray, WindowsSelectorImpl::INIT_CAP));
	this->totalChannels = 1;
	this->threadsCount = 0;
	$set(this, threads, $new($ArrayList));
	$set(this, fdMap, $new($WindowsSelectorImpl$FdMap));
	$set(this, subSelector, $new($WindowsSelectorImpl$SubSelector, this));
	$set(this, interruptLock, $new($Object));
	$set(this, updateLock, $new($Object));
	$set(this, newKeys, $new($ArrayDeque));
	$set(this, updateKeys, $new($ArrayDeque));
	$set(this, startLock, $new($WindowsSelectorImpl$StartLock, this));
	$set(this, finishLock, $new($WindowsSelectorImpl$FinishLock, this));
	this->updateCount = 0;
	$set(this, pollWrapper, $new($PollArrayWrapper, WindowsSelectorImpl::INIT_CAP));
	$set(this, wakeupPipe, $new($PipeImpl, sp, false));
	this->wakeupSourceFd = $$sure($SelChImpl, this->wakeupPipe->source())->getFDVal();
	this->wakeupSinkFd = $$sure($SelChImpl, this->wakeupPipe->sink())->getFDVal();
	this->pollWrapper->addWakeupSocket(this->wakeupSourceFd, 0);
}

void WindowsSelectorImpl::ensureOpen() {
	if (!isOpen()) {
		$throwNew($ClosedSelectorException);
	}
}

int32_t WindowsSelectorImpl::doSelect($Consumer* action, int64_t timeout) {
	if (!WindowsSelectorImpl::$assertionsDisabled && !$Thread::holdsLock(this)) {
		$throwNew($AssertionError);
	}
	this->timeout = timeout;
	processUpdateQueue();
	processDeregisterQueue();
	if (this->interruptTriggered) {
		resetWakeupSocket();
		return 0;
	}
	adjustThreadsCount();
	this->finishLock->reset();
	this->startLock->startThreads();
	$var($Throwable, var$0, nullptr);
	try {
		begin();
		try {
			this->subSelector->poll();
		} catch ($IOException& e) {
			this->finishLock->setException(e);
		}
		if (this->threads->size() > 0) {
			this->finishLock->waitForHelperThreads();
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		end();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	this->finishLock->checkForException();
	processDeregisterQueue();
	int32_t updated = updateSelectedKeys(action);
	resetWakeupSocket();
	return updated;
}

void WindowsSelectorImpl::processUpdateQueue() {
	$useLocalObjectStack();
	if (!WindowsSelectorImpl::$assertionsDisabled && !$Thread::holdsLock(this)) {
		$throwNew($AssertionError);
	}
	$synchronized(this->updateLock) {
		$var($SelectionKeyImpl, ski, nullptr);
		while (($assign(ski, $cast($SelectionKeyImpl, this->newKeys->pollFirst()))) != nullptr) {
			if ($nc(ski)->isValid()) {
				growIfNeeded();
				$nc(this->channelArray)->set(this->totalChannels, ski);
				ski->setIndex(this->totalChannels);
				$nc(this->pollWrapper)->putEntry(this->totalChannels, ski);
				++this->totalChannels;
				$var($WindowsSelectorImpl$MapEntry, previous, this->fdMap->put(ski));
				if (!WindowsSelectorImpl::$assertionsDisabled && !(previous == nullptr)) {
					$throwNew($AssertionError);
				}
			}
		}
		while (($assign(ski, $cast($SelectionKeyImpl, this->updateKeys->pollFirst()))) != nullptr) {
			int32_t events = $nc(ski)->translateInterestOps();
			int32_t fd = ski->getFDVal();
			bool var$0 = ski->isValid();
			if (var$0 && this->fdMap->containsKey($($Integer::valueOf(fd)))) {
				int32_t index = ski->getIndex();
				if (!WindowsSelectorImpl::$assertionsDisabled && !(index >= 0 && index < this->totalChannels)) {
					$throwNew($AssertionError);
				}
				$nc(this->pollWrapper)->putEventOps(index, events);
			}
		}
	}
}

void WindowsSelectorImpl::adjustThreadsCount() {
	$useLocalObjectStack();
	if (this->threadsCount > this->threads->size()) {
		for (int32_t i = this->threads->size(); i < this->threadsCount; ++i) {
			$var($WindowsSelectorImpl$SelectThread, newThread, $new($WindowsSelectorImpl$SelectThread, this, i));
			this->threads->add(newThread);
			newThread->setDaemon(true);
			newThread->start();
		}
	} else if (this->threadsCount < this->threads->size()) {
		for (int32_t i = this->threads->size() - 1; i >= this->threadsCount; --i) {
			$$sure($WindowsSelectorImpl$SelectThread, this->threads->remove(i))->makeZombie();
		}
	}
}

void WindowsSelectorImpl::setWakeupSocket() {
	setWakeupSocket0(this->wakeupSinkFd);
}

void WindowsSelectorImpl::setWakeupSocket0(int32_t wakeupSinkFd) {
	$prepareNative(setWakeupSocket0, void, int32_t wakeupSinkFd);
	$invokeNative(wakeupSinkFd);
	$finishNative();
}

void WindowsSelectorImpl::resetWakeupSocket() {
	$synchronized(this->interruptLock) {
		if (this->interruptTriggered == false) {
			return;
		}
		resetWakeupSocket0(this->wakeupSourceFd);
		this->interruptTriggered = false;
	}
}

void WindowsSelectorImpl::resetWakeupSocket0(int32_t wakeupSourceFd) {
	$prepareNative(resetWakeupSocket0, void, int32_t wakeupSourceFd);
	$invokeNative(wakeupSourceFd);
	$finishNative();
}

int32_t WindowsSelectorImpl::updateSelectedKeys($Consumer* action) {
	$useLocalObjectStack();
	++this->updateCount;
	int32_t numKeysUpdated = 0;
	numKeysUpdated += this->subSelector->processSelectedKeys(this->updateCount, action);
	{
		$var($Iterator, i$, this->threads->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($WindowsSelectorImpl$SelectThread, t, $cast($WindowsSelectorImpl$SelectThread, i$->next()));
			{
				numKeysUpdated += $nc($nc(t)->subSelector)->processSelectedKeys(this->updateCount, action);
			}
		}
	}
	return numKeysUpdated;
}

void WindowsSelectorImpl::implClose() {
	$useLocalObjectStack();
	if (!WindowsSelectorImpl::$assertionsDisabled && ! !isOpen()) {
		$throwNew($AssertionError);
	}
	if (!WindowsSelectorImpl::$assertionsDisabled && !$Thread::holdsLock(this)) {
		$throwNew($AssertionError);
	}
	$synchronized(this->interruptLock) {
		this->interruptTriggered = true;
	}
	$$nc(this->wakeupPipe->sink())->close();
	$$nc(this->wakeupPipe->source())->close();
	$nc(this->pollWrapper)->free();
	{
		$var($Iterator, i$, this->threads->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($WindowsSelectorImpl$SelectThread, t, $cast($WindowsSelectorImpl$SelectThread, i$->next()));
			$nc(t)->makeZombie();
		}
	}
	this->startLock->startThreads();
	this->subSelector->freeFDSetBuffer();
}

void WindowsSelectorImpl::implRegister($SelectionKeyImpl* ski) {
	ensureOpen();
	$synchronized(this->updateLock) {
		this->newKeys->addLast(ski);
	}
}

void WindowsSelectorImpl::growIfNeeded() {
	if ($nc(this->channelArray)->length == this->totalChannels) {
		int32_t newSize = this->totalChannels * 2;
		$var($SelectionKeyImplArray, temp, $new($SelectionKeyImplArray, newSize));
		$System::arraycopy(this->channelArray, 1, temp, 1, this->totalChannels - 1);
		$set(this, channelArray, temp);
		$nc(this->pollWrapper)->grow(newSize);
	}
	if ($mod(this->totalChannels, WindowsSelectorImpl::MAX_SELECTABLE_FDS) == 0) {
		$nc(this->pollWrapper)->addWakeupSocket(this->wakeupSourceFd, this->totalChannels);
		++this->totalChannels;
		++this->threadsCount;
	}
}

void WindowsSelectorImpl::implDereg($SelectionKeyImpl* ski) {
	if (!WindowsSelectorImpl::$assertionsDisabled && ! !$nc(ski)->isValid()) {
		$throwNew($AssertionError);
	}
	if (!WindowsSelectorImpl::$assertionsDisabled && !$Thread::holdsLock(this)) {
		$throwNew($AssertionError);
	}
	if (this->fdMap->remove(ski) != nullptr) {
		int32_t i = $nc(ski)->getIndex();
		if (!WindowsSelectorImpl::$assertionsDisabled && !(i >= 0)) {
			$throwNew($AssertionError);
		}
		if (i != this->totalChannels - 1) {
			$var($SelectionKeyImpl, endChannel, $nc(this->channelArray)->get(this->totalChannels - 1));
			this->channelArray->set(i, endChannel);
			$nc(endChannel)->setIndex(i);
			$nc(this->pollWrapper)->replaceEntry(this->pollWrapper, this->totalChannels - 1, this->pollWrapper, i);
		}
		ski->setIndex(-1);
		$nc(this->channelArray)->set(this->totalChannels - 1, nullptr);
		--this->totalChannels;
		if (this->totalChannels != 1 && $mod(this->totalChannels, WindowsSelectorImpl::MAX_SELECTABLE_FDS) == 1) {
			--this->totalChannels;
			--this->threadsCount;
		}
	}
}

void WindowsSelectorImpl::setEventOps($SelectionKeyImpl* ski) {
	ensureOpen();
	$synchronized(this->updateLock) {
		this->updateKeys->addLast(ski);
	}
}

$Selector* WindowsSelectorImpl::wakeup() {
	$synchronized(this->interruptLock) {
		if (!this->interruptTriggered) {
			setWakeupSocket();
			this->interruptTriggered = true;
		}
	}
	return this;
}

void WindowsSelectorImpl::clinit$($Class* clazz) {
	WindowsSelectorImpl::$assertionsDisabled = !WindowsSelectorImpl::class$->desiredAssertionStatus();
	$assignStatic(WindowsSelectorImpl::unsafe, $Unsafe::getUnsafe());
	WindowsSelectorImpl::addressSize = $nc(WindowsSelectorImpl::unsafe)->addressSize();
	WindowsSelectorImpl::SIZEOF_FD_SET = WindowsSelectorImpl::dependsArch(4 + WindowsSelectorImpl::MAX_SELECTABLE_FDS * 4, 4 + WindowsSelectorImpl::MAX_SELECTABLE_FDS * 8 + 4);
	{
		$IOUtil::load();
	}
}

WindowsSelectorImpl::WindowsSelectorImpl() {
}

$Class* WindowsSelectorImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(WindowsSelectorImpl, $assertionsDisabled)},
		{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WindowsSelectorImpl, unsafe)},
		{"addressSize", "I", nullptr, $PRIVATE | $STATIC, $staticField(WindowsSelectorImpl, addressSize)},
		{"INIT_CAP", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsSelectorImpl, INIT_CAP)},
		{"MAX_SELECTABLE_FDS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsSelectorImpl, MAX_SELECTABLE_FDS)},
		{"SIZEOF_FD_SET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WindowsSelectorImpl, SIZEOF_FD_SET)},
		{"channelArray", "[Lsun/nio/ch/SelectionKeyImpl;", nullptr, $PRIVATE, $field(WindowsSelectorImpl, channelArray)},
		{"pollWrapper", "Lsun/nio/ch/PollArrayWrapper;", nullptr, $PRIVATE, $field(WindowsSelectorImpl, pollWrapper)},
		{"totalChannels", "I", nullptr, $PRIVATE, $field(WindowsSelectorImpl, totalChannels)},
		{"threadsCount", "I", nullptr, $PRIVATE, $field(WindowsSelectorImpl, threadsCount)},
		{"threads", "Ljava/util/List;", "Ljava/util/List<Lsun/nio/ch/WindowsSelectorImpl$SelectThread;>;", $PRIVATE | $FINAL, $field(WindowsSelectorImpl, threads)},
		{"wakeupPipe", "Ljava/nio/channels/Pipe;", nullptr, $PRIVATE | $FINAL, $field(WindowsSelectorImpl, wakeupPipe)},
		{"wakeupSourceFd", "I", nullptr, $PRIVATE | $FINAL, $field(WindowsSelectorImpl, wakeupSourceFd)},
		{"wakeupSinkFd", "I", nullptr, $PRIVATE | $FINAL, $field(WindowsSelectorImpl, wakeupSinkFd)},
		{"fdMap", "Lsun/nio/ch/WindowsSelectorImpl$FdMap;", nullptr, $PRIVATE | $FINAL, $field(WindowsSelectorImpl, fdMap)},
		{"subSelector", "Lsun/nio/ch/WindowsSelectorImpl$SubSelector;", nullptr, $PRIVATE | $FINAL, $field(WindowsSelectorImpl, subSelector)},
		{"timeout", "J", nullptr, $PRIVATE, $field(WindowsSelectorImpl, timeout)},
		{"interruptLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(WindowsSelectorImpl, interruptLock)},
		{"interruptTriggered", "Z", nullptr, $PRIVATE | $VOLATILE, $field(WindowsSelectorImpl, interruptTriggered)},
		{"updateLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(WindowsSelectorImpl, updateLock)},
		{"newKeys", "Ljava/util/Deque;", "Ljava/util/Deque<Lsun/nio/ch/SelectionKeyImpl;>;", $PRIVATE | $FINAL, $field(WindowsSelectorImpl, newKeys)},
		{"updateKeys", "Ljava/util/Deque;", "Ljava/util/Deque<Lsun/nio/ch/SelectionKeyImpl;>;", $PRIVATE | $FINAL, $field(WindowsSelectorImpl, updateKeys)},
		{"startLock", "Lsun/nio/ch/WindowsSelectorImpl$StartLock;", nullptr, $PRIVATE | $FINAL, $field(WindowsSelectorImpl, startLock)},
		{"finishLock", "Lsun/nio/ch/WindowsSelectorImpl$FinishLock;", nullptr, $PRIVATE | $FINAL, $field(WindowsSelectorImpl, finishLock)},
		{"updateCount", "J", nullptr, $PRIVATE, $field(WindowsSelectorImpl, updateCount)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/channels/spi/SelectorProvider;)V", nullptr, 0, $method(WindowsSelectorImpl, init$, void, $SelectorProvider*), "java.io.IOException"},
		{"adjustThreadsCount", "()V", nullptr, $PRIVATE, $method(WindowsSelectorImpl, adjustThreadsCount, void)},
		{"dependsArch", "(II)I", nullptr, $PRIVATE | $STATIC, $staticMethod(WindowsSelectorImpl, dependsArch, int32_t, int32_t, int32_t)},
		{"doSelect", "(Ljava/util/function/Consumer;J)I", "(Ljava/util/function/Consumer<Ljava/nio/channels/SelectionKey;>;J)I", $PROTECTED, $virtualMethod(WindowsSelectorImpl, doSelect, int32_t, $Consumer*, int64_t), "java.io.IOException"},
		{"ensureOpen", "()V", nullptr, $PRIVATE, $method(WindowsSelectorImpl, ensureOpen, void)},
		{"growIfNeeded", "()V", nullptr, $PRIVATE, $method(WindowsSelectorImpl, growIfNeeded, void)},
		{"implClose", "()V", nullptr, $PROTECTED, $virtualMethod(WindowsSelectorImpl, implClose, void), "java.io.IOException"},
		{"implDereg", "(Lsun/nio/ch/SelectionKeyImpl;)V", nullptr, $PROTECTED, $virtualMethod(WindowsSelectorImpl, implDereg, void, $SelectionKeyImpl*)},
		{"implRegister", "(Lsun/nio/ch/SelectionKeyImpl;)V", nullptr, $PROTECTED, $virtualMethod(WindowsSelectorImpl, implRegister, void, $SelectionKeyImpl*)},
		{"processUpdateQueue", "()V", nullptr, $PRIVATE, $method(WindowsSelectorImpl, processUpdateQueue, void)},
		{"resetWakeupSocket", "()V", nullptr, $PRIVATE, $method(WindowsSelectorImpl, resetWakeupSocket, void)},
		{"resetWakeupSocket0", "(I)V", nullptr, $PRIVATE | $NATIVE, $method(WindowsSelectorImpl, resetWakeupSocket0, void, int32_t)},
		{"setEventOps", "(Lsun/nio/ch/SelectionKeyImpl;)V", nullptr, $PUBLIC, $virtualMethod(WindowsSelectorImpl, setEventOps, void, $SelectionKeyImpl*)},
		{"setWakeupSocket", "()V", nullptr, $PRIVATE, $method(WindowsSelectorImpl, setWakeupSocket, void)},
		{"setWakeupSocket0", "(I)V", nullptr, $PRIVATE | $NATIVE, $method(WindowsSelectorImpl, setWakeupSocket0, void, int32_t)},
		{"updateSelectedKeys", "(Ljava/util/function/Consumer;)I", "(Ljava/util/function/Consumer<Ljava/nio/channels/SelectionKey;>;)I", $PRIVATE, $method(WindowsSelectorImpl, updateSelectedKeys, int32_t, $Consumer*), "java.io.IOException"},
		{"wakeup", "()Ljava/nio/channels/Selector;", nullptr, $PUBLIC, $virtualMethod(WindowsSelectorImpl, wakeup, $Selector*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.WindowsSelectorImpl$SelectThread", "sun.nio.ch.WindowsSelectorImpl", "SelectThread", $PRIVATE | $FINAL},
		{"sun.nio.ch.WindowsSelectorImpl$SubSelector", "sun.nio.ch.WindowsSelectorImpl", "SubSelector", $PRIVATE | $FINAL},
		{"sun.nio.ch.WindowsSelectorImpl$FinishLock", "sun.nio.ch.WindowsSelectorImpl", "FinishLock", $PRIVATE | $FINAL},
		{"sun.nio.ch.WindowsSelectorImpl$StartLock", "sun.nio.ch.WindowsSelectorImpl", "StartLock", $PRIVATE | $FINAL},
		{"sun.nio.ch.WindowsSelectorImpl$MapEntry", "sun.nio.ch.WindowsSelectorImpl", "MapEntry", $PRIVATE | $STATIC | $FINAL},
		{"sun.nio.ch.WindowsSelectorImpl$FdMap", "sun.nio.ch.WindowsSelectorImpl", "FdMap", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.WindowsSelectorImpl",
		"sun.nio.ch.SelectorImpl",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.nio.ch.WindowsSelectorImpl$SelectThread,sun.nio.ch.WindowsSelectorImpl$SubSelector,sun.nio.ch.WindowsSelectorImpl$FinishLock,sun.nio.ch.WindowsSelectorImpl$StartLock,sun.nio.ch.WindowsSelectorImpl$MapEntry,sun.nio.ch.WindowsSelectorImpl$FdMap"
	};
	$loadClass(WindowsSelectorImpl, name, initialize, &classInfo$$, WindowsSelectorImpl::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsSelectorImpl);
	});
	return class$;
}

$Class* WindowsSelectorImpl::class$ = nullptr;

		} // ch
	} // nio
} // sun