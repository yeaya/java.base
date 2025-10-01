#include <java/lang/ProcessHandleImpl$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Long.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/ProcessHandleImpl$ExitCompletion.h>
#include <java/lang/ProcessHandleImpl.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/ConcurrentMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessHandleImpl = ::java::lang::ProcessHandleImpl;
using $ProcessHandleImpl$ExitCompletion = ::java::lang::ProcessHandleImpl$ExitCompletion;
using $Runnable = ::java::lang::Runnable;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $ConcurrentMap = ::java::util::concurrent::ConcurrentMap;

namespace java {
	namespace lang {

$FieldInfo _ProcessHandleImpl$1_FieldInfo_[] = {
	{"val$newCompletion", "Ljava/lang/ProcessHandleImpl$ExitCompletion;", nullptr, $FINAL | $SYNTHETIC, $field(ProcessHandleImpl$1, val$newCompletion)},
	{"val$shouldReap", "Z", nullptr, $FINAL | $SYNTHETIC, $field(ProcessHandleImpl$1, val$shouldReap)},
	{"val$pid", "J", nullptr, $FINAL | $SYNTHETIC, $field(ProcessHandleImpl$1, val$pid)},
	{}
};

$MethodInfo _ProcessHandleImpl$1_MethodInfo_[] = {
	{"<init>", "(JZLjava/lang/ProcessHandleImpl$ExitCompletion;)V", "()V", 0, $method(static_cast<void(ProcessHandleImpl$1::*)(int64_t,bool,$ProcessHandleImpl$ExitCompletion*)>(&ProcessHandleImpl$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ProcessHandleImpl$1_EnclosingMethodInfo_ = {
	"java.lang.ProcessHandleImpl",
	"completion",
	"(JZ)Ljava/util/concurrent/CompletableFuture;"
};

$InnerClassInfo _ProcessHandleImpl$1_InnerClassesInfo_[] = {
	{"java.lang.ProcessHandleImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ProcessHandleImpl$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ProcessHandleImpl$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_ProcessHandleImpl$1_FieldInfo_,
	_ProcessHandleImpl$1_MethodInfo_,
	nullptr,
	&_ProcessHandleImpl$1_EnclosingMethodInfo_,
	_ProcessHandleImpl$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ProcessHandleImpl"
};

$Object* allocate$ProcessHandleImpl$1($Class* clazz) {
	return $of($alloc(ProcessHandleImpl$1));
}

void ProcessHandleImpl$1::init$(int64_t val$pid, bool val$shouldReap, $ProcessHandleImpl$ExitCompletion* val$newCompletion) {
	this->val$pid = val$pid;
	this->val$shouldReap = val$shouldReap;
	$set(this, val$newCompletion, val$newCompletion);
}

void ProcessHandleImpl$1::run() {
	int32_t exitValue = $ProcessHandleImpl::waitForProcessExit0(this->val$pid, this->val$shouldReap);
	if (exitValue == -2) {
		int64_t sleep = 300;
		int32_t incr = 30;
		int64_t startTime = $ProcessHandleImpl::isAlive0(this->val$pid);
		int64_t origStart = startTime;
		while (startTime >= 0) {
			try {
				$Thread::sleep($Math::min(sleep, (int64_t)5000));
				sleep += incr;
			} catch ($InterruptedException&) {
				$catch();
			}
			startTime = $ProcessHandleImpl::isAlive0(this->val$pid);
			if (startTime > 0 && origStart > 0 && startTime != origStart) {
				break;
			}
		}
		exitValue = 0;
	}
	$nc(this->val$newCompletion)->complete($($Integer::valueOf(exitValue)));
	$nc($ProcessHandleImpl::completions)->remove($($Long::valueOf(this->val$pid)), this->val$newCompletion);
}

ProcessHandleImpl$1::ProcessHandleImpl$1() {
}

$Class* ProcessHandleImpl$1::load$($String* name, bool initialize) {
	$loadClass(ProcessHandleImpl$1, name, initialize, &_ProcessHandleImpl$1_ClassInfo_, allocate$ProcessHandleImpl$1);
	return class$;
}

$Class* ProcessHandleImpl$1::class$ = nullptr;

	} // lang
} // java