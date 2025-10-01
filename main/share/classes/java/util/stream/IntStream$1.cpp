#include <java/util/stream/IntStream$1.h>

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
using $IntUnaryOperator = ::java::util::function::IntUnaryOperator;
using $IntStream = ::java::util::stream::IntStream;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _IntStream$1_FieldInfo_[] = {
	{"val$seed", "I", nullptr, $FINAL | $SYNTHETIC, $field(IntStream$1, val$seed)},
	{"val$f", "Ljava/util/function/IntUnaryOperator;", nullptr, $FINAL | $SYNTHETIC, $field(IntStream$1, val$f)},
	{"prev", "I", nullptr, 0, $field(IntStream$1, prev)},
	{"started", "Z", nullptr, 0, $field(IntStream$1, started)},
	{}
};

$MethodInfo _IntStream$1_MethodInfo_[] = {
	{"<init>", "(JILjava/util/function/IntUnaryOperator;I)V", nullptr, 0, $method(static_cast<void(IntStream$1::*)(int64_t,int32_t,$IntUnaryOperator*,int32_t)>(&IntStream$1::init$))},
	{"tryAdvance", "(Ljava/util/function/IntConsumer;)Z", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _IntStream$1_EnclosingMethodInfo_ = {
	"java.util.stream.IntStream",
	"iterate",
	"(ILjava/util/function/IntUnaryOperator;)Ljava/util/stream/IntStream;"
};

$InnerClassInfo _IntStream$1_InnerClassesInfo_[] = {
	{"java.util.stream.IntStream$1", nullptr, nullptr, 0},
	{"java.util.Spliterators$AbstractIntSpliterator", "java.util.Spliterators", "AbstractIntSpliterator", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _IntStream$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.IntStream$1",
	"java.util.Spliterators$AbstractIntSpliterator",
	nullptr,
	_IntStream$1_FieldInfo_,
	_IntStream$1_MethodInfo_,
	nullptr,
	&_IntStream$1_EnclosingMethodInfo_,
	_IntStream$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.IntStream"
};

$Object* allocate$IntStream$1($Class* clazz) {
	return $of($alloc(IntStream$1));
}

void IntStream$1::init$(int64_t est, int32_t additionalCharacteristics, $IntUnaryOperator* val$f, int32_t val$seed) {
	$set(this, val$f, val$f);
	this->val$seed = val$seed;
	$Spliterators$AbstractIntSpliterator::init$(est, additionalCharacteristics);
}

bool IntStream$1::tryAdvance($IntConsumer* action) {
	$Objects::requireNonNull(action);
	int32_t t = 0;
	if (this->started) {
		t = $nc(this->val$f)->applyAsInt(this->prev);
	} else {
		t = this->val$seed;
		this->started = true;
	}
	action->accept(this->prev = t);
	return true;
}

bool IntStream$1::tryAdvance(Object$* action) {
	return this->tryAdvance($cast($IntConsumer, action));
}

IntStream$1::IntStream$1() {
}

$Class* IntStream$1::load$($String* name, bool initialize) {
	$loadClass(IntStream$1, name, initialize, &_IntStream$1_ClassInfo_, allocate$IntStream$1);
	return class$;
}

$Class* IntStream$1::class$ = nullptr;

		} // stream
	} // util
} // java