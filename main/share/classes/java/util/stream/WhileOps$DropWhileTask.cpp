#include <java/util/stream/WhileOps$DropWhileTask.h>

#include <java/lang/AssertionError.h>
#include <java/util/Spliterator.h>
#include <java/util/concurrent/CountedCompleter.h>
#include <java/util/function/IntFunction.h>
#include <java/util/stream/AbstractPipeline.h>
#include <java/util/stream/AbstractTask.h>
#include <java/util/stream/Node$Builder.h>
#include <java/util/stream/Node.h>
#include <java/util/stream/Nodes.h>
#include <java/util/stream/PipelineHelper.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/StreamOpFlag.h>
#include <java/util/stream/StreamShape.h>
#include <java/util/stream/WhileOps$DropWhileOp.h>
#include <java/util/stream/WhileOps$DropWhileSink.h>
#include <java/util/stream/WhileOps.h>
#include <jcpp.h>

#undef ORDERED
#undef SIZED

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $CountedCompleter = ::java::util::concurrent::CountedCompleter;
using $IntFunction = ::java::util::function::IntFunction;
using $AbstractPipeline = ::java::util::stream::AbstractPipeline;
using $AbstractTask = ::java::util::stream::AbstractTask;
using $Node = ::java::util::stream::Node;
using $Node$Builder = ::java::util::stream::Node$Builder;
using $Nodes = ::java::util::stream::Nodes;
using $PipelineHelper = ::java::util::stream::PipelineHelper;
using $Sink = ::java::util::stream::Sink;
using $StreamOpFlag = ::java::util::stream::StreamOpFlag;
using $StreamShape = ::java::util::stream::StreamShape;
using $WhileOps = ::java::util::stream::WhileOps;
using $WhileOps$DropWhileOp = ::java::util::stream::WhileOps$DropWhileOp;
using $WhileOps$DropWhileSink = ::java::util::stream::WhileOps$DropWhileSink;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _WhileOps$DropWhileTask_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(WhileOps$DropWhileTask, $assertionsDisabled)},
	{"op", "Ljava/util/stream/AbstractPipeline;", "Ljava/util/stream/AbstractPipeline<TP_OUT;TP_OUT;*>;", $PRIVATE | $FINAL, $field(WhileOps$DropWhileTask, op)},
	{"generator", "Ljava/util/function/IntFunction;", "Ljava/util/function/IntFunction<[TP_OUT;>;", $PRIVATE | $FINAL, $field(WhileOps$DropWhileTask, generator)},
	{"isOrdered", "Z", nullptr, $PRIVATE | $FINAL, $field(WhileOps$DropWhileTask, isOrdered)},
	{"thisNodeSize", "J", nullptr, $PRIVATE, $field(WhileOps$DropWhileTask, thisNodeSize)},
	{"index", "J", nullptr, $PRIVATE, $field(WhileOps$DropWhileTask, index)},
	{}
};

