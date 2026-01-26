#include <java/util/stream/ForEachOps$ForEachOp$OfDouble.h>

#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/DoubleConsumer.h>
#include <java/util/stream/ForEachOps$ForEachOp.h>
#include <java/util/stream/PipelineHelper.h>
#include <java/util/stream/Sink$OfDouble.h>
#include <java/util/stream/StreamShape.h>
#include <jcpp.h>

#undef DOUBLE_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $DoubleConsumer = ::java::util::function::DoubleConsumer;
using $ForEachOps$ForEachOp = ::java::util::stream::ForEachOps$ForEachOp;
using $PipelineHelper = ::java::util::stream::PipelineHelper;
using $Sink$OfDouble = ::java::util::stream::Sink$OfDouble;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _ForEachOps$ForEachOp$OfDouble_FieldInfo_[] = {
	{"consumer", "Ljava/util/function/DoubleConsumer;", nullptr, $FINAL, $field(ForEachOps$ForEachOp$OfDouble, consumer)},
	{}
};

$MethodInfo _ForEachOps$ForEachOp$OfDouble_MethodInfo_[] = {
	{"*accept", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*accept", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*andThen", "(Ljava/util/function/Consumer;)Ljava/util/function/Consumer;", nullptr, $PUBLIC | $ABSTRACT},
	{"*begin", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*cancellationRequested", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*end", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/function/DoubleConsumer;Z)V", nullptr, 0, $method(ForEachOps$ForEachOp$OfDouble, init$, void, $DoubleConsumer*, bool)},
	{"accept", "(D)V", nullptr, $PUBLIC, $virtualMethod(ForEachOps$ForEachOp$OfDouble, accept, void, double)},
	{"evaluateParallel", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ForEachOps$ForEachOp$OfDouble, evaluateParallel, $Object*, $PipelineHelper*, $Spliterator*)},
	{"evaluateSequential", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ForEachOps$ForEachOp$OfDouble, evaluateSequential, $Object*, $PipelineHelper*, $Spliterator*)},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ForEachOps$ForEachOp$OfDouble, get, $Object*)},
	{"inputShape", "()Ljava/util/stream/StreamShape;", nullptr, $PUBLIC, $virtualMethod(ForEachOps$ForEachOp$OfDouble, inputShape, $StreamShape*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ForEachOps$ForEachOp$OfDouble_InnerClassesInfo_[] = {
	{"java.util.stream.ForEachOps$ForEachOp", "java.util.stream.ForEachOps", "ForEachOp", $STATIC | $ABSTRACT},
	{"java.util.stream.ForEachOps$ForEachOp$OfDouble", "java.util.stream.ForEachOps$ForEachOp", "OfDouble", $STATIC | $FINAL},
	{"java.util.stream.Sink$OfDouble", "java.util.stream.Sink", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ForEachOps$ForEachOp$OfDouble_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.ForEachOps$ForEachOp$OfDouble",
	"java.util.stream.ForEachOps$ForEachOp",
	"java.util.stream.Sink$OfDouble",
	_ForEachOps$ForEachOp$OfDouble_FieldInfo_,
	_ForEachOps$ForEachOp$OfDouble_MethodInfo_,
	"Ljava/util/stream/ForEachOps$ForEachOp<Ljava/lang/Double;>;Ljava/util/stream/Sink$OfDouble;",
	nullptr,
	_ForEachOps$ForEachOp$OfDouble_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ForEachOps"
};

$Object* allocate$ForEachOps$ForEachOp$OfDouble($Class* clazz) {
	return $of($alloc(ForEachOps$ForEachOp$OfDouble));
}

int32_t ForEachOps$ForEachOp$OfDouble::hashCode() {
	 return this->$ForEachOps$ForEachOp::hashCode();
}

bool ForEachOps$ForEachOp$OfDouble::equals(Object$* obj) {
	 return this->$ForEachOps$ForEachOp::equals(obj);
}

$Object* ForEachOps$ForEachOp$OfDouble::clone() {
	 return this->$ForEachOps$ForEachOp::clone();
}

$String* ForEachOps$ForEachOp$OfDouble::toString() {
	 return this->$ForEachOps$ForEachOp::toString();
}

void ForEachOps$ForEachOp$OfDouble::finalize() {
	this->$ForEachOps$ForEachOp::finalize();
}

void ForEachOps$ForEachOp$OfDouble::begin(int64_t size) {
	this->$ForEachOps$ForEachOp::begin(size);
}

void ForEachOps$ForEachOp$OfDouble::end() {
	this->$ForEachOps$ForEachOp::end();
}

bool ForEachOps$ForEachOp$OfDouble::cancellationRequested() {
	 return this->$ForEachOps$ForEachOp::cancellationRequested();
}

void ForEachOps$ForEachOp$OfDouble::accept(int32_t value) {
	this->$ForEachOps$ForEachOp::accept(value);
}

void ForEachOps$ForEachOp$OfDouble::accept(int64_t value) {
	this->$ForEachOps$ForEachOp::accept(value);
}

void ForEachOps$ForEachOp$OfDouble::accept(Object$* t) {
	this->$Sink$OfDouble::accept(t);
}

$Consumer* ForEachOps$ForEachOp$OfDouble::andThen($Consumer* after) {
	 return this->$ForEachOps$ForEachOp::andThen(after);
}

void ForEachOps$ForEachOp$OfDouble::init$($DoubleConsumer* consumer, bool ordered) {
	$ForEachOps$ForEachOp::init$(ordered);
	$set(this, consumer, consumer);
}

$StreamShape* ForEachOps$ForEachOp$OfDouble::inputShape() {
	$init($StreamShape);
	return $StreamShape::DOUBLE_VALUE;
}

void ForEachOps$ForEachOp$OfDouble::accept(double t) {
	$nc(this->consumer)->accept(t);
}

$Object* ForEachOps$ForEachOp$OfDouble::evaluateSequential($PipelineHelper* helper, $Spliterator* spliterator) {
	return $of($ForEachOps$ForEachOp::evaluateSequential(helper, spliterator));
}

$Object* ForEachOps$ForEachOp$OfDouble::evaluateParallel($PipelineHelper* helper, $Spliterator* spliterator) {
	return $of($ForEachOps$ForEachOp::evaluateParallel(helper, spliterator));
}

$Object* ForEachOps$ForEachOp$OfDouble::get() {
	return $of($ForEachOps$ForEachOp::get());
}

ForEachOps$ForEachOp$OfDouble::ForEachOps$ForEachOp$OfDouble() {
}

$Class* ForEachOps$ForEachOp$OfDouble::load$($String* name, bool initialize) {
	$loadClass(ForEachOps$ForEachOp$OfDouble, name, initialize, &_ForEachOps$ForEachOp$OfDouble_ClassInfo_, allocate$ForEachOps$ForEachOp$OfDouble);
	return class$;
}

$Class* ForEachOps$ForEachOp$OfDouble::class$ = nullptr;

		} // stream
	} // util
} // java