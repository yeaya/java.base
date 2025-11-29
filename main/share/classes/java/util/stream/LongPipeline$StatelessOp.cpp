#include <java/util/stream/LongPipeline$StatelessOp.h>

#include <java/lang/AssertionError.h>
#include <java/util/Iterator.h>
#include <java/util/PrimitiveIterator$OfLong.h>
#include <java/util/Spliterator$OfLong.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/AbstractPipeline.h>
#include <java/util/stream/BaseStream.h>
#include <java/util/stream/LongPipeline.h>
#include <java/util/stream/LongStream.h>
#include <java/util/stream/StreamShape.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Spliterator = ::java::util::Spliterator;
using $Supplier = ::java::util::function::Supplier;
using $AbstractPipeline = ::java::util::stream::AbstractPipeline;
using $BaseStream = ::java::util::stream::BaseStream;
using $LongPipeline = ::java::util::stream::LongPipeline;
using $LongStream = ::java::util::stream::LongStream;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _LongPipeline$StatelessOp_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LongPipeline$StatelessOp, $assertionsDisabled)},
	{}
};

$MethodInfo _LongPipeline$StatelessOp_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/AbstractPipeline;Ljava/util/stream/StreamShape;I)V", "(Ljava/util/stream/AbstractPipeline<*TE_IN;*>;Ljava/util/stream/StreamShape;I)V", 0, $method(static_cast<void(LongPipeline$StatelessOp::*)($AbstractPipeline*,$StreamShape*,int32_t)>(&LongPipeline$StatelessOp::init$))},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"lazySpliterator", "(Ljava/util/function/Supplier;)Ljava/util/Spliterator;", nullptr, $VOLATILE | $SYNTHETIC},
	{"opIsStateful", "()Z", nullptr, $FINAL},
	{"parallel", "()Ljava/util/stream/LongStream;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"sequential", "()Ljava/util/stream/LongStream;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"unordered", "()Ljava/util/stream/BaseStream;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _LongPipeline$StatelessOp_InnerClassesInfo_[] = {
	{"java.util.stream.LongPipeline$StatelessOp", "java.util.stream.LongPipeline", "StatelessOp", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LongPipeline$StatelessOp_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.LongPipeline$StatelessOp",
	"java.util.stream.LongPipeline",
	nullptr,
	_LongPipeline$StatelessOp_FieldInfo_,
	_LongPipeline$StatelessOp_MethodInfo_,
	"<E_IN:Ljava/lang/Object;>Ljava/util/stream/LongPipeline<TE_IN;>;",
	nullptr,
	_LongPipeline$StatelessOp_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.LongPipeline"
};

$Object* allocate$LongPipeline$StatelessOp($Class* clazz) {
	return $of($alloc(LongPipeline$StatelessOp));
}

bool LongPipeline$StatelessOp::$assertionsDisabled = false;

void LongPipeline$StatelessOp::init$($AbstractPipeline* upstream, $StreamShape* inputShape, int32_t opFlags) {
	$LongPipeline::init$(upstream, opFlags);
	if (!LongPipeline$StatelessOp::$assertionsDisabled && !($nc(upstream)->getOutputShape() == inputShape)) {
		$throwNew($AssertionError);
	}
}

bool LongPipeline$StatelessOp::opIsStateful() {
	return false;
}

$BaseStream* LongPipeline$StatelessOp::parallel() {
	return $cast($LongStream, $LongPipeline::parallel());
}

$BaseStream* LongPipeline$StatelessOp::sequential() {
	return $cast($LongStream, $LongPipeline::sequential());
}

$BaseStream* LongPipeline$StatelessOp::unordered() {
	return $LongPipeline::unordered();
}

$Spliterator* LongPipeline$StatelessOp::spliterator() {
	return $LongPipeline::spliterator();
}

$Iterator* LongPipeline$StatelessOp::iterator() {
	return $LongPipeline::iterator();
}

$Spliterator* LongPipeline$StatelessOp::lazySpliterator($Supplier* supplier) {
	return $LongPipeline::lazySpliterator(supplier);
}

void clinit$LongPipeline$StatelessOp($Class* class$) {
	$load($LongPipeline);
	LongPipeline$StatelessOp::$assertionsDisabled = !$LongPipeline::class$->desiredAssertionStatus();
}

LongPipeline$StatelessOp::LongPipeline$StatelessOp() {
}

$Class* LongPipeline$StatelessOp::load$($String* name, bool initialize) {
	$loadClass(LongPipeline$StatelessOp, name, initialize, &_LongPipeline$StatelessOp_ClassInfo_, clinit$LongPipeline$StatelessOp, allocate$LongPipeline$StatelessOp);
	return class$;
}

$Class* LongPipeline$StatelessOp::class$ = nullptr;

		} // stream
	} // util
} // java