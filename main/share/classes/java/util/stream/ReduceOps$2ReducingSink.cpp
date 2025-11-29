#include <java/util/stream/ReduceOps$2ReducingSink.h>

#include <java/util/Optional.h>
#include <java/util/function/BinaryOperator.h>
#include <java/util/stream/ReduceOps$AccumulatingSink.h>
#include <java/util/stream/ReduceOps.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Optional = ::java::util::Optional;
using $BinaryOperator = ::java::util::function::BinaryOperator;
using $ReduceOps$AccumulatingSink = ::java::util::stream::ReduceOps$AccumulatingSink;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _ReduceOps$2ReducingSink_FieldInfo_[] = {
	{"val$operator", "Ljava/util/function/BinaryOperator;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$2ReducingSink, val$operator)},
	{"empty", "Z", nullptr, $PRIVATE, $field(ReduceOps$2ReducingSink, empty)},
	{"state", "Ljava/lang/Object;", "TT;", $PRIVATE, $field(ReduceOps$2ReducingSink, state)},
	{}
};

$MethodInfo _ReduceOps$2ReducingSink_MethodInfo_[] = {
	{"<init>", "(Ljava/util/function/BinaryOperator;)V", "()V", 0, $method(static_cast<void(ReduceOps$2ReducingSink::*)($BinaryOperator*)>(&ReduceOps$2ReducingSink::init$))},
	{"accept", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC},
	{"begin", "(J)V", nullptr, $PUBLIC},
	{"combine", "(Ljava/util/stream/ReduceOps$2ReducingSink;)V", nullptr, $PUBLIC},
	{"combine", "(Ljava/util/stream/ReduceOps$AccumulatingSink;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"get", "()Ljava/util/Optional;", "()Ljava/util/Optional<TT;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _ReduceOps$2ReducingSink_EnclosingMethodInfo_ = {
	"java.util.stream.ReduceOps",
	"makeRef",
	"(Ljava/util/function/BinaryOperator;)Ljava/util/stream/TerminalOp;"
};

$InnerClassInfo _ReduceOps$2ReducingSink_InnerClassesInfo_[] = {
	{"java.util.stream.ReduceOps$2ReducingSink", nullptr, "ReducingSink", 0},
	{"java.util.stream.ReduceOps$AccumulatingSink", "java.util.stream.ReduceOps", "AccumulatingSink", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ReduceOps$2ReducingSink_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.ReduceOps$2ReducingSink",
	"java.lang.Object",
	"java.util.stream.ReduceOps$AccumulatingSink",
	_ReduceOps$2ReducingSink_FieldInfo_,
	_ReduceOps$2ReducingSink_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/stream/ReduceOps$AccumulatingSink<TT;Ljava/util/Optional<TT;>;Ljava/util/stream/ReduceOps$2ReducingSink;>;",
	&_ReduceOps$2ReducingSink_EnclosingMethodInfo_,
	_ReduceOps$2ReducingSink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ReduceOps"
};

$Object* allocate$ReduceOps$2ReducingSink($Class* clazz) {
	return $of($alloc(ReduceOps$2ReducingSink));
}

void ReduceOps$2ReducingSink::init$($BinaryOperator* val$operator) {
	$set(this, val$operator, val$operator);
}

void ReduceOps$2ReducingSink::begin(int64_t size) {
	this->empty = true;
	$set(this, state, nullptr);
}

void ReduceOps$2ReducingSink::accept(Object$* t) {
	if (this->empty) {
		this->empty = false;
		$set(this, state, t);
	} else {
		$set(this, state, $nc(this->val$operator)->apply(this->state, t));
	}
}

$Object* ReduceOps$2ReducingSink::get() {
	return $of(this->empty ? $Optional::empty() : $Optional::of(this->state));
}

void ReduceOps$2ReducingSink::combine(ReduceOps$2ReducingSink* other) {
	if (!$nc(other)->empty) {
		accept(other->state);
	}
}

void ReduceOps$2ReducingSink::combine($ReduceOps$AccumulatingSink* other) {
	this->combine($cast(ReduceOps$2ReducingSink, other));
}

ReduceOps$2ReducingSink::ReduceOps$2ReducingSink() {
}

$Class* ReduceOps$2ReducingSink::load$($String* name, bool initialize) {
	$loadClass(ReduceOps$2ReducingSink, name, initialize, &_ReduceOps$2ReducingSink_ClassInfo_, allocate$ReduceOps$2ReducingSink);
	return class$;
}

$Class* ReduceOps$2ReducingSink::class$ = nullptr;

		} // stream
	} // util
} // java