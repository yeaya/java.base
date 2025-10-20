#include <java/util/stream/SpinedBuffer$1Splitr.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/SpinedBuffer.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
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
using $AbstractSpinedBuffer = ::java::util::stream::AbstractSpinedBuffer;
using $SpinedBuffer = ::java::util::stream::SpinedBuffer;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _SpinedBuffer$1Splitr_FieldInfo_[] = {
	{"this$0", "Ljava/util/stream/SpinedBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(SpinedBuffer$1Splitr, this$0)},
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SpinedBuffer$1Splitr, $assertionsDisabled)},
	{"splSpineIndex", "I", nullptr, 0, $field(SpinedBuffer$1Splitr, splSpineIndex)},
	{"lastSpineIndex", "I", nullptr, $FINAL, $field(SpinedBuffer$1Splitr, lastSpineIndex)},
	{"splElementIndex", "I", nullptr, 0, $field(SpinedBuffer$1Splitr, splElementIndex)},
	{"lastSpineElementFence", "I", nullptr, $FINAL, $field(SpinedBuffer$1Splitr, lastSpineElementFence)},
	{"splChunk", "[Ljava/lang/Object;", "[TE;", 0, $field(SpinedBuffer$1Splitr, splChunk)},
	{}
};

$MethodInfo _SpinedBuffer$1Splitr_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/SpinedBuffer;IIII)V", nullptr, 0, $method(static_cast<void(SpinedBuffer$1Splitr::*)($SpinedBuffer*,int32_t,int32_t,int32_t,int32_t)>(&SpinedBuffer$1Splitr::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TE;>;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _SpinedBuffer$1Splitr_EnclosingMethodInfo_ = {
	"java.util.stream.SpinedBuffer",
	"spliterator",
	"()Ljava/util/Spliterator;"
};

$InnerClassInfo _SpinedBuffer$1Splitr_InnerClassesInfo_[] = {
	{"java.util.stream.SpinedBuffer$1Splitr", nullptr, "Splitr", 0},
	{}
};

$ClassInfo _SpinedBuffer$1Splitr_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.SpinedBuffer$1Splitr",
	"java.lang.Object",
	"java.util.Spliterator",
	_SpinedBuffer$1Splitr_FieldInfo_,
	_SpinedBuffer$1Splitr_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Spliterator<TE;>;",
	&_SpinedBuffer$1Splitr_EnclosingMethodInfo_,
	_SpinedBuffer$1Splitr_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.SpinedBuffer"
};

$Object* allocate$SpinedBuffer$1Splitr($Class* clazz) {
	return $of($alloc(SpinedBuffer$1Splitr));
}

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
	$set(this, splChunk, (this$0->spine == nullptr) ? this$0->curChunk : $nc(this$0->spine)->get(firstSpineIndex));
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
				$set(this, splChunk, $nc(this->this$0->spine)->get(this->splSpineIndex));
			}
		}
		return true;
	}
	return false;
}

void SpinedBuffer$1Splitr::forEachRemaining($Consumer* consumer) {
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
	if (this->splSpineIndex < this->lastSpineIndex) {
		$var($Spliterator, ret, $new(SpinedBuffer$1Splitr, this->this$0, this->splSpineIndex, this->lastSpineIndex - 1, this->splElementIndex, $nc($nc(this->this$0->spine)->get(this->lastSpineIndex - 1))->length));
		this->splSpineIndex = this->lastSpineIndex;
		this->splElementIndex = 0;
		$set(this, splChunk, $nc(this->this$0->spine)->get(this->splSpineIndex));
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

void clinit$SpinedBuffer$1Splitr($Class* class$) {
	$load($SpinedBuffer);
	SpinedBuffer$1Splitr::$assertionsDisabled = !$SpinedBuffer::class$->desiredAssertionStatus();
}

SpinedBuffer$1Splitr::SpinedBuffer$1Splitr() {
}

$Class* SpinedBuffer$1Splitr::load$($String* name, bool initialize) {
	$loadClass(SpinedBuffer$1Splitr, name, initialize, &_SpinedBuffer$1Splitr_ClassInfo_, clinit$SpinedBuffer$1Splitr, allocate$SpinedBuffer$1Splitr);
	return class$;
}

$Class* SpinedBuffer$1Splitr::class$ = nullptr;

		} // stream
	} // util
} // java