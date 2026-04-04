#include <java/util/stream/ReduceOps$ReduceOp.h>
#include <java/util/Spliterator.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/PipelineHelper.h>
#include <java/util/stream/ReduceOps$AccumulatingSink.h>
#include <java/util/stream/ReduceOps$ReduceTask.h>
#include <java/util/stream/ReduceOps.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/StreamShape.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $PipelineHelper = ::java::util::stream::PipelineHelper;
using $ReduceOps$AccumulatingSink = ::java::util::stream::ReduceOps$AccumulatingSink;
using $ReduceOps$ReduceTask = ::java::util::stream::ReduceOps$ReduceTask;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

void ReduceOps$ReduceOp::init$($StreamShape* shape) {
	$set(this, inputShape$, shape);
}

$StreamShape* ReduceOps$ReduceOp::inputShape() {
	return this->inputShape$;
}

$Object* ReduceOps$ReduceOp::evaluateSequential($PipelineHelper* helper, $Spliterator* spliterator) {
	$useLocalObjectStack();
	return $$sure($ReduceOps$AccumulatingSink, $nc(helper)->wrapAndCopyInto($(makeSink()), spliterator))->get();
}

$Object* ReduceOps$ReduceOp::evaluateParallel($PipelineHelper* helper, $Spliterator* spliterator) {
	$useLocalObjectStack();
	return $$sure($ReduceOps$AccumulatingSink, $$new($ReduceOps$ReduceTask, this, helper, spliterator)->invoke())->get();
}

ReduceOps$ReduceOp::ReduceOps$ReduceOp() {
}

$Class* ReduceOps$ReduceOp::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inputShape", "Ljava/util/stream/StreamShape;", nullptr, $PRIVATE | $FINAL, $field(ReduceOps$ReduceOp, inputShape$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/StreamShape;)V", nullptr, 0, $method(ReduceOps$ReduceOp, init$, void, $StreamShape*)},
		{"evaluateParallel", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;)Ljava/lang/Object;", "<P_IN:Ljava/lang/Object;>(Ljava/util/stream/PipelineHelper<TT;>;Ljava/util/Spliterator<TP_IN;>;)TR;", $PUBLIC, $virtualMethod(ReduceOps$ReduceOp, evaluateParallel, $Object*, $PipelineHelper*, $Spliterator*)},
		{"evaluateSequential", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;)Ljava/lang/Object;", "<P_IN:Ljava/lang/Object;>(Ljava/util/stream/PipelineHelper<TT;>;Ljava/util/Spliterator<TP_IN;>;)TR;", $PUBLIC, $virtualMethod(ReduceOps$ReduceOp, evaluateSequential, $Object*, $PipelineHelper*, $Spliterator*)},
		{"inputShape", "()Ljava/util/stream/StreamShape;", nullptr, $PUBLIC, $virtualMethod(ReduceOps$ReduceOp, inputShape, $StreamShape*)},
		{"makeSink", "()Ljava/util/stream/ReduceOps$AccumulatingSink;", "()TS;", $PUBLIC | $ABSTRACT, $virtualMethod(ReduceOps$ReduceOp, makeSink, $ReduceOps$AccumulatingSink*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.ReduceOps$ReduceOp", "java.util.stream.ReduceOps", "ReduceOp", $PRIVATE | $STATIC | $ABSTRACT},
		{"java.util.stream.ReduceOps$AccumulatingSink", "java.util.stream.ReduceOps", "AccumulatingSink", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"java.util.stream.ReduceOps$ReduceOp",
		"java.lang.Object",
		"java.util.stream.TerminalOp",
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;R:Ljava/lang/Object;S::Ljava/util/stream/ReduceOps$AccumulatingSink<TT;TR;TS;>;>Ljava/lang/Object;Ljava/util/stream/TerminalOp<TT;TR;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.ReduceOps"
	};
	$loadClass(ReduceOps$ReduceOp, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReduceOps$ReduceOp);
	});
	return class$;
}

$Class* ReduceOps$ReduceOp::class$ = nullptr;

		} // stream
	} // util
} // java