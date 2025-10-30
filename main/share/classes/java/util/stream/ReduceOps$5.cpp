#include <java/util/stream/ReduceOps$5.h>

#include <java/util/Spliterator.h>
#include <java/util/stream/PipelineHelper.h>
#include <java/util/stream/ReduceOps$AccumulatingSink.h>
#include <java/util/stream/ReduceOps$CountingSink$OfRef.h>
#include <java/util/stream/ReduceOps$CountingSink.h>
#include <java/util/stream/ReduceOps$ReduceOp.h>
#include <java/util/stream/ReduceOps.h>
#include <java/util/stream/StreamOpFlag.h>
#include <java/util/stream/StreamShape.h>
#include <jcpp.h>

#undef NOT_ORDERED

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $PipelineHelper = ::java::util::stream::PipelineHelper;
using $ReduceOps = ::java::util::stream::ReduceOps;
using $ReduceOps$AccumulatingSink = ::java::util::stream::ReduceOps$AccumulatingSink;
using $ReduceOps$CountingSink = ::java::util::stream::ReduceOps$CountingSink;
using $ReduceOps$CountingSink$OfRef = ::java::util::stream::ReduceOps$CountingSink$OfRef;
using $ReduceOps$ReduceOp = ::java::util::stream::ReduceOps$ReduceOp;
using $StreamOpFlag = ::java::util::stream::StreamOpFlag;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _ReduceOps$5_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/StreamShape;)V", nullptr, 0, $method(static_cast<void(ReduceOps$5::*)($StreamShape*)>(&ReduceOps$5::init$))},
	{"evaluateParallel", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;)Ljava/lang/Long;", "<P_IN:Ljava/lang/Object;>(Ljava/util/stream/PipelineHelper<TT;>;Ljava/util/Spliterator<TP_IN;>;)Ljava/lang/Long;", $PUBLIC},
	{"evaluateSequential", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;)Ljava/lang/Long;", "<P_IN:Ljava/lang/Object;>(Ljava/util/stream/PipelineHelper<TT;>;Ljava/util/Spliterator<TP_IN;>;)Ljava/lang/Long;", $PUBLIC},
	{"getOpFlags", "()I", nullptr, $PUBLIC},
	{"makeSink", "()Ljava/util/stream/ReduceOps$CountingSink;", "()Ljava/util/stream/ReduceOps$CountingSink<TT;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _ReduceOps$5_EnclosingMethodInfo_ = {
	"java.util.stream.ReduceOps",
	"makeRefCounting",
	"()Ljava/util/stream/TerminalOp;"
};

$InnerClassInfo _ReduceOps$5_InnerClassesInfo_[] = {
	{"java.util.stream.ReduceOps$5", nullptr, nullptr, 0},
	{"java.util.stream.ReduceOps$ReduceOp", "java.util.stream.ReduceOps", "ReduceOp", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.ReduceOps$CountingSink", "java.util.stream.ReduceOps", "CountingSink", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ReduceOps$5_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.ReduceOps$5",
	"java.util.stream.ReduceOps$ReduceOp",
	nullptr,
	nullptr,
	_ReduceOps$5_MethodInfo_,
	"Ljava/util/stream/ReduceOps$ReduceOp<TT;Ljava/lang/Long;Ljava/util/stream/ReduceOps$CountingSink<TT;>;>;",
	&_ReduceOps$5_EnclosingMethodInfo_,
	_ReduceOps$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ReduceOps"
};

$Object* allocate$ReduceOps$5($Class* clazz) {
	return $of($alloc(ReduceOps$5));
}

void ReduceOps$5::init$($StreamShape* shape) {
	$ReduceOps$ReduceOp::init$(shape);
}

$ReduceOps$AccumulatingSink* ReduceOps$5::makeSink() {
	return $new($ReduceOps$CountingSink$OfRef);
}

$Object* ReduceOps$5::evaluateSequential($PipelineHelper* helper, $Spliterator* spliterator) {
	int64_t size = $nc(helper)->exactOutputSizeIfKnown(spliterator);
	if (size != -1) {
		return $of($Long::valueOf(size));
	}
	return $of($cast($Long, $ReduceOps$ReduceOp::evaluateSequential(helper, spliterator)));
}

$Object* ReduceOps$5::evaluateParallel($PipelineHelper* helper, $Spliterator* spliterator) {
	int64_t size = $nc(helper)->exactOutputSizeIfKnown(spliterator);
	if (size != -1) {
		return $of($Long::valueOf(size));
	}
	return $of($cast($Long, $ReduceOps$ReduceOp::evaluateParallel(helper, spliterator)));
}

int32_t ReduceOps$5::getOpFlags() {
	$init($StreamOpFlag);
	return $StreamOpFlag::NOT_ORDERED;
}

ReduceOps$5::ReduceOps$5() {
}

$Class* ReduceOps$5::load$($String* name, bool initialize) {
	$loadClass(ReduceOps$5, name, initialize, &_ReduceOps$5_ClassInfo_, allocate$ReduceOps$5);
	return class$;
}

$Class* ReduceOps$5::class$ = nullptr;

		} // stream
	} // util
} // java