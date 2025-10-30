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

$FieldInfo _WindowsSelectorImpl$StartLock_FieldInfo_[] = {
	{"this$0", "Lsun/nio/ch/WindowsSelectorImpl;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsSelectorImpl$StartLock, this$0)},
	{"runsCounter", "J", nullptr, $PRIVATE, $field(WindowsSelectorImpl$StartLock, runsCounter)},
	{}
};

$MethodInfo _WindowsSelectorImpl$StartLock_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/ch/WindowsSelectorImpl;)V", nullptr, $PRIVATE, $method(static_cast<void(WindowsSelectorImpl$StartLock::*)($WindowsSelectorImpl*)>(&WindowsSelectorImpl$StartLock::init$))},
	{"startThreads", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(WindowsSelectorImpl$StartLock::*)()>(&WindowsSelectorImpl$StartLock::startThreads))},
	{"waitForStart", "(Lsun/nio/ch/WindowsSelectorImpl$SelectThread;)Z", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<bool(WindowsSelectorImpl$StartLock::*)($WindowsSelectorImpl$SelectThread*)>(&WindowsSelectorImpl$StartLock::waitForStart))},
	{}
};

$InnerClassInfo _WindowsSelectorImpl$StartLock_InnerClassesInfo_[] = {
	{"sun.nio.ch.WindowsSelectorImpl$StartLock", "sun.nio.ch.WindowsSelectorImpl", "StartLock", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _WindowsSelectorImpl$StartLock_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.nio.ch.WindowsSelectorImpl$StartLock",
	"java.lang.Object",
	nullptr,
	_WindowsSelectorImpl$StartLock_FieldInfo_,
	_WindowsSelectorImpl$StartLock_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsSelectorImpl$StartLock_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.WindowsSelectorImpl"
};

$Object* allocate$WindowsSelectorImpl$StartLock($Class* clazz) {
	return $of($alloc(WindowsSelectorImpl$StartLock));
}

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
		$useLocalCurrentObjectStackCache();
		while (true) {
			while (this->runsCounter == $nc(thread)->lastRun) {
				try {
					$nc($of(this->this$0->startLock))->wait();
				} catch ($InterruptedException& e) {
					$($Thread::currentThread())->interrupt();
				}
			}
			if ($nc(thread)->isZombie()) {
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
	$loadClass(WindowsSelectorImpl$StartLock, name, initialize, &_WindowsSelectorImpl$StartLock_ClassInfo_, allocate$WindowsSelectorImpl$StartLock);
	return class$;
}

$Class* WindowsSelectorImpl$StartLock::class$ = nullptr;

		} // ch
	} // nio
} // sun