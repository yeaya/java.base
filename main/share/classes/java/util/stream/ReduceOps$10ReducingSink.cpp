#include <java/util/stream/ReduceOps$10ReducingSink.h>

#include <java/util/function/BinaryOperator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/ObjLongConsumer.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/ReduceOps$AccumulatingSink.h>
#include <java/util/stream/ReduceOps$Box.h>
#include <java/util/stream/ReduceOps.h>
#include <java/util/stream/Sink$OfLong.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BiFunction = ::java::util::function::BiFunction;
using $BinaryOperator = ::java::util::function::BinaryOperator;
using $Consumer = ::java::util::function::Consumer;
using $ObjLongConsumer = ::java::util::function::ObjLongConsumer;
using $Supplier = ::java::util::function::Supplier;
using $ReduceOps = ::java::util::stream::ReduceOps;
using $ReduceOps$AccumulatingSink = ::java::util::stream::ReduceOps$AccumulatingSink;
using $ReduceOps$Box = ::java::util::stream::ReduceOps$Box;
using $Sink$OfLong = ::java::util::stream::Sink$OfLong;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _ReduceOps$10ReducingSink_FieldInfo_[] = {
	{"val$combiner", "Ljava/util/function/BinaryOperator;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$10ReducingSink, val$combiner)},
	{"val$accumulator", "Ljava/util/function/ObjLongConsumer;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$10ReducingSink, val$accumulator)},
	{"val$supplier", "Ljava/util/function/Supplier;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$10ReducingSink, val$supplier)},
	{}
};

$MethodInfo _ReduceOps$10ReducingSink_MethodInfo_[] = {
	{"*accept", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
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
	{"<init>", "(Ljava/util/function/Supplier;Ljava/util/function/ObjLongConsumer;Ljava/util/function/BinaryOperator;)V", "()V", 0, $method(static_cast<void(ReduceOps$10ReducingSink::*)($Supplier*,$ObjLongConsumer*,$BinaryOperator*)>(&ReduceOps$10ReducingSink::init$))},
	{"accept", "(J)V", nullptr, $PUBLIC},
	{"begin", "(J)V", nullptr, $PUBLIC},
	{"combine", "(Ljava/util/stream/ReduceOps$10ReducingSink;)V", nullptr, $PUBLIC},
	{"combine", "(Ljava/util/stream/ReduceOps$AccumulatingSink;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ReduceOps$10ReducingSink_EnclosingMethodInfo_ = {
	"java.util.stream.ReduceOps",
	"makeLong",
	"(Ljava/util/function/Supplier;Ljava/util/function/ObjLongConsumer;Ljava/util/function/BinaryOperator;)Ljava/util/stream/TerminalOp;"
};

$InnerClassInfo _ReduceOps$10ReducingSink_InnerClassesInfo_[] = {
	{"java.util.stream.ReduceOps$10ReducingSink", nullptr, "ReducingSink", 0},
	{"java.util.stream.ReduceOps$Box", "java.util.stream.ReduceOps", "Box", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.ReduceOps$AccumulatingSink", "java.util.stream.ReduceOps", "AccumulatingSink", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.Sink$OfLong", "java.util.stream.Sink", "OfLong", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ReduceOps$10ReducingSink_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.ReduceOps$10ReducingSink",
	"java.util.stream.ReduceOps$Box",
	"java.util.stream.ReduceOps$AccumulatingSink,java.util.stream.Sink$OfLong",
	_ReduceOps$10ReducingSink_FieldInfo_,
	_ReduceOps$10ReducingSink_MethodInfo_,
	"Ljava/util/stream/ReduceOps$Box<TR;>;Ljava/util/stream/ReduceOps$AccumulatingSink<Ljava/lang/Long;TR;Ljava/util/stream/ReduceOps$10ReducingSink;>;Ljava/util/stream/Sink$OfLong;",
	&_ReduceOps$10ReducingSink_EnclosingMethodInfo_,
	_ReduceOps$10ReducingSink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ReduceOps"
};

$Object* allocate$ReduceOps$10ReducingSink($Class* clazz) {
	return $of($alloc(ReduceOps$10ReducingSink));
}

$Object* ReduceOps$10ReducingSink::get() {
	 return this->$ReduceOps$Box::get();
}

int32_t ReduceOps$10ReducingSink::hashCode() {
	 return this->$ReduceOps$Box::hashCode();
}

bool ReduceOps$10ReducingSink::equals(Object$* obj) {
	 return this->$ReduceOps$Box::equals(obj);
}

$Object* ReduceOps$10ReducingSink::clone() {
	 return this->$ReduceOps$Box::clone();
}

$String* ReduceOps$10ReducingSink::toString() {
	 return this->$ReduceOps$Box::toString();
}

void ReduceOps$10ReducingSink::finalize() {
	this->$ReduceOps$Box::finalize();
}

void ReduceOps$10ReducingSink::end() {
	this->$ReduceOps$AccumulatingSink::end();
}

bool ReduceOps$10ReducingSink::cancellationRequested() {
	 return this->$ReduceOps$AccumulatingSink::cancellationRequested();
}

void ReduceOps$10ReducingSink::accept(int32_t value) {
	this->$ReduceOps$AccumulatingSink::accept(value);
}

void ReduceOps$10ReducingSink::accept(double value) {
	this->$ReduceOps$AccumulatingSink::accept(value);
}

void ReduceOps$10ReducingSink::accept(Object$* t) {
	this->$Sink$OfLong::accept(t);
}

$Consumer* ReduceOps$10ReducingSink::andThen($Consumer* after) {
	 return this->$ReduceOps$AccumulatingSink::andThen(after);
}

void ReduceOps$10ReducingSink::init$($Supplier* val$supplier, $ObjLongConsumer* val$accumulator, $BinaryOperator* val$combiner) {
	$set(this, val$supplier, val$supplier);
	$set(this, val$accumulator, val$accumulator);
	$set(this, val$combiner, val$combiner);
	$ReduceOps$Box::init$();
}

void ReduceOps$10ReducingSink::begin(int64_t size) {
	$set(this, state, $nc(this->val$supplier)->get());
}

void ReduceOps$10ReducingSink::accept(int64_t t) {
	$nc(this->val$accumulator)->accept(this->state, t);
}

void ReduceOps$10ReducingSink::combine(ReduceOps$10ReducingSink* other) {
	$set(this, state, $nc(this->val$combiner)->apply(this->state, $nc(other)->state));
}

void ReduceOps$10ReducingSink::combine($ReduceOps$AccumulatingSink* other) {
	this->combine($cast(ReduceOps$10ReducingSink, other));
}

ReduceOps$10ReducingSink::ReduceOps$10ReducingSink() {
}

$Class* ReduceOps$10ReducingSink::load$($String* name, bool initialize) {
	$loadClass(ReduceOps$10ReducingSink, name, initialize, &_ReduceOps$10ReducingSink_ClassInfo_, allocate$ReduceOps$10ReducingSink);
	return class$;
}

$Class* ReduceOps$10ReducingSink::class$ = nullptr;

		} // stream
	} // util
} // java