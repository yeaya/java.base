#include <java/util/stream/SliceOps$SliceTask.h>

#include <java/lang/Math.h>
#include <java/util/Spliterator.h>
#include <java/util/concurrent/CountedCompleter.h>
#include <java/util/function/IntFunction.h>
#include <java/util/stream/AbstractPipeline.h>
#include <java/util/stream/AbstractShortCircuitTask.h>
#include <java/util/stream/AbstractTask.h>
#include <java/util/stream/Node$Builder.h>
#include <java/util/stream/Node.h>
#include <java/util/stream/Nodes.h>
#include <java/util/stream/PipelineHelper.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/SliceOps.h>
#include <java/util/stream/StreamOpFlag.h>
#include <java/util/stream/StreamShape.h>
#include <jcpp.h>

#undef SIZED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $CountedCompleter = ::java::util::concurrent::CountedCompleter;
using $IntFunction = ::java::util::function::IntFunction;
using $AbstractPipeline = ::java::util::stream::AbstractPipeline;
using $AbstractShortCircuitTask = ::java::util::stream::AbstractShortCircuitTask;
using $AbstractTask = ::java::util::stream::AbstractTask;
using $Node = ::java::util::stream::Node;
using $Node$Builder = ::java::util::stream::Node$Builder;
using $Nodes = ::java::util::stream::Nodes;
using $PipelineHelper = ::java::util::stream::PipelineHelper;
using $Sink = ::java::util::stream::Sink;
using $SliceOps = ::java::util::stream::SliceOps;
using $StreamOpFlag = ::java::util::stream::StreamOpFlag;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _SliceOps$SliceTask_FieldInfo_[] = {
	{"op", "Ljava/util/stream/AbstractPipeline;", "Ljava/util/stream/AbstractPipeline<TP_OUT;TP_OUT;*>;", $PRIVATE | $FINAL, $field(SliceOps$SliceTask, op)},
	{"generator", "Ljava/util/function/IntFunction;", "Ljava/util/function/IntFunction<[TP_OUT;>;", $PRIVATE | $FINAL, $field(SliceOps$SliceTask, generator)},
	{"targetOffset", "J", nullptr, $PRIVATE | $FINAL, $field(SliceOps$SliceTask, targetOffset)},
	{"targetSize", "J", nullptr, $PRIVATE | $FINAL, $field(SliceOps$SliceTask, targetSize)},
	{"thisNodeSize", "J", nullptr, $PRIVATE, $field(SliceOps$SliceTask, thisNodeSize)},
	{"completed", "Z", nullptr, $PRIVATE | $VOLATILE, $field(SliceOps$SliceTask, completed)},
	{}
};

