#include <java/util/stream/DoubleStream$1.h>
#include <java/util/Objects.h>
#include <java/util/Spliterators$AbstractDoubleSpliterator.h>
#include <java/util/function/DoubleConsumer.h>
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
using $DoubleUnaryOperator = ::java::util::function::DoubleUnaryOperator;

namespace java {
	namespace util {
		namespace stream {

void DoubleStream$1::init$(int64_t est, int32_t additionalCharacteristics, $DoubleUnaryOperator* val$f, double val$seed) {
	$set(this, val$f, val$f);
	this->val$seed = val$seed;
	$Spliterators$AbstractDoubleSpliterator::init$(est, additionalCharacteristics);
}

bool DoubleStream$1::tryAdvance($DoubleConsumer* action) {
	$Objects::requireNonNull(action);
	double t = 0.0;
	if (this->started) {
		t = $nc(this->val$f)->applyAsDouble(this->prev);
	} else {
		t = this->val$seed;
		this->started = true;
	}
	action->accept(this->prev = t);
	return true;
}

bool DoubleStream$1::tryAdvance(Object$* action) {
	return this->tryAdvance($cast($DoubleConsumer, action));
}

DoubleStream$1::DoubleStream$1() {
}

$Class* DoubleStream$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$seed", "D", nullptr, $FINAL | $SYNTHETIC, $field(DoubleStream$1, val$seed)},
		{"val$f", "Ljava/util/function/DoubleUnaryOperator;", nullptr, $FINAL | $SYNTHETIC, $field(DoubleStream$1, val$f)},
		{"prev", "D", nullptr, 0, $field(DoubleStream$1, prev)},
		{"started", "Z", nullptr, 0, $field(DoubleStream$1, started)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(JILjava/util/function/DoubleUnaryOperator;D)V", nullptr, 0, $method(DoubleStream$1, init$, void, int64_t, int32_t, $DoubleUnaryOperator*, double)},
		{"tryAdvance", "(Ljava/util/function/DoubleConsumer;)Z", nullptr, $PUBLIC, $virtualMethod(DoubleStream$1, tryAdvance, bool, $DoubleConsumer*)},
		{"tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DoubleStream$1, tryAdvance, bool, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.stream.DoubleStream",
		"iterate",
		"(DLjava/util/function/DoubleUnaryOperator;)Ljava/util/stream/DoubleStream;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.DoubleStream$1", nullptr, nullptr, 0},
		{"java.util.Spliterators$AbstractDoubleSpliterator", "java.util.Spliterators", "AbstractDoubleSpliterator", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.stream.DoubleStream$1",
		"java.util.Spliterators$AbstractDoubleSpliterator",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.DoubleStream"
	};
	$loadClass(DoubleStream$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DoubleStream$1);
	});
	return class$;
}

$Class* DoubleStream$1::class$ = nullptr;

		} // stream
	} // util
} // java