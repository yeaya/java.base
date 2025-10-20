#include <java/util/stream/AbstractShortCircuitTask.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Spliterator.h>
#include <java/util/concurrent/CountedCompleter.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <java/util/concurrent/atomic/AtomicReference.h>
#include <java/util/stream/AbstractTask.h>
#include <java/util/stream/PipelineHelper.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $CountedCompleter = ::java::util::concurrent::CountedCompleter;
using $ForkJoinTask = ::java::util::concurrent::ForkJoinTask;
using $AtomicReference = ::java::util::concurrent::atomic::AtomicReference;
using $AbstractTask = ::java::util::stream::AbstractTask;
using $PipelineHelper = ::java::util::stream::PipelineHelper;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _AbstractShortCircuitTask_FieldInfo_[] = {
	{"sharedResult", "Ljava/util/concurrent/atomic/AtomicReference;", "Ljava/util/concurrent/atomic/AtomicReference<TR;>;", $PROTECTED | $FINAL, $field(AbstractShortCircuitTask, sharedResult)},
	{"canceled", "Z", nullptr, $PROTECTED | $VOLATILE, $field(AbstractShortCircuitTask, canceled)},
	{}
};

$MethodInfo _AbstractShortCircuitTask_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;)V", "(Ljava/util/stream/PipelineHelper<TP_OUT;>;Ljava/util/Spliterator<TP_IN;>;)V", $PROTECTED, $method(static_cast<void(AbstractShortCircuitTask::*)($PipelineHelper*,$Spliterator*)>(&AbstractShortCircuitTask::init$))},
	{"<init>", "(Ljava/util/stream/AbstractShortCircuitTask;Ljava/util/Spliterator;)V", "(TK;Ljava/util/Spliterator<TP_IN;>;)V", $PROTECTED, $method(static_cast<void(AbstractShortCircuitTask::*)(AbstractShortCircuitTask*,$Spliterator*)>(&AbstractShortCircuitTask::init$))},
	{"cancel", "()V", nullptr, $PROTECTED},
	{"cancelLaterNodes", "()V", nullptr, $PROTECTED},
	{"compute", "()V", nullptr, $PUBLIC},
	{"getEmptyResult", "()Ljava/lang/Object;", "()TR;", $PROTECTED | $ABSTRACT},
	{"getLocalResult", "()Ljava/lang/Object;", "()TR;", $PUBLIC},
	{"getRawResult", "()Ljava/lang/Object;", "()TR;", $PUBLIC},
	{"setLocalResult", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED},
	{"shortCircuit", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED},
	{"taskCanceled", "()Z", nullptr, $PROTECTED},
	{}
};

$ClassInfo _AbstractShortCircuitTask_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.AbstractShortCircuitTask",
	"java.util.stream.AbstractTask",
	nullptr,
	_AbstractShortCircuitTask_FieldInfo_,
	_AbstractShortCircuitTask_MethodInfo_,
	"<P_IN:Ljava/lang/Object;P_OUT:Ljava/lang/Object;R:Ljava/lang/Object;K:Ljava/util/stream/AbstractShortCircuitTask<TP_IN;TP_OUT;TR;TK;>;>Ljava/util/stream/AbstractTask<TP_IN;TP_OUT;TR;TK;>;"
};

$Object* allocate$AbstractShortCircuitTask($Class* clazz) {
	return $of($alloc(AbstractShortCircuitTask));
}

void AbstractShortCircuitTask::init$($PipelineHelper* helper, $Spliterator* spliterator) {
	$AbstractTask::init$(helper, spliterator);
	$set(this, sharedResult, $new($AtomicReference));
}

void AbstractShortCircuitTask::init$(AbstractShortCircuitTask* parent, $Spliterator* spliterator) {
	$AbstractTask::init$(static_cast<$AbstractTask*>(parent), spliterator);
	$set(this, sharedResult, $nc(parent)->sharedResult);
}

