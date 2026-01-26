#include <java/util/stream/ReferencePipeline$StatelessOp.h>

#include <java/lang/AssertionError.h>
#include <java/util/stream/AbstractPipeline.h>
#include <java/util/stream/BaseStream.h>
#include <java/util/stream/ReferencePipeline.h>
#include <java/util/stream/Stream.h>
#include <java/util/stream/StreamShape.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractPipeline = ::java::util::stream::AbstractPipeline;
using $BaseStream = ::java::util::stream::BaseStream;
using $ReferencePipeline = ::java::util::stream::ReferencePipeline;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _ReferencePipeline$StatelessOp_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ReferencePipeline$StatelessOp, $assertionsDisabled)},
	{}
};

$MethodInfo _ReferencePipeline$StatelessOp_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/AbstractPipeline;Ljava/util/stream/StreamShape;I)V", "(Ljava/util/stream/AbstractPipeline<*TE_IN;*>;Ljava/util/stream/StreamShape;I)V", 0, $method(ReferencePipeline$StatelessOp, init$, void, $AbstractPipeline*, $StreamShape*, int32_t)},
	{"opIsStateful", "()Z", nullptr, $FINAL, $virtualMethod(ReferencePipeline$StatelessOp, opIsStateful, bool)},
	{"unordered", "()Ljava/util/stream/BaseStream;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ReferencePipeline$StatelessOp, unordered, $BaseStream*)},
	{}
};

$InnerClassInfo _ReferencePipeline$StatelessOp_InnerClassesInfo_[] = {
	{"java.util.stream.ReferencePipeline$StatelessOp", "java.util.stream.ReferencePipeline", "StatelessOp", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ReferencePipeline$StatelessOp_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.ReferencePipeline$StatelessOp",
	"java.util.stream.ReferencePipeline",
	nullptr,
	_ReferencePipeline$StatelessOp_FieldInfo_,
	_ReferencePipeline$StatelessOp_MethodInfo_,
	"<E_IN:Ljava/lang/Object;E_OUT:Ljava/lang/Object;>Ljava/util/stream/ReferencePipeline<TE_IN;TE_OUT;>;",
	nullptr,
	_ReferencePipeline$StatelessOp_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ReferencePipeline"
};

$Object* allocate$ReferencePipeline$StatelessOp($Class* clazz) {
	return $of($alloc(ReferencePipeline$StatelessOp));
}

bool ReferencePipeline$StatelessOp::$assertionsDisabled = false;

void ReferencePipeline$StatelessOp::init$($AbstractPipeline* upstream, $StreamShape* inputShape, int32_t opFlags) {
	$ReferencePipeline::init$(upstream, opFlags);
	if (!ReferencePipeline$StatelessOp::$assertionsDisabled && !($nc(upstream)->getOutputShape() == inputShape)) {
		$throwNew($AssertionError);
	}
}

bool ReferencePipeline$StatelessOp::opIsStateful() {
	return false;
}

$BaseStream* ReferencePipeline$StatelessOp::unordered() {
	return $ReferencePipeline::unordered();
}

void clinit$ReferencePipeline$StatelessOp($Class* class$) {
	$load($ReferencePipeline);
	ReferencePipeline$StatelessOp::$assertionsDisabled = !$ReferencePipeline::class$->desiredAssertionStatus();
}

ReferencePipeline$StatelessOp::ReferencePipeline$StatelessOp() {
}

$Class* ReferencePipeline$StatelessOp::load$($String* name, bool initialize) {
	$loadClass(ReferencePipeline$StatelessOp, name, initialize, &_ReferencePipeline$StatelessOp_ClassInfo_, clinit$ReferencePipeline$StatelessOp, allocate$ReferencePipeline$StatelessOp);
	return class$;
}

$Class* ReferencePipeline$StatelessOp::class$ = nullptr;

		} // stream
	} // util
} // java