#include <java/util/stream/ReduceOps$7.h>

#include <java/util/function/IntBinaryOperator.h>
#include <java/util/stream/ReduceOps$6ReducingSink.h>
#include <java/util/stream/ReduceOps$AccumulatingSink.h>
#include <java/util/stream/ReduceOps$ReduceOp.h>
#include <java/util/stream/ReduceOps.h>
#include <java/util/stream/StreamShape.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IntBinaryOperator = ::java::util::function::IntBinaryOperator;
using $ReduceOps$6ReducingSink = ::java::util::stream::ReduceOps$6ReducingSink;
using $ReduceOps$AccumulatingSink = ::java::util::stream::ReduceOps$AccumulatingSink;
using $ReduceOps$ReduceOp = ::java::util::stream::ReduceOps$ReduceOp;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _ReduceOps$7_FieldInfo_[] = {
	{"val$operator", "Ljava/util/function/IntBinaryOperator;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$7, val$operator)},
	{}
};

$MethodInfo _ReduceOps$7_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/StreamShape;Ljava/util/function/IntBinaryOperator;)V", nullptr, 0, $method(static_cast<void(ReduceOps$7::*)($StreamShape*,$IntBinaryOperator*)>(&ReduceOps$7::init$))},
	{"makeSink", "()Ljava/util/stream/ReduceOps$6ReducingSink;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ReduceOps$7_EnclosingMethodInfo_ = {
	"java.util.stream.ReduceOps",
	"makeInt",
	"(Ljava/util/function/IntBinaryOperator;)Ljava/util/stream/TerminalOp;"
};

$InnerClassInfo _ReduceOps$7_InnerClassesInfo_[] = {
	{"java.util.stream.ReduceOps$7", nullptr, nullptr, 0},
	{"java.util.stream.ReduceOps$ReduceOp", "java.util.stream.ReduceOps", "ReduceOp", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.ReduceOps$6ReducingSink", nullptr, "ReducingSink", 0},
	{}
};

$ClassInfo _ReduceOps$7_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.ReduceOps$7",
	"java.util.stream.ReduceOps$ReduceOp",
	nullptr,
	_ReduceOps$7_FieldInfo_,
	_ReduceOps$7_MethodInfo_,
	"Ljava/util/stream/ReduceOps$ReduceOp<Ljava/lang/Integer;Ljava/util/OptionalInt;Ljava/util/stream/ReduceOps$6ReducingSink;>;",
	&_ReduceOps$7_EnclosingMethodInfo_,
	_ReduceOps$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ReduceOps"
};

$Object* allocate$ReduceOps$7($Class* clazz) {
	return $of($alloc(ReduceOps$7));
}

void ReduceOps$7::init$($StreamShape* shape, $IntBinaryOperator* val$operator) {
	$set(this, val$operator, val$operator);
	$ReduceOps$ReduceOp::init$(shape);
}

$ReduceOps$AccumulatingSink* ReduceOps$7::makeSink() {
	return $new($ReduceOps$6ReducingSink, this->val$operator);
}

ReduceOps$7::ReduceOps$7() {
}

$Class* ReduceOps$7::load$($String* name, bool initialize) {
	$loadClass(ReduceOps$7, name, initialize, &_ReduceOps$7_ClassInfo_, allocate$ReduceOps$7);
	return class$;
}

$Class* ReduceOps$7::class$ = nullptr;

		} // stream
	} // util
} // java