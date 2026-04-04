#include <java/util/stream/ForEachOps$ForEachTask.h>
#include <java/util/Spliterator.h>
#include <java/util/concurrent/CountedCompleter.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <java/util/stream/AbstractTask.h>
#include <java/util/stream/ForEachOps.h>
#include <java/util/stream/PipelineHelper.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/StreamOpFlag.h>
#include <jcpp.h>

#undef SHORT_CIRCUIT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $CountedCompleter = ::java::util::concurrent::CountedCompleter;
using $AbstractTask = ::java::util::stream::AbstractTask;
using $PipelineHelper = ::java::util::stream::PipelineHelper;
using $Sink = ::java::util::stream::Sink;
using $StreamOpFlag = ::java::util::stream::StreamOpFlag;

namespace java {
	namespace util {
		namespace stream {

void ForEachOps$ForEachTask::init$($PipelineHelper* helper, $Spliterator* spliterator, $Sink* sink) {
	$CountedCompleter::init$(nullptr);
	$set(this, sink, sink);
	$set(this, helper, helper);
	$set(this, spliterator, spliterator);
	this->targetSize = 0;
}

void ForEachOps$ForEachTask::init$(ForEachOps$ForEachTask* parent, $Spliterator* spliterator) {
	$CountedCompleter::init$(parent);
	$set(this, spliterator, spliterator);
	$set(this, sink, $nc(parent)->sink);
	this->targetSize = parent->targetSize;
	$set(this, helper, parent->helper);
}

void ForEachOps$ForEachTask::compute() {
	$useLocalObjectStack();
	$var($Spliterator, rightSplit, this->spliterator);
	$var($Spliterator, leftSplit, nullptr);
	int64_t sizeEstimate = $nc(rightSplit)->estimateSize();
	int64_t sizeThreshold = 0;
	if ((sizeThreshold = this->targetSize) == 0) {
		this->targetSize = (sizeThreshold = $AbstractTask::suggestTargetSize(sizeEstimate));
	}
	$init($StreamOpFlag);
	bool isShortCircuit = $StreamOpFlag::SHORT_CIRCUIT->isKnown($nc(this->helper)->getStreamAndOpFlags());
	bool forkRight = false;
	$var($Sink, taskSink, this->sink);
	$var(ForEachOps$ForEachTask, task, this);
	while (!isShortCircuit || !$nc(taskSink)->cancellationRequested()) {
		if (sizeEstimate <= sizeThreshold || ($assign(leftSplit, $nc(rightSplit)->trySplit())) == nullptr) {
			$nc($nc(task)->helper)->copyInto(taskSink, rightSplit);
			break;
		}
		$var(ForEachOps$ForEachTask, leftTask, $new(ForEachOps$ForEachTask, task, leftSplit));
		$nc(task)->addToPendingCount(1);
		$var(ForEachOps$ForEachTask, taskToFork, nullptr);
		if (forkRight) {
			forkRight = false;
			$assign(rightSplit, leftSplit);
			$assign(taskToFork, task);
			$assign(task, leftTask);
		} else {
			forkRight = true;
			$assign(taskToFork, leftTask);
		}
		$nc(taskToFork)->fork();
		sizeEstimate = $nc(rightSplit)->estimateSize();
	}
	$set($nc(task), spliterator, nullptr);
	task->propagateCompletion();
}

ForEachOps$ForEachTask::ForEachOps$ForEachTask() {
}

$Class* ForEachOps$ForEachTask::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"spliterator", "Ljava/util/Spliterator;", "Ljava/util/Spliterator<TS;>;", $PRIVATE, $field(ForEachOps$ForEachTask, spliterator)},
		{"sink", "Ljava/util/stream/Sink;", "Ljava/util/stream/Sink<TS;>;", $PRIVATE | $FINAL, $field(ForEachOps$ForEachTask, sink)},
		{"helper", "Ljava/util/stream/PipelineHelper;", "Ljava/util/stream/PipelineHelper<TT;>;", $PRIVATE | $FINAL, $field(ForEachOps$ForEachTask, helper)},
		{"targetSize", "J", nullptr, $PRIVATE, $field(ForEachOps$ForEachTask, targetSize)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;Ljava/util/stream/Sink;)V", "(Ljava/util/stream/PipelineHelper<TT;>;Ljava/util/Spliterator<TS;>;Ljava/util/stream/Sink<TS;>;)V", 0, $method(ForEachOps$ForEachTask, init$, void, $PipelineHelper*, $Spliterator*, $Sink*)},
		{"<init>", "(Ljava/util/stream/ForEachOps$ForEachTask;Ljava/util/Spliterator;)V", "(Ljava/util/stream/ForEachOps$ForEachTask<TS;TT;>;Ljava/util/Spliterator<TS;>;)V", 0, $method(ForEachOps$ForEachTask, init$, void, ForEachOps$ForEachTask*, $Spliterator*)},
		{"compute", "()V", nullptr, $PUBLIC, $virtualMethod(ForEachOps$ForEachTask, compute, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.ForEachOps$ForEachTask", "java.util.stream.ForEachOps", "ForEachTask", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.stream.ForEachOps$ForEachTask",
		"java.util.concurrent.CountedCompleter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<S:Ljava/lang/Object;T:Ljava/lang/Object;>Ljava/util/concurrent/CountedCompleter<Ljava/lang/Void;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.ForEachOps"
	};
	$loadClass(ForEachOps$ForEachTask, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ForEachOps$ForEachTask));
	});
	return class$;
}

$Class* ForEachOps$ForEachTask::class$ = nullptr;

		} // stream
	} // util
} // java