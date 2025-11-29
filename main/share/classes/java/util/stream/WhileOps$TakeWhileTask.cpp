#include <java/util/stream/WhileOps$TakeWhileTask.h>

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
#include <java/util/stream/StreamOpFlag.h>
#include <java/util/stream/StreamShape.h>
#include <java/util/stream/WhileOps.h>
#include <jcpp.h>

#undef ORDERED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $CountedCompleter = ::java::util::concurrent::CountedCompleter;
using $IntFunction = ::java::util::function::IntFunction;
using $AbstractPipeline = ::java::util::stream::AbstractPipeline;
using $AbstractShortCircuitTask = ::java::util::stream::AbstractShortCircuitTask;
using $Node = ::java::util::stream::Node;
using $Node$Builder = ::java::util::stream::Node$Builder;
using $Nodes = ::java::util::stream::Nodes;
using $PipelineHelper = ::java::util::stream::PipelineHelper;
using $Sink = ::java::util::stream::Sink;
using $StreamOpFlag = ::java::util::stream::StreamOpFlag;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _WhileOps$TakeWhileTask_FieldInfo_[] = {
	{"op", "Ljava/util/stream/AbstractPipeline;", "Ljava/util/stream/AbstractPipeline<TP_OUT;TP_OUT;*>;", $PRIVATE | $FINAL, $field(WhileOps$TakeWhileTask, op)},
	{"generator", "Ljava/util/function/IntFunction;", "Ljava/util/function/IntFunction<[TP_OUT;>;", $PRIVATE | $FINAL, $field(WhileOps$TakeWhileTask, generator)},
	{"isOrdered", "Z", nullptr, $PRIVATE | $FINAL, $field(WhileOps$TakeWhileTask, isOrdered)},
	{"thisNodeSize", "J", nullptr, $PRIVATE, $field(WhileOps$TakeWhileTask, thisNodeSize)},
	{"shortCircuited", "Z", nullptr, $PRIVATE, $field(WhileOps$TakeWhileTask, shortCircuited)},
	{"completed", "Z", nullptr, $PRIVATE | $VOLATILE, $field(WhileOps$TakeWhileTask, completed)},
	{}
};

