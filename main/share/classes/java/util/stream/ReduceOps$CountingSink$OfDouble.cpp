#include <java/util/stream/ReduceOps$CountingSink$OfDouble.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/ReduceOps$AccumulatingSink.h>
#include <java/util/stream/ReduceOps$CountingSink.h>
#include <java/util/stream/Sink$OfDouble.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Consumer = ::java::util::function::Consumer;
using $ReduceOps$AccumulatingSink = ::java::util::stream::ReduceOps$AccumulatingSink;
using $ReduceOps$CountingSink = ::java::util::stream::ReduceOps$CountingSink;
using $Sink$OfDouble = ::java::util::stream::Sink$OfDouble;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _ReduceOps$CountingSink$OfDouble_MethodInfo_[] = {
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
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ReduceOps$CountingSink$OfDouble::*)()>(&ReduceOps$CountingSink$OfDouble::init$))},
	{"accept", "(D)V", nullptr, $PUBLIC},
	{"combine", "(Ljava/util/stream/ReduceOps$AccumulatingSink;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ReduceOps$CountingSink$OfDouble_InnerClassesInfo_[] = {
	{"java.util.stream.ReduceOps$CountingSink", "java.util.stream.ReduceOps", "CountingSink", $STATIC | $ABSTRACT},
	{"java.util.stream.ReduceOps$CountingSink$OfDouble", "java.util.stream.ReduceOps$CountingSink", "OfDouble", $STATIC | $FINAL},
	{"java.util.stream.Sink$OfDouble", "java.util.stream.Sink", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ReduceOps$CountingSink$OfDouble_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.ReduceOps$CountingSink$OfDouble",
	"java.util.stream.ReduceOps$CountingSink",
	"java.util.stream.Sink$OfDouble",
	nullptr,
	_ReduceOps$CountingSink$OfDouble_MethodInfo_,
	"Ljava/util/stream/ReduceOps$CountingSink<Ljava/lang/Double;>;Ljava/util/stream/Sink$OfDouble;",
	nullptr,
	_ReduceOps$CountingSink$OfDouble_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ReduceOps"
};

$Object* allocate$ReduceOps$CountingSink$OfDouble($Class* clazz) {
	return $of($alloc(ReduceOps$CountingSink$OfDouble));
}

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
	return $of($ReduceOps$CountingSink::get());
}

ReduceOps$CountingSink$OfDouble::ReduceOps$CountingSink$OfDouble() {
}

$Class* ReduceOps$CountingSink$OfDouble::load$($String* name, bool initialize) {
	$loadClass(ReduceOps$CountingSink$OfDouble, name, initialize, &_ReduceOps$CountingSink$OfDouble_ClassInfo_, allocate$ReduceOps$CountingSink$OfDouble);
	return class$;
}

$Class* ReduceOps$CountingSink$OfDouble::class$ = nullptr;

		} // stream
	} // util
} // java