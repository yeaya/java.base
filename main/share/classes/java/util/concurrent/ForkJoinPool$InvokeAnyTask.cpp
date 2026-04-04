#include <java/util/concurrent/ForkJoinPool$InvokeAnyTask.h>
#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/ForkJoinPool$InvokeAnyRoot.h>
#include <java/util/concurrent/ForkJoinPool.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Callable = ::java::util::concurrent::Callable;
using $ForkJoinPool$InvokeAnyRoot = ::java::util::concurrent::ForkJoinPool$InvokeAnyRoot;
using $ForkJoinTask = ::java::util::concurrent::ForkJoinTask;

namespace java {
	namespace util {
		namespace concurrent {

void ForkJoinPool$InvokeAnyTask::init$($ForkJoinPool$InvokeAnyRoot* root, $Callable* callable) {
	$ForkJoinTask::init$();
	$set(this, root, root);
	$set(this, callable, callable);
}

bool ForkJoinPool$InvokeAnyTask::exec() {
	$Thread::interrupted();
	$set(this, runner, $Thread::currentThread());
	$nc(this->root)->tryComplete(this->callable);
	$set(this, runner, nullptr);
	$Thread::interrupted();
	return true;
}

bool ForkJoinPool$InvokeAnyTask::cancel(bool mayInterruptIfRunning) {
	$var($Thread, t, nullptr);
	bool stat = $ForkJoinTask::cancel(false);
	if (mayInterruptIfRunning && ($assign(t, this->runner)) != nullptr) {
		try {
			$nc(t)->interrupt();
		} catch ($Throwable& ignore) {
		}
	}
	return stat;
}

void ForkJoinPool$InvokeAnyTask::setRawResult(Object$* v) {
}

$Object* ForkJoinPool$InvokeAnyTask::getRawResult() {
	return nullptr;
}

ForkJoinPool$InvokeAnyTask::ForkJoinPool$InvokeAnyTask() {
}

$Class* ForkJoinPool$InvokeAnyTask::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ForkJoinPool$InvokeAnyTask, serialVersionUID)},
		{"root", "Ljava/util/concurrent/ForkJoinPool$InvokeAnyRoot;", "Ljava/util/concurrent/ForkJoinPool$InvokeAnyRoot<TE;>;", $FINAL, $field(ForkJoinPool$InvokeAnyTask, root)},
		{"callable", "Ljava/util/concurrent/Callable;", "Ljava/util/concurrent/Callable<TE;>;", $FINAL, $field(ForkJoinPool$InvokeAnyTask, callable)},
		{"runner", "Ljava/lang/Thread;", nullptr, $VOLATILE | $TRANSIENT, $field(ForkJoinPool$InvokeAnyTask, runner)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/ForkJoinPool$InvokeAnyRoot;Ljava/util/concurrent/Callable;)V", "(Ljava/util/concurrent/ForkJoinPool$InvokeAnyRoot<TE;>;Ljava/util/concurrent/Callable<TE;>;)V", 0, $method(ForkJoinPool$InvokeAnyTask, init$, void, $ForkJoinPool$InvokeAnyRoot*, $Callable*)},
		{"cancel", "(Z)Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(ForkJoinPool$InvokeAnyTask, cancel, bool, bool)},
		{"exec", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(ForkJoinPool$InvokeAnyTask, exec, bool)},
		{"getRawResult", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $FINAL, $virtualMethod(ForkJoinPool$InvokeAnyTask, getRawResult, $Object*)},
		{"setRawResult", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC | $FINAL, $virtualMethod(ForkJoinPool$InvokeAnyTask, setRawResult, void, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.ForkJoinPool$InvokeAnyTask", "java.util.concurrent.ForkJoinPool", "InvokeAnyTask", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.ForkJoinPool$InvokeAnyTask",
		"java.util.concurrent.ForkJoinTask",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<E:Ljava/lang/Object;>Ljava/util/concurrent/ForkJoinTask<TE;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.ForkJoinPool"
	};
	$loadClass(ForkJoinPool$InvokeAnyTask, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ForkJoinPool$InvokeAnyTask));
	});
	return class$;
}

$Class* ForkJoinPool$InvokeAnyTask::class$ = nullptr;

		} // concurrent
	} // util
} // java