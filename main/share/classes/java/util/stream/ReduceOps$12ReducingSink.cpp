#include <java/util/stream/ReduceOps$12ReducingSink.h>

#include <java/util/OptionalDouble.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/DoubleBinaryOperator.h>
#include <java/util/stream/ReduceOps$AccumulatingSink.h>
#include <java/util/stream/ReduceOps.h>
#include <java/util/stream/Sink$OfDouble.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OptionalDouble = ::java::util::OptionalDouble;
using $Consumer = ::java::util::function::Consumer;
using $DoubleBinaryOperator = ::java::util::function::DoubleBinaryOperator;
using $ReduceOps$AccumulatingSink = ::java::util::stream::ReduceOps$AccumulatingSink;
using $Sink$OfDouble = ::java::util::stream::Sink$OfDouble;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _ReduceOps$12ReducingSink_FieldInfo_[] = {
	{"val$operator", "Ljava/util/function/DoubleBinaryOperator;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$12ReducingSink, val$operator)},
	{"empty", "Z", nullptr, $PRIVATE, $field(ReduceOps$12ReducingSink, empty)},
	{"state", "D", nullptr, $PRIVATE, $field(ReduceOps$12ReducingSink, state)},
	{}
};

$MethodInfo _ReduceOps$12ReducingSink_MethodInfo_[] = {
	{"*accept", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*accept", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*andThen", "(Ljava/util/function/Consumer;)Ljava/util/function/Consumer;", nullptr, $PUBLIC | $ABSTRACT},
	{"*cancellationRequested", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*end", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/function/DoubleBinaryOperator;)V", "()V", 0, $method(ReduceOps$12ReducingSink, init$, void, $DoubleBinaryOperator*)},
	{"accept", "(D)V", nullptr, $PUBLIC, $virtualMethod(ReduceOps$12ReducingSink, accept, void, double)},
	{"begin", "(J)V", nullptr, $PUBLIC, $virtualMethod(ReduceOps$12ReducingSink, begin, void, int64_t)},
	{"combine", "(Ljava/util/stream/ReduceOps$12ReducingSink;)V", nullptr, $PUBLIC, $virtualMethod(ReduceOps$12ReducingSink, combine, void, ReduceOps$12ReducingSink*)},
	{"combine", "(Ljava/util/stream/ReduceOps$AccumulatingSink;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ReduceOps$12ReducingSink, combine, void, $ReduceOps$AccumulatingSink*)},
	{"get", "()Ljava/util/OptionalDouble;", nullptr, $PUBLIC, $virtualMethod(ReduceOps$12ReducingSink, get, $Object*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ReduceOps$12ReducingSink_EnclosingMethodInfo_ = {
	"java.util.stream.ReduceOps",
	"makeDouble",
	"(Ljava/util/function/DoubleBinaryOperator;)Ljava/util/stream/TerminalOp;"
};

$InnerClassInfo _ReduceOps$12ReducingSink_InnerClassesInfo_[] = {
	{"java.util.stream.ReduceOps$12ReducingSink", nullptr, "ReducingSink", 0},
	{"java.util.stream.ReduceOps$AccumulatingSink", "java.util.stream.ReduceOps", "AccumulatingSink", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.Sink$OfDouble", "java.util.stream.Sink", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ReduceOps$12ReducingSink_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.ReduceOps$12ReducingSink",
	"java.lang.Object",
	"java.util.stream.ReduceOps$AccumulatingSink,java.util.stream.Sink$OfDouble",
	_ReduceOps$12ReducingSink_FieldInfo_,
	_ReduceOps$12ReducingSink_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/stream/ReduceOps$AccumulatingSink<Ljava/lang/Double;Ljava/util/OptionalDouble;Ljava/util/stream/ReduceOps$12ReducingSink;>;Ljava/util/stream/Sink$OfDouble;",
	&_ReduceOps$12ReducingSink_EnclosingMethodInfo_,
	_ReduceOps$12ReducingSink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ReduceOps"
};

$Object* allocate$ReduceOps$12ReducingSink($Class* clazz) {
	return $of($alloc(ReduceOps$12ReducingSink));
}

void ReduceOps$12ReducingSink::end() {
	this->$ReduceOps$AccumulatingSink::end();
}

bool ReduceOps$12ReducingSink::cancellationRequested() {
	 return this->$ReduceOps$AccumulatingSink::cancellationRequested();
}

void ReduceOps$12ReducingSink::accept(int32_t value) {
	this->$ReduceOps$AccumulatingSink::accept(value);
}

void ReduceOps$12ReducingSink::accept(int64_t value) {
	this->$ReduceOps$AccumulatingSink::accept(value);
}

void ReduceOps$12ReducingSink::accept(Object$* t) {
	this->$Sink$OfDouble::accept(t);
}

$Consumer* ReduceOps$12ReducingSink::andThen($Consumer* after) {
	 return this->$ReduceOps$AccumulatingSink::andThen(after);
}

int32_t ReduceOps$12ReducingSink::hashCode() {
	 return this->$ReduceOps$AccumulatingSink::hashCode();
}

bool ReduceOps$12ReducingSink::equals(Object$* obj) {
	 return this->$ReduceOps$AccumulatingSink::equals(obj);
}

$Object* ReduceOps$12ReducingSink::clone() {
	 return this->$ReduceOps$AccumulatingSink::clone();
}

$String* ReduceOps$12ReducingSink::toString() {
	 return this->$ReduceOps$AccumulatingSink::toString();
}

void ReduceOps$12ReducingSink::finalize() {
	this->$ReduceOps$AccumulatingSink::finalize();
}

void ReduceOps$12ReducingSink::init$($DoubleBinaryOperator* val$operator) {
	$set(this, val$operator, val$operator);
}

void ReduceOps$12ReducingSink::begin(int64_t size) {
	this->empty = true;
	this->state = (double)0;
}

void ReduceOps$12ReducingSink::accept(double t) {
	if (this->empty) {
		this->empty = false;
		this->state = t;
	} else {
		this->state = $nc(this->val$operator)->applyAsDouble(this->state, t);
	}
}

$Object* ReduceOps$12ReducingSink::get() {
	return $of(this->empty ? $OptionalDouble::empty() : $OptionalDouble::of(this->state));
}

void ReduceOps$12ReducingSink::combine(ReduceOps$12ReducingSink* other) {
	if (!$nc(other)->empty) {
		accept(other->state);
	}
}

void ReduceOps$12ReducingSink::combine($ReduceOps$AccumulatingSink* other) {
	this->combine($cast(ReduceOps$12ReducingSink, other));
}

ReduceOps$12ReducingSink::ReduceOps$12ReducingSink() {
}

$Class* ReduceOps$12ReducingSink::load$($String* name, bool initialize) {
	$loadClass(ReduceOps$12ReducingSink, name, initialize, &_ReduceOps$12ReducingSink_ClassInfo_, allocate$ReduceOps$12ReducingSink);
	return class$;
}

$Class* ReduceOps$12ReducingSink::class$ = nullptr;

		} // stream
	} // util
} // java