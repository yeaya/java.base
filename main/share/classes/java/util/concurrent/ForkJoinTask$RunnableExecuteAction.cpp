#include <java/util/concurrent/ForkJoinTask$RunnableExecuteAction.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Thread$UncaughtExceptionHandler.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _ForkJoinTask$RunnableExecuteAction_FieldInfo_[] = {
	{"runnable", "Ljava/lang/Runnable;", nullptr, $FINAL, $field(ForkJoinTask$RunnableExecuteAction, runnable)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ForkJoinTask$RunnableExecuteAction, serialVersionUID)},
	{}
};

$MethodInfo _ForkJoinTask$RunnableExecuteAction_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Runnable;)V", nullptr, 0, $method(static_cast<void(ForkJoinTask$RunnableExecuteAction::*)($Runnable*)>(&ForkJoinTask$RunnableExecuteAction::init$))},
	{"exec", "()Z", nullptr, $PUBLIC | $FINAL},
	{"getRawResult", "()Ljava/lang/Void;", nullptr, $PUBLIC | $FINAL},
	{"setRawResult", "(Ljava/lang/Void;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(ForkJoinTask$RunnableExecuteAction::*)($Void*)>(&ForkJoinTask$RunnableExecuteAction::setRawResult))},
	{"setRawResult", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"trySetException", "(Ljava/lang/Throwable;)I", nullptr, 0},
	{}
};

$InnerClassInfo _ForkJoinTask$RunnableExecuteAction_InnerClassesInfo_[] = {
	{"java.util.concurrent.ForkJoinTask$RunnableExecuteAction", "java.util.concurrent.ForkJoinTask", "RunnableExecuteAction", $STATIC | $FINAL},
	{}
};

$ClassInfo _ForkJoinTask$RunnableExecuteAction_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ForkJoinTask$RunnableExecuteAction",
	"java.util.concurrent.ForkJoinTask",
	nullptr,
	_ForkJoinTask$RunnableExecuteAction_FieldInfo_,
	_ForkJoinTask$RunnableExecuteAction_MethodInfo_,
	"Ljava/util/concurrent/ForkJoinTask<Ljava/lang/Void;>;",
	nullptr,
	_ForkJoinTask$RunnableExecuteAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ForkJoinTask"
};

$Object* allocate$ForkJoinTask$RunnableExecuteAction($Class* clazz) {
	return $of($alloc(ForkJoinTask$RunnableExecuteAction));
}

void ForkJoinTask$RunnableExecuteAction::init$($Runnable* runnable) {
	$ForkJoinTask::init$();
	if (runnable == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, runnable, runnable);
}

$Object* ForkJoinTask$RunnableExecuteAction::getRawResult() {
	return $of(nullptr);
}

void ForkJoinTask$RunnableExecuteAction::setRawResult($Void* v) {
}

bool ForkJoinTask$RunnableExecuteAction::exec() {
	$nc(this->runnable)->run();
	return true;
}

int32_t ForkJoinTask$RunnableExecuteAction::trySetException($Throwable* ex) {
	int32_t s = 0;
	$var($Thread, t, nullptr);
	$var($Thread$UncaughtExceptionHandler, h, nullptr);
	bool var$0 = isExceptionalStatus(s = trySetThrown(ex));
	if (var$0 && ($assign(h, $nc(($assign(t, $Thread::currentThread())))->getUncaughtExceptionHandler())) != nullptr) {
		try {
			$nc(h)->uncaughtException(t, ex);
		} catch ($Throwable&) {
			$catch();
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
	$loadClass(ForkJoinTask$RunnableExecuteAction, name, initialize, &_ForkJoinTask$RunnableExecuteAction_ClassInfo_, allocate$ForkJoinTask$RunnableExecuteAction);
	return class$;
}

$Class* ForkJoinTask$RunnableExecuteAction::class$ = nullptr;

		} // concurrent
	} // util
} // java