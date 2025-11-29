#include <java/util/stream/ForEachOps$ForEachOp$OfInt.h>

#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntConsumer.h>
#include <java/util/stream/ForEachOps$ForEachOp.h>
#include <java/util/stream/PipelineHelper.h>
#include <java/util/stream/Sink$OfInt.h>
#include <java/util/stream/StreamShape.h>
#include <jcpp.h>

#undef INT_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $IntConsumer = ::java::util::function::IntConsumer;
using $ForEachOps$ForEachOp = ::java::util::stream::ForEachOps$ForEachOp;
using $PipelineHelper = ::java::util::stream::PipelineHelper;
using $Sink$OfInt = ::java::util::stream::Sink$OfInt;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _ForEachOps$ForEachOp$OfInt_FieldInfo_[] = {
	{"consumer", "Ljava/util/function/IntConsumer;", nullptr, $FINAL, $field(ForEachOps$ForEachOp$OfInt, consumer)},
	{}
};

$MethodInfo _ForEachOps$ForEachOp$OfInt_MethodInfo_[] = {
	{"*accept", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*accept", "(D)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*andThen", "(Ljava/util/function/Consumer;)Ljava/util/function/Consumer;", nullptr, $PUBLIC | $ABSTRACT},
	{"*begin", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*cancellationRequested", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*end", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/function/IntConsumer;Z)V", nullptr, 0, $method(static_cast<void(ForEachOps$ForEachOp$OfInt::*)($IntConsumer*,bool)>(&ForEachOps$ForEachOp$OfInt::init$))},
	{"accept", "(I)V", nullptr, $PUBLIC},
	{"evaluateParallel", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"evaluateSequential", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"inputShape", "()Ljava/util/stream/StreamShape;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ForEachOps$ForEachOp$OfInt_InnerClassesInfo_[] = {
	{"java.util.stream.ForEachOps$ForEachOp", "java.util.stream.ForEachOps", "ForEachOp", $STATIC | $ABSTRACT},
	{"java.util.stream.ForEachOps$ForEachOp$OfInt", "java.util.stream.ForEachOps$ForEachOp", "OfInt", $STATIC | $FINAL},
	{"java.util.stream.Sink$OfInt", "java.util.stream.Sink", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ForEachOps$ForEachOp$OfInt_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.ForEachOps$ForEachOp$OfInt",
	"java.util.stream.ForEachOps$ForEachOp",
	"java.util.stream.Sink$OfInt",
	_ForEachOps$ForEachOp$OfInt_FieldInfo_,
	_ForEachOps$ForEachOp$OfInt_MethodInfo_,
	"Ljava/util/stream/ForEachOps$ForEachOp<Ljava/lang/Integer;>;Ljava/util/stream/Sink$OfInt;",
	nullptr,
	_ForEachOps$ForEachOp$OfInt_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ForEachOps"
};

$Object* allocate$ForEachOps$ForEachOp$OfInt($Class* clazz) {
	return $of($alloc(ForEachOps$ForEachOp$OfInt));
}

int32_t ForEachOps$ForEachOp$OfInt::hashCode() {
	 return this->$ForEachOps$ForEachOp::hashCode();
}

bool ForEachOps$ForEachOp$OfInt::equals(Object$* obj) {
	 return this->$ForEachOps$ForEachOp::equals(obj);
}

$Object* ForEachOps$ForEachOp$OfInt::clone() {
	 return this->$ForEachOps$ForEachOp::clone();
}

$String* ForEachOps$ForEachOp$OfInt::toString() {
	 return this->$ForEachOps$ForEachOp::toString();
}

void ForEachOps$ForEachOp$OfInt::finalize() {
	this->$ForEachOps$ForEachOp::finalize();
}

void ForEachOps$ForEachOp$OfInt::begin(int64_t size) {
	this->$ForEachOps$ForEachOp::begin(size);
}

void ForEachOps$ForEachOp$OfInt::end() {
	this->$ForEachOps$ForEachOp::end();
}

bool ForEachOps$ForEachOp$OfInt::cancellationRequested() {
	 return this->$ForEachOps$ForEachOp::cancellationRequested();
}

void ForEachOps$ForEachOp$OfInt::accept(int64_t value) {
	this->$ForEachOps$ForEachOp::accept(value);
}

void ForEachOps$ForEachOp$OfInt::accept(double value) {
	this->$ForEachOps$ForEachOp::accept(value);
}

void ForEachOps$ForEachOp$OfInt::accept(Object$* t) {
	this->$Sink$OfInt::accept(t);
}

$Consumer* ForEachOps$ForEachOp$OfInt::andThen($Consumer* after) {
	 return this->$ForEachOps$ForEachOp::andThen(after);
}

void ForEachOps$ForEachOp$OfInt::init$($IntConsumer* consumer, bool ordered) {
	$ForEachOps$ForEachOp::init$(ordered);
	$set(this, consumer, consumer);
}

$StreamShape* ForEachOps$ForEachOp$OfInt::inputShape() {
	$init($StreamShape);
	return $StreamShape::INT_VALUE;
}

void ForEachOps$ForEachOp$OfInt::accept(int32_t t) {
	$nc(this->consumer)->accept(t);
}

$Object* ForEachOps$ForEachOp$OfInt::evaluateSequential($PipelineHelper* helper, $Spliterator* spliterator) {
	return $of($ForEachOps$ForEachOp::evaluateSequential(helper, spliterator));
}

$Object* ForEachOps$ForEachOp$OfInt::evaluateParallel($PipelineHelper* helper, $Spliterator* spliterator) {
	return $of($ForEachOps$ForEachOp::evaluateParallel(helper, spliterator));
}

$Object* ForEachOps$ForEachOp$OfInt::get() {
	return $of($ForEachOps$ForEachOp::get());
}

ForEachOps$ForEachOp$OfInt::ForEachOps$ForEachOp$OfInt() {
}

$Class* ForEachOps$ForEachOp$OfInt::load$($String* name, bool initialize) {
	$loadClass(ForEachOps$ForEachOp$OfInt, name, initialize, &_ForEachOps$ForEachOp$OfInt_ClassInfo_, allocate$ForEachOps$ForEachOp$OfInt);
	return class$;
}

$Class* ForEachOps$ForEachOp$OfInt::class$ = nullptr;

		} // stream
	} // util
} // java