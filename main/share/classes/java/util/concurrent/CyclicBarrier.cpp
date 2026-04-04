#include <java/util/concurrent/CyclicBarrier.h>
#include <java/lang/Error.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/util/concurrent/BrokenBarrierException.h>
#include <java/util/concurrent/CyclicBarrier$Generation.h>
#include <java/util/concurrent/TimeUnit.h>
#include <java/util/concurrent/TimeoutException.h>
#include <java/util/concurrent/locks/Condition.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $BrokenBarrierException = ::java::util::concurrent::BrokenBarrierException;
using $CyclicBarrier$Generation = ::java::util::concurrent::CyclicBarrier$Generation;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $TimeoutException = ::java::util::concurrent::TimeoutException;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;

namespace java {
	namespace util {
		namespace concurrent {

void CyclicBarrier::nextGeneration() {
	$nc(this->trip)->signalAll();
	this->count = this->parties;
	$set(this, generation, $new($CyclicBarrier$Generation));
}

void CyclicBarrier::breakBarrier() {
	$nc(this->generation)->broken = true;
	this->count = this->parties;
	$nc(this->trip)->signalAll();
}

int32_t CyclicBarrier::dowait(bool timed, int64_t nanos) {
	$useLocalObjectStack();
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		$var($CyclicBarrier$Generation, g, this->generation);
		if ($nc(g)->broken) {
			$throwNew($BrokenBarrierException);
		}
		if ($Thread::interrupted()) {
			breakBarrier();
			$throwNew($InterruptedException);
		}
		int32_t index = --this->count;
		if (index == 0) {
			$var($Runnable, command, this->barrierCommand);
			if (command != nullptr) {
				try {
					command->run();
				} catch ($Throwable& ex) {
					breakBarrier();
					$throw(ex);
				}
			}
			nextGeneration();
			var$2 = 0;
			return$1 = true;
			goto $finally;
		}
		for (;;) {
			try {
				if (!timed) {
					$nc(this->trip)->await();
				} else if (nanos > 0) {
					nanos = $nc(this->trip)->awaitNanos(nanos);
				}
			} catch ($InterruptedException& ie) {
				if (g == this->generation && !g->broken) {
					breakBarrier();
					$throw(ie);
				} else {
					$($Thread::currentThread())->interrupt();
				}
			}
			if (g->broken) {
				$throwNew($BrokenBarrierException);
			}
			if (g != this->generation) {
				var$2 = index;
				return$1 = true;
				goto $finally;
			}
			if (timed && nanos <= 0) {
				breakBarrier();
				$throwNew($TimeoutException);
			}
		}
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		lock->unlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void CyclicBarrier::init$(int32_t parties, $Runnable* barrierAction) {
	$set(this, lock, $new($ReentrantLock));
	$set(this, trip, this->lock->newCondition());
	$set(this, generation, $new($CyclicBarrier$Generation));
	if (parties <= 0) {
		$throwNew($IllegalArgumentException);
	}
	this->parties = parties;
	this->count = parties;
	$set(this, barrierCommand, barrierAction);
}

void CyclicBarrier::init$(int32_t parties) {
	CyclicBarrier::init$(parties, nullptr);
}

int32_t CyclicBarrier::getParties() {
	return this->parties;
}

int32_t CyclicBarrier::await() {
	try {
		return dowait(false, 0);
	} catch ($TimeoutException& toe) {
		$throwNew($Error, toe);
	}
	$shouldNotReachHere();
}

int32_t CyclicBarrier::await(int64_t timeout, $TimeUnit* unit) {
	return dowait(true, $nc(unit)->toNanos(timeout));
}

bool CyclicBarrier::isBroken() {
	$useLocalObjectStack();
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	$var($Throwable, var$0, nullptr);
	bool var$2 = false;
	bool return$1 = false;
	try {
		var$2 = $nc(this->generation)->broken;
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		lock->unlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void CyclicBarrier::reset() {
	$useLocalObjectStack();
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	$var($Throwable, var$0, nullptr);
	try {
		breakBarrier();
		nextGeneration();
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		lock->unlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

int32_t CyclicBarrier::getNumberWaiting() {
	$useLocalObjectStack();
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		var$2 = this->parties - this->count;
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		lock->unlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

CyclicBarrier::CyclicBarrier() {
}

$Class* CyclicBarrier::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"lock", "Ljava/util/concurrent/locks/ReentrantLock;", nullptr, $PRIVATE | $FINAL, $field(CyclicBarrier, lock)},
		{"trip", "Ljava/util/concurrent/locks/Condition;", nullptr, $PRIVATE | $FINAL, $field(CyclicBarrier, trip)},
		{"parties", "I", nullptr, $PRIVATE | $FINAL, $field(CyclicBarrier, parties)},
		{"barrierCommand", "Ljava/lang/Runnable;", nullptr, $PRIVATE | $FINAL, $field(CyclicBarrier, barrierCommand)},
		{"generation", "Ljava/util/concurrent/CyclicBarrier$Generation;", nullptr, $PRIVATE, $field(CyclicBarrier, generation)},
		{"count", "I", nullptr, $PRIVATE, $field(CyclicBarrier, count)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjava/lang/Runnable;)V", nullptr, $PUBLIC, $method(CyclicBarrier, init$, void, int32_t, $Runnable*)},
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(CyclicBarrier, init$, void, int32_t)},
		{"await", "()I", nullptr, $PUBLIC, $virtualMethod(CyclicBarrier, await, int32_t), "java.lang.InterruptedException,java.util.concurrent.BrokenBarrierException"},
		{"await", "(JLjava/util/concurrent/TimeUnit;)I", nullptr, $PUBLIC, $virtualMethod(CyclicBarrier, await, int32_t, int64_t, $TimeUnit*), "java.lang.InterruptedException,java.util.concurrent.BrokenBarrierException,java.util.concurrent.TimeoutException"},
		{"breakBarrier", "()V", nullptr, $PRIVATE, $method(CyclicBarrier, breakBarrier, void)},
		{"dowait", "(ZJ)I", nullptr, $PRIVATE, $method(CyclicBarrier, dowait, int32_t, bool, int64_t), "java.lang.InterruptedException,java.util.concurrent.BrokenBarrierException,java.util.concurrent.TimeoutException"},
		{"getNumberWaiting", "()I", nullptr, $PUBLIC, $virtualMethod(CyclicBarrier, getNumberWaiting, int32_t)},
		{"getParties", "()I", nullptr, $PUBLIC, $virtualMethod(CyclicBarrier, getParties, int32_t)},
		{"isBroken", "()Z", nullptr, $PUBLIC, $virtualMethod(CyclicBarrier, isBroken, bool)},
		{"nextGeneration", "()V", nullptr, $PRIVATE, $method(CyclicBarrier, nextGeneration, void)},
		{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(CyclicBarrier, reset, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.CyclicBarrier$Generation", "java.util.concurrent.CyclicBarrier", "Generation", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.concurrent.CyclicBarrier",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.util.concurrent.CyclicBarrier$Generation"
	};
	$loadClass(CyclicBarrier, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CyclicBarrier);
	});
	return class$;
}

$Class* CyclicBarrier::class$ = nullptr;

		} // concurrent
	} // util
} // java