#include <sun/nio/ch/WindowsSelectorImpl$SelectThread.h>

#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $WindowsSelectorImpl$FinishLock = ::sun::nio::ch::WindowsSelectorImpl$FinishLock;
using $WindowsSelectorImpl$StartLock = ::sun::nio::ch::WindowsSelectorImpl$StartLock;
using $WindowsSelectorImpl$SubSelector = ::sun::nio::ch::WindowsSelectorImpl$SubSelector;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _WindowsSelectorImpl$SelectThread_FieldInfo_[] = {
	{"this$0", "Lsun/nio/ch/WindowsSelectorImpl;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsSelectorImpl$SelectThread, this$0)},
	{"index", "I", nullptr, $PRIVATE | $FINAL, $field(WindowsSelectorImpl$SelectThread, index)},
	{"subSelector", "Lsun/nio/ch/WindowsSelectorImpl$SubSelector;", nullptr, $FINAL, $field(WindowsSelectorImpl$SelectThread, subSelector)},
	{"lastRun", "J", nullptr, $PRIVATE, $field(WindowsSelectorImpl$SelectThread, lastRun)},
	{"zombie", "Z", nullptr, $PRIVATE | $VOLATILE, $field(WindowsSelectorImpl$SelectThread, zombie)},
	{}
};

$MethodInfo _WindowsSelectorImpl$SelectThread_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/ch/WindowsSelectorImpl;I)V", nullptr, $PRIVATE, $method(static_cast<void(WindowsSelectorImpl$SelectThread::*)($WindowsSelectorImpl*,int32_t)>(&WindowsSelectorImpl$SelectThread::init$))},
	{"isZombie", "()Z", nullptr, 0, $method(static_cast<bool(WindowsSelectorImpl$SelectThread::*)()>(&WindowsSelectorImpl$SelectThread::isZombie))},
	{"makeZombie", "()V", nullptr, 0, $method(static_cast<void(WindowsSelectorImpl$SelectThread::*)()>(&WindowsSelectorImpl$SelectThread::makeZombie))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsSelectorImpl$SelectThread_InnerClassesInfo_[] = {
	{"sun.nio.ch.WindowsSelectorImpl$SelectThread", "sun.nio.ch.WindowsSelectorImpl", "SelectThread", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _WindowsSelectorImpl$SelectThread_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.nio.ch.WindowsSelectorImpl$SelectThread",
	"java.lang.Thread",
	nullptr,
	_WindowsSelectorImpl$SelectThread_FieldInfo_,
	_WindowsSelectorImpl$SelectThread_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsSelectorImpl$SelectThread_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.WindowsSelectorImpl"
};

$Object* allocate$WindowsSelectorImpl$SelectThread($Class* clazz) {
	return $of($alloc(WindowsSelectorImpl$SelectThread));
}

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
	$useLocalCurrentObjectStackCache();
	while (true) {
		if ($nc(this->this$0->startLock)->waitForStart(this)) {
			$nc(this->subSelector)->freeFDSetBuffer();
			return;
		}
		try {
			$nc(this->subSelector)->poll(this->index);
		} catch ($IOException&) {
			$var($IOException, e, $catch());
			$nc(this->this$0->finishLock)->setException(e);
		}
		$nc(this->this$0->finishLock)->threadFinished();
	}
}

WindowsSelectorImpl$SelectThread::WindowsSelectorImpl$SelectThread() {
}

$Class* WindowsSelectorImpl$SelectThread::load$($String* name, bool initialize) {
	$loadClass(WindowsSelectorImpl$SelectThread, name, initialize, &_WindowsSelectorImpl$SelectThread_ClassInfo_, allocate$WindowsSelectorImpl$SelectThread);
	return class$;
}

$Class* WindowsSelectorImpl$SelectThread::class$ = nullptr;

		} // ch
	} // nio
} // sun