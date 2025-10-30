#include <java/util/stream/PipelineHelper.h>

#include <java/util/Spliterator.h>
#include <java/util/function/IntFunction.h>
#include <java/util/stream/Node$Builder.h>
#include <java/util/stream/Node.h>
#include <java/util/stream/StreamShape.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $IntFunction = ::java::util::function::IntFunction;
using $Node = ::java::util::stream::Node;
using $Node$Builder = ::java::util::stream::Node$Builder;
using $Sink = ::java::util::stream::Sink;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _PipelineHelper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(PipelineHelper::*)()>(&PipelineHelper::init$))},
	{"copyInto", "(Ljava/util/stream/Sink;Ljava/util/Spliterator;)V", "<P_IN:Ljava/lang/Object;>(Ljava/util/stream/Sink<TP_IN;>;Ljava/util/Spliterator<TP_IN;>;)V", $ABSTRACT},
	{"copyIntoWithCancel", "(Ljava/util/stream/Sink;Ljava/util/Spliterator;)Z", "<P_IN:Ljava/lang/Object;>(Ljava/util/stream/Sink<TP_IN;>;Ljava/util/Spliterator<TP_IN;>;)Z", $ABSTRACT},
	{"evaluate", "(Ljava/util/Spliterator;ZLjava/util/function/IntFunction;)Ljava/util/stream/Node;", "<P_IN:Ljava/lang/Object;>(Ljava/util/Spliterator<TP_IN;>;ZLjava/util/function/IntFunction<[TP_OUT;>;)Ljava/util/stream/Node<TP_OUT;>;", $ABSTRACT},
	{"exactOutputSizeIfKnown", "(Ljava/util/Spliterator;)J", "<P_IN:Ljava/lang/Object;>(Ljava/util/Spliterator<TP_IN;>;)J", $ABSTRACT},
	{"getSourceShape", "()Ljava/util/stream/StreamShape;", nullptr, $ABSTRACT},
	{"getStreamAndOpFlags", "()I", nullptr, $ABSTRACT},
	{"makeNodeBuilder", "(JLjava/util/function/IntFunction;)Ljava/util/stream/Node$Builder;", "(JLjava/util/function/IntFunction<[TP_OUT;>;)Ljava/util/stream/Node$Builder<TP_OUT;>;", $ABSTRACT},
	{"wrapAndCopyInto", "(Ljava/util/stream/Sink;Ljava/util/Spliterator;)Ljava/util/stream/Sink;", "<P_IN:Ljava/lang/Object;S::Ljava/util/stream/Sink<TP_OUT;>;>(TS;Ljava/util/Spliterator<TP_IN;>;)TS;", $ABSTRACT},
	{"wrapSink", "(Ljava/util/stream/Sink;)Ljava/util/stream/Sink;", "<P_IN:Ljava/lang/Object;>(Ljava/util/stream/Sink<TP_OUT;>;)Ljava/util/stream/Sink<TP_IN;>;", $ABSTRACT},
	{"wrapSpliterator", "(Ljava/util/Spliterator;)Ljava/util/Spliterator;", "<P_IN:Ljava/lang/Object;>(Ljava/util/Spliterator<TP_IN;>;)Ljava/util/Spliterator<TP_OUT;>;", $ABSTRACT},
	{}
};

$ClassInfo _PipelineHelper_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.PipelineHelper",
	"java.lang.Object",
	nullptr,
	nullptr,
	_PipelineHelper_MethodInfo_,
	"<P_OUT:Ljava/lang/Object;>Ljava/lang/Object;"
};

$Object* allocate$PipelineHelper($Class* clazz) {
	return $of($alloc(PipelineHelper));
}

void PipelineHelper::init$() {
}

PipelineHelper::PipelineHelper() {
}

$Class* PipelineHelper::load$($String* name, bool initialize) {
	$loadClass(PipelineHelper, name, initialize, &_PipelineHelper_ClassInfo_, allocate$PipelineHelper);
	return class$;
}

$Class* PipelineHelper::class$ = nullptr;

		} // stream
	} // util
} // java