#include <java/util/concurrent/RecursiveTask.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ForkJoinTask = ::java::util::concurrent::ForkJoinTask;

namespace java {
	namespace util {
		namespace concurrent {

void RecursiveTask::init$() {
	$ForkJoinTask::init$();
}

$Object* RecursiveTask::getRawResult() {
	return this->result;
}

void RecursiveTask::setRawResult(Object$* value) {
	$set(this, result, value);
}

bool RecursiveTask::exec() {
	$set(this, result, compute());
	return true;
}

RecursiveTask::RecursiveTask() {
}

$Class* RecursiveTask::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RecursiveTask, serialVersionUID)},
		{"result", "Ljava/lang/Object;", "TV;", 0, $field(RecursiveTask, result)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RecursiveTask, init$, void)},
		{"compute", "()Ljava/lang/Object;", "()TV;", $PROTECTED | $ABSTRACT, $virtualMethod(RecursiveTask, compute, $Object*)},
		{"exec", "()Z", nullptr, $PROTECTED | $FINAL, $virtualMethod(RecursiveTask, exec, bool)},
		{"getRawResult", "()Ljava/lang/Object;", "()TV;", $PUBLIC | $FINAL, $virtualMethod(RecursiveTask, getRawResult, $Object*)},
		{"setRawResult", "(Ljava/lang/Object;)V", "(TV;)V", $PROTECTED | $FINAL, $virtualMethod(RecursiveTask, setRawResult, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.util.concurrent.RecursiveTask",
		"java.util.concurrent.ForkJoinTask",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<V:Ljava/lang/Object;>Ljava/util/concurrent/ForkJoinTask<TV;>;"
	};
	$loadClass(RecursiveTask, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(RecursiveTask));
	});
	return class$;
}

$Class* RecursiveTask::class$ = nullptr;

		} // concurrent
	} // util
} // java