$MethodInfo _SliceOps$SliceTask_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/AbstractPipeline;Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;Ljava/util/function/IntFunction;JJ)V", "(Ljava/util/stream/AbstractPipeline<TP_OUT;TP_OUT;*>;Ljava/util/stream/PipelineHelper<TP_OUT;>;Ljava/util/Spliterator<TP_IN;>;Ljava/util/function/IntFunction<[TP_OUT;>;JJ)V", 0, $method(static_cast<void(SliceOps$SliceTask::*)($AbstractPipeline*,$PipelineHelper*,$Spliterator*,$IntFunction*,int64_t,int64_t)>(&SliceOps$SliceTask::init$))},
	{"<init>", "(Ljava/util/stream/SliceOps$SliceTask;Ljava/util/Spliterator;)V", "(Ljava/util/stream/SliceOps$SliceTask<TP_IN;TP_OUT;>;Ljava/util/Spliterator<TP_IN;>;)V", 0, $method(static_cast<void(SliceOps$SliceTask::*)(SliceOps$SliceTask*,$Spliterator*)>(&SliceOps$SliceTask::init$))},
	{"cancel", "()V", nullptr, $PROTECTED},
	{"completedSize", "(J)J", nullptr, $PRIVATE, $method(static_cast<int64_t(SliceOps$SliceTask::*)(int64_t)>(&SliceOps$SliceTask::completedSize))},
	{"doLeaf", "()Ljava/util/stream/Node;", "()Ljava/util/stream/Node<TP_OUT;>;", $PROTECTED | $FINAL},
	{"doTruncate", "(Ljava/util/stream/Node;)Ljava/util/stream/Node;", "(Ljava/util/stream/Node<TP_OUT;>;)Ljava/util/stream/Node<TP_OUT;>;", $PRIVATE, $method(static_cast<$Node*(SliceOps$SliceTask::*)($Node*)>(&SliceOps$SliceTask::doTruncate))},
	{"getEmptyResult", "()Ljava/util/stream/Node;", "()Ljava/util/stream/Node<TP_OUT;>;", $PROTECTED | $FINAL},
	{"isLeftCompleted", "(J)Z", nullptr, $PRIVATE, $method(static_cast<bool(SliceOps$SliceTask::*)(int64_t)>(&SliceOps$SliceTask::isLeftCompleted))},
	{"makeChild", "(Ljava/util/Spliterator;)Ljava/util/stream/SliceOps$SliceTask;", "(Ljava/util/Spliterator<TP_IN;>;)Ljava/util/stream/SliceOps$SliceTask<TP_IN;TP_OUT;>;", $PROTECTED},
	{"onCompletion", "(Ljava/util/concurrent/CountedCompleter;)V", "(Ljava/util/concurrent/CountedCompleter<*>;)V", $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _SliceOps$SliceTask_InnerClassesInfo_[] = {
	{"java.util.stream.SliceOps$SliceTask", "java.util.stream.SliceOps", "SliceTask", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SliceOps$SliceTask_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.SliceOps$SliceTask",
	"java.util.stream.AbstractShortCircuitTask",
	nullptr,
	_SliceOps$SliceTask_FieldInfo_,
	_SliceOps$SliceTask_MethodInfo_,
	"<P_IN:Ljava/lang/Object;P_OUT:Ljava/lang/Object;>Ljava/util/stream/AbstractShortCircuitTask<TP_IN;TP_OUT;Ljava/util/stream/Node<TP_OUT;>;Ljava/util/stream/SliceOps$SliceTask<TP_IN;TP_OUT;>;>;",
	nullptr,
	_SliceOps$SliceTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.SliceOps"
};

$Object* allocate$SliceOps$SliceTask($Class* clazz) {
	return $of($alloc(SliceOps$SliceTask));
}

void SliceOps$SliceTask::init$($AbstractPipeline* op, $PipelineHelper* helper, $Spliterator* spliterator, $IntFunction* generator, int64_t offset, int64_t size) {
	$AbstractShortCircuitTask::init$(helper, spliterator);
	$set(this, op, op);
	$set(this, generator, generator);
	this->targetOffset = offset;
	this->targetSize = size;
}

void SliceOps$SliceTask::init$(SliceOps$SliceTask* parent, $Spliterator* spliterator) {
	$AbstractShortCircuitTask::init$(static_cast<$AbstractShortCircuitTask*>(parent), spliterator);
	$set(this, op, $nc(parent)->op);
	$set(this, generator, parent->generator);
	this->targetOffset = parent->targetOffset;
	this->targetSize = parent->targetSize;
}

SliceOps$SliceTask* SliceOps$SliceTask::makeChild($Spliterator* spliterator) {
	return $new(SliceOps$SliceTask, this, spliterator);
}

$Object* SliceOps$SliceTask::getEmptyResult() {
	return $of($Nodes::emptyNode($($nc(this->op)->getOutputShape())));
}

$Object* SliceOps$SliceTask::doLeaf() {
	$useLocalCurrentObjectStackCache();
	if (isRoot()) {
		$init($StreamOpFlag);
		int64_t sizeIfKnown = $StreamOpFlag::SIZED->isPreserved($nc(this->op)->sourceOrOpFlags) ? $nc(this->op)->exactOutputSizeIfKnown(this->spliterator) : (int64_t)-1;
		$var($Node$Builder, nb, $nc(this->op)->makeNodeBuilder(sizeIfKnown, this->generator));
		$var($Sink, opSink, $nc(this->op)->opWrapSink($nc(this->helper)->getStreamAndOpFlags(), nb));
		$nc(this->helper)->copyIntoWithCancel($($nc(this->helper)->wrapSink(opSink)), this->spliterator);
		return $of($nc(nb)->build());
	} else {
		$var($Node$Builder, nb, $nc(this->op)->makeNodeBuilder(-1, this->generator));
		if (this->targetOffset == 0) {
			$var($Sink, opSink, $nc(this->op)->opWrapSink($nc(this->helper)->getStreamAndOpFlags(), nb));
			$nc(this->helper)->copyIntoWithCancel($($nc(this->helper)->wrapSink(opSink)), this->spliterator);
		} else {
			$nc(this->helper)->wrapAndCopyInto(nb, this->spliterator);
		}
		$var($Node, node, $nc(nb)->build());
		this->thisNodeSize = $nc(node)->count();
		this->completed = true;
		$set(this, spliterator, nullptr);
		return $of(node);
	}
}

void SliceOps$SliceTask::onCompletion($CountedCompleter* caller) {
	$useLocalCurrentObjectStackCache();
	if (!isLeaf()) {
		$var($Node, result, nullptr);
		this->thisNodeSize = $nc(($cast(SliceOps$SliceTask, this->leftChild)))->thisNodeSize + $nc(($cast(SliceOps$SliceTask, this->rightChild)))->thisNodeSize;
		if (this->canceled) {
			this->thisNodeSize = 0;
			$assign(result, $cast($Node, getEmptyResult()));
		} else if (this->thisNodeSize == 0) {
			$assign(result, $cast($Node, getEmptyResult()));
		} else if ($nc(($cast(SliceOps$SliceTask, this->leftChild)))->thisNodeSize == 0) {
			$assign(result, $cast($Node, $nc(($cast(SliceOps$SliceTask, this->rightChild)))->getLocalResult()));
		} else {
			$var($StreamShape, var$0, $nc(this->op)->getOutputShape());
			$var($Node, var$1, $cast($Node, $nc(($cast(SliceOps$SliceTask, this->leftChild)))->getLocalResult()));
			$assign(result, $Nodes::conc(var$0, var$1, $cast($Node, $($nc(($cast(SliceOps$SliceTask, this->rightChild)))->getLocalResult()))));
		}
		setLocalResult(isRoot() ? $(doTruncate(result)) : result);
		this->completed = true;
	}
	bool var$2 = this->targetSize >= 0 && !isRoot();
	if (var$2 && isLeftCompleted(this->targetOffset + this->targetSize)) {
		cancelLaterNodes();
	}
	$AbstractShortCircuitTask::onCompletion(caller);
}

void SliceOps$SliceTask::cancel() {
	$AbstractShortCircuitTask::cancel();
	if (this->completed) {
		setLocalResult($(getEmptyResult()));
	}
}

$Node* SliceOps$SliceTask::doTruncate($Node* input) {
	int64_t to = this->targetSize >= 0 ? $Math::min($nc(input)->count(), this->targetOffset + this->targetSize) : this->thisNodeSize;
	return $nc(input)->truncate(this->targetOffset, to, this->generator);
}

bool SliceOps$SliceTask::isLeftCompleted(int64_t target) {
	$useLocalCurrentObjectStackCache();
	int64_t size = this->completed ? this->thisNodeSize : completedSize(target);
	if (size >= target) {
		return true;
	}
	{
		$var(SliceOps$SliceTask, parent, $cast(SliceOps$SliceTask, getParent()));
		$var(SliceOps$SliceTask, node, this);
		for (; parent != nullptr; $assign(node, parent), $assign(parent, $cast(SliceOps$SliceTask, $nc(parent)->getParent()))) {
			if ($equals(node, parent->rightChild)) {
				$var(SliceOps$SliceTask, left, $cast(SliceOps$SliceTask, parent->leftChild));
				if (left != nullptr) {
					size += left->completedSize(target);
					if (size >= target) {
						return true;
					}
				}
			}
		}
	}
	return size >= target;
}

int64_t SliceOps$SliceTask::completedSize(int64_t target) {
	$useLocalCurrentObjectStackCache();
	if (this->completed) {
		return this->thisNodeSize;
	} else {
		$var(SliceOps$SliceTask, left, $cast(SliceOps$SliceTask, this->leftChild));
		$var(SliceOps$SliceTask, right, $cast(SliceOps$SliceTask, this->rightChild));
		if (left == nullptr || right == nullptr) {
			return this->thisNodeSize;
		} else {
			int64_t leftSize = $nc(left)->completedSize(target);
			return (leftSize >= target) ? leftSize : leftSize + $nc(right)->completedSize(target);
		}
	}
}

SliceOps$SliceTask::SliceOps$SliceTask() {
}

$Class* SliceOps$SliceTask::load$($String* name, bool initialize) {
	$loadClass(SliceOps$SliceTask, name, initialize, &_SliceOps$SliceTask_ClassInfo_, allocate$SliceOps$SliceTask);
	return class$;
}

$Class* SliceOps$SliceTask::class$ = nullptr;

		} // stream
	} // util
} // java