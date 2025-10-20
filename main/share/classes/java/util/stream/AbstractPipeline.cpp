#include <java/util/stream/AbstractPipeline.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/BaseStream.h>
#include <java/util/stream/Node$Builder.h>
#include <java/util/stream/Node.h>
#include <java/util/stream/PipelineHelper.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/StreamOpFlag.h>
#include <java/util/stream/StreamShape.h>
#include <java/util/stream/Streams.h>
#include <java/util/stream/TerminalOp.h>
#include <jcpp.h>

#undef INITIAL_OPS_VALUE
#undef IS_SHORT_CIRCUIT
#undef IS_SIZED
#undef MSG_CONSUMED
#undef MSG_STREAM_LINKED
#undef NOT_SIZED
#undef OP_MASK
#undef ORDERED
#undef SHORT_CIRCUIT
#undef SIZED
#undef SIZE_ADJUSTING
#undef STREAM_MASK

using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Supplier = ::java::util::function::Supplier;
using $BaseStream = ::java::util::stream::BaseStream;
using $Node = ::java::util::stream::Node;
using $Node$Builder = ::java::util::stream::Node$Builder;
using $PipelineHelper = ::java::util::stream::PipelineHelper;
using $Sink = ::java::util::stream::Sink;
using $StreamOpFlag = ::java::util::stream::StreamOpFlag;
using $StreamShape = ::java::util::stream::StreamShape;
using $Streams = ::java::util::stream::Streams;
using $TerminalOp = ::java::util::stream::TerminalOp;