void AbstractShortCircuitTask::compute() {
	$useLocalCurrentObjectStackCache();
	$var($Spliterator, rs, this->spliterator);
	$var($Spliterator, ls, nullptr);
	int64_t sizeEstimate = $nc(rs)->estimateSize();
	int64_t sizeThreshold = getTargetSize(sizeEstimate);
	bool forkRight = false;
	$var(AbstractShortCircuitTask, task, this);
	$var($AtomicReference, sr, this->sharedResult);
	$var($Object, result, nullptr);
	while (($assign(result, $nc(sr)->get())) == nullptr) {
		if ($nc(task)->taskCanceled()) {
			$assign(result, task->getEmptyResult());
			break;
		}
		if (sizeEstimate <= sizeThreshold || ($assign(ls, rs->trySplit())) == nullptr) {
			$assign(result, $nc(task)->doLeaf());
			break;
		}
		$var(AbstractShortCircuitTask, leftChild, nullptr);
		$var(AbstractShortCircuitTask, rightChild, nullptr);
		$var(AbstractShortCircuitTask, taskToFork, nullptr);
		$set($nc(task), leftChild, ($assign(leftChild, $cast(AbstractShortCircuitTask, task->makeChild(ls)))));
		$set(task, rightChild, ($assign(rightChild, $cast(AbstractShortCircuitTask, task->makeChild(rs)))));
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
	$nc(task)->setLocalResult(result);
	task->tryComplete();
}

void AbstractShortCircuitTask::shortCircuit(Object$* result) {
	if (result != nullptr) {
		$nc(this->sharedResult)->compareAndSet(nullptr, result);
	}
}

void AbstractShortCircuitTask::setLocalResult(Object$* localResult) {
	if (isRoot()) {
		if (localResult != nullptr) {
			$nc(this->sharedResult)->compareAndSet(nullptr, localResult);
		}
	} else {
		$AbstractTask::setLocalResult(localResult);
	}
}

$Object* AbstractShortCircuitTask::getRawResult() {
	return $of(getLocalResult());
}

$Object* AbstractShortCircuitTask::getLocalResult() {
	if (isRoot()) {
		$var($Object, answer, $nc(this->sharedResult)->get());
		return $of((answer == nullptr) ? getEmptyResult() : answer);
	} else {
		return $of($AbstractTask::getLocalResult());
	}
}

void AbstractShortCircuitTask::cancel() {
	this->canceled = true;
}

bool AbstractShortCircuitTask::taskCanceled() {
	bool cancel = this->canceled;
	if (!cancel) {
		{
			$var(AbstractShortCircuitTask, parent, $cast(AbstractShortCircuitTask, getParent()));
			for (; !cancel && parent != nullptr; $assign(parent, $cast(AbstractShortCircuitTask, $nc(parent)->getParent()))) {
				cancel = parent->canceled;
			}
		}
	}
	return cancel;
}

void AbstractShortCircuitTask::cancelLaterNodes() {
	$useLocalCurrentObjectStackCache();
	{
		$var(AbstractShortCircuitTask, parent, $cast(AbstractShortCircuitTask, getParent()));
		$var(AbstractShortCircuitTask, node, this);
		for (; parent != nullptr; $assign(node, parent), $assign(parent, $cast(AbstractShortCircuitTask, $nc(parent)->getParent()))) {
			if ($equals(parent->leftChild, node)) {
				$var(AbstractShortCircuitTask, rightSibling, $cast(AbstractShortCircuitTask, parent->rightChild));
				if (!$nc(rightSibling)->canceled) {
					rightSibling->cancel();
				}
			}
		}
	}
}

AbstractShortCircuitTask::AbstractShortCircuitTask() {
}

$Class* AbstractShortCircuitTask::load$($String* name, bool initialize) {
	$loadClass(AbstractShortCircuitTask, name, initialize, &_AbstractShortCircuitTask_ClassInfo_, allocate$AbstractShortCircuitTask);
	return class$;
}

$Class* AbstractShortCircuitTask::class$ = nullptr;

		} // stream
	} // util
} // java