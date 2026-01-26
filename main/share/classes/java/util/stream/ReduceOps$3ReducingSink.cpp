#include <java/util/stream/ReduceOps$3ReducingSink.h>

#include <java/util/function/BiConsumer.h>
#include <java/util/function/BinaryOperator.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/ReduceOps$AccumulatingSink.h>
#include <java/util/stream/ReduceOps$Box.h>
#include <java/util/stream/ReduceOps.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BiConsumer = ::java::util::function::BiConsumer;
using $BinaryOperator = ::java::util::function::BinaryOperator;
using $Supplier = ::java::util::function::Supplier;
using $ReduceOps$AccumulatingSink = ::java::util::stream::ReduceOps$AccumulatingSink;
using $ReduceOps$Box = ::java::util::stream::ReduceOps$Box;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _ReduceOps$3ReducingSink_FieldInfo_[] = {
	{"val$combiner", "Ljava/util/function/BinaryOperator;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$3ReducingSink, val$combiner)},
	{"val$accumulator", "Ljava/util/function/BiConsumer;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$3ReducingSink, val$accumulator)},
	{"val$supplier", "Ljava/util/function/Supplier;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$3ReducingSink, val$supplier)},
	{}
};

$MethodInfo _ReduceOps$3ReducingSink_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/function/Supplier;Ljava/util/function/BiConsumer;Ljava/util/function/BinaryOperator;)V", "()V", 0, $method(ReduceOps$3ReducingSink, init$, void, $Supplier*, $BiConsumer*, $BinaryOperator*)},
	{"accept", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC, $virtualMethod(ReduceOps$3ReducingSink, accept, void, Object$*)},
	{"begin", "(J)V", nullptr, $PUBLIC, $virtualMethod(ReduceOps$3ReducingSink, begin, void, int64_t)},
	{"combine", "(Ljava/util/stream/ReduceOps$3ReducingSink;)V", nullptr, $PUBLIC, $virtualMethod(ReduceOps$3ReducingSink, combine, void, ReduceOps$3ReducingSink*)},
	{"combine", "(Ljava/util/stream/ReduceOps$AccumulatingSink;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ReduceOps$3ReducingSink, combine, void, $ReduceOps$AccumulatingSink*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ReduceOps$3ReducingSink_EnclosingMethodInfo_ = {
	"java.util.stream.ReduceOps",
	"makeRef",
	"(Ljava/util/stream/Collector;)Ljava/util/stream/TerminalOp;"
};

$InnerClassInfo _ReduceOps$3ReducingSink_InnerClassesInfo_[] = {
	{"java.util.stream.ReduceOps$3ReducingSink", nullptr, "ReducingSink", 0},
	{"java.util.stream.ReduceOps$Box", "java.util.stream.ReduceOps", "Box", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.ReduceOps$AccumulatingSink", "java.util.stream.ReduceOps", "AccumulatingSink", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ReduceOps$3ReducingSink_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.ReduceOps$3ReducingSink",
	"java.util.stream.ReduceOps$Box",
	"java.util.stream.ReduceOps$AccumulatingSink",
	_ReduceOps$3ReducingSink_FieldInfo_,
	_ReduceOps$3ReducingSink_MethodInfo_,
	"Ljava/util/stream/ReduceOps$Box<TI;>;Ljava/util/stream/ReduceOps$AccumulatingSink<TT;TI;Ljava/util/stream/ReduceOps$3ReducingSink;>;",
	&_ReduceOps$3ReducingSink_EnclosingMethodInfo_,
	_ReduceOps$3ReducingSink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ReduceOps"
};

$Object* allocate$ReduceOps$3ReducingSink($Class* clazz) {
	return $of($alloc(ReduceOps$3ReducingSink));
}

$Object* ReduceOps$3ReducingSink::get() {
	 return this->$ReduceOps$Box::get();
}

int32_t ReduceOps$3ReducingSink::hashCode() {
	 return this->$ReduceOps$Box::hashCode();
}

bool ReduceOps$3ReducingSink::equals(Object$* obj) {
	 return this->$ReduceOps$Box::equals(obj);
}

$Object* ReduceOps$3ReducingSink::clone() {
	 return this->$ReduceOps$Box::clone();
}

$String* ReduceOps$3ReducingSink::toString() {
	 return this->$ReduceOps$Box::toString();
}

void ReduceOps$3ReducingSink::finalize() {
	this->$ReduceOps$Box::finalize();
}

void ReduceOps$3ReducingSink::init$($Supplier* val$supplier, $BiConsumer* val$accumulator, $BinaryOperator* val$combiner) {
	$set(this, val$supplier, val$supplier);
	$set(this, val$accumulator, val$accumulator);
	$set(this, val$combiner, val$combiner);
	$ReduceOps$Box::init$();
}

void ReduceOps$3ReducingSink::begin(int64_t size) {
	$set(this, state, $nc(this->val$supplier)->get());
}

void ReduceOps$3ReducingSink::accept(Object$* t) {
	$nc(this->val$accumulator)->accept(this->state, t);
}

void ReduceOps$3ReducingSink::combine(ReduceOps$3ReducingSink* other) {
	$set(this, state, $nc(this->val$combiner)->apply(this->state, $nc(other)->state));
}

void ReduceOps$3ReducingSink::combine($ReduceOps$AccumulatingSink* other) {
	this->combine($cast(ReduceOps$3ReducingSink, other));
}

ReduceOps$3ReducingSink::ReduceOps$3ReducingSink() {
}

$Class* ReduceOps$3ReducingSink::load$($String* name, bool initialize) {
	$loadClass(ReduceOps$3ReducingSink, name, initialize, &_ReduceOps$3ReducingSink_ClassInfo_, allocate$ReduceOps$3ReducingSink);
	return class$;
}

$Class* ReduceOps$3ReducingSink::class$ = nullptr;

		} // stream
	} // util
} // java