namespace java {
	namespace util {
		namespace stream {

class AbstractPipeline$$Lambda$lambda$spliterator$0 : public $Supplier {
	$class(AbstractPipeline$$Lambda$lambda$spliterator$0, $NO_CLASS_INIT, $Supplier)
public:
	void init$(AbstractPipeline* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->lambda$spliterator$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AbstractPipeline$$Lambda$lambda$spliterator$0>());
	}
	AbstractPipeline* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo AbstractPipeline$$Lambda$lambda$spliterator$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(AbstractPipeline$$Lambda$lambda$spliterator$0, inst$)},
	{}
};
$MethodInfo AbstractPipeline$$Lambda$lambda$spliterator$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/stream/AbstractPipeline;)V", nullptr, $PUBLIC, $method(static_cast<void(AbstractPipeline$$Lambda$lambda$spliterator$0::*)(AbstractPipeline*)>(&AbstractPipeline$$Lambda$lambda$spliterator$0::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AbstractPipeline$$Lambda$lambda$spliterator$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.AbstractPipeline$$Lambda$lambda$spliterator$0",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* AbstractPipeline$$Lambda$lambda$spliterator$0::load$($String* name, bool initialize) {
	$loadClass(AbstractPipeline$$Lambda$lambda$spliterator$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AbstractPipeline$$Lambda$lambda$spliterator$0::class$ = nullptr;

class AbstractPipeline$$Lambda$lambda$wrapSpliterator$1$1 : public $Supplier {
	$class(AbstractPipeline$$Lambda$lambda$wrapSpliterator$1$1, $NO_CLASS_INIT, $Supplier)
public:
	void init$($Spliterator* sourceSpliterator) {
		$set(this, sourceSpliterator, sourceSpliterator);
	}
	virtual $Object* get() override {
		 return $of(AbstractPipeline::lambda$wrapSpliterator$1(sourceSpliterator));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AbstractPipeline$$Lambda$lambda$wrapSpliterator$1$1>());
	}
	$Spliterator* sourceSpliterator = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo AbstractPipeline$$Lambda$lambda$wrapSpliterator$1$1::fieldInfos[2] = {
	{"sourceSpliterator", "Ljava/util/Spliterator;", nullptr, $PUBLIC, $field(AbstractPipeline$$Lambda$lambda$wrapSpliterator$1$1, sourceSpliterator)},
	{}
};
$MethodInfo AbstractPipeline$$Lambda$lambda$wrapSpliterator$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/Spliterator;)V", nullptr, $PUBLIC, $method(static_cast<void(AbstractPipeline$$Lambda$lambda$wrapSpliterator$1$1::*)($Spliterator*)>(&AbstractPipeline$$Lambda$lambda$wrapSpliterator$1$1::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AbstractPipeline$$Lambda$lambda$wrapSpliterator$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.AbstractPipeline$$Lambda$lambda$wrapSpliterator$1$1",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* AbstractPipeline$$Lambda$lambda$wrapSpliterator$1$1::load$($String* name, bool initialize) {
	$loadClass(AbstractPipeline$$Lambda$lambda$wrapSpliterator$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AbstractPipeline$$Lambda$lambda$wrapSpliterator$1$1::class$ = nullptr;

class AbstractPipeline$$Lambda$lambda$opEvaluateParallelLazy$2$2 : public $IntFunction {
	$class(AbstractPipeline$$Lambda$lambda$opEvaluateParallelLazy$2$2, $NO_CLASS_INIT, $IntFunction)
public:
	void init$() {
	}
	virtual $Object* apply(int32_t i) override {
		 return $of(AbstractPipeline::lambda$opEvaluateParallelLazy$2(i));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AbstractPipeline$$Lambda$lambda$opEvaluateParallelLazy$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AbstractPipeline$$Lambda$lambda$opEvaluateParallelLazy$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AbstractPipeline$$Lambda$lambda$opEvaluateParallelLazy$2$2::*)()>(&AbstractPipeline$$Lambda$lambda$opEvaluateParallelLazy$2$2::init$))},
	{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AbstractPipeline$$Lambda$lambda$opEvaluateParallelLazy$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.AbstractPipeline$$Lambda$lambda$opEvaluateParallelLazy$2$2",
	"java.lang.Object",
	"java.util.function.IntFunction",
	nullptr,
	methodInfos
};
$Class* AbstractPipeline$$Lambda$lambda$opEvaluateParallelLazy$2$2::load$($String* name, bool initialize) {
	$loadClass(AbstractPipeline$$Lambda$lambda$opEvaluateParallelLazy$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AbstractPipeline$$Lambda$lambda$opEvaluateParallelLazy$2$2::class$ = nullptr;

$FieldInfo _AbstractPipeline_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(AbstractPipeline, $assertionsDisabled)},
	{"MSG_STREAM_LINKED", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractPipeline, MSG_STREAM_LINKED)},
	{"MSG_CONSUMED", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractPipeline, MSG_CONSUMED)},
	{"sourceStage", "Ljava/util/stream/AbstractPipeline;", nullptr, $PRIVATE | $FINAL, $field(AbstractPipeline, sourceStage)},
	{"previousStage", "Ljava/util/stream/AbstractPipeline;", nullptr, $PRIVATE | $FINAL, $field(AbstractPipeline, previousStage)},
	{"sourceOrOpFlags", "I", nullptr, $PROTECTED | $FINAL, $field(AbstractPipeline, sourceOrOpFlags)},
	{"nextStage", "Ljava/util/stream/AbstractPipeline;", nullptr, $PRIVATE, $field(AbstractPipeline, nextStage)},
	{"depth", "I", nullptr, $PRIVATE, $field(AbstractPipeline, depth)},
	{"combinedFlags", "I", nullptr, $PRIVATE, $field(AbstractPipeline, combinedFlags)},
	{"sourceSpliterator", "Ljava/util/Spliterator;", "Ljava/util/Spliterator<*>;", $PRIVATE, $field(AbstractPipeline, sourceSpliterator$)},
	{"sourceSupplier", "Ljava/util/function/Supplier;", "Ljava/util/function/Supplier<+Ljava/util/Spliterator<*>;>;", $PRIVATE, $field(AbstractPipeline, sourceSupplier)},
	{"linkedOrConsumed", "Z", nullptr, $PRIVATE, $field(AbstractPipeline, linkedOrConsumed)},
	{"sourceAnyStateful", "Z", nullptr, $PRIVATE, $field(AbstractPipeline, sourceAnyStateful)},
	{"sourceCloseAction", "Ljava/lang/Runnable;", nullptr, $PRIVATE, $field(AbstractPipeline, sourceCloseAction)},
	{"parallel", "Z", nullptr, $PRIVATE, $field(AbstractPipeline, parallel$)},
	{}
};

