#include <java/util/stream/ReduceOps$6ReducingSink.h>

#include <java/util/OptionalInt.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntBinaryOperator.h>
#include <java/util/stream/ReduceOps$AccumulatingSink.h>
#include <java/util/stream/ReduceOps.h>
#include <java/util/stream/Sink$OfInt.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OptionalInt = ::java::util::OptionalInt;
using $Consumer = ::java::util::function::Consumer;
using $IntBinaryOperator = ::java::util::function::IntBinaryOperator;
using $ReduceOps$AccumulatingSink = ::java::util::stream::ReduceOps$AccumulatingSink;
using $Sink$OfInt = ::java::util::stream::Sink$OfInt;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _ReduceOps$6ReducingSink_FieldInfo_[] = {
	{"val$operator", "Ljava/util/function/IntBinaryOperator;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$6ReducingSink, val$operator)},
	{"empty", "Z", nullptr, $PRIVATE, $field(ReduceOps$6ReducingSink, empty)},
	{"state", "I", nullptr, $PRIVATE, $field(ReduceOps$6ReducingSink, state)},
	{}
};

$MethodInfo _ReduceOps$6ReducingSink_MethodInfo_[] = {
	{"*accept", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*accept", "(D)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*andThen", "(Ljava/util/function/Consumer;)Ljava/util/function/Consumer;", nullptr, $PUBLIC | $ABSTRACT},
	{"*cancellationRequested", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*end", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/function/IntBinaryOperator;)V", "()V", 0, $method(static_cast<void(ReduceOps$6ReducingSink::*)($IntBinaryOperator*)>(&ReduceOps$6ReducingSink::init$))},
	{"accept", "(I)V", nullptr, $PUBLIC},
	{"begin", "(J)V", nullptr, $PUBLIC},
	{"combine", "(Ljava/util/stream/ReduceOps$6ReducingSink;)V", nullptr, $PUBLIC},
	{"combine", "(Ljava/util/stream/ReduceOps$AccumulatingSink;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"get", "()Ljava/util/OptionalInt;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ReduceOps$6ReducingSink_EnclosingMethodInfo_ = {
	"java.util.stream.ReduceOps",
	"makeInt",
	"(Ljava/util/function/IntBinaryOperator;)Ljava/util/stream/TerminalOp;"
};

$InnerClassInfo _ReduceOps$6ReducingSink_InnerClassesInfo_[] = {
	{"java.util.stream.ReduceOps$6ReducingSink", nullptr, "ReducingSink", 0},
	{"java.util.stream.ReduceOps$AccumulatingSink", "java.util.stream.ReduceOps", "AccumulatingSink", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.Sink$OfInt", "java.util.stream.Sink", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ReduceOps$6ReducingSink_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.ReduceOps$6ReducingSink",
	"java.lang.Object",
	"java.util.stream.ReduceOps$AccumulatingSink,java.util.stream.Sink$OfInt",
	_ReduceOps$6ReducingSink_FieldInfo_,
	_ReduceOps$6ReducingSink_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/stream/ReduceOps$AccumulatingSink<Ljava/lang/Integer;Ljava/util/OptionalInt;Ljava/util/stream/ReduceOps$6ReducingSink;>;Ljava/util/stream/Sink$OfInt;",
	&_ReduceOps$6ReducingSink_EnclosingMethodInfo_,
	_ReduceOps$6ReducingSink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ReduceOps"
};

$Object* allocate$ReduceOps$6ReducingSink($Class* clazz) {
	return $of($alloc(ReduceOps$6ReducingSink));
}

void ReduceOps$6ReducingSink::end() {
	this->$ReduceOps$AccumulatingSink::end();
}

bool ReduceOps$6ReducingSink::cancellationRequested() {
	 return this->$ReduceOps$AccumulatingSink::cancellationRequested();
}

void ReduceOps$6ReducingSink::accept(int64_t value) {
	this->$ReduceOps$AccumulatingSink::accept(value);
}

void ReduceOps$6ReducingSink::accept(double value) {
	this->$ReduceOps$AccumulatingSink::accept(value);
}

void ReduceOps$6ReducingSink::accept(Object$* t) {
	this->$Sink$OfInt::accept(t);
}

$Consumer* ReduceOps$6ReducingSink::andThen($Consumer* after) {
	 return this->$ReduceOps$AccumulatingSink::andThen(after);
}

int32_t ReduceOps$6ReducingSink::hashCode() {
	 return this->$ReduceOps$AccumulatingSink::hashCode();
}

bool ReduceOps$6ReducingSink::equals(Object$* obj) {
	 return this->$ReduceOps$AccumulatingSink::equals(obj);
}

$Object* ReduceOps$6ReducingSink::clone() {
	 return this->$ReduceOps$AccumulatingSink::clone();
}

$String* ReduceOps$6ReducingSink::toString() {
	 return this->$ReduceOps$AccumulatingSink::toString();
}

void ReduceOps$6ReducingSink::finalize() {
	this->$ReduceOps$AccumulatingSink::finalize();
}

void ReduceOps$6ReducingSink::init$($IntBinaryOperator* val$operator) {
	$set(this, val$operator, val$operator);
}

void ReduceOps$6ReducingSink::begin(int64_t size) {
	this->empty = true;
	this->state = 0;
}

void ReduceOps$6ReducingSink::accept(int32_t t) {
	if (this->empty) {
		this->empty = false;
		this->state = t;
	} else {
		this->state = $nc(this->val$operator)->applyAsInt(this->state, t);
	}
}

$Object* ReduceOps$6ReducingSink::get() {
	return $of(this->empty ? $OptionalInt::empty() : $OptionalInt::of(this->state));
}

void ReduceOps$6ReducingSink::combine(ReduceOps$6ReducingSink* other) {
	if (!$nc(other)->empty) {
		accept(other->state);
	}
}

void ReduceOps$6ReducingSink::combine($ReduceOps$AccumulatingSink* other) {
	this->combine($cast(ReduceOps$6ReducingSink, other));
}

ReduceOps$6ReducingSink::ReduceOps$6ReducingSink() {
}

$Class* ReduceOps$6ReducingSink::load$($String* name, bool initialize) {
	$loadClass(ReduceOps$6ReducingSink, name, initialize, &_ReduceOps$6ReducingSink_ClassInfo_, allocate$ReduceOps$6ReducingSink);
	return class$;
}

$Class* ReduceOps$6ReducingSink::class$ = nullptr;

		} // stream
	} // util
} // java