#include <java/util/stream/SpinedBuffer$OfPrimitive$BaseSpliterator.h>

#include <java/lang/AssertionError.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator$OfPrimitive.h>
#include <java/util/Spliterator.h>
#include <java/util/stream/SpinedBuffer$OfPrimitive.h>
#include <java/util/stream/SpinedBuffer.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfPrimitive = ::java::util::Spliterator$OfPrimitive;
using $AbstractSpinedBuffer = ::java::util::stream::AbstractSpinedBuffer;
using $SpinedBuffer = ::java::util::stream::SpinedBuffer;
using $SpinedBuffer$OfPrimitive = ::java::util::stream::SpinedBuffer$OfPrimitive;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _SpinedBuffer$OfPrimitive$BaseSpliterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/stream/SpinedBuffer$OfPrimitive;", nullptr, $FINAL | $SYNTHETIC, $field(SpinedBuffer$OfPrimitive$BaseSpliterator, this$0)},
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SpinedBuffer$OfPrimitive$BaseSpliterator, $assertionsDisabled)},
	{"splSpineIndex", "I", nullptr, 0, $field(SpinedBuffer$OfPrimitive$BaseSpliterator, splSpineIndex)},
	{"lastSpineIndex", "I", nullptr, $FINAL, $field(SpinedBuffer$OfPrimitive$BaseSpliterator, lastSpineIndex)},
	{"splElementIndex", "I", nullptr, 0, $field(SpinedBuffer$OfPrimitive$BaseSpliterator, splElementIndex)},
	{"lastSpineElementFence", "I", nullptr, $FINAL, $field(SpinedBuffer$OfPrimitive$BaseSpliterator, lastSpineElementFence)},
	{"splChunk", "Ljava/lang/Object;", "TT_ARR;", 0, $field(SpinedBuffer$OfPrimitive$BaseSpliterator, splChunk)},
	{}
};

$MethodInfo _SpinedBuffer$OfPrimitive$BaseSpliterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/SpinedBuffer$OfPrimitive;IIII)V", nullptr, 0, $method(static_cast<void(SpinedBuffer$OfPrimitive$BaseSpliterator::*)($SpinedBuffer$OfPrimitive*,int32_t,int32_t,int32_t,int32_t)>(&SpinedBuffer$OfPrimitive$BaseSpliterator::init$))},
	{"arrayForOne", "(Ljava/lang/Object;ILjava/lang/Object;)V", "(TT_ARR;ITT_CONS;)V", $ABSTRACT},
	{"arraySpliterator", "(Ljava/lang/Object;II)Ljava/util/Spliterator$OfPrimitive;", "(TT_ARR;II)TT_SPLITR;", $ABSTRACT},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/lang/Object;)V", "(TT_CONS;)V", $PUBLIC},
	{"newSpliterator", "(IIII)Ljava/util/Spliterator$OfPrimitive;", "(IIII)TT_SPLITR;", $ABSTRACT},
	{"tryAdvance", "(Ljava/lang/Object;)Z", "(TT_CONS;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/Spliterator$OfPrimitive;", "()TT_SPLITR;", $PUBLIC},
	{}
};