$MethodInfo _AbstractPipeline_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/function/Supplier;IZ)V", "(Ljava/util/function/Supplier<+Ljava/util/Spliterator<*>;>;IZ)V", 0, $method(static_cast<void(AbstractPipeline::*)($Supplier*,int32_t,bool)>(&AbstractPipeline::init$))},
	{"<init>", "(Ljava/util/Spliterator;IZ)V", "(Ljava/util/Spliterator<*>;IZ)V", 0, $method(static_cast<void(AbstractPipeline::*)($Spliterator*,int32_t,bool)>(&AbstractPipeline::init$))},
	{"<init>", "(Ljava/util/stream/AbstractPipeline;I)V", "(Ljava/util/stream/AbstractPipeline<*TE_IN;*>;I)V", 0, $method(static_cast<void(AbstractPipeline::*)(AbstractPipeline*,int32_t)>(&AbstractPipeline::init$))},
	{"close", "()V", nullptr, $PUBLIC},
	{"copyInto", "(Ljava/util/stream/Sink;Ljava/util/Spliterator;)V", "<P_IN:Ljava/lang/Object;>(Ljava/util/stream/Sink<TP_IN;>;Ljava/util/Spliterator<TP_IN;>;)V", $FINAL},
	{"copyIntoWithCancel", "(Ljava/util/stream/Sink;Ljava/util/Spliterator;)Z", "<P_IN:Ljava/lang/Object;>(Ljava/util/stream/Sink<TP_IN;>;Ljava/util/Spliterator<TP_IN;>;)Z", $FINAL},
	{"evaluate", "(Ljava/util/stream/TerminalOp;)Ljava/lang/Object;", "<R:Ljava/lang/Object;>(Ljava/util/stream/TerminalOp<TE_OUT;TR;>;)TR;", $FINAL, $method(static_cast<$Object*(AbstractPipeline::*)($TerminalOp*)>(&AbstractPipeline::evaluate))},
	{"evaluate", "(Ljava/util/Spliterator;ZLjava/util/function/IntFunction;)Ljava/util/stream/Node;", "<P_IN:Ljava/lang/Object;>(Ljava/util/Spliterator<TP_IN;>;ZLjava/util/function/IntFunction<[TE_OUT;>;)Ljava/util/stream/Node<TE_OUT;>;", $FINAL},
	{"evaluateToArrayNode", "(Ljava/util/function/IntFunction;)Ljava/util/stream/Node;", "(Ljava/util/function/IntFunction<[TE_OUT;>;)Ljava/util/stream/Node<TE_OUT;>;", $FINAL, $method(static_cast<$Node*(AbstractPipeline::*)($IntFunction*)>(&AbstractPipeline::evaluateToArrayNode))},
	{"evaluateToNode", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;ZLjava/util/function/IntFunction;)Ljava/util/stream/Node;", "<P_IN:Ljava/lang/Object;>(Ljava/util/stream/PipelineHelper<TE_OUT;>;Ljava/util/Spliterator<TP_IN;>;ZLjava/util/function/IntFunction<[TE_OUT;>;)Ljava/util/stream/Node<TE_OUT;>;", $ABSTRACT},
	{"exactOutputSize", "(J)J", nullptr, 0},
	{"exactOutputSizeIfKnown", "(Ljava/util/Spliterator;)J", "<P_IN:Ljava/lang/Object;>(Ljava/util/Spliterator<TP_IN;>;)J", $FINAL},
	{"forEachWithCancel", "(Ljava/util/Spliterator;Ljava/util/stream/Sink;)Z", "(Ljava/util/Spliterator<TE_OUT;>;Ljava/util/stream/Sink<TE_OUT;>;)Z", $ABSTRACT},
	{"getOutputShape", "()Ljava/util/stream/StreamShape;", nullptr, $ABSTRACT},
	{"getSourceShape", "()Ljava/util/stream/StreamShape;", nullptr, $FINAL},
	{"getStreamAndOpFlags", "()I", nullptr, $FINAL},
	{"getStreamFlags", "()I", nullptr, $FINAL, $method(static_cast<int32_t(AbstractPipeline::*)()>(&AbstractPipeline::getStreamFlags))},
	{"isOrdered", "()Z", nullptr, $FINAL, $method(static_cast<bool(AbstractPipeline::*)()>(&AbstractPipeline::isOrdered))},
	{"isParallel", "()Z", nullptr, $PUBLIC | $FINAL},
	{"lambda$opEvaluateParallelLazy$2", "(I)[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ObjectArray*(*)(int32_t)>(&AbstractPipeline::lambda$opEvaluateParallelLazy$2))},
	{"lambda$spliterator$0", "()Ljava/util/Spliterator;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Spliterator*(AbstractPipeline::*)()>(&AbstractPipeline::lambda$spliterator$0))},
	{"lambda$wrapSpliterator$1", "(Ljava/util/Spliterator;)Ljava/util/Spliterator;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Spliterator*(*)($Spliterator*)>(&AbstractPipeline::lambda$wrapSpliterator$1))},
	{"lazySpliterator", "(Ljava/util/function/Supplier;)Ljava/util/Spliterator;", "(Ljava/util/function/Supplier<+Ljava/util/Spliterator<TE_OUT;>;>;)Ljava/util/Spliterator<TE_OUT;>;", $ABSTRACT},
	{"makeNodeBuilder", "(JLjava/util/function/IntFunction;)Ljava/util/stream/Node$Builder;", nullptr, $ABSTRACT},
	{"onClose", "(Ljava/lang/Runnable;)Ljava/util/stream/BaseStream;", "(Ljava/lang/Runnable;)TS;", $PUBLIC},
	{"opEvaluateParallel", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;Ljava/util/function/IntFunction;)Ljava/util/stream/Node;", "<P_IN:Ljava/lang/Object;>(Ljava/util/stream/PipelineHelper<TE_OUT;>;Ljava/util/Spliterator<TP_IN;>;Ljava/util/function/IntFunction<[TE_OUT;>;)Ljava/util/stream/Node<TE_OUT;>;", 0},
	{"opEvaluateParallelLazy", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;)Ljava/util/Spliterator;", "<P_IN:Ljava/lang/Object;>(Ljava/util/stream/PipelineHelper<TE_OUT;>;Ljava/util/Spliterator<TP_IN;>;)Ljava/util/Spliterator<TE_OUT;>;", 0},
	{"opIsStateful", "()Z", nullptr, $ABSTRACT},
	{"opWrapSink", "(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;", "(ILjava/util/stream/Sink<TE_OUT;>;)Ljava/util/stream/Sink<TE_IN;>;", $ABSTRACT},
	{"parallel", "()Ljava/util/stream/BaseStream;", "()TS;", $PUBLIC | $FINAL},
	{"sequential", "()Ljava/util/stream/BaseStream;", "()TS;", $PUBLIC | $FINAL},
	{"sourceSpliterator", "(I)Ljava/util/Spliterator;", "(I)Ljava/util/Spliterator<*>;", $PRIVATE, $method(static_cast<$Spliterator*(AbstractPipeline::*)(int32_t)>(&AbstractPipeline::sourceSpliterator))},
	{"sourceStageSpliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE_OUT;>;", $FINAL, $method(static_cast<$Spliterator*(AbstractPipeline::*)()>(&AbstractPipeline::sourceStageSpliterator))},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE_OUT;>;", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"wrap", "(Ljava/util/stream/PipelineHelper;Ljava/util/function/Supplier;Z)Ljava/util/Spliterator;", "<P_IN:Ljava/lang/Object;>(Ljava/util/stream/PipelineHelper<TE_OUT;>;Ljava/util/function/Supplier<Ljava/util/Spliterator<TP_IN;>;>;Z)Ljava/util/Spliterator<TE_OUT;>;", $ABSTRACT},
	{"wrapAndCopyInto", "(Ljava/util/stream/Sink;Ljava/util/Spliterator;)Ljava/util/stream/Sink;", "<P_IN:Ljava/lang/Object;S::Ljava/util/stream/Sink<TE_OUT;>;>(TS;Ljava/util/Spliterator<TP_IN;>;)TS;", $FINAL},
	{"wrapSink", "(Ljava/util/stream/Sink;)Ljava/util/stream/Sink;", "<P_IN:Ljava/lang/Object;>(Ljava/util/stream/Sink<TE_OUT;>;)Ljava/util/stream/Sink<TP_IN;>;", $FINAL},
	{"wrapSpliterator", "(Ljava/util/Spliterator;)Ljava/util/Spliterator;", "<P_IN:Ljava/lang/Object;>(Ljava/util/Spliterator<TP_IN;>;)Ljava/util/Spliterator<TE_OUT;>;", $FINAL},
	{}
};

$ClassInfo _AbstractPipeline_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.AbstractPipeline",
	"java.util.stream.PipelineHelper",
	"java.util.stream.BaseStream",
	_AbstractPipeline_FieldInfo_,
	_AbstractPipeline_MethodInfo_,
	"<E_IN:Ljava/lang/Object;E_OUT:Ljava/lang/Object;S::Ljava/util/stream/BaseStream<TE_OUT;TS;>;>Ljava/util/stream/PipelineHelper<TE_OUT;>;Ljava/util/stream/BaseStream<TE_OUT;TS;>;"
};

$Object* allocate$AbstractPipeline($Class* clazz) {
	return $of($alloc(AbstractPipeline));
}

int32_t AbstractPipeline::hashCode() {
	 return this->$PipelineHelper::hashCode();
}

bool AbstractPipeline::equals(Object$* obj) {
	 return this->$PipelineHelper::equals(obj);
}

$Object* AbstractPipeline::clone() {
	 return this->$PipelineHelper::clone();
}

$String* AbstractPipeline::toString() {
	 return this->$PipelineHelper::toString();
}

void AbstractPipeline::finalize() {
	this->$PipelineHelper::finalize();
}

bool AbstractPipeline::$assertionsDisabled = false;
$String* AbstractPipeline::MSG_STREAM_LINKED = nullptr;
$String* AbstractPipeline::MSG_CONSUMED = nullptr;

void AbstractPipeline::init$($Supplier* source, int32_t sourceFlags, bool parallel) {
	$PipelineHelper::init$();
	$set(this, previousStage, nullptr);
	$set(this, sourceSupplier, source);
	$set(this, sourceStage, this);
	$init($StreamOpFlag);
	this->sourceOrOpFlags = (int32_t)(sourceFlags & (uint32_t)$StreamOpFlag::STREAM_MASK);
	this->combinedFlags = (int32_t)((~(this->sourceOrOpFlags << 1)) & (uint32_t)$StreamOpFlag::INITIAL_OPS_VALUE);
	this->depth = 0;
	this->parallel$ = parallel;
}

void AbstractPipeline::init$($Spliterator* source, int32_t sourceFlags, bool parallel) {
	$PipelineHelper::init$();
	$set(this, previousStage, nullptr);
	$set(this, sourceSpliterator$, source);
	$set(this, sourceStage, this);
	$init($StreamOpFlag);
	this->sourceOrOpFlags = (int32_t)(sourceFlags & (uint32_t)$StreamOpFlag::STREAM_MASK);
	this->combinedFlags = (int32_t)((~(this->sourceOrOpFlags << 1)) & (uint32_t)$StreamOpFlag::INITIAL_OPS_VALUE);
	this->depth = 0;
	this->parallel$ = parallel;
}

void AbstractPipeline::init$(AbstractPipeline* previousStage, int32_t opFlags) {
	$PipelineHelper::init$();
	if ($nc(previousStage)->linkedOrConsumed) {
		$throwNew($IllegalStateException, AbstractPipeline::MSG_STREAM_LINKED);
	}
	$nc(previousStage)->linkedOrConsumed = true;
	$set(previousStage, nextStage, this);
	$set(this, previousStage, previousStage);
	$init($StreamOpFlag);
	this->sourceOrOpFlags = (int32_t)(opFlags & (uint32_t)$StreamOpFlag::OP_MASK);
	this->combinedFlags = $StreamOpFlag::combineOpFlags(opFlags, previousStage->combinedFlags);
	$set(this, sourceStage, previousStage->sourceStage);
	if (opIsStateful()) {
		$nc(this->sourceStage)->sourceAnyStateful = true;
	}
	this->depth = previousStage->depth + 1;
}

$Object* AbstractPipeline::evaluate($TerminalOp* terminalOp) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = !AbstractPipeline::$assertionsDisabled;
	if (var$0) {
		var$0 = !(getOutputShape() == $nc(terminalOp)->inputShape());
	}
	if (var$0) {
		$throwNew($AssertionError);
	}
	if (this->linkedOrConsumed) {
		$throwNew($IllegalStateException, AbstractPipeline::MSG_STREAM_LINKED);
	}
	this->linkedOrConsumed = true;
	return $of(isParallel() ? $nc(terminalOp)->evaluateParallel(this, $(sourceSpliterator(terminalOp->getOpFlags()))) : terminalOp->evaluateSequential(this, $(sourceSpliterator(terminalOp->getOpFlags()))));
}

$Node* AbstractPipeline::evaluateToArrayNode($IntFunction* generator) {
	$useLocalCurrentObjectStackCache();
	if (this->linkedOrConsumed) {
		$throwNew($IllegalStateException, AbstractPipeline::MSG_STREAM_LINKED);
	}
	this->linkedOrConsumed = true;
	bool var$0 = isParallel() && this->previousStage != nullptr;
	if (var$0 && opIsStateful()) {
		this->depth = 0;
		return opEvaluateParallel(this->previousStage, $($nc(this->previousStage)->sourceSpliterator(0)), generator);
	} else {
		return evaluate($(sourceSpliterator(0)), true, generator);
	}
}

$Spliterator* AbstractPipeline::sourceStageSpliterator() {
	$useLocalCurrentObjectStackCache();
	if (this != this->sourceStage) {
		$throwNew($IllegalStateException);
	}
	if (this->linkedOrConsumed) {
		$throwNew($IllegalStateException, AbstractPipeline::MSG_STREAM_LINKED);
	}
	this->linkedOrConsumed = true;
	if ($nc(this->sourceStage)->sourceSpliterator$ != nullptr) {
		$var($Spliterator, s, $nc(this->sourceStage)->sourceSpliterator$);
		$set($nc(this->sourceStage), sourceSpliterator$, nullptr);
		return s;
	} else if ($nc(this->sourceStage)->sourceSupplier != nullptr) {
		$var($Spliterator, s, $cast($Spliterator, $nc($nc(this->sourceStage)->sourceSupplier)->get()));
		$set($nc(this->sourceStage), sourceSupplier, nullptr);
		return s;
	} else {
		$throwNew($IllegalStateException, AbstractPipeline::MSG_CONSUMED);
	}
}

$BaseStream* AbstractPipeline::sequential() {
	$nc(this->sourceStage)->parallel$ = false;
	return static_cast<$BaseStream*>(this);
}

$BaseStream* AbstractPipeline::parallel() {
	$nc(this->sourceStage)->parallel$ = true;
	return static_cast<$BaseStream*>(this);
}

void AbstractPipeline::close() {
	this->linkedOrConsumed = true;
	$set(this, sourceSupplier, nullptr);
	$set(this, sourceSpliterator$, nullptr);
	if ($nc(this->sourceStage)->sourceCloseAction != nullptr) {
		$var($Runnable, closeAction, $nc(this->sourceStage)->sourceCloseAction);
		$set($nc(this->sourceStage), sourceCloseAction, nullptr);
		$nc(closeAction)->run();
	}
}

$BaseStream* AbstractPipeline::onClose($Runnable* closeHandler) {
	if (this->linkedOrConsumed) {
		$throwNew($IllegalStateException, AbstractPipeline::MSG_STREAM_LINKED);
	}
	$Objects::requireNonNull(closeHandler);
	$var($Runnable, existingHandler, $nc(this->sourceStage)->sourceCloseAction);
	$set($nc(this->sourceStage), sourceCloseAction, (existingHandler == nullptr) ? closeHandler : $Streams::composeWithExceptions(existingHandler, closeHandler));
	return static_cast<$BaseStream*>(this);
}

$Spliterator* AbstractPipeline::spliterator() {
	$useLocalCurrentObjectStackCache();
	if (this->linkedOrConsumed) {
		$throwNew($IllegalStateException, AbstractPipeline::MSG_STREAM_LINKED);
	}
	this->linkedOrConsumed = true;
	if (this == this->sourceStage) {
		if ($nc(this->sourceStage)->sourceSpliterator$ != nullptr) {
			$var($Spliterator, s, $nc(this->sourceStage)->sourceSpliterator$);
			$set($nc(this->sourceStage), sourceSpliterator$, nullptr);
			return s;
		} else if ($nc(this->sourceStage)->sourceSupplier != nullptr) {
			$var($Supplier, s, $nc(this->sourceStage)->sourceSupplier);
			$set($nc(this->sourceStage), sourceSupplier, nullptr);
			return lazySpliterator(s);
		} else {
			$throwNew($IllegalStateException, AbstractPipeline::MSG_CONSUMED);
		}
	} else {
		$var($Supplier, var$0, static_cast<$Supplier*>($new(AbstractPipeline$$Lambda$lambda$spliterator$0, this)));
		return wrap(this, var$0, isParallel());
	}
}

bool AbstractPipeline::isParallel() {
	return $nc(this->sourceStage)->parallel$;
}

int32_t AbstractPipeline::getStreamFlags() {
	return $StreamOpFlag::toStreamFlags(this->combinedFlags);
}

$Spliterator* AbstractPipeline::sourceSpliterator(int32_t terminalFlags) {
	$useLocalCurrentObjectStackCache();
	$var($Spliterator, spliterator, nullptr);
	if ($nc(this->sourceStage)->sourceSpliterator$ != nullptr) {
		$assign(spliterator, $nc(this->sourceStage)->sourceSpliterator$);
		$set($nc(this->sourceStage), sourceSpliterator$, nullptr);
	} else if ($nc(this->sourceStage)->sourceSupplier != nullptr) {
		$assign(spliterator, $cast($Spliterator, $nc($nc(this->sourceStage)->sourceSupplier)->get()));
		$set($nc(this->sourceStage), sourceSupplier, nullptr);
	} else {
		$throwNew($IllegalStateException, AbstractPipeline::MSG_CONSUMED);
	}
	if (isParallel() && $nc(this->sourceStage)->sourceAnyStateful) {
		int32_t depth = 1;
		{
			$var(AbstractPipeline, u, this->sourceStage);
			$var(AbstractPipeline, p, $nc(this->sourceStage)->nextStage);
			$var(AbstractPipeline, e, this);
			for (; u != e; $assign(u, p), $assign(p, $nc(p)->nextStage)) {
				int32_t thisOpFlags = p->sourceOrOpFlags;
				if (p->opIsStateful()) {
					depth = 0;
					$init($StreamOpFlag);
					if ($StreamOpFlag::SHORT_CIRCUIT->isKnown(thisOpFlags)) {
						thisOpFlags = (int32_t)(thisOpFlags & (uint32_t)~$StreamOpFlag::IS_SHORT_CIRCUIT);
					}
					$assign(spliterator, p->opEvaluateParallelLazy(u, spliterator));
					thisOpFlags = $nc(spliterator)->hasCharacteristics($Spliterator::SIZED) ? ((int32_t)(thisOpFlags & (uint32_t)~$StreamOpFlag::NOT_SIZED)) | $StreamOpFlag::IS_SIZED : ((int32_t)(thisOpFlags & (uint32_t)~$StreamOpFlag::IS_SIZED)) | $StreamOpFlag::NOT_SIZED;
				}
				p->depth = depth++;
				p->combinedFlags = $StreamOpFlag::combineOpFlags(thisOpFlags, $nc(u)->combinedFlags);
			}
		}
	}
	if (terminalFlags != 0) {
		this->combinedFlags = $StreamOpFlag::combineOpFlags(terminalFlags, this->combinedFlags);
	}
	return spliterator;
}

$StreamShape* AbstractPipeline::getSourceShape() {
	$var(AbstractPipeline, p, this);
	while ($nc(p)->depth > 0) {
		$assign(p, p->previousStage);
	}
	return $nc(p)->getOutputShape();
}

int64_t AbstractPipeline::exactOutputSizeIfKnown($Spliterator* spliterator) {
	int32_t flags = getStreamAndOpFlags();
	$init($StreamOpFlag);
	int64_t size = $StreamOpFlag::SIZED->isKnown(flags) ? $nc(spliterator)->getExactSizeIfKnown() : (int64_t)-1;
	bool var$0 = size != -1 && $StreamOpFlag::SIZE_ADJUSTING->isKnown(flags);
	if (var$0 && !isParallel()) {
		{
			$var(AbstractPipeline, stage, $nc(this->sourceStage)->nextStage);
			for (; stage != nullptr; $assign(stage, $nc(stage)->nextStage)) {
				size = stage->exactOutputSize(size);
			}
		}
	}
	return size;
}

int64_t AbstractPipeline::exactOutputSize(int64_t previousSize) {
	return previousSize;
}

$Sink* AbstractPipeline::wrapAndCopyInto($Sink* sink, $Spliterator* spliterator) {
	copyInto($(wrapSink($cast($Sink, $Objects::requireNonNull(sink)))), spliterator);
	return sink;
}

void AbstractPipeline::copyInto($Sink* wrappedSink, $Spliterator* spliterator) {
	$Objects::requireNonNull(wrappedSink);
	$init($StreamOpFlag);
	if (!$StreamOpFlag::SHORT_CIRCUIT->isKnown(getStreamAndOpFlags())) {
		wrappedSink->begin($nc(spliterator)->getExactSizeIfKnown());
		$nc(spliterator)->forEachRemaining(wrappedSink);
		wrappedSink->end();
	} else {
		copyIntoWithCancel(wrappedSink, spliterator);
	}
}

bool AbstractPipeline::copyIntoWithCancel($Sink* wrappedSink, $Spliterator* spliterator) {
	$var(AbstractPipeline, p, this);
	while ($nc(p)->depth > 0) {
		$assign(p, p->previousStage);
	}
	$nc(wrappedSink)->begin($nc(spliterator)->getExactSizeIfKnown());
	bool cancelled = $nc(p)->forEachWithCancel(spliterator, wrappedSink);
	wrappedSink->end();
	return cancelled;
}

int32_t AbstractPipeline::getStreamAndOpFlags() {
	return this->combinedFlags;
}

bool AbstractPipeline::isOrdered() {
	$init($StreamOpFlag);
	return $StreamOpFlag::ORDERED->isKnown(this->combinedFlags);
}

$Sink* AbstractPipeline::wrapSink($Sink* sink$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Sink, sink, sink$renamed);
	$Objects::requireNonNull(sink);
	{
		$var(AbstractPipeline, p, this);
		for (; p->depth > 0; $assign(p, p->previousStage)) {
			$assign(sink, $nc(p)->opWrapSink($nc(p->previousStage)->combinedFlags, sink));
		}
	}
	return sink;
}

$Spliterator* AbstractPipeline::wrapSpliterator($Spliterator* sourceSpliterator) {
	if (this->depth == 0) {
		return sourceSpliterator;
	} else {
		$var($Supplier, var$0, static_cast<$Supplier*>($new(AbstractPipeline$$Lambda$lambda$wrapSpliterator$1$1, sourceSpliterator)));
		return wrap(this, var$0, isParallel());
	}
}

$Node* AbstractPipeline::evaluate($Spliterator* spliterator, bool flatten, $IntFunction* generator) {
	$useLocalCurrentObjectStackCache();
	if (isParallel()) {
		return evaluateToNode(this, spliterator, flatten, generator);
	} else {
		$var($Node$Builder, nb, makeNodeBuilder(exactOutputSizeIfKnown(spliterator), generator));
		return $nc(($cast($Node$Builder, $(wrapAndCopyInto(nb, spliterator)))))->build();
	}
}

$Node* AbstractPipeline::opEvaluateParallel($PipelineHelper* helper, $Spliterator* spliterator, $IntFunction* generator) {
	$throwNew($UnsupportedOperationException, "Parallel evaluation is not supported"_s);
	$shouldNotReachHere();
}

$Spliterator* AbstractPipeline::opEvaluateParallelLazy($PipelineHelper* helper, $Spliterator* spliterator) {
	$useLocalCurrentObjectStackCache();
	return $nc($(opEvaluateParallel(helper, spliterator, static_cast<$IntFunction*>($$new(AbstractPipeline$$Lambda$lambda$opEvaluateParallelLazy$2$2)))))->spliterator();
}

$ObjectArray* AbstractPipeline::lambda$opEvaluateParallelLazy$2(int32_t i) {
	$init(AbstractPipeline);
	return $new($ObjectArray, i);
}

$Spliterator* AbstractPipeline::lambda$wrapSpliterator$1($Spliterator* sourceSpliterator) {
	$init(AbstractPipeline);
	return sourceSpliterator;
}

$Spliterator* AbstractPipeline::lambda$spliterator$0() {
	return sourceSpliterator(0);
}

void clinit$AbstractPipeline($Class* class$) {
	$assignStatic(AbstractPipeline::MSG_STREAM_LINKED, "stream has already been operated upon or closed"_s);
	$assignStatic(AbstractPipeline::MSG_CONSUMED, "source already consumed or closed"_s);
	AbstractPipeline::$assertionsDisabled = !AbstractPipeline::class$->desiredAssertionStatus();
}

AbstractPipeline::AbstractPipeline() {
}

$Class* AbstractPipeline::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(AbstractPipeline$$Lambda$lambda$spliterator$0::classInfo$.name)) {
			return AbstractPipeline$$Lambda$lambda$spliterator$0::load$(name, initialize);
		}
		if (name->equals(AbstractPipeline$$Lambda$lambda$wrapSpliterator$1$1::classInfo$.name)) {
			return AbstractPipeline$$Lambda$lambda$wrapSpliterator$1$1::load$(name, initialize);
		}
		if (name->equals(AbstractPipeline$$Lambda$lambda$opEvaluateParallelLazy$2$2::classInfo$.name)) {
			return AbstractPipeline$$Lambda$lambda$opEvaluateParallelLazy$2$2::load$(name, initialize);
		}
	}
	$loadClass(AbstractPipeline, name, initialize, &_AbstractPipeline_ClassInfo_, clinit$AbstractPipeline, allocate$AbstractPipeline);
	return class$;
}

$Class* AbstractPipeline::class$ = nullptr;

		} // stream
	} // util
} // java