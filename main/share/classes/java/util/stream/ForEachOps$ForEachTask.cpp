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
using $ForkJoinTask = ::java::util::concurrent::ForkJoinTask;
using $AbstractTask = ::java::util::stream::AbstractTask;
using $ForEachOps = ::java::util::stream::ForEachOps;
using $PipelineHelper = ::java::util::stream::PipelineHelper;
using $Sink = ::java::util::stream::Sink;
using $StreamOpFlag = ::java::util::stream::StreamOpFlag;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _ForEachOps$ForEachTask_FieldInfo_[] = {
	{"spliterator", "Ljava/util/Spliterator;", "Ljava/util/Spliterator<TS;>;", $PRIVATE, $field(ForEachOps$ForEachTask, spliterator)},
	{"sink", "Ljava/util/stream/Sink;", "Ljava/util/stream/Sink<TS;>;", $PRIVATE | $FINAL, $field(ForEachOps$ForEachTask, sink)},
	{"helper", "Ljava/util/stream/PipelineHelper;", "Ljava/util/stream/PipelineHelper<TT;>;", $PRIVATE | $FINAL, $field(ForEachOps$ForEachTask, helper)},
	{"targetSize", "J", nullptr, $PRIVATE, $field(ForEachOps$ForEachTask, targetSize)},
	{}
};

$MethodInfo _ForEachOps$ForEachTask_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;Ljava/util/stream/Sink;)V", "(Ljava/util/stream/PipelineHelper<TT;>;Ljava/util/Spliterator<TS;>;Ljava/util/stream/Sink<TS;>;)V", 0, $method(static_cast<void(ForEachOps$ForEachTask::*)($PipelineHelper*,$Spliterator*,$Sink*)>(&ForEachOps$ForEachTask::init$))},
	{"<init>", "(Ljava/util/stream/ForEachOps$ForEachTask;Ljava/util/Spliterator;)V", "(Ljava/util/stream/ForEachOps$ForEachTask<TS;TT;>;Ljava/util/Spliterator<TS;>;)V", 0, $method(static_cast<void(ForEachOps$ForEachTask::*)(ForEachOps$ForEachTask*,$Spliterator*)>(&ForEachOps$ForEachTask::init$))},
	{"compute", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ForEachOps$ForEachTask_InnerClassesInfo_[] = {
	{"java.util.stream.ForEachOps$ForEachTask", "java.util.stream.ForEachOps", "ForEachTask", $STATIC | $FINAL},
	{}
};

$ClassInfo _ForEachOps$ForEachTask_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.ForEachOps$ForEachTask",
	"java.util.concurrent.CountedCompleter",
	nullptr,
	_ForEachOps$ForEachTask_FieldInfo_,
	_ForEachOps$ForEachTask_MethodInfo_,
	"<S:Ljava/lang/Object;T:Ljava/lang/Object;>Ljava/util/concurrent/CountedCompleter<Ljava/lang/Void;>;",
	nullptr,
	_ForEachOps$ForEachTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ForEachOps"
};

$Object* allocate$ForEachOps$ForEachTask($Class* clazz) {
	return $of($alloc(ForEachOps$ForEachTask));
}

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
	$useLocalCurrentObjectStackCache();
	$var($Spliterator, rightSplit, this->spliterator);
	$var($Spliterator, leftSplit, nullptr);
	int64_t sizeEstimate = $nc(rightSplit)->estimateSize();
	int64_t sizeThreshold = 0;
	if ((sizeThreshold = this->targetSize) == (int64_t)0) {
		this->targetSize = (sizeThreshold = $AbstractTask::suggestTargetSize(sizeEstimate));
	}
	$init($StreamOpFlag);
	bool isShortCircuit = $StreamOpFlag::SHORT_CIRCUIT->isKnown($nc(this->helper)->getStreamAndOpFlags());
	bool forkRight = false;
	$var($Sink, taskSink, this->sink);
	$var(ForEachOps$ForEachTask, task, this);
	while (!isShortCircuit || !$nc(taskSink)->cancellationRequested()) {
		if (sizeEstimate <= sizeThreshold || ($assign(leftSplit, rightSplit->trySplit())) == nullptr) {
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
		sizeEstimate = rightSplit->estimateSize();
	}
	$set($nc(task), spliterator, nullptr);
	task->propagateCompletion();
}

ForEachOps$ForEachTask::ForEachOps$ForEachTask() {
}

$Class* ForEachOps$ForEachTask::load$($String* name, bool initialize) {
	$loadClass(ForEachOps$ForEachTask, name, initialize, &_ForEachOps$ForEachTask_ClassInfo_, allocate$ForEachOps$ForEachTask);
	return class$;
}

$Class* ForEachOps$ForEachTask::class$ = nullptr;

		} // stream
	} // util
} // java