$MethodInfo _WhileOps$DropWhileTask_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/AbstractPipeline;Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;Ljava/util/function/IntFunction;)V", "(Ljava/util/stream/AbstractPipeline<TP_OUT;TP_OUT;*>;Ljava/util/stream/PipelineHelper<TP_OUT;>;Ljava/util/Spliterator<TP_IN;>;Ljava/util/function/IntFunction<[TP_OUT;>;)V", 0, $method(static_cast<void(WhileOps$DropWhileTask::*)($AbstractPipeline*,$PipelineHelper*,$Spliterator*,$IntFunction*)>(&WhileOps$DropWhileTask::init$))},
	{"<init>", "(Ljava/util/stream/WhileOps$DropWhileTask;Ljava/util/Spliterator;)V", "(Ljava/util/stream/WhileOps$DropWhileTask<TP_IN;TP_OUT;>;Ljava/util/Spliterator<TP_IN;>;)V", 0, $method(static_cast<void(WhileOps$DropWhileTask::*)(WhileOps$DropWhileTask*,$Spliterator*)>(&WhileOps$DropWhileTask::init$))},
	{"doLeaf", "()Ljava/util/stream/Node;", "()Ljava/util/stream/Node<TP_OUT;>;", $PROTECTED | $FINAL},
	{"doTruncate", "(Ljava/util/stream/Node;)Ljava/util/stream/Node;", "(Ljava/util/stream/Node<TP_OUT;>;)Ljava/util/stream/Node<TP_OUT;>;", $PRIVATE, $method(static_cast<$Node*(WhileOps$DropWhileTask::*)($Node*)>(&WhileOps$DropWhileTask::doTruncate))},
	{"makeChild", "(Ljava/util/Spliterator;)Ljava/util/stream/WhileOps$DropWhileTask;", "(Ljava/util/Spliterator<TP_IN;>;)Ljava/util/stream/WhileOps$DropWhileTask<TP_IN;TP_OUT;>;", $PROTECTED},
	{"merge", "()Ljava/util/stream/Node;", "()Ljava/util/stream/Node<TP_OUT;>;", $PRIVATE, $method(static_cast<$Node*(WhileOps$DropWhileTask::*)()>(&WhileOps$DropWhileTask::merge))},
	{"onCompletion", "(Ljava/util/concurrent/CountedCompleter;)V", "(Ljava/util/concurrent/CountedCompleter<*>;)V", $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _WhileOps$DropWhileTask_InnerClassesInfo_[] = {
	{"java.util.stream.WhileOps$DropWhileTask", "java.util.stream.WhileOps", "DropWhileTask", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _WhileOps$DropWhileTask_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.WhileOps$DropWhileTask",
	"java.util.stream.AbstractTask",
	nullptr,
	_WhileOps$DropWhileTask_FieldInfo_,
	_WhileOps$DropWhileTask_MethodInfo_,
	"<P_IN:Ljava/lang/Object;P_OUT:Ljava/lang/Object;>Ljava/util/stream/AbstractTask<TP_IN;TP_OUT;Ljava/util/stream/Node<TP_OUT;>;Ljava/util/stream/WhileOps$DropWhileTask<TP_IN;TP_OUT;>;>;",
	nullptr,
	_WhileOps$DropWhileTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.WhileOps"
};

$Object* allocate$WhileOps$DropWhileTask($Class* clazz) {
	return $of($alloc(WhileOps$DropWhileTask));
}

bool WhileOps$DropWhileTask::$assertionsDisabled = false;

void WhileOps$DropWhileTask::init$($AbstractPipeline* op, $PipelineHelper* helper, $Spliterator* spliterator, $IntFunction* generator) {
	$AbstractTask::init$(helper, spliterator);
	if (!WhileOps$DropWhileTask::$assertionsDisabled && !$instanceOf($WhileOps$DropWhileOp, op)) {
		$throwNew($AssertionError);
	}
	$set(this, op, op);
	$set(this, generator, generator);
	$init($StreamOpFlag);
	this->isOrdered = $StreamOpFlag::ORDERED->isKnown($nc(helper)->getStreamAndOpFlags());
}

void WhileOps$DropWhileTask::init$(WhileOps$DropWhileTask* parent, $Spliterator* spliterator) {
	$AbstractTask::init$(static_cast<$AbstractTask*>(parent), spliterator);
	$set(this, op, $nc(parent)->op);
	$set(this, generator, parent->generator);
	this->isOrdered = parent->isOrdered;
}

WhileOps$DropWhileTask* WhileOps$DropWhileTask::makeChild($Spliterator* spliterator) {
	return $new(WhileOps$DropWhileTask, this, spliterator);
}

$Object* WhileOps$DropWhileTask::doLeaf() {
	$useLocalCurrentObjectStackCache();
	bool isChild = !isRoot();
	$init($StreamOpFlag);
	int64_t sizeIfKnown = isChild && this->isOrdered && $StreamOpFlag::SIZED->isPreserved($nc(this->op)->sourceOrOpFlags) ? $nc(this->op)->exactOutputSizeIfKnown(this->spliterator) : (int64_t)-1;
	$var($Node$Builder, builder, $nc(this->helper)->makeNodeBuilder(sizeIfKnown, this->generator));
	$var($WhileOps$DropWhileOp, dropOp, $cast($WhileOps$DropWhileOp, this->op));
	$var($WhileOps$DropWhileSink, s, $nc(dropOp)->opWrapSink(builder, this->isOrdered && isChild));
	$nc(this->helper)->wrapAndCopyInto(s, this->spliterator);
	$var($Node, node, $nc(builder)->build());
	this->thisNodeSize = $nc(node)->count();
	this->index = $nc(s)->getDropCount();
	return $of(node);
}

void WhileOps$DropWhileTask::onCompletion($CountedCompleter* caller) {
	$useLocalCurrentObjectStackCache();
	if (!isLeaf()) {
		if (this->isOrdered) {
			this->index = $nc(($cast(WhileOps$DropWhileTask, this->leftChild)))->index;
			if (this->index == $nc(($cast(WhileOps$DropWhileTask, this->leftChild)))->thisNodeSize) {
				this->index += $nc(($cast(WhileOps$DropWhileTask, this->rightChild)))->index;
			}
		}
		this->thisNodeSize = $nc(($cast(WhileOps$DropWhileTask, this->leftChild)))->thisNodeSize + $nc(($cast(WhileOps$DropWhileTask, this->rightChild)))->thisNodeSize;
		$var($Node, result, merge());
		setLocalResult(isRoot() ? $(doTruncate(result)) : result);
	}
	$AbstractTask::onCompletion(caller);
}

$Node* WhileOps$DropWhileTask::merge() {
	$useLocalCurrentObjectStackCache();
	if ($nc(($cast(WhileOps$DropWhileTask, this->leftChild)))->thisNodeSize == 0) {
		return $cast($Node, $nc(($cast(WhileOps$DropWhileTask, this->rightChild)))->getLocalResult());
	} else if ($nc(($cast(WhileOps$DropWhileTask, this->rightChild)))->thisNodeSize == 0) {
		return $cast($Node, $nc(($cast(WhileOps$DropWhileTask, this->leftChild)))->getLocalResult());
	} else {
		$var($StreamShape, var$0, $nc(this->op)->getOutputShape());
		$var($Node, var$1, $cast($Node, $nc(($cast(WhileOps$DropWhileTask, this->leftChild)))->getLocalResult()));
		return $Nodes::conc(var$0, var$1, $cast($Node, $($nc(($cast(WhileOps$DropWhileTask, this->rightChild)))->getLocalResult())));
	}
}

$Node* WhileOps$DropWhileTask::doTruncate($Node* input) {
	return this->isOrdered ? $nc(input)->truncate(this->index, input->count(), this->generator) : input;
}

void clinit$WhileOps$DropWhileTask($Class* class$) {
	$load($WhileOps);
	WhileOps$DropWhileTask::$assertionsDisabled = !$WhileOps::class$->desiredAssertionStatus();
}

WhileOps$DropWhileTask::WhileOps$DropWhileTask() {
}

$Class* WhileOps$DropWhileTask::load$($String* name, bool initialize) {
	$loadClass(WhileOps$DropWhileTask, name, initialize, &_WhileOps$DropWhileTask_ClassInfo_, clinit$WhileOps$DropWhileTask, allocate$WhileOps$DropWhileTask);
	return class$;
}

$Class* WhileOps$DropWhileTask::class$ = nullptr;

		} // stream
	} // util
} // java