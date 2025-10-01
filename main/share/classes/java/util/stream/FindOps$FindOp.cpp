#include <java/util/stream/FindOps$FindOp.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Spliterator.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/FindOps$FindTask.h>
#include <java/util/stream/FindOps.h>
#include <java/util/stream/PipelineHelper.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/StreamOpFlag.h>
#include <java/util/stream/StreamShape.h>
#include <java/util/stream/TerminalSink.h>
#include <jcpp.h>

#undef NOT_ORDERED
#undef ORDERED
#undef IS_SHORT_CIRCUIT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $ForkJoinTask = ::java::util::concurrent::ForkJoinTask;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;
using $FindOps = ::java::util::stream::FindOps;
using $FindOps$FindTask = ::java::util::stream::FindOps$FindTask;
using $PipelineHelper = ::java::util::stream::PipelineHelper;
using $Sink = ::java::util::stream::Sink;
using $StreamOpFlag = ::java::util::stream::StreamOpFlag;
using $StreamShape = ::java::util::stream::StreamShape;
using $TerminalOp = ::java::util::stream::TerminalOp;
using $TerminalSink = ::java::util::stream::TerminalSink;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _FindOps$FindOp_FieldInfo_[] = {
	{"shape", "Ljava/util/stream/StreamShape;", nullptr, $PRIVATE | $FINAL, $field(FindOps$FindOp, shape)},
	{"opFlags", "I", nullptr, $FINAL, $field(FindOps$FindOp, opFlags)},
	{"emptyValue", "Ljava/lang/Object;", "TO;", $FINAL, $field(FindOps$FindOp, emptyValue)},
	{"presentPredicate", "Ljava/util/function/Predicate;", "Ljava/util/function/Predicate<TO;>;", $FINAL, $field(FindOps$FindOp, presentPredicate)},
	{"sinkSupplier", "Ljava/util/function/Supplier;", "Ljava/util/function/Supplier<Ljava/util/stream/TerminalSink<TT;TO;>;>;", $FINAL, $field(FindOps$FindOp, sinkSupplier)},
	{}
};

$MethodInfo _FindOps$FindOp_MethodInfo_[] = {
	{"<init>", "(ZLjava/util/stream/StreamShape;Ljava/lang/Object;Ljava/util/function/Predicate;Ljava/util/function/Supplier;)V", "(ZLjava/util/stream/StreamShape;TO;Ljava/util/function/Predicate<TO;>;Ljava/util/function/Supplier<Ljava/util/stream/TerminalSink<TT;TO;>;>;)V", 0, $method(static_cast<void(FindOps$FindOp::*)(bool,$StreamShape*,Object$*,$Predicate*,$Supplier*)>(&FindOps$FindOp::init$))},
	{"evaluateParallel", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;)Ljava/lang/Object;", "<P_IN:Ljava/lang/Object;>(Ljava/util/stream/PipelineHelper<TT;>;Ljava/util/Spliterator<TP_IN;>;)TO;", $PUBLIC},
	{"evaluateSequential", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;)Ljava/lang/Object;", "<S:Ljava/lang/Object;>(Ljava/util/stream/PipelineHelper<TT;>;Ljava/util/Spliterator<TS;>;)TO;", $PUBLIC},
	{"getOpFlags", "()I", nullptr, $PUBLIC},
	{"inputShape", "()Ljava/util/stream/StreamShape;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FindOps$FindOp_InnerClassesInfo_[] = {
	{"java.util.stream.FindOps$FindOp", "java.util.stream.FindOps", "FindOp", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _FindOps$FindOp_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.FindOps$FindOp",
	"java.lang.Object",
	"java.util.stream.TerminalOp",
	_FindOps$FindOp_FieldInfo_,
	_FindOps$FindOp_MethodInfo_,
	"<T:Ljava/lang/Object;O:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/stream/TerminalOp<TT;TO;>;",
	nullptr,
	_FindOps$FindOp_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.FindOps"
};

$Object* allocate$FindOps$FindOp($Class* clazz) {
	return $of($alloc(FindOps$FindOp));
}

void FindOps$FindOp::init$(bool mustFindFirst, $StreamShape* shape, Object$* emptyValue, $Predicate* presentPredicate, $Supplier* sinkSupplier) {
	$init($StreamOpFlag);
	this->opFlags = $StreamOpFlag::IS_SHORT_CIRCUIT | (mustFindFirst ? 0 : $StreamOpFlag::NOT_ORDERED);
	$set(this, shape, shape);
	$set(this, emptyValue, emptyValue);
	$set(this, presentPredicate, presentPredicate);
	$set(this, sinkSupplier, sinkSupplier);
}

int32_t FindOps$FindOp::getOpFlags() {
	return this->opFlags;
}

$StreamShape* FindOps$FindOp::inputShape() {
	return this->shape;
}

$Object* FindOps$FindOp::evaluateSequential($PipelineHelper* helper, $Spliterator* spliterator) {
	$var($Object, result, $nc(($cast($TerminalSink, $($nc(helper)->wrapAndCopyInto($cast($TerminalSink, $($nc(this->sinkSupplier)->get())), spliterator)))))->get());
	return $of(result != nullptr ? result : this->emptyValue);
}

$Object* FindOps$FindOp::evaluateParallel($PipelineHelper* helper, $Spliterator* spliterator) {
	$init($StreamOpFlag);
	bool mustFindFirst = $StreamOpFlag::ORDERED->isKnown($nc(helper)->getStreamAndOpFlags());
	return $of($$new($FindOps$FindTask, this, mustFindFirst, helper, spliterator)->invoke());
}

FindOps$FindOp::FindOps$FindOp() {
}

$Class* FindOps$FindOp::load$($String* name, bool initialize) {
	$loadClass(FindOps$FindOp, name, initialize, &_FindOps$FindOp_ClassInfo_, allocate$FindOps$FindOp);
	return class$;
}

$Class* FindOps$FindOp::class$ = nullptr;

		} // stream
	} // util
} // java