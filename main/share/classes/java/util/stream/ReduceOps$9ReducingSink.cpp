#include <java/util/stream/ReduceOps$9ReducingSink.h>

#include <java/util/OptionalLong.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/LongBinaryOperator.h>
#include <java/util/stream/ReduceOps$AccumulatingSink.h>
#include <java/util/stream/ReduceOps.h>
#include <java/util/stream/Sink$OfLong.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OptionalLong = ::java::util::OptionalLong;
using $Consumer = ::java::util::function::Consumer;
using $LongBinaryOperator = ::java::util::function::LongBinaryOperator;
using $ReduceOps = ::java::util::stream::ReduceOps;
using $ReduceOps$AccumulatingSink = ::java::util::stream::ReduceOps$AccumulatingSink;
using $Sink$OfLong = ::java::util::stream::Sink$OfLong;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _ReduceOps$9ReducingSink_FieldInfo_[] = {
	{"val$operator", "Ljava/util/function/LongBinaryOperator;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$9ReducingSink, val$operator)},
	{"empty", "Z", nullptr, $PRIVATE, $field(ReduceOps$9ReducingSink, empty)},
	{"state", "J", nullptr, $PRIVATE, $field(ReduceOps$9ReducingSink, state)},
	{}
};

$MethodInfo _ReduceOps$9ReducingSink_MethodInfo_[] = {
	{"*accept", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*accept", "(D)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*andThen", "(Ljava/util/function/Consumer;)Ljava/util/function/Consumer;", nullptr, $PUBLIC | $ABSTRACT},
	{"*cancellationRequested", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*end", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/function/LongBinaryOperator;)V", "()V", 0, $method(static_cast<void(ReduceOps$9ReducingSink::*)($LongBinaryOperator*)>(&ReduceOps$9ReducingSink::init$))},
	{"accept", "(J)V", nullptr, $PUBLIC},
	{"begin", "(J)V", nullptr, $PUBLIC},
	{"combine", "(Ljava/util/stream/ReduceOps$9ReducingSink;)V", nullptr, $PUBLIC},
	{"combine", "(Ljava/util/stream/ReduceOps$AccumulatingSink;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"get", "()Ljava/util/OptionalLong;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ReduceOps$9ReducingSink_EnclosingMethodInfo_ = {
	"java.util.stream.ReduceOps",
	"makeLong",
	"(Ljava/util/function/LongBinaryOperator;)Ljava/util/stream/TerminalOp;"
};

$InnerClassInfo _ReduceOps$9ReducingSink_InnerClassesInfo_[] = {
	{"java.util.stream.ReduceOps$9ReducingSink", nullptr, "ReducingSink", 0},
	{"java.util.stream.ReduceOps$AccumulatingSink", "java.util.stream.ReduceOps", "AccumulatingSink", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.Sink$OfLong", "java.util.stream.Sink", "OfLong", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ReduceOps$9ReducingSink_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.ReduceOps$9ReducingSink",
	"java.lang.Object",
	"java.util.stream.ReduceOps$AccumulatingSink,java.util.stream.Sink$OfLong",
	_ReduceOps$9ReducingSink_FieldInfo_,
	_ReduceOps$9ReducingSink_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/stream/ReduceOps$AccumulatingSink<Ljava/lang/Long;Ljava/util/OptionalLong;Ljava/util/stream/ReduceOps$9ReducingSink;>;Ljava/util/stream/Sink$OfLong;",
	&_ReduceOps$9ReducingSink_EnclosingMethodInfo_,
	_ReduceOps$9ReducingSink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ReduceOps"
};

$Object* allocate$ReduceOps$9ReducingSink($Class* clazz) {
	return $of($alloc(ReduceOps$9ReducingSink));
}

void ReduceOps$9ReducingSink::end() {
	this->$ReduceOps$AccumulatingSink::end();
}

bool ReduceOps$9ReducingSink::cancellationRequested() {
	 return this->$ReduceOps$AccumulatingSink::cancellationRequested();
}

void ReduceOps$9ReducingSink::accept(int32_t value) {
	this->$ReduceOps$AccumulatingSink::accept(value);
}

void ReduceOps$9ReducingSink::accept(double value) {
	this->$ReduceOps$AccumulatingSink::accept(value);
}

void ReduceOps$9ReducingSink::accept(Object$* t) {
	this->$Sink$OfLong::accept(t);
}

$Consumer* ReduceOps$9ReducingSink::andThen($Consumer* after) {
	 return this->$ReduceOps$AccumulatingSink::andThen(after);
}

int32_t ReduceOps$9ReducingSink::hashCode() {
	 return this->$ReduceOps$AccumulatingSink::hashCode();
}

bool ReduceOps$9ReducingSink::equals(Object$* obj) {
	 return this->$ReduceOps$AccumulatingSink::equals(obj);
}

$Object* ReduceOps$9ReducingSink::clone() {
	 return this->$ReduceOps$AccumulatingSink::clone();
}

$String* ReduceOps$9ReducingSink::toString() {
	 return this->$ReduceOps$AccumulatingSink::toString();
}

void ReduceOps$9ReducingSink::finalize() {
	this->$ReduceOps$AccumulatingSink::finalize();
}

void ReduceOps$9ReducingSink::init$($LongBinaryOperator* val$operator) {
	$set(this, val$operator, val$operator);
}

void ReduceOps$9ReducingSink::begin(int64_t size) {
	this->empty = true;
	this->state = 0;
}

void ReduceOps$9ReducingSink::accept(int64_t t) {
	if (this->empty) {
		this->empty = false;
		this->state = t;
	} else {
		this->state = $nc(this->val$operator)->applyAsLong(this->state, t);
	}
}

$Object* ReduceOps$9ReducingSink::get() {
	return $of(this->empty ? $OptionalLong::empty() : $OptionalLong::of(this->state));
}

void ReduceOps$9ReducingSink::combine(ReduceOps$9ReducingSink* other) {
	if (!$nc(other)->empty) {
		accept(other->state);
	}
}

void ReduceOps$9ReducingSink::combine($ReduceOps$AccumulatingSink* other) {
	this->combine($cast(ReduceOps$9ReducingSink, other));
}

ReduceOps$9ReducingSink::ReduceOps$9ReducingSink() {
}

$Class* ReduceOps$9ReducingSink::load$($String* name, bool initialize) {
	$loadClass(ReduceOps$9ReducingSink, name, initialize, &_ReduceOps$9ReducingSink_ClassInfo_, allocate$ReduceOps$9ReducingSink);
	return class$;
}

$Class* ReduceOps$9ReducingSink::class$ = nullptr;

		} // stream
	} // util
} // java