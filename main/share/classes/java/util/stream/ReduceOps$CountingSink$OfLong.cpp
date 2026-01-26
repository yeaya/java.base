#include <java/util/stream/ReduceOps$CountingSink$OfLong.h>

#include <java/util/function/Consumer.h>
#include <java/util/stream/ReduceOps$AccumulatingSink.h>
#include <java/util/stream/ReduceOps$CountingSink.h>
#include <java/util/stream/Sink$OfLong.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Consumer = ::java::util::function::Consumer;
using $ReduceOps$AccumulatingSink = ::java::util::stream::ReduceOps$AccumulatingSink;
using $ReduceOps$CountingSink = ::java::util::stream::ReduceOps$CountingSink;
using $Sink$OfLong = ::java::util::stream::Sink$OfLong;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _ReduceOps$CountingSink$OfLong_MethodInfo_[] = {
	{"*accept", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*accept", "(D)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*andThen", "(Ljava/util/function/Consumer;)Ljava/util/function/Consumer;", nullptr, $PUBLIC | $ABSTRACT},
	{"*begin", "(J)V", nullptr, $PUBLIC},
	{"*cancellationRequested", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*end", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(ReduceOps$CountingSink$OfLong, init$, void)},
	{"accept", "(J)V", nullptr, $PUBLIC, $virtualMethod(ReduceOps$CountingSink$OfLong, accept, void, int64_t)},
	{"combine", "(Ljava/util/stream/ReduceOps$AccumulatingSink;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ReduceOps$CountingSink$OfLong, combine, void, $ReduceOps$AccumulatingSink*)},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ReduceOps$CountingSink$OfLong, get, $Object*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ReduceOps$CountingSink$OfLong_InnerClassesInfo_[] = {
	{"java.util.stream.ReduceOps$CountingSink", "java.util.stream.ReduceOps", "CountingSink", $STATIC | $ABSTRACT},
	{"java.util.stream.ReduceOps$CountingSink$OfLong", "java.util.stream.ReduceOps$CountingSink", "OfLong", $STATIC | $FINAL},
	{"java.util.stream.Sink$OfLong", "java.util.stream.Sink", "OfLong", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ReduceOps$CountingSink$OfLong_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.ReduceOps$CountingSink$OfLong",
	"java.util.stream.ReduceOps$CountingSink",
	"java.util.stream.Sink$OfLong",
	nullptr,
	_ReduceOps$CountingSink$OfLong_MethodInfo_,
	"Ljava/util/stream/ReduceOps$CountingSink<Ljava/lang/Long;>;Ljava/util/stream/Sink$OfLong;",
	nullptr,
	_ReduceOps$CountingSink$OfLong_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ReduceOps"
};

$Object* allocate$ReduceOps$CountingSink$OfLong($Class* clazz) {
	return $of($alloc(ReduceOps$CountingSink$OfLong));
}

void ReduceOps$CountingSink$OfLong::begin(int64_t size) {
	this->$ReduceOps$CountingSink::begin(size);
}

int32_t ReduceOps$CountingSink$OfLong::hashCode() {
	 return this->$ReduceOps$CountingSink::hashCode();
}

bool ReduceOps$CountingSink$OfLong::equals(Object$* obj) {
	 return this->$ReduceOps$CountingSink::equals(obj);
}

$Object* ReduceOps$CountingSink$OfLong::clone() {
	 return this->$ReduceOps$CountingSink::clone();
}

$String* ReduceOps$CountingSink$OfLong::toString() {
	 return this->$ReduceOps$CountingSink::toString();
}

void ReduceOps$CountingSink$OfLong::finalize() {
	this->$ReduceOps$CountingSink::finalize();
}

void ReduceOps$CountingSink$OfLong::end() {
	this->$ReduceOps$CountingSink::end();
}

bool ReduceOps$CountingSink$OfLong::cancellationRequested() {
	 return this->$ReduceOps$CountingSink::cancellationRequested();
}

void ReduceOps$CountingSink$OfLong::accept(int32_t value) {
	this->$ReduceOps$CountingSink::accept(value);
}

void ReduceOps$CountingSink$OfLong::accept(double value) {
	this->$ReduceOps$CountingSink::accept(value);
}

void ReduceOps$CountingSink$OfLong::accept(Object$* t) {
	this->$Sink$OfLong::accept(t);
}

$Consumer* ReduceOps$CountingSink$OfLong::andThen($Consumer* after) {
	 return this->$ReduceOps$CountingSink::andThen(after);
}

void ReduceOps$CountingSink$OfLong::init$() {
	$ReduceOps$CountingSink::init$();
}

void ReduceOps$CountingSink$OfLong::accept(int64_t t) {
	++this->count;
}

void ReduceOps$CountingSink$OfLong::combine($ReduceOps$AccumulatingSink* other) {
	$ReduceOps$CountingSink::combine($cast($ReduceOps$CountingSink, other));
}

$Object* ReduceOps$CountingSink$OfLong::get() {
	return $of($ReduceOps$CountingSink::get());
}

ReduceOps$CountingSink$OfLong::ReduceOps$CountingSink$OfLong() {
}

$Class* ReduceOps$CountingSink$OfLong::load$($String* name, bool initialize) {
	$loadClass(ReduceOps$CountingSink$OfLong, name, initialize, &_ReduceOps$CountingSink$OfLong_ClassInfo_, allocate$ReduceOps$CountingSink$OfLong);
	return class$;
}

$Class* ReduceOps$CountingSink$OfLong::class$ = nullptr;

		} // stream
	} // util
} // java