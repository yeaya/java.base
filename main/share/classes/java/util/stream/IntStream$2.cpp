#include <java/util/stream/IntStream$2.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <java/util/Spliterators$AbstractIntSpliterator.h>
#include <java/util/function/IntConsumer.h>
#include <java/util/function/IntPredicate.h>
#include <java/util/function/IntUnaryOperator.h>
#include <java/util/stream/IntStream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $Spliterators$AbstractIntSpliterator = ::java::util::Spliterators$AbstractIntSpliterator;
using $IntConsumer = ::java::util::function::IntConsumer;
using $IntPredicate = ::java::util::function::IntPredicate;
using $IntUnaryOperator = ::java::util::function::IntUnaryOperator;
using $IntStream = ::java::util::stream::IntStream;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _IntStream$2_FieldInfo_[] = {
	{"val$hasNext", "Ljava/util/function/IntPredicate;", nullptr, $FINAL | $SYNTHETIC, $field(IntStream$2, val$hasNext)},
	{"val$seed", "I", nullptr, $FINAL | $SYNTHETIC, $field(IntStream$2, val$seed)},
	{"val$next", "Ljava/util/function/IntUnaryOperator;", nullptr, $FINAL | $SYNTHETIC, $field(IntStream$2, val$next)},
	{"prev", "I", nullptr, 0, $field(IntStream$2, prev)},
	{"started", "Z", nullptr, 0, $field(IntStream$2, started)},
	{"finished", "Z", nullptr, 0, $field(IntStream$2, finished)},
	{}
};

$MethodInfo _IntStream$2_MethodInfo_[] = {
	{"<init>", "(JILjava/util/function/IntUnaryOperator;ILjava/util/function/IntPredicate;)V", nullptr, 0, $method(static_cast<void(IntStream$2::*)(int64_t,int32_t,$IntUnaryOperator*,int32_t,$IntPredicate*)>(&IntStream$2::init$))},
	{"forEachRemaining", "(Ljava/util/function/IntConsumer;)V", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"tryAdvance", "(Ljava/util/function/IntConsumer;)Z", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _IntStream$2_EnclosingMethodInfo_ = {
	"java.util.stream.IntStream",
	"iterate",
	"(ILjava/util/function/IntPredicate;Ljava/util/function/IntUnaryOperator;)Ljava/util/stream/IntStream;"
};

$InnerClassInfo _IntStream$2_InnerClassesInfo_[] = {
	{"java.util.stream.IntStream$2", nullptr, nullptr, 0},
	{"java.util.Spliterators$AbstractIntSpliterator", "java.util.Spliterators", "AbstractIntSpliterator", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _IntStream$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.IntStream$2",
	"java.util.Spliterators$AbstractIntSpliterator",
	nullptr,
	_IntStream$2_FieldInfo_,
	_IntStream$2_MethodInfo_,
	nullptr,
	&_IntStream$2_EnclosingMethodInfo_,
	_IntStream$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.IntStream"
};

$Object* allocate$IntStream$2($Class* clazz) {
	return $of($alloc(IntStream$2));
}

void IntStream$2::init$(int64_t est, int32_t additionalCharacteristics, $IntUnaryOperator* val$next, int32_t val$seed, $IntPredicate* val$hasNext) {
	$set(this, val$next, val$next);
	this->val$seed = val$seed;
	$set(this, val$hasNext, val$hasNext);
	$Spliterators$AbstractIntSpliterator::init$(est, additionalCharacteristics);
}

bool IntStream$2::tryAdvance($IntConsumer* action) {
	$Objects::requireNonNull(action);
	if (this->finished) {
		return false;
	}
	int32_t t = 0;
	if (this->started) {
		t = $nc(this->val$next)->applyAsInt(this->prev);
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

void IntStream$2::forEachRemaining($IntConsumer* action) {
	$Objects::requireNonNull(action);
	if (this->finished) {
		return;
	}
	this->finished = true;
	int32_t t = this->started ? $nc(this->val$next)->applyAsInt(this->prev) : this->val$seed;
	while ($nc(this->val$hasNext)->test(t)) {
		action->accept(t);
		t = $nc(this->val$next)->applyAsInt(t);
	}
}

void IntStream$2::forEachRemaining(Object$* action) {
	this->forEachRemaining($cast($IntConsumer, action));
}

bool IntStream$2::tryAdvance(Object$* action) {
	return this->tryAdvance($cast($IntConsumer, action));
}

IntStream$2::IntStream$2() {
}

$Class* IntStream$2::load$($String* name, bool initialize) {
	$loadClass(IntStream$2, name, initialize, &_IntStream$2_ClassInfo_, allocate$IntStream$2);
	return class$;
}

$Class* IntStream$2::class$ = nullptr;

		} // stream
	} // util
} // java