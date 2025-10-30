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
using $DoubleStream = ::java::util::stream::DoubleStream;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _DoubleStream$1_FieldInfo_[] = {
	{"val$seed", "D", nullptr, $FINAL | $SYNTHETIC, $field(DoubleStream$1, val$seed)},
	{"val$f", "Ljava/util/function/DoubleUnaryOperator;", nullptr, $FINAL | $SYNTHETIC, $field(DoubleStream$1, val$f)},
	{"prev", "D", nullptr, 0, $field(DoubleStream$1, prev)},
	{"started", "Z", nullptr, 0, $field(DoubleStream$1, started)},
	{}
};

$MethodInfo _DoubleStream$1_MethodInfo_[] = {
	{"<init>", "(JILjava/util/function/DoubleUnaryOperator;D)V", nullptr, 0, $method(static_cast<void(DoubleStream$1::*)(int64_t,int32_t,$DoubleUnaryOperator*,double)>(&DoubleStream$1::init$))},
	{"tryAdvance", "(Ljava/util/function/DoubleConsumer;)Z", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _DoubleStream$1_EnclosingMethodInfo_ = {
	"java.util.stream.DoubleStream",
	"iterate",
	"(DLjava/util/function/DoubleUnaryOperator;)Ljava/util/stream/DoubleStream;"
};

$InnerClassInfo _DoubleStream$1_InnerClassesInfo_[] = {
	{"java.util.stream.DoubleStream$1", nullptr, nullptr, 0},
	{"java.util.Spliterators$AbstractDoubleSpliterator", "java.util.Spliterators", "AbstractDoubleSpliterator", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DoubleStream$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.DoubleStream$1",
	"java.util.Spliterators$AbstractDoubleSpliterator",
	nullptr,
	_DoubleStream$1_FieldInfo_,
	_DoubleStream$1_MethodInfo_,
	nullptr,
	&_DoubleStream$1_EnclosingMethodInfo_,
	_DoubleStream$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.DoubleStream"
};

$Object* allocate$DoubleStream$1($Class* clazz) {
	return $of($alloc(DoubleStream$1));
}

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
	$loadClass(DoubleStream$1, name, initialize, &_DoubleStream$1_ClassInfo_, allocate$DoubleStream$1);
	return class$;
}

$Class* DoubleStream$1::class$ = nullptr;

		} // stream
	} // util
} // java