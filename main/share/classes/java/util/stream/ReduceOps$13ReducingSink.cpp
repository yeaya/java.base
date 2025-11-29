#include <java/util/stream/ReduceOps$13ReducingSink.h>

#include <java/util/function/BinaryOperator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/ObjDoubleConsumer.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/ReduceOps$AccumulatingSink.h>
#include <java/util/stream/ReduceOps$Box.h>
#include <java/util/stream/ReduceOps.h>
#include <java/util/stream/Sink$OfDouble.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BinaryOperator = ::java::util::function::BinaryOperator;
using $Consumer = ::java::util::function::Consumer;
using $ObjDoubleConsumer = ::java::util::function::ObjDoubleConsumer;
using $Supplier = ::java::util::function::Supplier;
using $ReduceOps$AccumulatingSink = ::java::util::stream::ReduceOps$AccumulatingSink;
using $ReduceOps$Box = ::java::util::stream::ReduceOps$Box;
using $Sink$OfDouble = ::java::util::stream::Sink$OfDouble;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _ReduceOps$13ReducingSink_FieldInfo_[] = {
	{"val$combiner", "Ljava/util/function/BinaryOperator;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$13ReducingSink, val$combiner)},
	{"val$accumulator", "Ljava/util/function/ObjDoubleConsumer;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$13ReducingSink, val$accumulator)},
	{"val$supplier", "Ljava/util/function/Supplier;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$13ReducingSink, val$supplier)},
	{}
};

$MethodInfo _ReduceOps$13ReducingSink_MethodInfo_[] = {
	{"*accept", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*accept", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*andThen", "(Ljava/util/function/Consumer;)Ljava/util/function/Consumer;", nullptr, $PUBLIC | $ABSTRACT},
	{"*cancellationRequested", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*end", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/function/Supplier;Ljava/util/function/ObjDoubleConsumer;Ljava/util/function/BinaryOperator;)V", "()V", 0, $method(static_cast<void(ReduceOps$13ReducingSink::*)($Supplier*,$ObjDoubleConsumer*,$BinaryOperator*)>(&ReduceOps$13ReducingSink::init$))},
	{"accept", "(D)V", nullptr, $PUBLIC},
	{"begin", "(J)V", nullptr, $PUBLIC},
	{"combine", "(Ljava/util/stream/ReduceOps$13ReducingSink;)V", nullptr, $PUBLIC},
	{"combine", "(Ljava/util/stream/ReduceOps$AccumulatingSink;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ReduceOps$13ReducingSink_EnclosingMethodInfo_ = {
	"java.util.stream.ReduceOps",
	"makeDouble",
	"(Ljava/util/function/Supplier;Ljava/util/function/ObjDoubleConsumer;Ljava/util/function/BinaryOperator;)Ljava/util/stream/TerminalOp;"
};

$InnerClassInfo _ReduceOps$13ReducingSink_InnerClassesInfo_[] = {
	{"java.util.stream.ReduceOps$13ReducingSink", nullptr, "ReducingSink", 0},
	{"java.util.stream.ReduceOps$Box", "java.util.stream.ReduceOps", "Box", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.ReduceOps$AccumulatingSink", "java.util.stream.ReduceOps", "AccumulatingSink", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.Sink$OfDouble", "java.util.stream.Sink", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ReduceOps$13ReducingSink_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.ReduceOps$13ReducingSink",
	"java.util.stream.ReduceOps$Box",
	"java.util.stream.ReduceOps$AccumulatingSink,java.util.stream.Sink$OfDouble",
	_ReduceOps$13ReducingSink_FieldInfo_,
	_ReduceOps$13ReducingSink_MethodInfo_,
	"Ljava/util/stream/ReduceOps$Box<TR;>;Ljava/util/stream/ReduceOps$AccumulatingSink<Ljava/lang/Double;TR;Ljava/util/stream/ReduceOps$13ReducingSink;>;Ljava/util/stream/Sink$OfDouble;",
	&_ReduceOps$13ReducingSink_EnclosingMethodInfo_,
	_ReduceOps$13ReducingSink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ReduceOps"
};

$Object* allocate$ReduceOps$13ReducingSink($Class* clazz) {
	return $of($alloc(ReduceOps$13ReducingSink));
}

$Object* ReduceOps$13ReducingSink::get() {
	 return this->$ReduceOps$Box::get();
}

int32_t ReduceOps$13ReducingSink::hashCode() {
	 return this->$ReduceOps$Box::hashCode();
}

bool ReduceOps$13ReducingSink::equals(Object$* obj) {
	 return this->$ReduceOps$Box::equals(obj);
}

$Object* ReduceOps$13ReducingSink::clone() {
	 return this->$ReduceOps$Box::clone();
}

$String* ReduceOps$13ReducingSink::toString() {
	 return this->$ReduceOps$Box::toString();
}

void ReduceOps$13ReducingSink::finalize() {
	this->$ReduceOps$Box::finalize();
}

void ReduceOps$13ReducingSink::end() {
	this->$ReduceOps$AccumulatingSink::end();
}

bool ReduceOps$13ReducingSink::cancellationRequested() {
	 return this->$ReduceOps$AccumulatingSink::cancellationRequested();
}

void ReduceOps$13ReducingSink::accept(int32_t value) {
	this->$ReduceOps$AccumulatingSink::accept(value);
}

void ReduceOps$13ReducingSink::accept(int64_t value) {
	this->$ReduceOps$AccumulatingSink::accept(value);
}

void ReduceOps$13ReducingSink::accept(Object$* t) {
	this->$Sink$OfDouble::accept(t);
}

$Consumer* ReduceOps$13ReducingSink::andThen($Consumer* after) {
	 return this->$ReduceOps$AccumulatingSink::andThen(after);
}

void ReduceOps$13ReducingSink::init$($Supplier* val$supplier, $ObjDoubleConsumer* val$accumulator, $BinaryOperator* val$combiner) {
	$set(this, val$supplier, val$supplier);
	$set(this, val$accumulator, val$accumulator);
	$set(this, val$combiner, val$combiner);
	$ReduceOps$Box::init$();
}

void ReduceOps$13ReducingSink::begin(int64_t size) {
	$set(this, state, $nc(this->val$supplier)->get());
}

void ReduceOps$13ReducingSink::accept(double t) {
	$nc(this->val$accumulator)->accept(this->state, t);
}

void ReduceOps$13ReducingSink::combine(ReduceOps$13ReducingSink* other) {
	$set(this, state, $nc(this->val$combiner)->apply(this->state, $nc(other)->state));
}

void ReduceOps$13ReducingSink::combine($ReduceOps$AccumulatingSink* other) {
	this->combine($cast(ReduceOps$13ReducingSink, other));
}

ReduceOps$13ReducingSink::ReduceOps$13ReducingSink() {
}

$Class* ReduceOps$13ReducingSink::load$($String* name, bool initialize) {
	$loadClass(ReduceOps$13ReducingSink, name, initialize, &_ReduceOps$13ReducingSink_ClassInfo_, allocate$ReduceOps$13ReducingSink);
	return class$;
}

$Class* ReduceOps$13ReducingSink::class$ = nullptr;

		} // stream
	} // util
} // java