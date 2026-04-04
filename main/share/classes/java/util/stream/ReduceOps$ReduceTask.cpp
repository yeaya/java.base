#include <java/util/stream/ReduceOps$ReduceTask.h>
#include <java/util/Spliterator.h>
#include <java/util/concurrent/CountedCompleter.h>
#include <java/util/stream/AbstractTask.h>
#include <java/util/stream/PipelineHelper.h>
#include <java/util/stream/ReduceOps$AccumulatingSink.h>
#include <java/util/stream/ReduceOps$ReduceOp.h>
#include <java/util/stream/ReduceOps.h>
#include <java/util/stream/Sink.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $CountedCompleter = ::java::util::concurrent::CountedCompleter;
using $AbstractTask = ::java::util::stream::AbstractTask;
using $PipelineHelper = ::java::util::stream::PipelineHelper;
using $ReduceOps$AccumulatingSink = ::java::util::stream::ReduceOps$AccumulatingSink;
using $ReduceOps$ReduceOp = ::java::util::stream::ReduceOps$ReduceOp;

namespace java {
	namespace util {
		namespace stream {

void ReduceOps$ReduceTask::init$($ReduceOps$ReduceOp* op, $PipelineHelper* helper, $Spliterator* spliterator) {
	$AbstractTask::init$(helper, spliterator);
	$set(this, op, op);
}

void ReduceOps$ReduceTask::init$(ReduceOps$ReduceTask* parent, $Spliterator* spliterator) {
	$AbstractTask::init$(parent, spliterator);
	$set(this, op, $nc(parent)->op);
}

ReduceOps$ReduceTask* ReduceOps$ReduceTask::makeChild($Spliterator* spliterator) {
	return $new(ReduceOps$ReduceTask, this, spliterator);
}

$Object* ReduceOps$ReduceTask::doLeaf() {
	return $of($cast($ReduceOps$AccumulatingSink, $nc(this->helper)->wrapAndCopyInto($($nc(this->op)->makeSink()), this->spliterator)));
}

void ReduceOps$ReduceTask::onCompletion($CountedCompleter* caller) {
	$useLocalObjectStack();
	if (!isLeaf()) {
		$var($ReduceOps$AccumulatingSink, leftResult, $cast($ReduceOps$AccumulatingSink, $nc($cast(ReduceOps$ReduceTask, this->leftChild))->getLocalResult()));
		$nc(leftResult)->combine($$cast($ReduceOps$AccumulatingSink, $nc($cast(ReduceOps$ReduceTask, this->rightChild))->getLocalResult()));
		setLocalResult(leftResult);
	}
	$AbstractTask::onCompletion(caller);
}

ReduceOps$ReduceTask::ReduceOps$ReduceTask() {
}

$Class* ReduceOps$ReduceTask::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"op", "Ljava/util/stream/ReduceOps$ReduceOp;", "Ljava/util/stream/ReduceOps$ReduceOp<TP_OUT;TR;TS;>;", $PRIVATE | $FINAL, $field(ReduceOps$ReduceTask, op)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/ReduceOps$ReduceOp;Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;)V", "(Ljava/util/stream/ReduceOps$ReduceOp<TP_OUT;TR;TS;>;Ljava/util/stream/PipelineHelper<TP_OUT;>;Ljava/util/Spliterator<TP_IN;>;)V", 0, $method(ReduceOps$ReduceTask, init$, void, $ReduceOps$ReduceOp*, $PipelineHelper*, $Spliterator*)},
		{"<init>", "(Ljava/util/stream/ReduceOps$ReduceTask;Ljava/util/Spliterator;)V", "(Ljava/util/stream/ReduceOps$ReduceTask<TP_IN;TP_OUT;TR;TS;>;Ljava/util/Spliterator<TP_IN;>;)V", 0, $method(ReduceOps$ReduceTask, init$, void, ReduceOps$ReduceTask*, $Spliterator*)},
		{"doLeaf", "()Ljava/util/stream/ReduceOps$AccumulatingSink;", "()TS;", $PROTECTED, $virtualMethod(ReduceOps$ReduceTask, doLeaf, $Object*)},
		{"makeChild", "(Ljava/util/Spliterator;)Ljava/util/stream/ReduceOps$ReduceTask;", "(Ljava/util/Spliterator<TP_IN;>;)Ljava/util/stream/ReduceOps$ReduceTask<TP_IN;TP_OUT;TR;TS;>;", $PROTECTED, $virtualMethod(ReduceOps$ReduceTask, makeChild, ReduceOps$ReduceTask*, $Spliterator*)},
		{"onCompletion", "(Ljava/util/concurrent/CountedCompleter;)V", "(Ljava/util/concurrent/CountedCompleter<*>;)V", $PUBLIC, $virtualMethod(ReduceOps$ReduceTask, onCompletion, void, $CountedCompleter*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.ReduceOps$ReduceTask", "java.util.stream.ReduceOps", "ReduceTask", $PRIVATE | $STATIC | $FINAL},
		{"java.util.stream.ReduceOps$AccumulatingSink", "java.util.stream.ReduceOps", "AccumulatingSink", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.stream.ReduceOps$ReduceTask",
		"java.util.stream.AbstractTask",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<P_IN:Ljava/lang/Object;P_OUT:Ljava/lang/Object;R:Ljava/lang/Object;S::Ljava/util/stream/ReduceOps$AccumulatingSink<TP_OUT;TR;TS;>;>Ljava/util/stream/AbstractTask<TP_IN;TP_OUT;TS;Ljava/util/stream/ReduceOps$ReduceTask<TP_IN;TP_OUT;TR;TS;>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.ReduceOps"
	};
	$loadClass(ReduceOps$ReduceTask, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ReduceOps$ReduceTask));
	});
	return class$;
}

$Class* ReduceOps$ReduceTask::class$ = nullptr;

		} // stream
	} // util
} // java