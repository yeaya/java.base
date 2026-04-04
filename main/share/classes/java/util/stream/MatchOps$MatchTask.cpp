#include <java/util/stream/MatchOps$MatchTask.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/AbstractShortCircuitTask.h>
#include <java/util/stream/AbstractTask.h>
#include <java/util/stream/MatchOps$BooleanTerminalSink.h>
#include <java/util/stream/MatchOps$MatchKind.h>
#include <java/util/stream/MatchOps$MatchOp.h>
#include <java/util/stream/MatchOps.h>
#include <java/util/stream/PipelineHelper.h>
#include <java/util/stream/Sink.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $AbstractShortCircuitTask = ::java::util::stream::AbstractShortCircuitTask;
using $MatchOps$BooleanTerminalSink = ::java::util::stream::MatchOps$BooleanTerminalSink;
using $MatchOps$MatchOp = ::java::util::stream::MatchOps$MatchOp;
using $PipelineHelper = ::java::util::stream::PipelineHelper;

namespace java {
	namespace util {
		namespace stream {

void MatchOps$MatchTask::init$($MatchOps$MatchOp* op, $PipelineHelper* helper, $Spliterator* spliterator) {
	$AbstractShortCircuitTask::init$(helper, spliterator);
	$set(this, op, op);
}

void MatchOps$MatchTask::init$(MatchOps$MatchTask* parent, $Spliterator* spliterator) {
	$AbstractShortCircuitTask::init$(parent, spliterator);
	$set(this, op, $nc(parent)->op);
}

MatchOps$MatchTask* MatchOps$MatchTask::makeChild($Spliterator* spliterator) {
	return $new(MatchOps$MatchTask, this, spliterator);
}

$Object* MatchOps$MatchTask::doLeaf() {
	$useLocalObjectStack();
	bool b = $$sure($MatchOps$BooleanTerminalSink, $nc(this->helper)->wrapAndCopyInto($$cast($MatchOps$BooleanTerminalSink, $nc($nc(this->op)->sinkSupplier)->get()), this->spliterator))->getAndClearState();
	if (b == this->op->matchKind->shortCircuitResult) {
		shortCircuit($($Boolean::valueOf(b)));
	}
	return nullptr;
}

$Object* MatchOps$MatchTask::getEmptyResult() {
	return $of($Boolean::valueOf(!$nc(this->op)->matchKind->shortCircuitResult));
}

MatchOps$MatchTask::MatchOps$MatchTask() {
}

$Class* MatchOps$MatchTask::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"op", "Ljava/util/stream/MatchOps$MatchOp;", "Ljava/util/stream/MatchOps$MatchOp<TP_OUT;>;", $PRIVATE | $FINAL, $field(MatchOps$MatchTask, op)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/MatchOps$MatchOp;Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;)V", "(Ljava/util/stream/MatchOps$MatchOp<TP_OUT;>;Ljava/util/stream/PipelineHelper<TP_OUT;>;Ljava/util/Spliterator<TP_IN;>;)V", 0, $method(MatchOps$MatchTask, init$, void, $MatchOps$MatchOp*, $PipelineHelper*, $Spliterator*)},
		{"<init>", "(Ljava/util/stream/MatchOps$MatchTask;Ljava/util/Spliterator;)V", "(Ljava/util/stream/MatchOps$MatchTask<TP_IN;TP_OUT;>;Ljava/util/Spliterator<TP_IN;>;)V", 0, $method(MatchOps$MatchTask, init$, void, MatchOps$MatchTask*, $Spliterator*)},
		{"doLeaf", "()Ljava/lang/Boolean;", nullptr, $PROTECTED, $virtualMethod(MatchOps$MatchTask, doLeaf, $Object*)},
		{"getEmptyResult", "()Ljava/lang/Boolean;", nullptr, $PROTECTED, $virtualMethod(MatchOps$MatchTask, getEmptyResult, $Object*)},
		{"makeChild", "(Ljava/util/Spliterator;)Ljava/util/stream/MatchOps$MatchTask;", "(Ljava/util/Spliterator<TP_IN;>;)Ljava/util/stream/MatchOps$MatchTask<TP_IN;TP_OUT;>;", $PROTECTED, $virtualMethod(MatchOps$MatchTask, makeChild, MatchOps$MatchTask*, $Spliterator*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.MatchOps$MatchTask", "java.util.stream.MatchOps", "MatchTask", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.stream.MatchOps$MatchTask",
		"java.util.stream.AbstractShortCircuitTask",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<P_IN:Ljava/lang/Object;P_OUT:Ljava/lang/Object;>Ljava/util/stream/AbstractShortCircuitTask<TP_IN;TP_OUT;Ljava/lang/Boolean;Ljava/util/stream/MatchOps$MatchTask<TP_IN;TP_OUT;>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.MatchOps"
	};
	$loadClass(MatchOps$MatchTask, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MatchOps$MatchTask));
	});
	return class$;
}

$Class* MatchOps$MatchTask::class$ = nullptr;

		} // stream
	} // util
} // java