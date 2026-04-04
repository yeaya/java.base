#include <sun/nio/ch/NativeThreadSet.h>
#include <java/lang/AssertionError.h>
#include <java/lang/InterruptedException.h>
#include <sun/nio/ch/NativeThread.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NativeThread = ::sun::nio::ch::NativeThread;

namespace sun {
	namespace nio {
		namespace ch {

bool NativeThreadSet::$assertionsDisabled = false;

void NativeThreadSet::init$(int32_t n) {
	this->used = 0;
	$set(this, elts, $new($longs, n));
}

int32_t NativeThreadSet::add() {
	int64_t th = $NativeThread::current();
	if (th == 0) {
		th = -1;
	}
	$synchronized(this) {
		int32_t start = 0;
		if (this->used >= $nc(this->elts)->length) {
			int32_t on = this->elts->length;
			int32_t nn = on * 2;
			$var($longs, nelts, $new($longs, nn));
			$System::arraycopy(this->elts, 0, nelts, 0, on);
			$set(this, elts, nelts);
			start = on;
		}
		for (int32_t i = start; i < this->elts->length; ++i) {
			if (this->elts->get(i) == 0) {
				this->elts->set(i, th);
				++this->used;
				return i;
			}
		}
		if (!NativeThreadSet::$assertionsDisabled) {
			$throwNew($AssertionError);
		}
		return -1;
	}
}

void NativeThreadSet::remove(int32_t i) {
	$synchronized(this) {
		$nc(this->elts)->set(i, 0);
		--this->used;
		if (this->used == 0 && this->waitingToEmpty) {
			$of(this)->notifyAll();
		}
	}
}

void NativeThreadSet::signalAndWait() {
	$synchronized(this) {
		$useLocalObjectStack();
		bool interrupted = false;
		while (this->used > 0) {
			int32_t u = this->used;
			int32_t n = $nc(this->elts)->length;
			for (int32_t i = 0; i < n; ++i) {
				int64_t th = this->elts->get(i);
				if (th == 0) {
					continue;
				}
				if (th != -1) {
					$NativeThread::signal(th);
				}
				if (--u == 0) {
					break;
				}
			}
			this->waitingToEmpty = true;
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$of(this)->wait(50);
				} catch ($InterruptedException& e) {
					interrupted = true;
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				this->waitingToEmpty = false;
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
		if (interrupted) {
			$($Thread::currentThread())->interrupt();
		}
	}
}

void NativeThreadSet::clinit$($Class* clazz) {
	NativeThreadSet::$assertionsDisabled = !NativeThreadSet::class$->desiredAssertionStatus();
}

NativeThreadSet::NativeThreadSet() {
}

$Class* NativeThreadSet::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(NativeThreadSet, $assertionsDisabled)},
		{"elts", "[J", nullptr, $PRIVATE, $field(NativeThreadSet, elts)},
		{"used", "I", nullptr, $PRIVATE, $field(NativeThreadSet, used)},
		{"waitingToEmpty", "Z", nullptr, $PRIVATE, $field(NativeThreadSet, waitingToEmpty)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(NativeThreadSet, init$, void, int32_t)},
		{"add", "()I", nullptr, 0, $virtualMethod(NativeThreadSet, add, int32_t)},
		{"remove", "(I)V", nullptr, 0, $virtualMethod(NativeThreadSet, remove, void, int32_t)},
		{"signalAndWait", "()V", nullptr, $SYNCHRONIZED, $virtualMethod(NativeThreadSet, signalAndWait, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.NativeThreadSet",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NativeThreadSet, name, initialize, &classInfo$$, NativeThreadSet::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(NativeThreadSet);
	});
	return class$;
}

$Class* NativeThreadSet::class$ = nullptr;

		} // ch
	} // nio
} // sun