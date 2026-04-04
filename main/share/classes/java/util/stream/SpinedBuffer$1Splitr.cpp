#include <java/util/stream/SpinedBuffer$1Splitr.h>
#include <java/lang/AssertionError.h>
#include <java/util/Arrays.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/SpinedBuffer.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $SpinedBuffer = ::java::util::stream::SpinedBuffer;

namespace java {
	namespace util {
		namespace stream {

bool SpinedBuffer$1Splitr::$assertionsDisabled = false;

void SpinedBuffer$1Splitr::init$($SpinedBuffer* this$0, int32_t firstSpineIndex, int32_t lastSpineIndex, int32_t firstSpineElementIndex, int32_t lastSpineElementFence) {
	$set(this, this$0, this$0);
	this->splSpineIndex = firstSpineIndex;
	this->lastSpineIndex = lastSpineIndex;
	this->splElementIndex = firstSpineElementIndex;
	this->lastSpineElementFence = lastSpineElementFence;
	if (!SpinedBuffer$1Splitr::$assertionsDisabled && !(this$0->spine != nullptr || firstSpineIndex == 0 && lastSpineIndex == 0)) {
		$throwNew($AssertionError);
	}
	$set(this, splChunk, (this$0->spine == nullptr) ? this$0->curChunk : this$0->spine->get(firstSpineIndex));
}

int64_t SpinedBuffer$1Splitr::estimateSize() {
	return (this->splSpineIndex == this->lastSpineIndex) ? (int64_t)this->lastSpineElementFence - this->splElementIndex : $nc(this->this$0->priorElementCount)->get(this->lastSpineIndex) + this->lastSpineElementFence - $nc(this->this$0->priorElementCount)->get(this->splSpineIndex) - this->splElementIndex;
}

int32_t SpinedBuffer$1Splitr::characteristics() {
	return 16464;
}

bool SpinedBuffer$1Splitr::tryAdvance($Consumer* consumer) {
	$Objects::requireNonNull(consumer);
	if (this->splSpineIndex < this->lastSpineIndex || (this->splSpineIndex == this->lastSpineIndex && this->splElementIndex < this->lastSpineElementFence)) {
		consumer->accept($nc(this->splChunk)->get(this->splElementIndex++));
		if (this->splElementIndex == $nc(this->splChunk)->length) {
			this->splElementIndex = 0;
			++this->splSpineIndex;
			if (this->this$0->spine != nullptr && this->splSpineIndex <= this->lastSpineIndex) {
				$set(this, splChunk, this->this$0->spine->get(this->splSpineIndex));
			}
		}
		return true;
	}
	return false;
}

void SpinedBuffer$1Splitr::forEachRemaining($Consumer* consumer) {
	$useLocalObjectStack();
	$Objects::requireNonNull(consumer);
	if (this->splSpineIndex < this->lastSpineIndex || (this->splSpineIndex == this->lastSpineIndex && this->splElementIndex < this->lastSpineElementFence)) {
		int32_t i = this->splElementIndex;
		for (int32_t sp = this->splSpineIndex; sp < this->lastSpineIndex; ++sp) {
			$var($ObjectArray, chunk, $nc(this->this$0->spine)->get(sp));
			for (; i < $nc(chunk)->length; ++i) {
				consumer->accept(chunk->get(i));
			}
			i = 0;
		}
		$var($ObjectArray, chunk, (this->splSpineIndex == this->lastSpineIndex) ? this->splChunk : $nc(this->this$0->spine)->get(this->lastSpineIndex));
		int32_t hElementIndex = this->lastSpineElementFence;
		for (; i < hElementIndex; ++i) {
			consumer->accept($nc(chunk)->get(i));
		}
		this->splSpineIndex = this->lastSpineIndex;
		this->splElementIndex = this->lastSpineElementFence;
	}
}

$Spliterator* SpinedBuffer$1Splitr::trySplit() {
	$useLocalObjectStack();
	if (this->splSpineIndex < this->lastSpineIndex) {
		$var($Spliterator, ret, $new(SpinedBuffer$1Splitr, this->this$0, this->splSpineIndex, this->lastSpineIndex - 1, this->splElementIndex, $nc($nc(this->this$0->spine)->get(this->lastSpineIndex - 1))->length));
		this->splSpineIndex = this->lastSpineIndex;
		this->splElementIndex = 0;
		$set(this, splChunk, this->this$0->spine->get(this->splSpineIndex));
		return ret;
	} else if (this->splSpineIndex == this->lastSpineIndex) {
		int32_t t = (this->lastSpineElementFence - this->splElementIndex) / 2;
		if (t == 0) {
			return nullptr;
		} else {
			$var($Spliterator, ret, $Arrays::spliterator(this->splChunk, this->splElementIndex, this->splElementIndex + t));
			this->splElementIndex += t;
			return ret;
		}
	} else {
		return nullptr;
	}
}

void SpinedBuffer$1Splitr::clinit$($Class* clazz) {
	$load($SpinedBuffer);
	SpinedBuffer$1Splitr::$assertionsDisabled = !$SpinedBuffer::class$->desiredAssertionStatus();
}

SpinedBuffer$1Splitr::SpinedBuffer$1Splitr() {
}

$Class* SpinedBuffer$1Splitr::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/stream/SpinedBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(SpinedBuffer$1Splitr, this$0)},
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SpinedBuffer$1Splitr, $assertionsDisabled)},
		{"splSpineIndex", "I", nullptr, 0, $field(SpinedBuffer$1Splitr, splSpineIndex)},
		{"lastSpineIndex", "I", nullptr, $FINAL, $field(SpinedBuffer$1Splitr, lastSpineIndex)},
		{"splElementIndex", "I", nullptr, 0, $field(SpinedBuffer$1Splitr, splElementIndex)},
		{"lastSpineElementFence", "I", nullptr, $FINAL, $field(SpinedBuffer$1Splitr, lastSpineElementFence)},
		{"splChunk", "[Ljava/lang/Object;", "[TE;", 0, $field(SpinedBuffer$1Splitr, splChunk)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/SpinedBuffer;IIII)V", nullptr, 0, $method(SpinedBuffer$1Splitr, init$, void, $SpinedBuffer*, int32_t, int32_t, int32_t, int32_t)},
		{"characteristics", "()I", nullptr, $PUBLIC, $virtualMethod(SpinedBuffer$1Splitr, characteristics, int32_t)},
		{"estimateSize", "()J", nullptr, $PUBLIC, $virtualMethod(SpinedBuffer$1Splitr, estimateSize, int64_t)},
		{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC, $virtualMethod(SpinedBuffer$1Splitr, forEachRemaining, void, $Consumer*)},
		{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TE;>;)Z", $PUBLIC, $virtualMethod(SpinedBuffer$1Splitr, tryAdvance, bool, $Consumer*)},
		{"trySplit", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE;>;", $PUBLIC, $virtualMethod(SpinedBuffer$1Splitr, trySplit, $Spliterator*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.stream.SpinedBuffer",
		"spliterator",
		"()Ljava/util/Spliterator;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.SpinedBuffer$1Splitr", nullptr, "Splitr", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.stream.SpinedBuffer$1Splitr",
		"java.lang.Object",
		"java.util.Spliterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Spliterator<TE;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.SpinedBuffer"
	};
	$loadClass(SpinedBuffer$1Splitr, name, initialize, &classInfo$$, SpinedBuffer$1Splitr::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SpinedBuffer$1Splitr);
	});
	return class$;
}

$Class* SpinedBuffer$1Splitr::class$ = nullptr;

		} // stream
	} // util
} // java