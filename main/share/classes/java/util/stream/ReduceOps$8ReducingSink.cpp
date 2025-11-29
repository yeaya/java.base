#include <java/util/stream/ReduceOps$8ReducingSink.h>

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
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Consumer = ::java::util::function::Consumer;
using $LongBinaryOperator = ::java::util::function::LongBinaryOperator;
using $ReduceOps$AccumulatingSink = ::java::util::stream::ReduceOps$AccumulatingSink;
using $Sink$OfLong = ::java::util::stream::Sink$OfLong;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _ReduceOps$8ReducingSink_FieldInfo_[] = {
	{"val$operator", "Ljava/util/function/LongBinaryOperator;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$8ReducingSink, val$operator)},
	{"val$identity", "J", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$8ReducingSink, val$identity)},
	{"state", "J", nullptr, $PRIVATE, $field(ReduceOps$8ReducingSink, state)},
	{}
};

$MethodInfo _ReduceOps$8ReducingSink_MethodInfo_[] = {
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
	{"<init>", "(JLjava/util/function/LongBinaryOperator;)V", "()V", 0, $method(static_cast<void(ReduceOps$8ReducingSink::*)(int64_t,$LongBinaryOperator*)>(&ReduceOps$8ReducingSink::init$))},
	{"accept", "(J)V", nullptr, $PUBLIC},
	{"begin", "(J)V", nullptr, $PUBLIC},
	{"combine", "(Ljava/util/stream/ReduceOps$8ReducingSink;)V", nullptr, $PUBLIC},
	{"combine", "(Ljava/util/stream/ReduceOps$AccumulatingSink;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"get", "()Ljava/lang/Long;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ReduceOps$8ReducingSink_EnclosingMethodInfo_ = {
	"java.util.stream.ReduceOps",
	"makeLong",
	"(JLjava/util/function/LongBinaryOperator;)Ljava/util/stream/TerminalOp;"
};

$InnerClassInfo _ReduceOps$8ReducingSink_InnerClassesInfo_[] = {
	{"java.util.stream.ReduceOps$8ReducingSink", nullptr, "ReducingSink", 0},
	{"java.util.stream.ReduceOps$AccumulatingSink", "java.util.stream.ReduceOps", "AccumulatingSink", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.Sink$OfLong", "java.util.stream.Sink", "OfLong", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ReduceOps$8ReducingSink_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.ReduceOps$8ReducingSink",
	"java.lang.Object",
	"java.util.stream.ReduceOps$AccumulatingSink,java.util.stream.Sink$OfLong",
	_ReduceOps$8ReducingSink_FieldInfo_,
	_ReduceOps$8ReducingSink_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/stream/ReduceOps$AccumulatingSink<Ljava/lang/Long;Ljava/lang/Long;Ljava/util/stream/ReduceOps$8ReducingSink;>;Ljava/util/stream/Sink$OfLong;",
	&_ReduceOps$8ReducingSink_EnclosingMethodInfo_,
	_ReduceOps$8ReducingSink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ReduceOps"
};

$Object* allocate$ReduceOps$8ReducingSink($Class* clazz) {
	return $of($alloc(ReduceOps$8ReducingSink));
}

void ReduceOps$8ReducingSink::end() {
	this->$ReduceOps$AccumulatingSink::end();
}

bool ReduceOps$8ReducingSink::cancellationRequested() {
	 return this->$ReduceOps$AccumulatingSink::cancellationRequested();
}

void ReduceOps$8ReducingSink::accept(int32_t value) {
	this->$ReduceOps$AccumulatingSink::accept(value);
}

void ReduceOps$8ReducingSink::accept(double value) {
	this->$ReduceOps$AccumulatingSink::accept(value);
}

void ReduceOps$8ReducingSink::accept(Object$* t) {
	this->$Sink$OfLong::accept(t);
}

$Consumer* ReduceOps$8ReducingSink::andThen($Consumer* after) {
	 return this->$ReduceOps$AccumulatingSink::andThen(after);
}

int32_t ReduceOps$8ReducingSink::hashCode() {
	 return this->$ReduceOps$AccumulatingSink::hashCode();
}

bool ReduceOps$8ReducingSink::equals(Object$* obj) {
	 return this->$ReduceOps$AccumulatingSink::equals(obj);
}

$Object* ReduceOps$8ReducingSink::clone() {
	 return this->$ReduceOps$AccumulatingSink::clone();
}

$String* ReduceOps$8ReducingSink::toString() {
	 return this->$ReduceOps$AccumulatingSink::toString();
}

void ReduceOps$8ReducingSink::finalize() {
	this->$ReduceOps$AccumulatingSink::finalize();
}

void ReduceOps$8ReducingSink::init$(int64_t val$identity, $LongBinaryOperator* val$operator) {
	this->val$identity = val$identity;
	$set(this, val$operator, val$operator);
}

void ReduceOps$8ReducingSink::begin(int64_t size) {
	this->state = this->val$identity;
}

void ReduceOps$8ReducingSink::accept(int64_t t) {
	this->state = $nc(this->val$operator)->applyAsLong(this->state, t);
}

$Object* ReduceOps$8ReducingSink::get() {
	return $of($Long::valueOf(this->state));
}

void ReduceOps$8ReducingSink::combine(ReduceOps$8ReducingSink* other) {
	accept($nc(other)->state);
}

void ReduceOps$8ReducingSink::combine($ReduceOps$AccumulatingSink* other) {
	this->combine($cast(ReduceOps$8ReducingSink, other));
}

ReduceOps$8ReducingSink::ReduceOps$8ReducingSink() {
}

$Class* ReduceOps$8ReducingSink::load$($String* name, bool initialize) {
	$loadClass(ReduceOps$8ReducingSink, name, initialize, &_ReduceOps$8ReducingSink_ClassInfo_, allocate$ReduceOps$8ReducingSink);
	return class$;
}

$Class* ReduceOps$8ReducingSink::class$ = nullptr;

		} // stream
	} // util
} // java