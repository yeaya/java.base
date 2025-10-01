#include <java/util/stream/ReduceOps$11ReducingSink.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/DoubleBinaryOperator.h>
#include <java/util/stream/ReduceOps$AccumulatingSink.h>
#include <java/util/stream/ReduceOps.h>
#include <java/util/stream/Sink$OfDouble.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Consumer = ::java::util::function::Consumer;
using $DoubleBinaryOperator = ::java::util::function::DoubleBinaryOperator;
using $ReduceOps = ::java::util::stream::ReduceOps;
using $ReduceOps$AccumulatingSink = ::java::util::stream::ReduceOps$AccumulatingSink;
using $Sink$OfDouble = ::java::util::stream::Sink$OfDouble;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _ReduceOps$11ReducingSink_FieldInfo_[] = {
	{"val$operator", "Ljava/util/function/DoubleBinaryOperator;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$11ReducingSink, val$operator)},
	{"val$identity", "D", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$11ReducingSink, val$identity)},
	{"state", "D", nullptr, $PRIVATE, $field(ReduceOps$11ReducingSink, state)},
	{}
};

$MethodInfo _ReduceOps$11ReducingSink_MethodInfo_[] = {
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
	{"<init>", "(DLjava/util/function/DoubleBinaryOperator;)V", "()V", 0, $method(static_cast<void(ReduceOps$11ReducingSink::*)(double,$DoubleBinaryOperator*)>(&ReduceOps$11ReducingSink::init$))},
	{"accept", "(D)V", nullptr, $PUBLIC},
	{"begin", "(J)V", nullptr, $PUBLIC},
	{"combine", "(Ljava/util/stream/ReduceOps$11ReducingSink;)V", nullptr, $PUBLIC},
	{"combine", "(Ljava/util/stream/ReduceOps$AccumulatingSink;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"get", "()Ljava/lang/Double;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ReduceOps$11ReducingSink_EnclosingMethodInfo_ = {
	"java.util.stream.ReduceOps",
	"makeDouble",
	"(DLjava/util/function/DoubleBinaryOperator;)Ljava/util/stream/TerminalOp;"
};

$InnerClassInfo _ReduceOps$11ReducingSink_InnerClassesInfo_[] = {
	{"java.util.stream.ReduceOps$11ReducingSink", nullptr, "ReducingSink", 0},
	{"java.util.stream.ReduceOps$AccumulatingSink", "java.util.stream.ReduceOps", "AccumulatingSink", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.Sink$OfDouble", "java.util.stream.Sink", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ReduceOps$11ReducingSink_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.ReduceOps$11ReducingSink",
	"java.lang.Object",
	"java.util.stream.ReduceOps$AccumulatingSink,java.util.stream.Sink$OfDouble",
	_ReduceOps$11ReducingSink_FieldInfo_,
	_ReduceOps$11ReducingSink_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/stream/ReduceOps$AccumulatingSink<Ljava/lang/Double;Ljava/lang/Double;Ljava/util/stream/ReduceOps$11ReducingSink;>;Ljava/util/stream/Sink$OfDouble;",
	&_ReduceOps$11ReducingSink_EnclosingMethodInfo_,
	_ReduceOps$11ReducingSink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ReduceOps"
};

$Object* allocate$ReduceOps$11ReducingSink($Class* clazz) {
	return $of($alloc(ReduceOps$11ReducingSink));
}

void ReduceOps$11ReducingSink::end() {
	this->$ReduceOps$AccumulatingSink::end();
}

bool ReduceOps$11ReducingSink::cancellationRequested() {
	 return this->$ReduceOps$AccumulatingSink::cancellationRequested();
}

void ReduceOps$11ReducingSink::accept(int32_t value) {
	this->$ReduceOps$AccumulatingSink::accept(value);
}

void ReduceOps$11ReducingSink::accept(int64_t value) {
	this->$ReduceOps$AccumulatingSink::accept(value);
}

void ReduceOps$11ReducingSink::accept(Object$* t) {
	this->$Sink$OfDouble::accept(t);
}

$Consumer* ReduceOps$11ReducingSink::andThen($Consumer* after) {
	 return this->$ReduceOps$AccumulatingSink::andThen(after);
}

int32_t ReduceOps$11ReducingSink::hashCode() {
	 return this->$ReduceOps$AccumulatingSink::hashCode();
}

bool ReduceOps$11ReducingSink::equals(Object$* obj) {
	 return this->$ReduceOps$AccumulatingSink::equals(obj);
}

$Object* ReduceOps$11ReducingSink::clone() {
	 return this->$ReduceOps$AccumulatingSink::clone();
}

$String* ReduceOps$11ReducingSink::toString() {
	 return this->$ReduceOps$AccumulatingSink::toString();
}

void ReduceOps$11ReducingSink::finalize() {
	this->$ReduceOps$AccumulatingSink::finalize();
}

void ReduceOps$11ReducingSink::init$(double val$identity, $DoubleBinaryOperator* val$operator) {
	this->val$identity = val$identity;
	$set(this, val$operator, val$operator);
}

void ReduceOps$11ReducingSink::begin(int64_t size) {
	this->state = this->val$identity;
}

void ReduceOps$11ReducingSink::accept(double t) {
	this->state = $nc(this->val$operator)->applyAsDouble(this->state, t);
}

$Object* ReduceOps$11ReducingSink::get() {
	return $of($Double::valueOf(this->state));
}

void ReduceOps$11ReducingSink::combine(ReduceOps$11ReducingSink* other) {
	accept($nc(other)->state);
}

void ReduceOps$11ReducingSink::combine($ReduceOps$AccumulatingSink* other) {
	this->combine($cast(ReduceOps$11ReducingSink, other));
}

ReduceOps$11ReducingSink::ReduceOps$11ReducingSink() {
}

$Class* ReduceOps$11ReducingSink::load$($String* name, bool initialize) {
	$loadClass(ReduceOps$11ReducingSink, name, initialize, &_ReduceOps$11ReducingSink_ClassInfo_, allocate$ReduceOps$11ReducingSink);
	return class$;
}

$Class* ReduceOps$11ReducingSink::class$ = nullptr;

		} // stream
	} // util
} // java