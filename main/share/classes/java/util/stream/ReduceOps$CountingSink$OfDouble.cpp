#include <java/util/stream/ReduceOps$CountingSink$OfDouble.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/ReduceOps$AccumulatingSink.h>
#include <java/util/stream/ReduceOps$CountingSink.h>
#include <java/util/stream/Sink$OfDouble.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Consumer = ::java::util::function::Consumer;
using $ReduceOps$AccumulatingSink = ::java::util::stream::ReduceOps$AccumulatingSink;
using $ReduceOps$CountingSink = ::java::util::stream::ReduceOps$CountingSink;
using $Sink$OfDouble = ::java::util::stream::Sink$OfDouble;

namespace java {
	namespace util {
		namespace stream {

void ReduceOps$CountingSink$OfDouble::begin(int64_t size) {
	this->$ReduceOps$CountingSink::begin(size);
}

int32_t ReduceOps$CountingSink$OfDouble::hashCode() {
	 return this->$ReduceOps$CountingSink::hashCode();
}

bool ReduceOps$CountingSink$OfDouble::equals(Object$* obj) {
	 return this->$ReduceOps$CountingSink::equals(obj);
}

$Object* ReduceOps$CountingSink$OfDouble::clone() {
	 return this->$ReduceOps$CountingSink::clone();
}

$String* ReduceOps$CountingSink$OfDouble::toString() {
	 return this->$ReduceOps$CountingSink::toString();
}

void ReduceOps$CountingSink$OfDouble::finalize() {
	this->$ReduceOps$CountingSink::finalize();
}

void ReduceOps$CountingSink$OfDouble::end() {
	this->$ReduceOps$CountingSink::end();
}

bool ReduceOps$CountingSink$OfDouble::cancellationRequested() {
	 return this->$ReduceOps$CountingSink::cancellationRequested();
}

void ReduceOps$CountingSink$OfDouble::accept(int32_t value) {
	this->$ReduceOps$CountingSink::accept(value);
}

void ReduceOps$CountingSink$OfDouble::accept(int64_t value) {
	this->$ReduceOps$CountingSink::accept(value);
}

void ReduceOps$CountingSink$OfDouble::accept(Object$* t) {
	this->$Sink$OfDouble::accept(t);
}

$Consumer* ReduceOps$CountingSink$OfDouble::andThen($Consumer* after) {
	 return this->$ReduceOps$CountingSink::andThen(after);
}

void ReduceOps$CountingSink$OfDouble::init$() {
	$ReduceOps$CountingSink::init$();
}

void ReduceOps$CountingSink$OfDouble::accept(double t) {
	++this->count;
}

void ReduceOps$CountingSink$OfDouble::combine($ReduceOps$AccumulatingSink* other) {
	$ReduceOps$CountingSink::combine($cast($ReduceOps$CountingSink, other));
}

$Object* ReduceOps$CountingSink$OfDouble::get() {
	return $ReduceOps$CountingSink::get();
}

ReduceOps$CountingSink$OfDouble::ReduceOps$CountingSink$OfDouble() {
}

$Class* ReduceOps$CountingSink$OfDouble::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*accept", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
		{"*accept", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
		{"*accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
		{"*andThen", "(Ljava/util/function/Consumer;)Ljava/util/function/Consumer;", nullptr, $PUBLIC | $ABSTRACT},
		{"*begin", "(J)V", nullptr, $PUBLIC},
		{"*cancellationRequested", "()Z", nullptr, $PUBLIC | $ABSTRACT},
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*end", "()V", nullptr, $PUBLIC | $ABSTRACT},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, 0, $method(ReduceOps$CountingSink$OfDouble, init$, void)},
		{"accept", "(D)V", nullptr, $PUBLIC, $virtualMethod(ReduceOps$CountingSink$OfDouble, accept, void, double)},
		{"combine", "(Ljava/util/stream/ReduceOps$AccumulatingSink;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ReduceOps$CountingSink$OfDouble, combine, void, $ReduceOps$AccumulatingSink*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ReduceOps$CountingSink$OfDouble, get, $Object*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.ReduceOps$CountingSink", "java.util.stream.ReduceOps", "CountingSink", $STATIC | $ABSTRACT},
		{"java.util.stream.ReduceOps$CountingSink$OfDouble", "java.util.stream.ReduceOps$CountingSink", "OfDouble", $STATIC | $FINAL},
		{"java.util.stream.Sink$OfDouble", "java.util.stream.Sink", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.stream.ReduceOps$CountingSink$OfDouble",
		"java.util.stream.ReduceOps$CountingSink",
		"java.util.stream.Sink$OfDouble",
		nullptr,
		methodInfos$$,
		"Ljava/util/stream/ReduceOps$CountingSink<Ljava/lang/Double;>;Ljava/util/stream/Sink$OfDouble;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.ReduceOps"
	};
	$loadClass(ReduceOps$CountingSink$OfDouble, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ReduceOps$CountingSink$OfDouble));
	});
	return class$;
}

$Class* ReduceOps$CountingSink$OfDouble::class$ = nullptr;

		} // stream
	} // util
} // java