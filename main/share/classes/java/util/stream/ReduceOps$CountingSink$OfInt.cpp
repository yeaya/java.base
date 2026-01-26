#include <java/util/stream/ReduceOps$CountingSink$OfInt.h>

#include <java/util/function/Consumer.h>
#include <java/util/stream/ReduceOps$AccumulatingSink.h>
#include <java/util/stream/ReduceOps$CountingSink.h>
#include <java/util/stream/Sink$OfInt.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Consumer = ::java::util::function::Consumer;
using $ReduceOps$AccumulatingSink = ::java::util::stream::ReduceOps$AccumulatingSink;
using $ReduceOps$CountingSink = ::java::util::stream::ReduceOps$CountingSink;
using $Sink$OfInt = ::java::util::stream::Sink$OfInt;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _ReduceOps$CountingSink$OfInt_MethodInfo_[] = {
	{"*accept", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
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
	{"<init>", "()V", nullptr, 0, $method(ReduceOps$CountingSink$OfInt, init$, void)},
	{"accept", "(I)V", nullptr, $PUBLIC, $virtualMethod(ReduceOps$CountingSink$OfInt, accept, void, int32_t)},
	{"combine", "(Ljava/util/stream/ReduceOps$AccumulatingSink;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ReduceOps$CountingSink$OfInt, combine, void, $ReduceOps$AccumulatingSink*)},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ReduceOps$CountingSink$OfInt, get, $Object*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ReduceOps$CountingSink$OfInt_InnerClassesInfo_[] = {
	{"java.util.stream.ReduceOps$CountingSink", "java.util.stream.ReduceOps", "CountingSink", $STATIC | $ABSTRACT},
	{"java.util.stream.ReduceOps$CountingSink$OfInt", "java.util.stream.ReduceOps$CountingSink", "OfInt", $STATIC | $FINAL},
	{"java.util.stream.Sink$OfInt", "java.util.stream.Sink", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ReduceOps$CountingSink$OfInt_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.ReduceOps$CountingSink$OfInt",
	"java.util.stream.ReduceOps$CountingSink",
	"java.util.stream.Sink$OfInt",
	nullptr,
	_ReduceOps$CountingSink$OfInt_MethodInfo_,
	"Ljava/util/stream/ReduceOps$CountingSink<Ljava/lang/Integer;>;Ljava/util/stream/Sink$OfInt;",
	nullptr,
	_ReduceOps$CountingSink$OfInt_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ReduceOps"
};

$Object* allocate$ReduceOps$CountingSink$OfInt($Class* clazz) {
	return $of($alloc(ReduceOps$CountingSink$OfInt));
}

void ReduceOps$CountingSink$OfInt::begin(int64_t size) {
	this->$ReduceOps$CountingSink::begin(size);
}

int32_t ReduceOps$CountingSink$OfInt::hashCode() {
	 return this->$ReduceOps$CountingSink::hashCode();
}

bool ReduceOps$CountingSink$OfInt::equals(Object$* obj) {
	 return this->$ReduceOps$CountingSink::equals(obj);
}

$Object* ReduceOps$CountingSink$OfInt::clone() {
	 return this->$ReduceOps$CountingSink::clone();
}

$String* ReduceOps$CountingSink$OfInt::toString() {
	 return this->$ReduceOps$CountingSink::toString();
}

void ReduceOps$CountingSink$OfInt::finalize() {
	this->$ReduceOps$CountingSink::finalize();
}

void ReduceOps$CountingSink$OfInt::end() {
	this->$ReduceOps$CountingSink::end();
}

bool ReduceOps$CountingSink$OfInt::cancellationRequested() {
	 return this->$ReduceOps$CountingSink::cancellationRequested();
}

void ReduceOps$CountingSink$OfInt::accept(int64_t value) {
	this->$ReduceOps$CountingSink::accept(value);
}

void ReduceOps$CountingSink$OfInt::accept(double value) {
	this->$ReduceOps$CountingSink::accept(value);
}

void ReduceOps$CountingSink$OfInt::accept(Object$* t) {
	this->$Sink$OfInt::accept(t);
}

$Consumer* ReduceOps$CountingSink$OfInt::andThen($Consumer* after) {
	 return this->$ReduceOps$CountingSink::andThen(after);
}

void ReduceOps$CountingSink$OfInt::init$() {
	$ReduceOps$CountingSink::init$();
}

void ReduceOps$CountingSink$OfInt::accept(int32_t t) {
	++this->count;
}

void ReduceOps$CountingSink$OfInt::combine($ReduceOps$AccumulatingSink* other) {
	$ReduceOps$CountingSink::combine($cast($ReduceOps$CountingSink, other));
}

$Object* ReduceOps$CountingSink$OfInt::get() {
	return $of($ReduceOps$CountingSink::get());
}

ReduceOps$CountingSink$OfInt::ReduceOps$CountingSink$OfInt() {
}

$Class* ReduceOps$CountingSink$OfInt::load$($String* name, bool initialize) {
	$loadClass(ReduceOps$CountingSink$OfInt, name, initialize, &_ReduceOps$CountingSink$OfInt_ClassInfo_, allocate$ReduceOps$CountingSink$OfInt);
	return class$;
}

$Class* ReduceOps$CountingSink$OfInt::class$ = nullptr;

		} // stream
	} // util
} // java