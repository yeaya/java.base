#include <java/util/stream/StreamSpliterators$SliceSpliterator.h>

#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Spliterator.h>
#include <java/util/stream/StreamSpliterators.h>
#include <jcpp.h>

#undef SUBSIZED

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $StreamSpliterators = ::java::util::stream::StreamSpliterators;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _StreamSpliterators$SliceSpliterator_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(StreamSpliterators$SliceSpliterator, $assertionsDisabled)},
	{"sliceOrigin", "J", nullptr, $FINAL, $field(StreamSpliterators$SliceSpliterator, sliceOrigin)},
	{"sliceFence", "J", nullptr, $FINAL, $field(StreamSpliterators$SliceSpliterator, sliceFence)},
	{"s", "Ljava/util/Spliterator;", "TT_SPLITR;", 0, $field(StreamSpliterators$SliceSpliterator, s)},
	{"index", "J", nullptr, 0, $field(StreamSpliterators$SliceSpliterator, index)},
	{"fence", "J", nullptr, 0, $field(StreamSpliterators$SliceSpliterator, fence)},
	{}
};

$MethodInfo _StreamSpliterators$SliceSpliterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Spliterator;JJJJ)V", "(TT_SPLITR;JJJJ)V", 0, $method(static_cast<void(StreamSpliterators$SliceSpliterator::*)($Spliterator*,int64_t,int64_t,int64_t,int64_t)>(&StreamSpliterators$SliceSpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"makeSpliterator", "(Ljava/util/Spliterator;JJJJ)Ljava/util/Spliterator;", "(TT_SPLITR;JJJJ)TT_SPLITR;", $PROTECTED | $ABSTRACT},
	{"trySplit", "()Ljava/util/Spliterator;", "()TT_SPLITR;", $PUBLIC},
	{}
};

$InnerClassInfo _StreamSpliterators$SliceSpliterator_InnerClassesInfo_[] = {
	{"java.util.stream.StreamSpliterators$SliceSpliterator", "java.util.stream.StreamSpliterators", "SliceSpliterator", $STATIC | $ABSTRACT},
	{"java.util.stream.StreamSpliterators$SliceSpliterator$OfDouble", "java.util.stream.StreamSpliterators$SliceSpliterator", "OfDouble", $STATIC | $FINAL},
	{"java.util.stream.StreamSpliterators$SliceSpliterator$OfLong", "java.util.stream.StreamSpliterators$SliceSpliterator", "OfLong", $STATIC | $FINAL},
	{"java.util.stream.StreamSpliterators$SliceSpliterator$OfInt", "java.util.stream.StreamSpliterators$SliceSpliterator", "OfInt", $STATIC | $FINAL},
	{"java.util.stream.StreamSpliterators$SliceSpliterator$OfPrimitive", "java.util.stream.StreamSpliterators$SliceSpliterator", "OfPrimitive", $STATIC | $ABSTRACT},
	{"java.util.stream.StreamSpliterators$SliceSpliterator$OfRef", "java.util.stream.StreamSpliterators$SliceSpliterator", "OfRef", $STATIC | $FINAL},
	{}
};

$ClassInfo _StreamSpliterators$SliceSpliterator_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.StreamSpliterators$SliceSpliterator",
	"java.lang.Object",
	nullptr,
	_StreamSpliterators$SliceSpliterator_FieldInfo_,
	_StreamSpliterators$SliceSpliterator_MethodInfo_,
	"<T:Ljava/lang/Object;T_SPLITR::Ljava/util/Spliterator<TT;>;>Ljava/lang/Object;",
	nullptr,
	_StreamSpliterators$SliceSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.StreamSpliterators"
};

$Object* allocate$StreamSpliterators$SliceSpliterator($Class* clazz) {
	return $of($alloc(StreamSpliterators$SliceSpliterator));
}

bool StreamSpliterators$SliceSpliterator::$assertionsDisabled = false;

void StreamSpliterators$SliceSpliterator::init$($Spliterator* s, int64_t sliceOrigin, int64_t sliceFence, int64_t origin, int64_t fence) {
	if (!StreamSpliterators$SliceSpliterator::$assertionsDisabled && !$nc(s)->hasCharacteristics($Spliterator::SUBSIZED)) {
		$throwNew($AssertionError);
	}
	$set(this, s, s);
	this->sliceOrigin = sliceOrigin;
	this->sliceFence = sliceFence;
	this->index = origin;
	this->fence = fence;
}

$Spliterator* StreamSpliterators$SliceSpliterator::trySplit() {
	if (this->sliceOrigin >= this->fence) {
		return nullptr;
	}
	if (this->index >= this->fence) {
		return nullptr;
	}
	while (true) {
		$var($Spliterator, leftSplit, $nc(this->s)->trySplit());
		if (leftSplit == nullptr) {
			return nullptr;
		}
		int64_t leftSplitFenceUnbounded = this->index + $nc(leftSplit)->estimateSize();
		int64_t leftSplitFence = $Math::min(leftSplitFenceUnbounded, this->sliceFence);
		if (this->sliceOrigin >= leftSplitFence) {
			this->index = leftSplitFence;
		} else if (leftSplitFence >= this->sliceFence) {
			$set(this, s, leftSplit);
			this->fence = leftSplitFence;
		} else if (this->index >= this->sliceOrigin && leftSplitFenceUnbounded <= this->sliceFence) {
			this->index = leftSplitFence;
			return leftSplit;
		} else {
			$var($Spliterator, var$0, leftSplit);
			int64_t var$1 = this->sliceOrigin;
			int64_t var$2 = this->sliceFence;
			int64_t var$3 = this->index;
			return makeSpliterator(var$0, var$1, var$2, var$3, this->index = leftSplitFence);
		}
	}
}

int64_t StreamSpliterators$SliceSpliterator::estimateSize() {
	return (this->sliceOrigin < this->fence) ? this->fence - $Math::max(this->sliceOrigin, this->index) : (int64_t)0;
}

int32_t StreamSpliterators$SliceSpliterator::characteristics() {
	return $nc(this->s)->characteristics();
}

void clinit$StreamSpliterators$SliceSpliterator($Class* class$) {
	$load($StreamSpliterators);
	StreamSpliterators$SliceSpliterator::$assertionsDisabled = !$StreamSpliterators::class$->desiredAssertionStatus();
}

StreamSpliterators$SliceSpliterator::StreamSpliterators$SliceSpliterator() {
}

$Class* StreamSpliterators$SliceSpliterator::load$($String* name, bool initialize) {
	$loadClass(StreamSpliterators$SliceSpliterator, name, initialize, &_StreamSpliterators$SliceSpliterator_ClassInfo_, clinit$StreamSpliterators$SliceSpliterator, allocate$StreamSpliterators$SliceSpliterator);
	return class$;
}

$Class* StreamSpliterators$SliceSpliterator::class$ = nullptr;

		} // stream
	} // util
} // java