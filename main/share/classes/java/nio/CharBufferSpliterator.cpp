#include <java/nio/CharBufferSpliterator.h>

#include <java/lang/AssertionError.h>
#include <java/nio/Buffer.h>
#include <java/nio/CharBuffer.h>
#include <java/util/Spliterator$OfInt.h>
#include <java/util/function/IntConsumer.h>
#include <jcpp.h>

#undef SPLITERATOR_CHARACTERISTICS

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Buffer = ::java::nio::Buffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Spliterator$OfInt = ::java::util::Spliterator$OfInt;
using $IntConsumer = ::java::util::function::IntConsumer;

namespace java {
	namespace nio {

$FieldInfo _CharBufferSpliterator_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CharBufferSpliterator, $assertionsDisabled)},
	{"buffer", "Ljava/nio/CharBuffer;", nullptr, $PRIVATE | $FINAL, $field(CharBufferSpliterator, buffer)},
	{"index", "I", nullptr, $PRIVATE, $field(CharBufferSpliterator, index)},
	{"limit", "I", nullptr, $PRIVATE | $FINAL, $field(CharBufferSpliterator, limit)},
	{}
};

$MethodInfo _CharBufferSpliterator_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/CharBuffer;)V", nullptr, 0, $method(CharBufferSpliterator, init$, void, $CharBuffer*)},
	{"<init>", "(Ljava/nio/CharBuffer;II)V", nullptr, 0, $method(CharBufferSpliterator, init$, void, $CharBuffer*, int32_t, int32_t)},
	{"characteristics", "()I", nullptr, $PUBLIC, $virtualMethod(CharBufferSpliterator, characteristics, int32_t)},
	{"estimateSize", "()J", nullptr, $PUBLIC, $virtualMethod(CharBufferSpliterator, estimateSize, int64_t)},
	{"forEachRemaining", "(Ljava/util/function/IntConsumer;)V", nullptr, $PUBLIC, $virtualMethod(CharBufferSpliterator, forEachRemaining, void, $IntConsumer*)},
	{"forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(CharBufferSpliterator, forEachRemaining, void, Object$*)},
	{"tryAdvance", "(Ljava/util/function/IntConsumer;)Z", nullptr, $PUBLIC, $virtualMethod(CharBufferSpliterator, tryAdvance, bool, $IntConsumer*)},
	{"tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(CharBufferSpliterator, tryAdvance, bool, Object$*)},
	{"trySplit", "()Ljava/util/Spliterator$OfInt;", nullptr, $PUBLIC, $virtualMethod(CharBufferSpliterator, trySplit, $Spliterator$OfInt*)},
	{}
};

$InnerClassInfo _CharBufferSpliterator_InnerClassesInfo_[] = {
	{"java.util.Spliterator$OfInt", "java.util.Spliterator", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _CharBufferSpliterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.CharBufferSpliterator",
	"java.lang.Object",
	"java.util.Spliterator$OfInt",
	_CharBufferSpliterator_FieldInfo_,
	_CharBufferSpliterator_MethodInfo_,
	nullptr,
	nullptr,
	_CharBufferSpliterator_InnerClassesInfo_
};

$Object* allocate$CharBufferSpliterator($Class* clazz) {
	return $of($alloc(CharBufferSpliterator));
}

bool CharBufferSpliterator::$assertionsDisabled = false;

void CharBufferSpliterator::init$($CharBuffer* buffer) {
	$var($CharBuffer, var$0, buffer);
	int32_t var$1 = $nc(buffer)->position();
	CharBufferSpliterator::init$(var$0, var$1, buffer->limit());
}

void CharBufferSpliterator::init$($CharBuffer* buffer, int32_t origin, int32_t limit) {
	if (!CharBufferSpliterator::$assertionsDisabled && !(origin <= limit)) {
		$throwNew($AssertionError);
	}
	$set(this, buffer, buffer);
	this->index = (origin <= limit) ? origin : limit;
	this->limit = limit;
}

$Spliterator$OfInt* CharBufferSpliterator::trySplit() {
	int32_t lo = this->index;
	int32_t mid = (int32_t)((uint32_t)(lo + this->limit) >> 1);
	return (lo >= mid) ? ($Spliterator$OfInt*)nullptr : static_cast<$Spliterator$OfInt*>($new(CharBufferSpliterator, this->buffer, lo, this->index = mid));
}

void CharBufferSpliterator::forEachRemaining($IntConsumer* action) {
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($CharBuffer, cb, this->buffer);
	int32_t i = this->index;
	int32_t hi = this->limit;
	this->index = hi;
	while (i < hi) {
		$nc(action)->accept($nc(cb)->getUnchecked(i++));
	}
}

bool CharBufferSpliterator::tryAdvance($IntConsumer* action) {
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	if (this->index >= 0 && this->index < this->limit) {
		$nc(action)->accept($nc(this->buffer)->getUnchecked(this->index++));
		return true;
	}
	return false;
}

int64_t CharBufferSpliterator::estimateSize() {
	return (int64_t)(this->limit - this->index);
}

int32_t CharBufferSpliterator::characteristics() {
	return $Buffer::SPLITERATOR_CHARACTERISTICS;
}

void CharBufferSpliterator::forEachRemaining(Object$* action) {
	this->forEachRemaining($cast($IntConsumer, action));
}

bool CharBufferSpliterator::tryAdvance(Object$* action) {
	return this->tryAdvance($cast($IntConsumer, action));
}

void clinit$CharBufferSpliterator($Class* class$) {
	CharBufferSpliterator::$assertionsDisabled = !CharBufferSpliterator::class$->desiredAssertionStatus();
}

CharBufferSpliterator::CharBufferSpliterator() {
}

$Class* CharBufferSpliterator::load$($String* name, bool initialize) {
	$loadClass(CharBufferSpliterator, name, initialize, &_CharBufferSpliterator_ClassInfo_, clinit$CharBufferSpliterator, allocate$CharBufferSpliterator);
	return class$;
}

$Class* CharBufferSpliterator::class$ = nullptr;

	} // nio
} // java