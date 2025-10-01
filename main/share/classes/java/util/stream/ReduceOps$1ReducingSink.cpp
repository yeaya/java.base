#include <java/util/stream/ReduceOps$1ReducingSink.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/BinaryOperator.h>
#include <java/util/stream/ReduceOps$AccumulatingSink.h>
#include <java/util/stream/ReduceOps$Box.h>
#include <java/util/stream/ReduceOps.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BiFunction = ::java::util::function::BiFunction;
using $BinaryOperator = ::java::util::function::BinaryOperator;
using $ReduceOps = ::java::util::stream::ReduceOps;
using $ReduceOps$AccumulatingSink = ::java::util::stream::ReduceOps$AccumulatingSink;
using $ReduceOps$Box = ::java::util::stream::ReduceOps$Box;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _ReduceOps$1ReducingSink_FieldInfo_[] = {
	{"val$combiner", "Ljava/util/function/BinaryOperator;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$1ReducingSink, val$combiner)},
	{"val$reducer", "Ljava/util/function/BiFunction;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$1ReducingSink, val$reducer)},
	{"val$seed", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$1ReducingSink, val$seed)},
	{}
};

$MethodInfo _ReduceOps$1ReducingSink_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/Object;Ljava/util/function/BiFunction;Ljava/util/function/BinaryOperator;)V", "()V", 0, $method(static_cast<void(ReduceOps$1ReducingSink::*)(Object$*,$BiFunction*,$BinaryOperator*)>(&ReduceOps$1ReducingSink::init$))},
	{"accept", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC},
	{"begin", "(J)V", nullptr, $PUBLIC},
	{"combine", "(Ljava/util/stream/ReduceOps$1ReducingSink;)V", nullptr, $PUBLIC},
	{"combine", "(Ljava/util/stream/ReduceOps$AccumulatingSink;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ReduceOps$1ReducingSink_EnclosingMethodInfo_ = {
	"java.util.stream.ReduceOps",
	"makeRef",
	"(Ljava/lang/Object;Ljava/util/function/BiFunction;Ljava/util/function/BinaryOperator;)Ljava/util/stream/TerminalOp;"
};

$InnerClassInfo _ReduceOps$1ReducingSink_InnerClassesInfo_[] = {
	{"java.util.stream.ReduceOps$1ReducingSink", nullptr, "ReducingSink", 0},
	{"java.util.stream.ReduceOps$Box", "java.util.stream.ReduceOps", "Box", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.ReduceOps$AccumulatingSink", "java.util.stream.ReduceOps", "AccumulatingSink", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ReduceOps$1ReducingSink_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.ReduceOps$1ReducingSink",
	"java.util.stream.ReduceOps$Box",
	"java.util.stream.ReduceOps$AccumulatingSink",
	_ReduceOps$1ReducingSink_FieldInfo_,
	_ReduceOps$1ReducingSink_MethodInfo_,
	"Ljava/util/stream/ReduceOps$Box<TU;>;Ljava/util/stream/ReduceOps$AccumulatingSink<TT;TU;Ljava/util/stream/ReduceOps$1ReducingSink;>;",
	&_ReduceOps$1ReducingSink_EnclosingMethodInfo_,
	_ReduceOps$1ReducingSink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ReduceOps"
};

$Object* allocate$ReduceOps$1ReducingSink($Class* clazz) {
	return $of($alloc(ReduceOps$1ReducingSink));
}

$Object* ReduceOps$1ReducingSink::get() {
	 return this->$ReduceOps$Box::get();
}

int32_t ReduceOps$1ReducingSink::hashCode() {
	 return this->$ReduceOps$Box::hashCode();
}

bool ReduceOps$1ReducingSink::equals(Object$* obj) {
	 return this->$ReduceOps$Box::equals(obj);
}

$Object* ReduceOps$1ReducingSink::clone() {
	 return this->$ReduceOps$Box::clone();
}

$String* ReduceOps$1ReducingSink::toString() {
	 return this->$ReduceOps$Box::toString();
}

void ReduceOps$1ReducingSink::finalize() {
	this->$ReduceOps$Box::finalize();
}

void ReduceOps$1ReducingSink::init$(Object$* val$seed, $BiFunction* val$reducer, $BinaryOperator* val$combiner) {
	$set(this, val$seed, val$seed);
	$set(this, val$reducer, val$reducer);
	$set(this, val$combiner, val$combiner);
	$ReduceOps$Box::init$();
}

void ReduceOps$1ReducingSink::begin(int64_t size) {
	$set(this, state, this->val$seed);
}

void ReduceOps$1ReducingSink::accept(Object$* t) {
	$set(this, state, $nc(this->val$reducer)->apply(this->state, t));
}

void ReduceOps$1ReducingSink::combine(ReduceOps$1ReducingSink* other) {
	$set(this, state, $nc(this->val$combiner)->apply(this->state, $nc(other)->state));
}

void ReduceOps$1ReducingSink::combine($ReduceOps$AccumulatingSink* other) {
	this->combine($cast(ReduceOps$1ReducingSink, other));
}

ReduceOps$1ReducingSink::ReduceOps$1ReducingSink() {
}

$Class* ReduceOps$1ReducingSink::load$($String* name, bool initialize) {
	$loadClass(ReduceOps$1ReducingSink, name, initialize, &_ReduceOps$1ReducingSink_ClassInfo_, allocate$ReduceOps$1ReducingSink);
	return class$;
}

$Class* ReduceOps$1ReducingSink::class$ = nullptr;

		} // stream
	} // util
} // java