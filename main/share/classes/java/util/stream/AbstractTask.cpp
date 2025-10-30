#include <java/util/stream/AbstractTask.h>

#include <java/lang/IllegalStateException.h>
#include <java/util/Spliterator.h>
#include <java/util/concurrent/CountedCompleter.h>
#include <java/util/concurrent/ForkJoinPool.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <java/util/concurrent/ForkJoinWorkerThread.h>
#include <java/util/stream/PipelineHelper.h>
#include <jcpp.h>

#undef LEAF_TARGET

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $CountedCompleter = ::java::util::concurrent::CountedCompleter;
using $ForkJoinPool = ::java::util::concurrent::ForkJoinPool;
using $ForkJoinTask = ::java::util::concurrent::ForkJoinTask;
using $ForkJoinWorkerThread = ::java::util::concurrent::ForkJoinWorkerThread;
using $PipelineHelper = ::java::util::stream::PipelineHelper;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _AbstractTask_FieldInfo_[] = {
	{"LEAF_TARGET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractTask, LEAF_TARGET)},
	{"helper", "Ljava/util/stream/PipelineHelper;", "Ljava/util/stream/PipelineHelper<TP_OUT;>;", $PROTECTED | $FINAL, $field(AbstractTask, helper)},
	{"spliterator", "Ljava/util/Spliterator;", "Ljava/util/Spliterator<TP_IN;>;", $PROTECTED, $field(AbstractTask, spliterator)},
	{"targetSize", "J", nullptr, $PROTECTED, $field(AbstractTask, targetSize)},
	{"leftChild", "Ljava/util/stream/AbstractTask;", "TK;", $PROTECTED, $field(AbstractTask, leftChild)},
	{"rightChild", "Ljava/util/stream/AbstractTask;", "TK;", $PROTECTED, $field(AbstractTask, rightChild)},
	{"localResult", "Ljava/lang/Object;", "TR;", $PRIVATE, $field(AbstractTask, localResult)},
	{}
};

$MethodInfo _AbstractTask_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;)V", "(Ljava/util/stream/PipelineHelper<TP_OUT;>;Ljava/util/Spliterator<TP_IN;>;)V", $PROTECTED, $method(static_cast<void(AbstractTask::*)($PipelineHelper*,$Spliterator*)>(&AbstractTask::init$))},
	{"<init>", "(Ljava/util/stream/AbstractTask;Ljava/util/Spliterator;)V", "(TK;Ljava/util/Spliterator<TP_IN;>;)V", $PROTECTED, $method(static_cast<void(AbstractTask::*)(AbstractTask*,$Spliterator*)>(&AbstractTask::init$))},
	{"compute", "()V", nullptr, $PUBLIC},
	{"doLeaf", "()Ljava/lang/Object;", "()TR;", $PROTECTED | $ABSTRACT},
	{"getLeafTarget", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&AbstractTask::getLeafTarget))},
	{"getLocalResult", "()Ljava/lang/Object;", "()TR;", $PROTECTED},
	{"getParent", "()Ljava/util/stream/AbstractTask;", "()TK;", $PROTECTED},
	{"getRawResult", "()Ljava/lang/Object;", "()TR;", $PUBLIC},
	{"getTargetSize", "(J)J", nullptr, $PROTECTED | $FINAL, $method(static_cast<int64_t(AbstractTask::*)(int64_t)>(&AbstractTask::getTargetSize))},
	{"isLeaf", "()Z", nullptr, $PROTECTED},
	{"isLeftmostNode", "()Z", nullptr, $PROTECTED},
	{"isRoot", "()Z", nullptr, $PROTECTED},
	{"makeChild", "(Ljava/util/Spliterator;)Ljava/util/stream/AbstractTask;", "(Ljava/util/Spliterator<TP_IN;>;)TK;", $PROTECTED | $ABSTRACT},
	{"onCompletion", "(Ljava/util/concurrent/CountedCompleter;)V", "(Ljava/util/concurrent/CountedCompleter<*>;)V", $PUBLIC},
	{"setLocalResult", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED},
	{"setRawResult", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED},
	{"suggestTargetSize", "(J)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&AbstractTask::suggestTargetSize))},
	{}
};

$ClassInfo _AbstractTask_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.AbstractTask",
	"java.util.concurrent.CountedCompleter",
	nullptr,
	_AbstractTask_FieldInfo_,
	_AbstractTask_MethodInfo_,
	"<P_IN:Ljava/lang/Object;P_OUT:Ljava/lang/Object;R:Ljava/lang/Object;K:Ljava/util/stream/AbstractTask<TP_IN;TP_OUT;TR;TK;>;>Ljava/util/concurrent/CountedCompleter<TR;>;"
};

