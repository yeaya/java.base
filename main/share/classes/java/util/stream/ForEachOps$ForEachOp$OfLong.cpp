#include <java/util/stream/ForEachOps$ForEachOp$OfLong.h>

#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/LongConsumer.h>
#include <java/util/stream/ForEachOps$ForEachOp.h>
#include <java/util/stream/PipelineHelper.h>
#include <java/util/stream/Sink$OfLong.h>
#include <java/util/stream/StreamShape.h>
#include <jcpp.h>

#undef LONG_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $LongConsumer = ::java::util::function::LongConsumer;
using $ForEachOps$ForEachOp = ::java::util::stream::ForEachOps$ForEachOp;
using $PipelineHelper = ::java::util::stream::PipelineHelper;
using $Sink$OfLong = ::java::util::stream::Sink$OfLong;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _ForEachOps$ForEachOp$OfLong_FieldInfo_[] = {
	{"consumer", "Ljava/util/function/LongConsumer;", nullptr, $FINAL, $field(ForEachOps$ForEachOp$OfLong, consumer)},
	{}
};

$MethodInfo _ForEachOps$ForEachOp$OfLong_MethodInfo_[] = {
	{"*accept", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
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
	{"<init>", "(Ljava/util/function/LongConsumer;Z)V", nullptr, 0, $method(static_cast<void(ForEachOps$ForEachOp$OfLong::*)($LongConsumer*,bool)>(&ForEachOps$ForEachOp$OfLong::init$))},
	{"accept", "(J)V", nullptr, $PUBLIC},
	{"evaluateParallel", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"evaluateSequential", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"inputShape", "()Ljava/util/stream/StreamShape;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ForEachOps$ForEachOp$OfLong_InnerClassesInfo_[] = {
	{"java.util.stream.ForEachOps$ForEachOp", "java.util.stream.ForEachOps", "ForEachOp", $STATIC | $ABSTRACT},
	{"java.util.stream.ForEachOps$ForEachOp$OfLong", "java.util.stream.ForEachOps$ForEachOp", "OfLong", $STATIC | $FINAL},
	{"java.util.stream.Sink$OfLong", "java.util.stream.Sink", "OfLong", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ForEachOps$ForEachOp$OfLong_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.ForEachOps$ForEachOp$OfLong",
	"java.util.stream.ForEachOps$ForEachOp",
	"java.util.stream.Sink$OfLong",
	_ForEachOps$ForEachOp$OfLong_FieldInfo_,
	_ForEachOps$ForEachOp$OfLong_MethodInfo_,
	"Ljava/util/stream/ForEachOps$ForEachOp<Ljava/lang/Long;>;Ljava/util/stream/Sink$OfLong;",
	nullptr,
	_ForEachOps$ForEachOp$OfLong_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ForEachOps"
};

$Object* allocate$ForEachOps$ForEachOp$OfLong($Class* clazz) {
	return $of($alloc(ForEachOps$ForEachOp$OfLong));
}

int32_t ForEachOps$ForEachOp$OfLong::hashCode() {
	 return this->$ForEachOps$ForEachOp::hashCode();
}

bool ForEachOps$ForEachOp$OfLong::equals(Object$* obj) {
	 return this->$ForEachOps$ForEachOp::equals(obj);
}

$Object* ForEachOps$ForEachOp$OfLong::clone() {
	 return this->$ForEachOps$ForEachOp::clone();
}

$String* ForEachOps$ForEachOp$OfLong::toString() {
	 return this->$ForEachOps$ForEachOp::toString();
}

void ForEachOps$ForEachOp$OfLong::finalize() {
	this->$ForEachOps$ForEachOp::finalize();
}

void ForEachOps$ForEachOp$OfLong::begin(int64_t size) {
	this->$ForEachOps$ForEachOp::begin(size);
}

void ForEachOps$ForEachOp$OfLong::end() {
	this->$ForEachOps$ForEachOp::end();
}

bool ForEachOps$ForEachOp$OfLong::cancellationRequested() {
	 return this->$ForEachOps$ForEachOp::cancellationRequested();
}

void ForEachOps$ForEachOp$OfLong::accept(int32_t value) {
	this->$ForEachOps$ForEachOp::accept(value);
}

void ForEachOps$ForEachOp$OfLong::accept(double value) {
	this->$ForEachOps$ForEachOp::accept(value);
}

void ForEachOps$ForEachOp$OfLong::accept(Object$* t) {
	this->$Sink$OfLong::accept(t);
}

$Consumer* ForEachOps$ForEachOp$OfLong::andThen($Consumer* after) {
	 return this->$ForEachOps$ForEachOp::andThen(after);
}

void ForEachOps$ForEachOp$OfLong::init$($LongConsumer* consumer, bool ordered) {
	$ForEachOps$ForEachOp::init$(ordered);
	$set(this, consumer, consumer);
}

$StreamShape* ForEachOps$ForEachOp$OfLong::inputShape() {
	$init($StreamShape);
	return $StreamShape::LONG_VALUE;
}

void ForEachOps$ForEachOp$OfLong::accept(int64_t t) {
	$nc(this->consumer)->accept(t);
}

$Object* ForEachOps$ForEachOp$OfLong::evaluateSequential($PipelineHelper* helper, $Spliterator* spliterator) {
	return $of($ForEachOps$ForEachOp::evaluateSequential(helper, spliterator));
}

$Object* ForEachOps$ForEachOp$OfLong::evaluateParallel($PipelineHelper* helper, $Spliterator* spliterator) {
	return $of($ForEachOps$ForEachOp::evaluateParallel(helper, spliterator));
}

$Object* ForEachOps$ForEachOp$OfLong::get() {
	return $of($ForEachOps$ForEachOp::get());
}

ForEachOps$ForEachOp$OfLong::ForEachOps$ForEachOp$OfLong() {
}

$Class* ForEachOps$ForEachOp$OfLong::load$($String* name, bool initialize) {
	$loadClass(ForEachOps$ForEachOp$OfLong, name, initialize, &_ForEachOps$ForEachOp$OfLong_ClassInfo_, allocate$ForEachOps$ForEachOp$OfLong);
	return class$;
}

$Class* ForEachOps$ForEachOp$OfLong::class$ = nullptr;

		} // stream
	} // util
} // java