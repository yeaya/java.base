#include <sun/nio/ch/WindowsSelectorImpl$StartLock.h>
#include <java/lang/InterruptedException.h>
#include <sun/nio/ch/WindowsSelectorImpl$SelectThread.h>
#include <sun/nio/ch/WindowsSelectorImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $WindowsSelectorImpl = ::sun::nio::ch::WindowsSelectorImpl;
using $WindowsSelectorImpl$SelectThread = ::sun::nio::ch::WindowsSelectorImpl$SelectThread;

namespace sun {
	namespace nio {
		namespace ch {

void WindowsSelectorImpl$StartLock::init$($WindowsSelectorImpl* this$0) {
	$set(this, this$0, this$0);
}

void WindowsSelectorImpl$StartLock::startThreads() {
	$synchronized(this) {
		++this->runsCounter;
		$of(this)->notifyAll();
	}
}

bool WindowsSelectorImpl$StartLock::waitForStart($WindowsSelectorImpl$SelectThread* thread) {
	$synchronized(this) {
		$useLocalObjectStack();
		while (true) {
			while (this->runsCounter == $nc(thread)->lastRun) {
				try {
					$nc(this->this$0->startLock)->wait();
				} catch ($InterruptedException& e) {
					$($Thread::currentThread())->interrupt();
				}
			}
			if (thread->isZombie()) {
				return true;
			} else {
				thread->lastRun = this->runsCounter;
				return false;
			}
		}
	}
}

WindowsSelectorImpl$StartLock::WindowsSelectorImpl$StartLock() {
}

$Class* WindowsSelectorImpl$StartLock::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/nio/ch/WindowsSelectorImpl;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsSelectorImpl$StartLock, this$0)},
		{"runsCounter", "J", nullptr, $PRIVATE, $field(WindowsSelectorImpl$StartLock, runsCounter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/ch/WindowsSelectorImpl;)V", nullptr, $PRIVATE, $method(WindowsSelectorImpl$StartLock, init$, void, $WindowsSelectorImpl*)},
		{"startThreads", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(WindowsSelectorImpl$StartLock, startThreads, void)},
		{"waitForStart", "(Lsun/nio/ch/WindowsSelectorImpl$SelectThread;)Z", nullptr, $PRIVATE | $SYNCHRONIZED, $method(WindowsSelectorImpl$StartLock, waitForStart, bool, $WindowsSelectorImpl$SelectThread*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.WindowsSelectorImpl$StartLock", "sun.nio.ch.WindowsSelectorImpl", "StartLock", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.nio.ch.WindowsSelectorImpl$StartLock",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.ch.WindowsSelectorImpl"
	};
	$loadClass(WindowsSelectorImpl$StartLock, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsSelectorImpl$StartLock);
	});
	return class$;
}

$Class* WindowsSelectorImpl$StartLock::class$ = nullptr;

		} // ch
	} // nio
} // sun