$InnerClassInfo _SpinedBuffer$OfPrimitive$BaseSpliterator_InnerClassesInfo_[] = {
	{"java.util.stream.SpinedBuffer$OfPrimitive", "java.util.stream.SpinedBuffer", "OfPrimitive", $STATIC | $ABSTRACT},
	{"java.util.stream.SpinedBuffer$OfPrimitive$BaseSpliterator", "java.util.stream.SpinedBuffer$OfPrimitive", "BaseSpliterator", $ABSTRACT},
	{"java.util.Spliterator$OfPrimitive", "java.util.Spliterator", "OfPrimitive", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SpinedBuffer$OfPrimitive$BaseSpliterator_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.SpinedBuffer$OfPrimitive$BaseSpliterator",
	"java.lang.Object",
	"java.util.Spliterator$OfPrimitive",
	_SpinedBuffer$OfPrimitive$BaseSpliterator_FieldInfo_,
	_SpinedBuffer$OfPrimitive$BaseSpliterator_MethodInfo_,
	"<T_SPLITR::Ljava/util/Spliterator$OfPrimitive<TE;TT_CONS;TT_SPLITR;>;>Ljava/lang/Object;Ljava/util/Spliterator$OfPrimitive<TE;TT_CONS;TT_SPLITR;>;",
	nullptr,
	_SpinedBuffer$OfPrimitive$BaseSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.SpinedBuffer"
};

$Object* allocate$SpinedBuffer$OfPrimitive$BaseSpliterator($Class* clazz) {
	return $of($alloc(SpinedBuffer$OfPrimitive$BaseSpliterator));
}

bool SpinedBuffer$OfPrimitive$BaseSpliterator::$assertionsDisabled = false;

void SpinedBuffer$OfPrimitive$BaseSpliterator::init$($SpinedBuffer$OfPrimitive* this$0, int32_t firstSpineIndex, int32_t lastSpineIndex, int32_t firstSpineElementIndex, int32_t lastSpineElementFence) {
	$set(this, this$0, this$0);
	this->splSpineIndex = firstSpineIndex;
	this->lastSpineIndex = lastSpineIndex;
	this->splElementIndex = firstSpineElementIndex;
	this->lastSpineElementFence = lastSpineElementFence;
	if (!SpinedBuffer$OfPrimitive$BaseSpliterator::$assertionsDisabled && !(this$0->spine != nullptr || firstSpineIndex == 0 && lastSpineIndex == 0)) {
		$throwNew($AssertionError);
	}
	$set(this, splChunk, (this$0->spine == nullptr) ? this$0->curChunk : $nc(this$0->spine)->get(firstSpineIndex));
}

int64_t SpinedBuffer$OfPrimitive$BaseSpliterator::estimateSize() {
	return (this->splSpineIndex == this->lastSpineIndex) ? (int64_t)this->lastSpineElementFence - this->splElementIndex : $nc(this->this$0->priorElementCount)->get(this->lastSpineIndex) + this->lastSpineElementFence - $nc(this->this$0->priorElementCount)->get(this->splSpineIndex) - this->splElementIndex;
}

int32_t SpinedBuffer$OfPrimitive$BaseSpliterator::characteristics() {
	return 16464;
}

bool SpinedBuffer$OfPrimitive$BaseSpliterator::tryAdvance(Object$* consumer) {
	$Objects::requireNonNull(consumer);
	if (this->splSpineIndex < this->lastSpineIndex || (this->splSpineIndex == this->lastSpineIndex && this->splElementIndex < this->lastSpineElementFence)) {
		arrayForOne(this->splChunk, this->splElementIndex++, consumer);
		if (this->splElementIndex == this->this$0->arrayLength(this->splChunk)) {
			this->splElementIndex = 0;
			++this->splSpineIndex;
			if (this->this$0->spine != nullptr && this->splSpineIndex <= this->lastSpineIndex) {
				$set(this, splChunk, $nc(this->this$0->spine)->get(this->splSpineIndex));
			}
		}
		return true;
	}
	return false;
}

void SpinedBuffer$OfPrimitive$BaseSpliterator::forEachRemaining(Object$* consumer) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(consumer);
	if (this->splSpineIndex < this->lastSpineIndex || (this->splSpineIndex == this->lastSpineIndex && this->splElementIndex < this->lastSpineElementFence)) {
		int32_t i = this->splElementIndex;
		for (int32_t sp = this->splSpineIndex; sp < this->lastSpineIndex; ++sp) {
			$var($Object0, chunk, $nc(this->this$0->spine)->get(sp));
			this->this$0->arrayForEach(chunk, i, this->this$0->arrayLength(chunk), consumer);
			i = 0;
		}
		$var($Object, chunk, (this->splSpineIndex == this->lastSpineIndex) ? this->splChunk : $nc(this->this$0->spine)->get(this->lastSpineIndex));
		this->this$0->arrayForEach(chunk, i, this->lastSpineElementFence, consumer);
		this->splSpineIndex = this->lastSpineIndex;
		this->splElementIndex = this->lastSpineElementFence;
	}
}

$Spliterator* SpinedBuffer$OfPrimitive$BaseSpliterator::trySplit() {
	$useLocalCurrentObjectStackCache();
	if (this->splSpineIndex < this->lastSpineIndex) {
		$var($Spliterator$OfPrimitive, ret, newSpliterator(this->splSpineIndex, this->lastSpineIndex - 1, this->splElementIndex, this->this$0->arrayLength($nc(this->this$0->spine)->get(this->lastSpineIndex - 1))));
		this->splSpineIndex = this->lastSpineIndex;
		this->splElementIndex = 0;
		$set(this, splChunk, $nc(this->this$0->spine)->get(this->splSpineIndex));
		return ret;
	} else if (this->splSpineIndex == this->lastSpineIndex) {
		int32_t t = (this->lastSpineElementFence - this->splElementIndex) / 2;
		if (t == 0) {
			return nullptr;
		} else {
			$var($Spliterator$OfPrimitive, ret, arraySpliterator(this->splChunk, this->splElementIndex, t));
			this->splElementIndex += t;
			return ret;
		}
	} else {
		return nullptr;
	}
}

void clinit$SpinedBuffer$OfPrimitive$BaseSpliterator($Class* class$) {
	$load($SpinedBuffer);
	SpinedBuffer$OfPrimitive$BaseSpliterator::$assertionsDisabled = !$SpinedBuffer::class$->desiredAssertionStatus();
}

SpinedBuffer$OfPrimitive$BaseSpliterator::SpinedBuffer$OfPrimitive$BaseSpliterator() {
}

$Class* SpinedBuffer$OfPrimitive$BaseSpliterator::load$($String* name, bool initialize) {
	$loadClass(SpinedBuffer$OfPrimitive$BaseSpliterator, name, initialize, &_SpinedBuffer$OfPrimitive$BaseSpliterator_ClassInfo_, clinit$SpinedBuffer$OfPrimitive$BaseSpliterator, allocate$SpinedBuffer$OfPrimitive$BaseSpliterator);
	return class$;
}

$Class* SpinedBuffer$OfPrimitive$BaseSpliterator::class$ = nullptr;

		} // stream
	} // util
} // java