#include <java/util/stream/ReduceOps$7ReducingSink.h>

#include <java/util/function/BinaryOperator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/ObjIntConsumer.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/ReduceOps$AccumulatingSink.h>
#include <java/util/stream/ReduceOps$Box.h>
#include <java/util/stream/ReduceOps.h>
#include <java/util/stream/Sink$OfInt.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BinaryOperator = ::java::util::function::BinaryOperator;
using $Consumer = ::java::util::function::Consumer;
using $ObjIntConsumer = ::java::util::function::ObjIntConsumer;
using $Supplier = ::java::util::function::Supplier;
using $ReduceOps$AccumulatingSink = ::java::util::stream::ReduceOps$AccumulatingSink;
using $ReduceOps$Box = ::java::util::stream::ReduceOps$Box;
using $Sink$OfInt = ::java::util::stream::Sink$OfInt;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _ReduceOps$7ReducingSink_FieldInfo_[] = {
	{"val$combiner", "Ljava/util/function/BinaryOperator;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$7ReducingSink, val$combiner)},
	{"val$accumulator", "Ljava/util/function/ObjIntConsumer;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$7ReducingSink, val$accumulator)},
	{"val$supplier", "Ljava/util/function/Supplier;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$7ReducingSink, val$supplier)},
	{}
};

$MethodInfo _ReduceOps$7ReducingSink_MethodInfo_[] = {
	{"*accept", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*accept", "(D)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*andThen", "(Ljava/util/function/Consumer;)Ljava/util/function/Consumer;", nullptr, $PUBLIC | $ABSTRACT},
	{"*cancellationRequested", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*end", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/function/Supplier;Ljava/util/function/ObjIntConsumer;Ljava/util/function/BinaryOperator;)V", "()V", 0, $method(static_cast<void(ReduceOps$7ReducingSink::*)($Supplier*,$ObjIntConsumer*,$BinaryOperator*)>(&ReduceOps$7ReducingSink::init$))},
	{"accept", "(I)V", nullptr, $PUBLIC},
	{"begin", "(J)V", nullptr, $PUBLIC},
	{"combine", "(Ljava/util/stream/ReduceOps$7ReducingSink;)V", nullptr, $PUBLIC},
	{"combine", "(Ljava/util/stream/ReduceOps$AccumulatingSink;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ReduceOps$7ReducingSink_EnclosingMethodInfo_ = {
	"java.util.stream.ReduceOps",
	"makeInt",
	"(Ljava/util/function/Supplier;Ljava/util/function/ObjIntConsumer;Ljava/util/function/BinaryOperator;)Ljava/util/stream/TerminalOp;"
};

$InnerClassInfo _ReduceOps$7ReducingSink_InnerClassesInfo_[] = {
	{"java.util.stream.ReduceOps$7ReducingSink", nullptr, "ReducingSink", 0},
	{"java.util.stream.ReduceOps$Box", "java.util.stream.ReduceOps", "Box", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.ReduceOps$AccumulatingSink", "java.util.stream.ReduceOps", "AccumulatingSink", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.Sink$OfInt", "java.util.stream.Sink", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ReduceOps$7ReducingSink_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.ReduceOps$7ReducingSink",
	"java.util.stream.ReduceOps$Box",
	"java.util.stream.ReduceOps$AccumulatingSink,java.util.stream.Sink$OfInt",
	_ReduceOps$7ReducingSink_FieldInfo_,
	_ReduceOps$7ReducingSink_MethodInfo_,
	"Ljava/util/stream/ReduceOps$Box<TR;>;Ljava/util/stream/ReduceOps$AccumulatingSink<Ljava/lang/Integer;TR;Ljava/util/stream/ReduceOps$7ReducingSink;>;Ljava/util/stream/Sink$OfInt;",
	&_ReduceOps$7ReducingSink_EnclosingMethodInfo_,
	_ReduceOps$7ReducingSink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ReduceOps"
};

$Object* allocate$ReduceOps$7ReducingSink($Class* clazz) {
	return $of($alloc(ReduceOps$7ReducingSink));
}

$Object* ReduceOps$7ReducingSink::get() {
	 return this->$ReduceOps$Box::get();
}

int32_t ReduceOps$7ReducingSink::hashCode() {
	 return this->$ReduceOps$Box::hashCode();
}

bool ReduceOps$7ReducingSink::equals(Object$* obj) {
	 return this->$ReduceOps$Box::equals(obj);
}

$Object* ReduceOps$7ReducingSink::clone() {
	 return this->$ReduceOps$Box::clone();
}

$String* ReduceOps$7ReducingSink::toString() {
	 return this->$ReduceOps$Box::toString();
}

void ReduceOps$7ReducingSink::finalize() {
	this->$ReduceOps$Box::finalize();
}

void ReduceOps$7ReducingSink::end() {
	this->$ReduceOps$AccumulatingSink::end();
}

bool ReduceOps$7ReducingSink::cancellationRequested() {
	 return this->$ReduceOps$AccumulatingSink::cancellationRequested();
}

void ReduceOps$7ReducingSink::accept(int64_t value) {
	this->$ReduceOps$AccumulatingSink::accept(value);
}

void ReduceOps$7ReducingSink::accept(double value) {
	this->$ReduceOps$AccumulatingSink::accept(value);
}

void ReduceOps$7ReducingSink::accept(Object$* t) {
	this->$Sink$OfInt::accept(t);
}

$Consumer* ReduceOps$7ReducingSink::andThen($Consumer* after) {
	 return this->$ReduceOps$AccumulatingSink::andThen(after);
}

void ReduceOps$7ReducingSink::init$($Supplier* val$supplier, $ObjIntConsumer* val$accumulator, $BinaryOperator* val$combiner) {
	$set(this, val$supplier, val$supplier);
	$set(this, val$accumulator, val$accumulator);
	$set(this, val$combiner, val$combiner);
	$ReduceOps$Box::init$();
}

void ReduceOps$7ReducingSink::begin(int64_t size) {
	$set(this, state, $nc(this->val$supplier)->get());
}

void ReduceOps$7ReducingSink::accept(int32_t t) {
	$nc(this->val$accumulator)->accept(this->state, t);
}

void ReduceOps$7ReducingSink::combine(ReduceOps$7ReducingSink* other) {
	$set(this, state, $nc(this->val$combiner)->apply(this->state, $nc(other)->state));
}

void ReduceOps$7ReducingSink::combine($ReduceOps$AccumulatingSink* other) {
	this->combine($cast(ReduceOps$7ReducingSink, other));
}

ReduceOps$7ReducingSink::ReduceOps$7ReducingSink() {
}

$Class* ReduceOps$7ReducingSink::load$($String* name, bool initialize) {
	$loadClass(ReduceOps$7ReducingSink, name, initialize, &_ReduceOps$7ReducingSink_ClassInfo_, allocate$ReduceOps$7ReducingSink);
	return class$;
}

$Class* ReduceOps$7ReducingSink::class$ = nullptr;

		} // stream
	} // util
} // java