$Object* allocate$AbstractTask($Class* clazz) {
	return $of($alloc(AbstractTask));
}

int32_t AbstractTask::LEAF_TARGET = 0;

void AbstractTask::init$($PipelineHelper* helper, $Spliterator* spliterator) {
	$CountedCompleter::init$(nullptr);
	$set(this, helper, helper);
	$set(this, spliterator, spliterator);
	this->targetSize = 0;
}

void AbstractTask::init$(AbstractTask* parent, $Spliterator* spliterator) {
	$CountedCompleter::init$(parent);
	$set(this, spliterator, spliterator);
	$set(this, helper, $nc(parent)->helper);
	this->targetSize = parent->targetSize;
}

int32_t AbstractTask::getLeafTarget() {
	$init(AbstractTask);
	$useLocalCurrentObjectStackCache();
	$var($Thread, t, $Thread::currentThread());
	if ($instanceOf($ForkJoinWorkerThread, t)) {
		return $nc($($nc(($cast($ForkJoinWorkerThread, t)))->getPool()))->getParallelism() << 2;
	} else {
		return AbstractTask::LEAF_TARGET;
	}
}

int64_t AbstractTask::suggestTargetSize(int64_t sizeEstimate) {
	$init(AbstractTask);
	int64_t est = $div(sizeEstimate, getLeafTarget());
	return est > (int64_t)0 ? est : (int64_t)1;
}

int64_t AbstractTask::getTargetSize(int64_t sizeEstimate) {
	int64_t s = 0;
	return ((s = this->targetSize) != 0 ? s : (this->targetSize = suggestTargetSize(sizeEstimate)));
}

$Object* AbstractTask::getRawResult() {
	return $of(this->localResult);
}

void AbstractTask::setRawResult(Object$* result) {
	if (result != nullptr) {
		$throwNew($IllegalStateException);
	}
}

$Object* AbstractTask::getLocalResult() {
	return $of(this->localResult);
}

void AbstractTask::setLocalResult(Object$* localResult) {
	$set(this, localResult, localResult);
}

bool AbstractTask::isLeaf() {
	return this->leftChild == nullptr;
}

bool AbstractTask::isRoot() {
	return getParent() == nullptr;
}

AbstractTask* AbstractTask::getParent() {
	return $cast(AbstractTask, getCompleter());
}

void AbstractTask::compute() {
	$useLocalCurrentObjectStackCache();
	$var($Spliterator, rs, this->spliterator);
	$var($Spliterator, ls, nullptr);
	int64_t sizeEstimate = $nc(rs)->estimateSize();
	int64_t sizeThreshold = getTargetSize(sizeEstimate);
	bool forkRight = false;
	$var(AbstractTask, task, this);
	while (sizeEstimate > sizeThreshold && ($assign(ls, rs->trySplit())) != nullptr) {
		$var(AbstractTask, leftChild, nullptr);
		$var(AbstractTask, rightChild, nullptr);
		$var(AbstractTask, taskToFork, nullptr);
		$set($nc(task), leftChild, ($assign(leftChild, task->makeChild(ls))));
		$set(task, rightChild, ($assign(rightChild, task->makeChild(rs))));
		task->setPendingCount(1);
		if (forkRight) {
			forkRight = false;
			$assign(rs, ls);
			$assign(task, leftChild);
			$assign(taskToFork, rightChild);
		} else {
			forkRight = true;
			$assign(task, rightChild);
			$assign(taskToFork, leftChild);
		}
		$nc(taskToFork)->fork();
		sizeEstimate = rs->estimateSize();
	}
	$nc(task)->setLocalResult($(task->doLeaf()));
	task->tryComplete();
}

void AbstractTask::onCompletion($CountedCompleter* caller) {
	$set(this, spliterator, nullptr);
	$set(this, leftChild, ($set(this, rightChild, nullptr)));
}

bool AbstractTask::isLeftmostNode() {
	$useLocalCurrentObjectStackCache();
	$var(AbstractTask, node, this);
	while (node != nullptr) {
		$var(AbstractTask, parent, node->getParent());
		if (parent != nullptr && parent->leftChild != node) {
			return false;
		}
		$assign(node, parent);
	}
	return true;
}

void clinit$AbstractTask($Class* class$) {
	AbstractTask::LEAF_TARGET = $ForkJoinPool::getCommonPoolParallelism() << 2;
}

AbstractTask::AbstractTask() {
}

$Class* AbstractTask::load$($String* name, bool initialize) {
	$loadClass(AbstractTask, name, initialize, &_AbstractTask_ClassInfo_, clinit$AbstractTask, allocate$AbstractTask);
	return class$;
}

$Class* AbstractTask::class$ = nullptr;

		} // stream
	} // util
} // java