#include <java/util/stream/TerminalOp.h>

#include <java/util/Spliterator.h>
#include <java/util/stream/PipelineHelper.h>
#include <java/util/stream/StreamShape.h>
#include <java/util/stream/Tripwire.h>
#include <jcpp.h>

#undef ENABLED
#undef REFERENCE

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $PipelineHelper = ::java::util::stream::PipelineHelper;
using $StreamShape = ::java::util::stream::StreamShape;
using $Tripwire = ::java::util::stream::Tripwire;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _TerminalOp_MethodInfo_[] = {
	{"evaluateParallel", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;)Ljava/lang/Object;", "<P_IN:Ljava/lang/Object;>(Ljava/util/stream/PipelineHelper<TE_IN;>;Ljava/util/Spliterator<TP_IN;>;)TR;", $PUBLIC, $virtualMethod(TerminalOp, evaluateParallel, $Object*, $PipelineHelper*, $Spliterator*)},
	{"evaluateSequential", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;)Ljava/lang/Object;", "<P_IN:Ljava/lang/Object;>(Ljava/util/stream/PipelineHelper<TE_IN;>;Ljava/util/Spliterator<TP_IN;>;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TerminalOp, evaluateSequential, $Object*, $PipelineHelper*, $Spliterator*)},
	{"getOpFlags", "()I", nullptr, $PUBLIC, $virtualMethod(TerminalOp, getOpFlags, int32_t)},
	{"inputShape", "()Ljava/util/stream/StreamShape;", nullptr, $PUBLIC, $virtualMethod(TerminalOp, inputShape, $StreamShape*)},
	{}
};

$ClassInfo _TerminalOp_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"java.util.stream.TerminalOp",
	nullptr,
	nullptr,
	nullptr,
	_TerminalOp_MethodInfo_,
	"<E_IN:Ljava/lang/Object;R:Ljava/lang/Object;>Ljava/lang/Object;"
};

$Object* allocate$TerminalOp($Class* clazz) {
	return $of($alloc(TerminalOp));
}

$StreamShape* TerminalOp::inputShape() {
	$init($StreamShape);
	return $StreamShape::REFERENCE;
}

int32_t TerminalOp::getOpFlags() {
	return 0;
}

$Object* TerminalOp::evaluateParallel($PipelineHelper* helper, $Spliterator* spliterator) {
	$init($Tripwire);
	if ($Tripwire::ENABLED) {
		$Tripwire::trip($of(this)->getClass(), "{0} triggering TerminalOp.evaluateParallel serial default"_s);
	}
	return $of(evaluateSequential(helper, spliterator));
}

$Class* TerminalOp::load$($String* name, bool initialize) {
	$loadClass(TerminalOp, name, initialize, &_TerminalOp_ClassInfo_, allocate$TerminalOp);
	return class$;
}

$Class* TerminalOp::class$ = nullptr;

		} // stream
	} // util
} // java