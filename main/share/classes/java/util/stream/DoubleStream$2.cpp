#include <java/util/stream/DoubleStream$2.h>

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
#include <java/util/Spliterators$AbstractDoubleSpliterator.h>
#include <java/util/function/DoubleConsumer.h>
#include <java/util/function/DoublePredicate.h>
#include <java/util/function/DoubleUnaryOperator.h>
#include <java/util/stream/DoubleStream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $Spliterators$AbstractDoubleSpliterator = ::java::util::Spliterators$AbstractDoubleSpliterator;
using $DoubleConsumer = ::java::util::function::DoubleConsumer;
using $DoublePredicate = ::java::util::function::DoublePredicate;
using $DoubleUnaryOperator = ::java::util::function::DoubleUnaryOperator;
using $DoubleStream = ::java::util::stream::DoubleStream;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _DoubleStream$2_FieldInfo_[] = {
	{"val$hasNext", "Ljava/util/function/DoublePredicate;", nullptr, $FINAL | $SYNTHETIC, $field(DoubleStream$2, val$hasNext)},
	{"val$seed", "D", nullptr, $FINAL | $SYNTHETIC, $field(DoubleStream$2, val$seed)},
	{"val$next", "Ljava/util/function/DoubleUnaryOperator;", nullptr, $FINAL | $SYNTHETIC, $field(DoubleStream$2, val$next)},
	{"prev", "D", nullptr, 0, $field(DoubleStream$2, prev)},
	{"started", "Z", nullptr, 0, $field(DoubleStream$2, started)},
	{"finished", "Z", nullptr, 0, $field(DoubleStream$2, finished)},
	{}
};

$MethodInfo _DoubleStream$2_MethodInfo_[] = {
	{"<init>", "(JILjava/util/function/DoubleUnaryOperator;DLjava/util/function/DoublePredicate;)V", nullptr, 0, $method(static_cast<void(DoubleStream$2::*)(int64_t,int32_t,$DoubleUnaryOperator*,double,$DoublePredicate*)>(&DoubleStream$2::init$))},
	{"forEachRemaining", "(Ljava/util/function/DoubleConsumer;)V", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"tryAdvance", "(Ljava/util/function/DoubleConsumer;)Z", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _DoubleStream$2_EnclosingMethodInfo_ = {
	"java.util.stream.DoubleStream",
	"iterate",
	"(DLjava/util/function/DoublePredicate;Ljava/util/function/DoubleUnaryOperator;)Ljava/util/stream/DoubleStream;"
};

$InnerClassInfo _DoubleStream$2_InnerClassesInfo_[] = {
	{"java.util.stream.DoubleStream$2", nullptr, nullptr, 0},
	{"java.util.Spliterators$AbstractDoubleSpliterator", "java.util.Spliterators", "AbstractDoubleSpliterator", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DoubleStream$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.DoubleStream$2",
	"java.util.Spliterators$AbstractDoubleSpliterator",
	nullptr,
	_DoubleStream$2_FieldInfo_,
	_DoubleStream$2_MethodInfo_,
	nullptr,
	&_DoubleStream$2_EnclosingMethodInfo_,
	_DoubleStream$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.DoubleStream"
};

$Object* allocate$DoubleStream$2($Class* clazz) {
	return $of($alloc(DoubleStream$2));
}

void DoubleStream$2::init$(int64_t est, int32_t additionalCharacteristics, $DoubleUnaryOperator* val$next, double val$seed, $DoublePredicate* val$hasNext) {
	$set(this, val$next, val$next);
	this->val$seed = val$seed;
	$set(this, val$hasNext, val$hasNext);
	$Spliterators$AbstractDoubleSpliterator::init$(est, additionalCharacteristics);
}

bool DoubleStream$2::tryAdvance($DoubleConsumer* action) {
	$Objects::requireNonNull(action);
	if (this->finished) {
		return false;
	}
	double t = 0.0;
	if (this->started) {
		t = $nc(this->val$next)->applyAsDouble(this->prev);
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

void DoubleStream$2::forEachRemaining($DoubleConsumer* action) {
	$Objects::requireNonNull(action);
	if (this->finished) {
		return;
	}
	this->finished = true;
	double t = this->started ? $nc(this->val$next)->applyAsDouble(this->prev) : this->val$seed;
	while ($nc(this->val$hasNext)->test(t)) {
		action->accept(t);
		t = $nc(this->val$next)->applyAsDouble(t);
	}
}

void DoubleStream$2::forEachRemaining(Object$* action) {
	this->forEachRemaining($cast($DoubleConsumer, action));
}

bool DoubleStream$2::tryAdvance(Object$* action) {
	return this->tryAdvance($cast($DoubleConsumer, action));
}

DoubleStream$2::DoubleStream$2() {
}

$Class* DoubleStream$2::load$($String* name, bool initialize) {
	$loadClass(DoubleStream$2, name, initialize, &_DoubleStream$2_ClassInfo_, allocate$DoubleStream$2);
	return class$;
}

$Class* DoubleStream$2::class$ = nullptr;

		} // stream
	} // util
} // java