$MethodInfo _WhileOps$TakeWhileTask_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/AbstractPipeline;Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;Ljava/util/function/IntFunction;)V", "(Ljava/util/stream/AbstractPipeline<TP_OUT;TP_OUT;*>;Ljava/util/stream/PipelineHelper<TP_OUT;>;Ljava/util/Spliterator<TP_IN;>;Ljava/util/function/IntFunction<[TP_OUT;>;)V", 0, $method(static_cast<void(WhileOps$TakeWhileTask::*)($AbstractPipeline*,$PipelineHelper*,$Spliterator*,$IntFunction*)>(&WhileOps$TakeWhileTask::init$))},
	{"<init>", "(Ljava/util/stream/WhileOps$TakeWhileTask;Ljava/util/Spliterator;)V", "(Ljava/util/stream/WhileOps$TakeWhileTask<TP_IN;TP_OUT;>;Ljava/util/Spliterator<TP_IN;>;)V", 0, $method(static_cast<void(WhileOps$TakeWhileTask::*)(WhileOps$TakeWhileTask*,$Spliterator*)>(&WhileOps$TakeWhileTask::init$))},
	{"cancel", "()V", nullptr, $PROTECTED},
	{"doLeaf", "()Ljava/util/stream/Node;", "()Ljava/util/stream/Node<TP_OUT;>;", $PROTECTED | $FINAL},
	{"getEmptyResult", "()Ljava/util/stream/Node;", "()Ljava/util/stream/Node<TP_OUT;>;", $PROTECTED | $FINAL},
	{"makeChild", "(Ljava/util/Spliterator;)Ljava/util/stream/WhileOps$TakeWhileTask;", "(Ljava/util/Spliterator<TP_IN;>;)Ljava/util/stream/WhileOps$TakeWhileTask<TP_IN;TP_OUT;>;", $PROTECTED},
	{"merge", "()Ljava/util/stream/Node;", "()Ljava/util/stream/Node<TP_OUT;>;", 0, $method(static_cast<$Node*(WhileOps$TakeWhileTask::*)()>(&WhileOps$TakeWhileTask::merge))},
	{"onCompletion", "(Ljava/util/concurrent/CountedCompleter;)V", "(Ljava/util/concurrent/CountedCompleter<*>;)V", $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _WhileOps$TakeWhileTask_InnerClassesInfo_[] = {
	{"java.util.stream.WhileOps$TakeWhileTask", "java.util.stream.WhileOps", "TakeWhileTask", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _WhileOps$TakeWhileTask_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.WhileOps$TakeWhileTask",
	"java.util.stream.AbstractShortCircuitTask",
	nullptr,
	_WhileOps$TakeWhileTask_FieldInfo_,
	_WhileOps$TakeWhileTask_MethodInfo_,
	"<P_IN:Ljava/lang/Object;P_OUT:Ljava/lang/Object;>Ljava/util/stream/AbstractShortCircuitTask<TP_IN;TP_OUT;Ljava/util/stream/Node<TP_OUT;>;Ljava/util/stream/WhileOps$TakeWhileTask<TP_IN;TP_OUT;>;>;",
	nullptr,
	_WhileOps$TakeWhileTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.WhileOps"
};

$Object* allocate$WhileOps$TakeWhileTask($Class* clazz) {
	return $of($alloc(WhileOps$TakeWhileTask));
}

void WhileOps$TakeWhileTask::init$($AbstractPipeline* op, $PipelineHelper* helper, $Spliterator* spliterator, $IntFunction* generator) {
	$AbstractShortCircuitTask::init$(helper, spliterator);
	$set(this, op, op);
	$set(this, generator, generator);
	$init($StreamOpFlag);
	this->isOrdered = $StreamOpFlag::ORDERED->isKnown($nc(helper)->getStreamAndOpFlags());
}

void WhileOps$TakeWhileTask::init$(WhileOps$TakeWhileTask* parent, $Spliterator* spliterator) {
	$AbstractShortCircuitTask::init$(static_cast<$AbstractShortCircuitTask*>(parent), spliterator);
	$set(this, op, $nc(parent)->op);
	$set(this, generator, parent->generator);
	this->isOrdered = parent->isOrdered;
}

WhileOps$TakeWhileTask* WhileOps$TakeWhileTask::makeChild($Spliterator* spliterator) {
	return $new(WhileOps$TakeWhileTask, this, spliterator);
}

$Object* WhileOps$TakeWhileTask::getEmptyResult() {
	return $of($Nodes::emptyNode($($nc(this->op)->getOutputShape())));
}

$Object* WhileOps$TakeWhileTask::doLeaf() {
	$useLocalCurrentObjectStackCache();
	$var($Node$Builder, builder, $nc(this->helper)->makeNodeBuilder(-1, this->generator));
	$var($Sink, s, $nc(this->op)->opWrapSink($nc(this->helper)->getStreamAndOpFlags(), builder));
	if (this->shortCircuited = $nc(this->helper)->copyIntoWithCancel($($nc(this->helper)->wrapSink(s)), this->spliterator)) {
		cancelLaterNodes();
	}
	$var($Node, node, $nc(builder)->build());
	this->thisNodeSize = $nc(node)->count();
	return $of(node);
}

void WhileOps$TakeWhileTask::onCompletion($CountedCompleter* caller) {
	if (!isLeaf()) {
		$var($Node, result, nullptr);
		this->shortCircuited = $nc(($cast(WhileOps$TakeWhileTask, this->leftChild)))->shortCircuited | $nc(($cast(WhileOps$TakeWhileTask, this->rightChild)))->shortCircuited;
		if (this->isOrdered && this->canceled) {
			this->thisNodeSize = 0;
			$assign(result, $cast($Node, getEmptyResult()));
		} else if (this->isOrdered && $nc(($cast(WhileOps$TakeWhileTask, this->leftChild)))->shortCircuited) {
			this->thisNodeSize = $nc(($cast(WhileOps$TakeWhileTask, this->leftChild)))->thisNodeSize;
			$assign(result, $cast($Node, $nc(($cast(WhileOps$TakeWhileTask, this->leftChild)))->getLocalResult()));
		} else {
			this->thisNodeSize = $nc(($cast(WhileOps$TakeWhileTask, this->leftChild)))->thisNodeSize + $nc(($cast(WhileOps$TakeWhileTask, this->rightChild)))->thisNodeSize;
			$assign(result, merge());
		}
		setLocalResult(result);
	}
	this->completed = true;
	$AbstractShortCircuitTask::onCompletion(caller);
}

$Node* WhileOps$TakeWhileTask::merge() {
	$useLocalCurrentObjectStackCache();
	if ($nc(($cast(WhileOps$TakeWhileTask, this->leftChild)))->thisNodeSize == 0) {
		return $cast($Node, $nc(($cast(WhileOps$TakeWhileTask, this->rightChild)))->getLocalResult());
	} else if ($nc(($cast(WhileOps$TakeWhileTask, this->rightChild)))->thisNodeSize == 0) {
		return $cast($Node, $nc(($cast(WhileOps$TakeWhileTask, this->leftChild)))->getLocalResult());
	} else {
		$var($StreamShape, var$0, $nc(this->op)->getOutputShape());
		$var($Node, var$1, $cast($Node, $nc(($cast(WhileOps$TakeWhileTask, this->leftChild)))->getLocalResult()));
		return $Nodes::conc(var$0, var$1, $cast($Node, $($nc(($cast(WhileOps$TakeWhileTask, this->rightChild)))->getLocalResult())));
	}
}

void WhileOps$TakeWhileTask::cancel() {
	$AbstractShortCircuitTask::cancel();
	if (this->isOrdered && this->completed) {
		setLocalResult($(getEmptyResult()));
	}
}

WhileOps$TakeWhileTask::WhileOps$TakeWhileTask() {
}

$Class* WhileOps$TakeWhileTask::load$($String* name, bool initialize) {
	$loadClass(WhileOps$TakeWhileTask, name, initialize, &_WhileOps$TakeWhileTask_ClassInfo_, allocate$WhileOps$TakeWhileTask);
	return class$;
}

$Class* WhileOps$TakeWhileTask::class$ = nullptr;

		} // stream
	} // util
} // java