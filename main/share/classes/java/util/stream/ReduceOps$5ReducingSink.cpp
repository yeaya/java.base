#include <java/util/stream/ReduceOps$5ReducingSink.h>

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
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Consumer = ::java::util::function::Consumer;
using $IntBinaryOperator = ::java::util::function::IntBinaryOperator;
using $ReduceOps$AccumulatingSink = ::java::util::stream::ReduceOps$AccumulatingSink;
using $Sink$OfInt = ::java::util::stream::Sink$OfInt;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _ReduceOps$5ReducingSink_FieldInfo_[] = {
	{"val$operator", "Ljava/util/function/IntBinaryOperator;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$5ReducingSink, val$operator)},
	{"val$identity", "I", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$5ReducingSink, val$identity)},
	{"state", "I", nullptr, $PRIVATE, $field(ReduceOps$5ReducingSink, state)},
	{}
};

$MethodInfo _ReduceOps$5ReducingSink_MethodInfo_[] = {
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
	{"<init>", "(ILjava/util/function/IntBinaryOperator;)V", "()V", 0, $method(ReduceOps$5ReducingSink, init$, void, int32_t, $IntBinaryOperator*)},
	{"accept", "(I)V", nullptr, $PUBLIC, $virtualMethod(ReduceOps$5ReducingSink, accept, void, int32_t)},
	{"begin", "(J)V", nullptr, $PUBLIC, $virtualMethod(ReduceOps$5ReducingSink, begin, void, int64_t)},
	{"combine", "(Ljava/util/stream/ReduceOps$5ReducingSink;)V", nullptr, $PUBLIC, $virtualMethod(ReduceOps$5ReducingSink, combine, void, ReduceOps$5ReducingSink*)},
	{"combine", "(Ljava/util/stream/ReduceOps$AccumulatingSink;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ReduceOps$5ReducingSink, combine, void, $ReduceOps$AccumulatingSink*)},
	{"get", "()Ljava/lang/Integer;", nullptr, $PUBLIC, $virtualMethod(ReduceOps$5ReducingSink, get, $Object*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ReduceOps$5ReducingSink_EnclosingMethodInfo_ = {
	"java.util.stream.ReduceOps",
	"makeInt",
	"(ILjava/util/function/IntBinaryOperator;)Ljava/util/stream/TerminalOp;"
};

$InnerClassInfo _ReduceOps$5ReducingSink_InnerClassesInfo_[] = {
	{"java.util.stream.ReduceOps$5ReducingSink", nullptr, "ReducingSink", 0},
	{"java.util.stream.ReduceOps$AccumulatingSink", "java.util.stream.ReduceOps", "AccumulatingSink", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.Sink$OfInt", "java.util.stream.Sink", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ReduceOps$5ReducingSink_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.ReduceOps$5ReducingSink",
	"java.lang.Object",
	"java.util.stream.ReduceOps$AccumulatingSink,java.util.stream.Sink$OfInt",
	_ReduceOps$5ReducingSink_FieldInfo_,
	_ReduceOps$5ReducingSink_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/stream/ReduceOps$AccumulatingSink<Ljava/lang/Integer;Ljava/lang/Integer;Ljava/util/stream/ReduceOps$5ReducingSink;>;Ljava/util/stream/Sink$OfInt;",
	&_ReduceOps$5ReducingSink_EnclosingMethodInfo_,
	_ReduceOps$5ReducingSink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ReduceOps"
};

$Object* allocate$ReduceOps$5ReducingSink($Class* clazz) {
	return $of($alloc(ReduceOps$5ReducingSink));
}

void ReduceOps$5ReducingSink::end() {
	this->$ReduceOps$AccumulatingSink::end();
}

bool ReduceOps$5ReducingSink::cancellationRequested() {
	 return this->$ReduceOps$AccumulatingSink::cancellationRequested();
}

void ReduceOps$5ReducingSink::accept(int64_t value) {
	this->$ReduceOps$AccumulatingSink::accept(value);
}

void ReduceOps$5ReducingSink::accept(double value) {
	this->$ReduceOps$AccumulatingSink::accept(value);
}

void ReduceOps$5ReducingSink::accept(Object$* t) {
	this->$Sink$OfInt::accept(t);
}

$Consumer* ReduceOps$5ReducingSink::andThen($Consumer* after) {
	 return this->$ReduceOps$AccumulatingSink::andThen(after);
}

int32_t ReduceOps$5ReducingSink::hashCode() {
	 return this->$ReduceOps$AccumulatingSink::hashCode();
}

bool ReduceOps$5ReducingSink::equals(Object$* obj) {
	 return this->$ReduceOps$AccumulatingSink::equals(obj);
}

$Object* ReduceOps$5ReducingSink::clone() {
	 return this->$ReduceOps$AccumulatingSink::clone();
}

$String* ReduceOps$5ReducingSink::toString() {
	 return this->$ReduceOps$AccumulatingSink::toString();
}

void ReduceOps$5ReducingSink::finalize() {
	this->$ReduceOps$AccumulatingSink::finalize();
}

void ReduceOps$5ReducingSink::init$(int32_t val$identity, $IntBinaryOperator* val$operator) {
	this->val$identity = val$identity;
	$set(this, val$operator, val$operator);
}

void ReduceOps$5ReducingSink::begin(int64_t size) {
	this->state = this->val$identity;
}

void ReduceOps$5ReducingSink::accept(int32_t t) {
	this->state = $nc(this->val$operator)->applyAsInt(this->state, t);
}

$Object* ReduceOps$5ReducingSink::get() {
	return $of($Integer::valueOf(this->state));
}

void ReduceOps$5ReducingSink::combine(ReduceOps$5ReducingSink* other) {
	accept($nc(other)->state);
}

void ReduceOps$5ReducingSink::combine($ReduceOps$AccumulatingSink* other) {
	this->combine($cast(ReduceOps$5ReducingSink, other));
}

ReduceOps$5ReducingSink::ReduceOps$5ReducingSink() {
}

$Class* ReduceOps$5ReducingSink::load$($String* name, bool initialize) {
	$loadClass(ReduceOps$5ReducingSink, name, initialize, &_ReduceOps$5ReducingSink_ClassInfo_, allocate$ReduceOps$5ReducingSink);
	return class$;
}

$Class* ReduceOps$5ReducingSink::class$ = nullptr;

		} // stream
	} // util
} // java