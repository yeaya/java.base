#include <sun/nio/ch/WindowsSelectorImpl$FinishLock.h>
#include <java/io/IOException.h>
#include <java/lang/InterruptedException.h>
#include <java/nio/channels/Selector.h>
#include <java/util/List.h>
#include <sun/nio/ch/WindowsSelectorImpl.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $WindowsSelectorImpl = ::sun::nio::ch::WindowsSelectorImpl;

namespace sun {
	namespace nio {
		namespace ch {

void WindowsSelectorImpl$FinishLock::init$($WindowsSelectorImpl* this$0) {
	$set(this, this$0, this$0);
	$set(this, exception, nullptr);
}

void WindowsSelectorImpl$FinishLock::reset() {
	this->threadsToFinish = $nc(this->this$0->threads)->size();
}

void WindowsSelectorImpl$FinishLock::threadFinished() {
	$synchronized(this) {
		if (this->threadsToFinish == $nc(this->this$0->threads)->size()) {
			this->this$0->wakeup();
		}
		--this->threadsToFinish;
		if (this->threadsToFinish == 0) {
			$of(this)->notify();
		}
	}
}

void WindowsSelectorImpl$FinishLock::waitForHelperThreads() {
	$synchronized(this) {
		$useLocalObjectStack();
		if (this->threadsToFinish == $nc(this->this$0->threads)->size()) {
			this->this$0->wakeup();
		}
		while (this->threadsToFinish != 0) {
			try {
				$nc(this->this$0->finishLock)->wait();
			} catch ($InterruptedException& e) {
				$($Thread::currentThread())->interrupt();
			}
		}
	}
}

void WindowsSelectorImpl$FinishLock::setException($IOException* e) {
	$synchronized(this) {
		$set(this, exception, e);
	}
}

void WindowsSelectorImpl$FinishLock::checkForException() {
	$useLocalObjectStack();
	if (this->exception == nullptr) {
		return;
	}
	$var($String, message, $str({"An exception occurred during the execution of select(): \n"_s, this->exception, $$str(u'\n')}));
	$set(this, exception, nullptr);
	$throwNew($IOException, message);
}

WindowsSelectorImpl$FinishLock::WindowsSelectorImpl$FinishLock() {
}

$Class* WindowsSelectorImpl$FinishLock::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/nio/ch/WindowsSelectorImpl;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsSelectorImpl$FinishLock, this$0)},
		{"threadsToFinish", "I", nullptr, $PRIVATE, $field(WindowsSelectorImpl$FinishLock, threadsToFinish)},
		{"exception", "Ljava/io/IOException;", nullptr, 0, $field(WindowsSelectorImpl$FinishLock, exception)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/ch/WindowsSelectorImpl;)V", nullptr, $PRIVATE, $method(WindowsSelectorImpl$FinishLock, init$, void, $WindowsSelectorImpl*)},
		{"checkForException", "()V", nullptr, $PRIVATE, $method(WindowsSelectorImpl$FinishLock, checkForException, void), "java.io.IOException"},
		{"reset", "()V", nullptr, $PRIVATE, $method(WindowsSelectorImpl$FinishLock, reset, void)},
		{"setException", "(Ljava/io/IOException;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(WindowsSelectorImpl$FinishLock, setException, void, $IOException*)},
		{"threadFinished", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(WindowsSelectorImpl$FinishLock, threadFinished, void)},
		{"waitForHelperThreads", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(WindowsSelectorImpl$FinishLock, waitForHelperThreads, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.WindowsSelectorImpl$FinishLock", "sun.nio.ch.WindowsSelectorImpl", "FinishLock", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.nio.ch.WindowsSelectorImpl$FinishLock",
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
	$loadClass(WindowsSelectorImpl$FinishLock, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsSelectorImpl$FinishLock);
	});
	return class$;
}

$Class* WindowsSelectorImpl$FinishLock::class$ = nullptr;

		} // ch
	} // nio
} // sun