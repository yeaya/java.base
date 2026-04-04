#include <java/util/concurrent/ForkJoinTask$RunnableExecuteAction.h>
#include <java/lang/Runnable.h>
#include <java/lang/Thread$UncaughtExceptionHandler.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $Thread$UncaughtExceptionHandler = ::java::lang::Thread$UncaughtExceptionHandler;
using $Void = ::java::lang::Void;
using $ForkJoinTask = ::java::util::concurrent::ForkJoinTask;

namespace java {
	namespace util {
		namespace concurrent {

void ForkJoinTask$RunnableExecuteAction::init$($Runnable* runnable) {
	$ForkJoinTask::init$();
	if (runnable == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, runnable, runnable);
}

$Object* ForkJoinTask$RunnableExecuteAction::getRawResult() {
	return nullptr;
}

void ForkJoinTask$RunnableExecuteAction::setRawResult($Void* v) {
}

bool ForkJoinTask$RunnableExecuteAction::exec() {
	$nc(this->runnable)->run();
	return true;
}

int32_t ForkJoinTask$RunnableExecuteAction::trySetException($Throwable* ex) {
	$useLocalObjectStack();
	int32_t s = 0;
	$var($Thread, t, nullptr);
	$var($Thread$UncaughtExceptionHandler, h, nullptr);
	bool var$0 = isExceptionalStatus(s = trySetThrown(ex));
	if (var$0 && ($assign(h, $nc(($assign(t, $Thread::currentThread())))->getUncaughtExceptionHandler())) != nullptr) {
		try {
			$nc(h)->uncaughtException(t, ex);
		} catch ($Throwable& ignore) {
		}
	}
	return s;
}

void ForkJoinTask$RunnableExecuteAction::setRawResult(Object$* v) {
	this->setRawResult($cast($Void, v));
}

ForkJoinTask$RunnableExecuteAction::ForkJoinTask$RunnableExecuteAction() {
}

$Class* ForkJoinTask$RunnableExecuteAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"runnable", "Ljava/lang/Runnable;", nullptr, $FINAL, $field(ForkJoinTask$RunnableExecuteAction, runnable)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ForkJoinTask$RunnableExecuteAction, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Runnable;)V", nullptr, 0, $method(ForkJoinTask$RunnableExecuteAction, init$, void, $Runnable*)},
		{"exec", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(ForkJoinTask$RunnableExecuteAction, exec, bool)},
		{"getRawResult", "()Ljava/lang/Void;", nullptr, $PUBLIC | $FINAL, $virtualMethod(ForkJoinTask$RunnableExecuteAction, getRawResult, $Object*)},
		{"setRawResult", "(Ljava/lang/Void;)V", nullptr, $PUBLIC | $FINAL, $method(ForkJoinTask$RunnableExecuteAction, setRawResult, void, $Void*)},
		{"setRawResult", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ForkJoinTask$RunnableExecuteAction, setRawResult, void, Object$*)},
		{"trySetException", "(Ljava/lang/Throwable;)I", nullptr, 0, $virtualMethod(ForkJoinTask$RunnableExecuteAction, trySetException, int32_t, $Throwable*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.ForkJoinTask$RunnableExecuteAction", "java.util.concurrent.ForkJoinTask", "RunnableExecuteAction", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.ForkJoinTask$RunnableExecuteAction",
		"java.util.concurrent.ForkJoinTask",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/concurrent/ForkJoinTask<Ljava/lang/Void;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.ForkJoinTask"
	};
	$loadClass(ForkJoinTask$RunnableExecuteAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ForkJoinTask$RunnableExecuteAction));
	});
	return class$;
}

$Class* ForkJoinTask$RunnableExecuteAction::class$ = nullptr;

		} // concurrent
	} // util
} // java