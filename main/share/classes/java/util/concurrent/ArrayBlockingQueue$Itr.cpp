#include <java/util/concurrent/ArrayBlockingQueue$Itr.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/ArrayBlockingQueue$Itrs.h>
#include <java/util/concurrent/ArrayBlockingQueue.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef DETACHED
#undef NONE
#undef REMOVED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Objects = ::java::util::Objects;
using $ArrayBlockingQueue = ::java::util::concurrent::ArrayBlockingQueue;
using $ArrayBlockingQueue$Itrs = ::java::util::concurrent::ArrayBlockingQueue$Itrs;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ArrayBlockingQueue$Itr_FieldInfo_[] = {
	{"this$0", "Ljava/util/concurrent/ArrayBlockingQueue;", nullptr, $FINAL | $SYNTHETIC, $field(ArrayBlockingQueue$Itr, this$0)},
	{"cursor", "I", nullptr, $PRIVATE, $field(ArrayBlockingQueue$Itr, cursor)},
	{"nextItem", "Ljava/lang/Object;", "TE;", $PRIVATE, $field(ArrayBlockingQueue$Itr, nextItem)},
	{"nextIndex", "I", nullptr, $PRIVATE, $field(ArrayBlockingQueue$Itr, nextIndex)},
	{"lastItem", "Ljava/lang/Object;", "TE;", $PRIVATE, $field(ArrayBlockingQueue$Itr, lastItem)},
	{"lastRet", "I", nullptr, $PRIVATE, $field(ArrayBlockingQueue$Itr, lastRet)},
	{"prevTakeIndex", "I", nullptr, $PRIVATE, $field(ArrayBlockingQueue$Itr, prevTakeIndex)},
	{"prevCycles", "I", nullptr, $PRIVATE, $field(ArrayBlockingQueue$Itr, prevCycles)},
	{"NONE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ArrayBlockingQueue$Itr, NONE)},
	{"REMOVED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ArrayBlockingQueue$Itr, REMOVED)},
	{"DETACHED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ArrayBlockingQueue$Itr, DETACHED)},
	{}
};

$MethodInfo _ArrayBlockingQueue$Itr_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ArrayBlockingQueue;)V", nullptr, 0, $method(static_cast<void(ArrayBlockingQueue$Itr::*)($ArrayBlockingQueue*)>(&ArrayBlockingQueue$Itr::init$))},
	{"detach", "()V", nullptr, $PRIVATE, $method(static_cast<void(ArrayBlockingQueue$Itr::*)()>(&ArrayBlockingQueue$Itr::detach))},
	{"distance", "(III)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ArrayBlockingQueue$Itr::*)(int32_t,int32_t,int32_t)>(&ArrayBlockingQueue$Itr::distance))},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"incCursor", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ArrayBlockingQueue$Itr::*)(int32_t)>(&ArrayBlockingQueue$Itr::incCursor))},
	{"incorporateDequeues", "()V", nullptr, $PRIVATE, $method(static_cast<void(ArrayBlockingQueue$Itr::*)()>(&ArrayBlockingQueue$Itr::incorporateDequeues))},
	{"invalidated", "(IIJI)Z", nullptr, $PRIVATE, $method(static_cast<bool(ArrayBlockingQueue$Itr::*)(int32_t,int32_t,int64_t,int32_t)>(&ArrayBlockingQueue$Itr::invalidated))},
	{"isDetached", "()Z", nullptr, 0},
	{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"noNext", "()V", nullptr, $PRIVATE, $method(static_cast<void(ArrayBlockingQueue$Itr::*)()>(&ArrayBlockingQueue$Itr::noNext))},
	{"remove", "()V", nullptr, $PUBLIC},
	{"removedAt", "(I)Z", nullptr, 0},
	{"shutdown", "()V", nullptr, 0},
	{"takeIndexWrapped", "()Z", nullptr, 0},
	{}
};

$InnerClassInfo _ArrayBlockingQueue$Itr_InnerClassesInfo_[] = {
	{"java.util.concurrent.ArrayBlockingQueue$Itr", "java.util.concurrent.ArrayBlockingQueue", "Itr", $PRIVATE},
	{}
};

$ClassInfo _ArrayBlockingQueue$Itr_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.ArrayBlockingQueue$Itr",
	"java.lang.Object",
	"java.util.Iterator",
	_ArrayBlockingQueue$Itr_FieldInfo_,
	_ArrayBlockingQueue$Itr_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<TE;>;",
	nullptr,
	_ArrayBlockingQueue$Itr_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ArrayBlockingQueue"
};

$Object* allocate$ArrayBlockingQueue$Itr($Class* clazz) {
	return $of($alloc(ArrayBlockingQueue$Itr));
}

void ArrayBlockingQueue$Itr::init$($ArrayBlockingQueue* this$0) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	this->lastRet = ArrayBlockingQueue$Itr::NONE;
	$var($ReentrantLock, lock, this$0->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (this$0->count == 0) {
				this->cursor = ArrayBlockingQueue$Itr::NONE;
				this->nextIndex = ArrayBlockingQueue$Itr::NONE;
				this->prevTakeIndex = ArrayBlockingQueue$Itr::DETACHED;
			} else {
				int32_t takeIndex = this$0->takeIndex;
				this->prevTakeIndex = takeIndex;
				$set(this, nextItem, this$0->itemAt(this->nextIndex = takeIndex));
				this->cursor = incCursor(takeIndex);
				if (this$0->itrs == nullptr) {
					$set(this$0, itrs, $new($ArrayBlockingQueue$Itrs, this$0, this));
				} else {
					$nc(this$0->itrs)->register$(this);
					$nc(this$0->itrs)->doSomeSweeping(false);
				}
				this->prevCycles = $nc(this$0->itrs)->cycles;
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			lock->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool ArrayBlockingQueue$Itr::isDetached() {
	return this->prevTakeIndex < 0;
}

int32_t ArrayBlockingQueue$Itr::incCursor(int32_t index) {
	if (++index == $nc(this->this$0->items)->length) {
		index = 0;
	}
	if (index == this->this$0->putIndex) {
		index = ArrayBlockingQueue$Itr::NONE;
	}
	return index;
}

bool ArrayBlockingQueue$Itr::invalidated(int32_t index, int32_t prevTakeIndex, int64_t dequeues, int32_t length) {
	if (index < 0) {
		return false;
	}
	int32_t distance = index - prevTakeIndex;
	if (distance < 0) {
		distance += length;
	}
	return dequeues > distance;
}

void ArrayBlockingQueue$Itr::incorporateDequeues() {
	int32_t cycles = $nc(this->this$0->itrs)->cycles;
	int32_t takeIndex = this->this$0->takeIndex;
	int32_t prevCycles = this->prevCycles;
	int32_t prevTakeIndex = this->prevTakeIndex;
	if (cycles != prevCycles || takeIndex != prevTakeIndex) {
		int32_t len = $nc(this->this$0->items)->length;
		int64_t dequeues = (int64_t)(cycles - prevCycles) * len + (takeIndex - prevTakeIndex);
		if (invalidated(this->lastRet, prevTakeIndex, dequeues, len)) {
			this->lastRet = ArrayBlockingQueue$Itr::REMOVED;
		}
		if (invalidated(this->nextIndex, prevTakeIndex, dequeues, len)) {
			this->nextIndex = ArrayBlockingQueue$Itr::REMOVED;
		}
		if (invalidated(this->cursor, prevTakeIndex, dequeues, len)) {
			this->cursor = takeIndex;
		}
		if (this->cursor < 0 && this->nextIndex < 0 && this->lastRet < 0) {
			detach();
		} else {
			this->prevCycles = cycles;
			this->prevTakeIndex = takeIndex;
		}
	}
}

void ArrayBlockingQueue$Itr::detach() {
	if (this->prevTakeIndex >= 0) {
		this->prevTakeIndex = ArrayBlockingQueue$Itr::DETACHED;
		$nc(this->this$0->itrs)->doSomeSweeping(true);
	}
}

bool ArrayBlockingQueue$Itr::hasNext() {
	if (this->nextItem != nullptr) {
		return true;
	}
	noNext();
	return false;
}

void ArrayBlockingQueue$Itr::noNext() {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantLock, lock, this->this$0->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (!isDetached()) {
				incorporateDequeues();
				if (this->lastRet >= 0) {
					$set(this, lastItem, this->this$0->itemAt(this->lastRet));
					detach();
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			lock->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$Object* ArrayBlockingQueue$Itr::next() {
	$useLocalCurrentObjectStackCache();
	$var($Object, e, this->nextItem);
	if (e == nullptr) {
		$throwNew($NoSuchElementException);
	}
	$var($ReentrantLock, lock, this->this$0->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (!isDetached()) {
				incorporateDequeues();
			}
			this->lastRet = this->nextIndex;
			int32_t cursor = this->cursor;
			if (cursor >= 0) {
				$set(this, nextItem, this->this$0->itemAt(this->nextIndex = cursor));
				this->cursor = incCursor(cursor);
			} else {
				this->nextIndex = ArrayBlockingQueue$Itr::NONE;
				$set(this, nextItem, nullptr);
				if (this->lastRet == ArrayBlockingQueue$Itr::REMOVED) {
					detach();
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			lock->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return $of(e);
}

void ArrayBlockingQueue$Itr::forEachRemaining($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(action);
	$var($ReentrantLock, lock, this->this$0->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			$var($Object, e, this->nextItem);
			if (e == nullptr) {
				return$1 = true;
				goto $finally;
			}
			if (!isDetached()) {
				incorporateDequeues();
			}
			action->accept(e);
			if (isDetached() || this->cursor < 0) {
				return$1 = true;
				goto $finally;
			}
			$var($ObjectArray, items, this->this$0->items);
			{
				int32_t i = this->cursor;
				int32_t end = this->this$0->putIndex;
				int32_t to = (i < end) ? end : $nc(items)->length;
				for (;; i = 0, to = end) {
					for (; i < to; ++i) {
						action->accept($($ArrayBlockingQueue::itemAt(items, i)));
					}
					if (to == end) {
						break;
					}
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			this->cursor = (this->nextIndex = (this->lastRet = ArrayBlockingQueue$Itr::NONE));
			$set(this, nextItem, ($assignField(this, lastItem, nullptr)));
			detach();
			lock->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

void ArrayBlockingQueue$Itr::remove() {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantLock, lock, this->this$0->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (!isDetached()) {
				incorporateDequeues();
			}
			int32_t lastRet = this->lastRet;
			this->lastRet = ArrayBlockingQueue$Itr::NONE;
			if (lastRet >= 0) {
				if (!isDetached()) {
					this->this$0->removeAt(lastRet);
				} else {
					$var($Object, lastItem, this->lastItem);
					$set(this, lastItem, nullptr);
					if ($equals(this->this$0->itemAt(lastRet), lastItem)) {
						this->this$0->removeAt(lastRet);
					}
				}
			} else if (lastRet == ArrayBlockingQueue$Itr::NONE) {
				$throwNew($IllegalStateException);
			}
			if (this->cursor < 0 && this->nextIndex < 0) {
				detach();
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			lock->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ArrayBlockingQueue$Itr::shutdown() {
	this->cursor = ArrayBlockingQueue$Itr::NONE;
	if (this->nextIndex >= 0) {
		this->nextIndex = ArrayBlockingQueue$Itr::REMOVED;
	}
	if (this->lastRet >= 0) {
		this->lastRet = ArrayBlockingQueue$Itr::REMOVED;
		$set(this, lastItem, nullptr);
	}
	this->prevTakeIndex = ArrayBlockingQueue$Itr::DETACHED;
}

int32_t ArrayBlockingQueue$Itr::distance(int32_t index, int32_t prevTakeIndex, int32_t length) {
	int32_t distance = index - prevTakeIndex;
	if (distance < 0) {
		distance += length;
	}
	return distance;
}

bool ArrayBlockingQueue$Itr::removedAt(int32_t removedIndex) {
	if (isDetached()) {
		return true;
	}
	int32_t takeIndex = this->this$0->takeIndex;
	int32_t prevTakeIndex = this->prevTakeIndex;
	int32_t len = $nc(this->this$0->items)->length;
	int32_t removedDistance = len * ($nc(this->this$0->itrs)->cycles - this->prevCycles + ((removedIndex < takeIndex) ? 1 : 0)) + (removedIndex - prevTakeIndex);
	int32_t cursor = this->cursor;
	if (cursor >= 0) {
		int32_t x = distance(cursor, prevTakeIndex, len);
		if (x == removedDistance) {
			if (cursor == this->this$0->putIndex) {
				this->cursor = (cursor = ArrayBlockingQueue$Itr::NONE);
			}
		} else if (x > removedDistance) {
			this->cursor = (cursor = $ArrayBlockingQueue::dec(cursor, len));
		}
	}
	int32_t lastRet = this->lastRet;
	if (lastRet >= 0) {
		int32_t x = distance(lastRet, prevTakeIndex, len);
		if (x == removedDistance) {
			this->lastRet = (lastRet = ArrayBlockingQueue$Itr::REMOVED);
		} else if (x > removedDistance) {
			this->lastRet = (lastRet = $ArrayBlockingQueue::dec(lastRet, len));
		}
	}
	int32_t nextIndex = this->nextIndex;
	if (nextIndex >= 0) {
		int32_t x = distance(nextIndex, prevTakeIndex, len);
		if (x == removedDistance) {
			this->nextIndex = (nextIndex = ArrayBlockingQueue$Itr::REMOVED);
		} else if (x > removedDistance) {
			this->nextIndex = (nextIndex = $ArrayBlockingQueue::dec(nextIndex, len));
		}
	}
	if (cursor < 0 && nextIndex < 0 && lastRet < 0) {
		this->prevTakeIndex = ArrayBlockingQueue$Itr::DETACHED;
		return true;
	}
	return false;
}

bool ArrayBlockingQueue$Itr::takeIndexWrapped() {
	if (isDetached()) {
		return true;
	}
	if ($nc(this->this$0->itrs)->cycles - this->prevCycles > 1) {
		shutdown();
		return true;
	}
	return false;
}

ArrayBlockingQueue$Itr::ArrayBlockingQueue$Itr() {
}

$Class* ArrayBlockingQueue$Itr::load$($String* name, bool initialize) {
	$loadClass(ArrayBlockingQueue$Itr, name, initialize, &_ArrayBlockingQueue$Itr_ClassInfo_, allocate$ArrayBlockingQueue$Itr);
	return class$;
}

$Class* ArrayBlockingQueue$Itr::class$ = nullptr;

		} // concurrent
	} // util
} // java