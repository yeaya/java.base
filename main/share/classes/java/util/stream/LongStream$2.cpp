#include <java/util/stream/LongStream$2.h>

#include <java/util/Objects.h>
#include <java/util/Spliterators$AbstractLongSpliterator.h>
#include <java/util/function/LongConsumer.h>
#include <java/util/function/LongPredicate.h>
#include <java/util/function/LongUnaryOperator.h>
#include <java/util/stream/LongStream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $Spliterators$AbstractLongSpliterator = ::java::util::Spliterators$AbstractLongSpliterator;
using $LongConsumer = ::java::util::function::LongConsumer;
using $LongPredicate = ::java::util::function::LongPredicate;
using $LongUnaryOperator = ::java::util::function::LongUnaryOperator;
using $LongStream = ::java::util::stream::LongStream;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _LongStream$2_FieldInfo_[] = {
	{"val$hasNext", "Ljava/util/function/LongPredicate;", nullptr, $FINAL | $SYNTHETIC, $field(LongStream$2, val$hasNext)},
	{"val$seed", "J", nullptr, $FINAL | $SYNTHETIC, $field(LongStream$2, val$seed)},
	{"val$next", "Ljava/util/function/LongUnaryOperator;", nullptr, $FINAL | $SYNTHETIC, $field(LongStream$2, val$next)},
	{"prev", "J", nullptr, 0, $field(LongStream$2, prev)},
	{"started", "Z", nullptr, 0, $field(LongStream$2, started)},
	{"finished", "Z", nullptr, 0, $field(LongStream$2, finished)},
	{}
};

$MethodInfo _LongStream$2_MethodInfo_[] = {
	{"<init>", "(JILjava/util/function/LongUnaryOperator;JLjava/util/function/LongPredicate;)V", nullptr, 0, $method(static_cast<void(LongStream$2::*)(int64_t,int32_t,$LongUnaryOperator*,int64_t,$LongPredicate*)>(&LongStream$2::init$))},
	{"forEachRemaining", "(Ljava/util/function/LongConsumer;)V", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"tryAdvance", "(Ljava/util/function/LongConsumer;)Z", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _LongStream$2_EnclosingMethodInfo_ = {
	"java.util.stream.LongStream",
	"iterate",
	"(JLjava/util/function/LongPredicate;Ljava/util/function/LongUnaryOperator;)Ljava/util/stream/LongStream;"
};

$InnerClassInfo _LongStream$2_InnerClassesInfo_[] = {
	{"java.util.stream.LongStream$2", nullptr, nullptr, 0},
	{"java.util.Spliterators$AbstractLongSpliterator", "java.util.Spliterators", "AbstractLongSpliterator", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LongStream$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.LongStream$2",
	"java.util.Spliterators$AbstractLongSpliterator",
	nullptr,
	_LongStream$2_FieldInfo_,
	_LongStream$2_MethodInfo_,
	nullptr,
	&_LongStream$2_EnclosingMethodInfo_,
	_LongStream$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.LongStream"
};

$Object* allocate$LongStream$2($Class* clazz) {
	return $of($alloc(LongStream$2));
}

void LongStream$2::init$(int64_t est, int32_t additionalCharacteristics, $LongUnaryOperator* val$next, int64_t val$seed, $LongPredicate* val$hasNext) {
	$set(this, val$next, val$next);
	this->val$seed = val$seed;
	$set(this, val$hasNext, val$hasNext);
	$Spliterators$AbstractLongSpliterator::init$(est, additionalCharacteristics);
}

bool LongStream$2::tryAdvance($LongConsumer* action) {
	$Objects::requireNonNull(action);
	if (this->finished) {
		return false;
	}
	int64_t t = 0;
	if (this->started) {
		t = $nc(this->val$next)->applyAsLong(this->prev);
	} else {
		t = this->val$seed;
		this->started = true;
	}
	if (!$nc(this->val$hasNext)->test(t)) {
		this->finished = true;
		return false;
	}
	action->accept(this->prev = t);
	return true;
}

void LongStream$2::forEachRemaining($LongConsumer* action) {
	$Objects::requireNonNull(action);
	if (this->finished) {
		return;
	}
	this->finished = true;
	int64_t t = this->started ? $nc(this->val$next)->applyAsLong(this->prev) : this->val$seed;
	while ($nc(this->val$hasNext)->test(t)) {
		action->accept(t);
		t = $nc(this->val$next)->applyAsLong(t);
	}
}

void LongStream$2::forEachRemaining(Object$* action) {
	this->forEachRemaining($cast($LongConsumer, action));
}

bool LongStream$2::tryAdvance(Object$* action) {
	return this->tryAdvance($cast($LongConsumer, action));
}

LongStream$2::LongStream$2() {
}

$Class* LongStream$2::load$($String* name, bool initialize) {
	$loadClass(LongStream$2, name, initialize, &_LongStream$2_ClassInfo_, allocate$LongStream$2);
	return class$;
}

$Class* LongStream$2::class$ = nullptr;

		} // stream
	} // util
} // java