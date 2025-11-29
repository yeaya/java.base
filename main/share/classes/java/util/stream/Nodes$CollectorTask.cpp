#include <java/util/stream/Nodes$CollectorTask.h>

#include <java/util/Spliterator.h>
#include <java/util/concurrent/CountedCompleter.h>
#include <java/util/function/BinaryOperator.h>
#include <java/util/function/LongFunction.h>
#include <java/util/stream/AbstractTask.h>
#include <java/util/stream/Node$Builder.h>
#include <java/util/stream/Node.h>
#include <java/util/stream/Nodes.h>
#include <java/util/stream/PipelineHelper.h>
#include <java/util/stream/Sink.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $CountedCompleter = ::java::util::concurrent::CountedCompleter;
using $BinaryOperator = ::java::util::function::BinaryOperator;
using $LongFunction = ::java::util::function::LongFunction;
using $AbstractTask = ::java::util::stream::AbstractTask;
using $Node = ::java::util::stream::Node;
using $Node$Builder = ::java::util::stream::Node$Builder;
using $PipelineHelper = ::java::util::stream::PipelineHelper;
using $Sink = ::java::util::stream::Sink;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _Nodes$CollectorTask_FieldInfo_[] = {
	{"helper", "Ljava/util/stream/PipelineHelper;", "Ljava/util/stream/PipelineHelper<TP_OUT;>;", $PROTECTED | $FINAL, $field(Nodes$CollectorTask, helper)},
	{"builderFactory", "Ljava/util/function/LongFunction;", "Ljava/util/function/LongFunction<TT_BUILDER;>;", $PROTECTED | $FINAL, $field(Nodes$CollectorTask, builderFactory)},
	{"concFactory", "Ljava/util/function/BinaryOperator;", "Ljava/util/function/BinaryOperator<TT_NODE;>;", $PROTECTED | $FINAL, $field(Nodes$CollectorTask, concFactory)},
	{}
};

$MethodInfo _Nodes$CollectorTask_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;Ljava/util/function/LongFunction;Ljava/util/function/BinaryOperator;)V", "(Ljava/util/stream/PipelineHelper<TP_OUT;>;Ljava/util/Spliterator<TP_IN;>;Ljava/util/function/LongFunction<TT_BUILDER;>;Ljava/util/function/BinaryOperator<TT_NODE;>;)V", 0, $method(static_cast<void(Nodes$CollectorTask::*)($PipelineHelper*,$Spliterator*,$LongFunction*,$BinaryOperator*)>(&Nodes$CollectorTask::init$))},
	{"<init>", "(Ljava/util/stream/Nodes$CollectorTask;Ljava/util/Spliterator;)V", "(Ljava/util/stream/Nodes$CollectorTask<TP_IN;TP_OUT;TT_NODE;TT_BUILDER;>;Ljava/util/Spliterator<TP_IN;>;)V", 0, $method(static_cast<void(Nodes$CollectorTask::*)(Nodes$CollectorTask*,$Spliterator*)>(&Nodes$CollectorTask::init$))},
	{"doLeaf", "()Ljava/util/stream/Node;", "()TT_NODE;", $PROTECTED},
	{"makeChild", "(Ljava/util/Spliterator;)Ljava/util/stream/Nodes$CollectorTask;", "(Ljava/util/Spliterator<TP_IN;>;)Ljava/util/stream/Nodes$CollectorTask<TP_IN;TP_OUT;TT_NODE;TT_BUILDER;>;", $PROTECTED},
	{"onCompletion", "(Ljava/util/concurrent/CountedCompleter;)V", "(Ljava/util/concurrent/CountedCompleter<*>;)V", $PUBLIC},
	{}
};

$InnerClassInfo _Nodes$CollectorTask_InnerClassesInfo_[] = {
	{"java.util.stream.Nodes$CollectorTask", "java.util.stream.Nodes", "CollectorTask", $PRIVATE | $STATIC},
	{"java.util.stream.Nodes$CollectorTask$OfDouble", "java.util.stream.Nodes$CollectorTask", "OfDouble", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.Nodes$CollectorTask$OfLong", "java.util.stream.Nodes$CollectorTask", "OfLong", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.Nodes$CollectorTask$OfInt", "java.util.stream.Nodes$CollectorTask", "OfInt", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.Nodes$CollectorTask$OfRef", "java.util.stream.Nodes$CollectorTask", "OfRef", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.Node$Builder", "java.util.stream.Node", "Builder", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Nodes$CollectorTask_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.Nodes$CollectorTask",
	"java.util.stream.AbstractTask",
	nullptr,
	_Nodes$CollectorTask_FieldInfo_,
	_Nodes$CollectorTask_MethodInfo_,
	"<P_IN:Ljava/lang/Object;P_OUT:Ljava/lang/Object;T_NODE::Ljava/util/stream/Node<TP_OUT;>;T_BUILDER::Ljava/util/stream/Node$Builder<TP_OUT;>;>Ljava/util/stream/AbstractTask<TP_IN;TP_OUT;TT_NODE;Ljava/util/stream/Nodes$CollectorTask<TP_IN;TP_OUT;TT_NODE;TT_BUILDER;>;>;",
	nullptr,
	_Nodes$CollectorTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Nodes"
};

$Object* allocate$Nodes$CollectorTask($Class* clazz) {
	return $of($alloc(Nodes$CollectorTask));
}

void Nodes$CollectorTask::init$($PipelineHelper* helper, $Spliterator* spliterator, $LongFunction* builderFactory, $BinaryOperator* concFactory) {
	$AbstractTask::init$(helper, spliterator);
	$set(this, helper, helper);
	$set(this, builderFactory, builderFactory);
	$set(this, concFactory, concFactory);
}

void Nodes$CollectorTask::init$(Nodes$CollectorTask* parent, $Spliterator* spliterator) {
	$AbstractTask::init$(static_cast<$AbstractTask*>(parent), spliterator);
	$set(this, helper, $nc(parent)->helper);
	$set(this, builderFactory, parent->builderFactory);
	$set(this, concFactory, parent->concFactory);
}

Nodes$CollectorTask* Nodes$CollectorTask::makeChild($Spliterator* spliterator) {
	return $new(Nodes$CollectorTask, this, spliterator);
}

$Object* Nodes$CollectorTask::doLeaf() {
	$useLocalCurrentObjectStackCache();
	$var($Node$Builder, builder, $cast($Node$Builder, $nc(this->builderFactory)->apply($nc(this->helper)->exactOutputSizeIfKnown(this->spliterator))));
	return $of($nc(($cast($Node$Builder, $($nc(this->helper)->wrapAndCopyInto(builder, this->spliterator)))))->build());
}

void Nodes$CollectorTask::onCompletion($CountedCompleter* caller) {
	$useLocalCurrentObjectStackCache();
	if (!isLeaf()) {
		$var($Object, var$0, $cast($Node, $nc(($cast(Nodes$CollectorTask, this->leftChild)))->getLocalResult()));
		setLocalResult($cast($Node, $($nc(this->concFactory)->apply(var$0, $cast($Node, $($nc(($cast(Nodes$CollectorTask, this->rightChild)))->getLocalResult()))))));
	}
	$AbstractTask::onCompletion(caller);
}

Nodes$CollectorTask::Nodes$CollectorTask() {
}

$Class* Nodes$CollectorTask::load$($String* name, bool initialize) {
	$loadClass(Nodes$CollectorTask, name, initialize, &_Nodes$CollectorTask_ClassInfo_, allocate$Nodes$CollectorTask);
	return class$;
}

$Class* Nodes$CollectorTask::class$ = nullptr;

		} // stream
	} // util
} // java