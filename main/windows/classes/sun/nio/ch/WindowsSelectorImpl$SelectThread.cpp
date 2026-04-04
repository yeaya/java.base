#include <sun/nio/ch/WindowsSelectorImpl$SelectThread.h>
#include <java/io/IOException.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <sun/nio/ch/WindowsSelectorImpl$FinishLock.h>
#include <sun/nio/ch/WindowsSelectorImpl$StartLock.h>
#include <sun/nio/ch/WindowsSelectorImpl$SubSelector.h>
#include <sun/nio/ch/WindowsSelectorImpl.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $WindowsSelectorImpl = ::sun::nio::ch::WindowsSelectorImpl;
using $WindowsSelectorImpl$SubSelector = ::sun::nio::ch::WindowsSelectorImpl$SubSelector;

namespace sun {
	namespace nio {
		namespace ch {

void WindowsSelectorImpl$SelectThread::init$($WindowsSelectorImpl* this$0, int32_t i) {
	$set(this, this$0, this$0);
	$Thread::init$(nullptr, nullptr, "SelectorHelper"_s, 0, false);
	this->lastRun = 0;
	this->index = i;
	$set(this, subSelector, $new($WindowsSelectorImpl$SubSelector, this$0, i));
	this->lastRun = $nc(this$0->startLock)->runsCounter;
}

void WindowsSelectorImpl$SelectThread::makeZombie() {
	this->zombie = true;
}

bool WindowsSelectorImpl$SelectThread::isZombie() {
	return this->zombie;
}

void WindowsSelectorImpl$SelectThread::run() {
	while (true) {
		if ($nc(this->this$0->startLock)->waitForStart(this)) {
			$nc(this->subSelector)->freeFDSetBuffer();
			return;
		}
		try {
			$nc(this->subSelector)->poll(this->index);
		} catch ($IOException& e) {
			$nc(this->this$0->finishLock)->setException(e);
		}
		$nc(this->this$0->finishLock)->threadFinished();
	}
}

WindowsSelectorImpl$SelectThread::WindowsSelectorImpl$SelectThread() {
}

$Class* WindowsSelectorImpl$SelectThread::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/nio/ch/WindowsSelectorImpl;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsSelectorImpl$SelectThread, this$0)},
		{"index", "I", nullptr, $PRIVATE | $FINAL, $field(WindowsSelectorImpl$SelectThread, index)},
		{"subSelector", "Lsun/nio/ch/WindowsSelectorImpl$SubSelector;", nullptr, $FINAL, $field(WindowsSelectorImpl$SelectThread, subSelector)},
		{"lastRun", "J", nullptr, $PRIVATE, $field(WindowsSelectorImpl$SelectThread, lastRun)},
		{"zombie", "Z", nullptr, $PRIVATE | $VOLATILE, $field(WindowsSelectorImpl$SelectThread, zombie)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/ch/WindowsSelectorImpl;I)V", nullptr, $PRIVATE, $method(WindowsSelectorImpl$SelectThread, init$, void, $WindowsSelectorImpl*, int32_t)},
		{"isZombie", "()Z", nullptr, 0, $method(WindowsSelectorImpl$SelectThread, isZombie, bool)},
		{"makeZombie", "()V", nullptr, 0, $method(WindowsSelectorImpl$SelectThread, makeZombie, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(WindowsSelectorImpl$SelectThread, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.WindowsSelectorImpl$SelectThread", "sun.nio.ch.WindowsSelectorImpl", "SelectThread", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.nio.ch.WindowsSelectorImpl$SelectThread",
		"java.lang.Thread",
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
	$loadClass(WindowsSelectorImpl$SelectThread, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsSelectorImpl$SelectThread);
	});
	return class$;
}

$Class* WindowsSelectorImpl$SelectThread::class$ = nullptr;

		} // ch
	} // nio
} // sun