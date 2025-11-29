#include <java/util/stream/MatchOps$MatchOp.h>

#include <java/util/Spliterator.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/MatchOps$BooleanTerminalSink.h>
#include <java/util/stream/MatchOps$MatchKind.h>
#include <java/util/stream/MatchOps$MatchTask.h>
#include <java/util/stream/MatchOps.h>
#include <java/util/stream/PipelineHelper.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/StreamOpFlag.h>
#include <java/util/stream/StreamShape.h>
#include <jcpp.h>

#undef IS_SHORT_CIRCUIT
#undef NOT_ORDERED

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $Supplier = ::java::util::function::Supplier;
using $MatchOps$BooleanTerminalSink = ::java::util::stream::MatchOps$BooleanTerminalSink;
using $MatchOps$MatchKind = ::java::util::stream::MatchOps$MatchKind;
using $MatchOps$MatchTask = ::java::util::stream::MatchOps$MatchTask;
using $PipelineHelper = ::java::util::stream::PipelineHelper;
using $Sink = ::java::util::stream::Sink;
using $StreamOpFlag = ::java::util::stream::StreamOpFlag;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _MatchOps$MatchOp_FieldInfo_[] = {
	{"inputShape", "Ljava/util/stream/StreamShape;", nullptr, $PRIVATE | $FINAL, $field(MatchOps$MatchOp, inputShape$)},
	{"matchKind", "Ljava/util/stream/MatchOps$MatchKind;", nullptr, $FINAL, $field(MatchOps$MatchOp, matchKind)},
	{"sinkSupplier", "Ljava/util/function/Supplier;", "Ljava/util/function/Supplier<Ljava/util/stream/MatchOps$BooleanTerminalSink<TT;>;>;", $FINAL, $field(MatchOps$MatchOp, sinkSupplier)},
	{}
};

$MethodInfo _MatchOps$MatchOp_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/StreamShape;Ljava/util/stream/MatchOps$MatchKind;Ljava/util/function/Supplier;)V", "(Ljava/util/stream/StreamShape;Ljava/util/stream/MatchOps$MatchKind;Ljava/util/function/Supplier<Ljava/util/stream/MatchOps$BooleanTerminalSink<TT;>;>;)V", 0, $method(static_cast<void(MatchOps$MatchOp::*)($StreamShape*,$MatchOps$MatchKind*,$Supplier*)>(&MatchOps$MatchOp::init$))},
	{"evaluateParallel", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;)Ljava/lang/Boolean;", "<S:Ljava/lang/Object;>(Ljava/util/stream/PipelineHelper<TT;>;Ljava/util/Spliterator<TS;>;)Ljava/lang/Boolean;", $PUBLIC},
	{"evaluateSequential", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;)Ljava/lang/Boolean;", "<S:Ljava/lang/Object;>(Ljava/util/stream/PipelineHelper<TT;>;Ljava/util/Spliterator<TS;>;)Ljava/lang/Boolean;", $PUBLIC},
	{"getOpFlags", "()I", nullptr, $PUBLIC},
	{"inputShape", "()Ljava/util/stream/StreamShape;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MatchOps$MatchOp_InnerClassesInfo_[] = {
	{"java.util.stream.MatchOps$MatchOp", "java.util.stream.MatchOps", "MatchOp", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _MatchOps$MatchOp_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.MatchOps$MatchOp",
	"java.lang.Object",
	"java.util.stream.TerminalOp",
	_MatchOps$MatchOp_FieldInfo_,
	_MatchOps$MatchOp_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/stream/TerminalOp<TT;Ljava/lang/Boolean;>;",
	nullptr,
	_MatchOps$MatchOp_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.MatchOps"
};

$Object* allocate$MatchOps$MatchOp($Class* clazz) {
	return $of($alloc(MatchOps$MatchOp));
}

void MatchOps$MatchOp::init$($StreamShape* shape, $MatchOps$MatchKind* matchKind, $Supplier* sinkSupplier) {
	$set(this, inputShape$, shape);
	$set(this, matchKind, matchKind);
	$set(this, sinkSupplier, sinkSupplier);
}

int32_t MatchOps$MatchOp::getOpFlags() {
	$init($StreamOpFlag);
	return $StreamOpFlag::IS_SHORT_CIRCUIT | $StreamOpFlag::NOT_ORDERED;
}

$StreamShape* MatchOps$MatchOp::inputShape() {
	return this->inputShape$;
}

$Object* MatchOps$MatchOp::evaluateSequential($PipelineHelper* helper, $Spliterator* spliterator) {
	$useLocalCurrentObjectStackCache();
	return $of($Boolean::valueOf($nc(($cast($MatchOps$BooleanTerminalSink, $($nc(helper)->wrapAndCopyInto($cast($MatchOps$BooleanTerminalSink, $($nc(this->sinkSupplier)->get())), spliterator)))))->getAndClearState()));
}

$Object* MatchOps$MatchOp::evaluateParallel($PipelineHelper* helper, $Spliterator* spliterator) {
	return $of($cast($Boolean, $$new($MatchOps$MatchTask, this, helper, spliterator)->invoke()));
}

MatchOps$MatchOp::MatchOps$MatchOp() {
}

$Class* MatchOps$MatchOp::load$($String* name, bool initialize) {
	$loadClass(MatchOps$MatchOp, name, initialize, &_MatchOps$MatchOp_ClassInfo_, allocate$MatchOps$MatchOp);
	return class$;
}

$Class* MatchOps$MatchOp::class$ = nullptr;

		} // stream
	} // util
} // java