#include <sun/nio/ch/NativeThreadSet.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _NativeThreadSet_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(NativeThreadSet, $assertionsDisabled)},
	{"elts", "[J", nullptr, $PRIVATE, $field(NativeThreadSet, elts)},
	{"used", "I", nullptr, $PRIVATE, $field(NativeThreadSet, used)},
	{"waitingToEmpty", "Z", nullptr, $PRIVATE, $field(NativeThreadSet, waitingToEmpty)},
	{}
};

$MethodInfo _NativeThreadSet_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(NativeThreadSet::*)(int32_t)>(&NativeThreadSet::init$))},
	{"add", "()I", nullptr, 0},
	{"remove", "(I)V", nullptr, 0},
	{"signalAndWait", "()V", nullptr, $SYNCHRONIZED},
	{}
};

$ClassInfo _NativeThreadSet_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.NativeThreadSet",
	"java.lang.Object",
	nullptr,
	_NativeThreadSet_FieldInfo_,
	_NativeThreadSet_MethodInfo_
};

$Object* allocate$NativeThreadSet($Class* clazz) {
	return $of($alloc(NativeThreadSet));
}

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
			int32_t on = $nc(this->elts)->length;
			int32_t nn = on * 2;
			$var($longs, nelts, $new($longs, nn));
			$System::arraycopy(this->elts, 0, nelts, 0, on);
			$set(this, elts, nelts);
			start = on;
		}
		for (int32_t i = start; i < $nc(this->elts)->length; ++i) {
			if ($nc(this->elts)->get(i) == 0) {
				$nc(this->elts)->set(i, th);
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
		bool interrupted = false;
		while (this->used > 0) {
			int32_t u = this->used;
			int32_t n = $nc(this->elts)->length;
			for (int32_t i = 0; i < n; ++i) {
				int64_t th = $nc(this->elts)->get(i);
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
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						$of(this)->wait(50);
					} catch ($InterruptedException&) {
						$var($InterruptedException, e, $catch());
						interrupted = true;
					}
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} /*finally*/ {
					this->waitingToEmpty = false;
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
		if (interrupted) {
			$($Thread::currentThread())->interrupt();
		}
	}
}

void clinit$NativeThreadSet($Class* class$) {
	NativeThreadSet::$assertionsDisabled = !NativeThreadSet::class$->desiredAssertionStatus();
}

NativeThreadSet::NativeThreadSet() {
}

$Class* NativeThreadSet::load$($String* name, bool initialize) {
	$loadClass(NativeThreadSet, name, initialize, &_NativeThreadSet_ClassInfo_, clinit$NativeThreadSet, allocate$NativeThreadSet);
	return class$;
}

$Class* NativeThreadSet::class$ = nullptr;

		} // ch
	} // nio
} // sun