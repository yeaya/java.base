#include <java/util/stream/LongStream$1.h>

#include <java/util/Objects.h>
#include <java/util/Spliterators$AbstractLongSpliterator.h>
#include <java/util/function/LongConsumer.h>
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
using $LongUnaryOperator = ::java::util::function::LongUnaryOperator;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _LongStream$1_FieldInfo_[] = {
	{"val$seed", "J", nullptr, $FINAL | $SYNTHETIC, $field(LongStream$1, val$seed)},
	{"val$f", "Ljava/util/function/LongUnaryOperator;", nullptr, $FINAL | $SYNTHETIC, $field(LongStream$1, val$f)},
	{"prev", "J", nullptr, 0, $field(LongStream$1, prev)},
	{"started", "Z", nullptr, 0, $field(LongStream$1, started)},
	{}
};

$MethodInfo _LongStream$1_MethodInfo_[] = {
	{"<init>", "(JILjava/util/function/LongUnaryOperator;J)V", nullptr, 0, $method(LongStream$1, init$, void, int64_t, int32_t, $LongUnaryOperator*, int64_t)},
	{"tryAdvance", "(Ljava/util/function/LongConsumer;)Z", nullptr, $PUBLIC, $virtualMethod(LongStream$1, tryAdvance, bool, $LongConsumer*)},
	{"tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(LongStream$1, tryAdvance, bool, Object$*)},
	{}
};

$EnclosingMethodInfo _LongStream$1_EnclosingMethodInfo_ = {
	"java.util.stream.LongStream",
	"iterate",
	"(JLjava/util/function/LongUnaryOperator;)Ljava/util/stream/LongStream;"
};

$InnerClassInfo _LongStream$1_InnerClassesInfo_[] = {
	{"java.util.stream.LongStream$1", nullptr, nullptr, 0},
	{"java.util.Spliterators$AbstractLongSpliterator", "java.util.Spliterators", "AbstractLongSpliterator", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LongStream$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.LongStream$1",
	"java.util.Spliterators$AbstractLongSpliterator",
	nullptr,
	_LongStream$1_FieldInfo_,
	_LongStream$1_MethodInfo_,
	nullptr,
	&_LongStream$1_EnclosingMethodInfo_,
	_LongStream$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.LongStream"
};

$Object* allocate$LongStream$1($Class* clazz) {
	return $of($alloc(LongStream$1));
}

void LongStream$1::init$(int64_t est, int32_t additionalCharacteristics, $LongUnaryOperator* val$f, int64_t val$seed) {
	$set(this, val$f, val$f);
	this->val$seed = val$seed;
	$Spliterators$AbstractLongSpliterator::init$(est, additionalCharacteristics);
}

bool LongStream$1::tryAdvance($LongConsumer* action) {
	$Objects::requireNonNull(action);
	int64_t t = 0;
	if (this->started) {
		t = $nc(this->val$f)->applyAsLong(this->prev);
	} else {
		t = this->val$seed;
		this->started = true;
	}
	action->accept(this->prev = t);
	return true;
}

bool LongStream$1::tryAdvance(Object$* action) {
	return this->tryAdvance($cast($LongConsumer, action));
}

LongStream$1::LongStream$1() {
}

$Class* LongStream$1::load$($String* name, bool initialize) {
	$loadClass(LongStream$1, name, initialize, &_LongStream$1_ClassInfo_, allocate$LongStream$1);
	return class$;
}

$Class* LongStream$1::class$ = nullptr;

		} // stream
	} // util
} // java