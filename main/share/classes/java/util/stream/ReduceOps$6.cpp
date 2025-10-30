#include <java/util/stream/ReduceOps$6.h>

#include <java/util/function/IntBinaryOperator.h>
#include <java/util/stream/ReduceOps$5ReducingSink.h>
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
using $ReduceOps = ::java::util::stream::ReduceOps;
using $ReduceOps$5ReducingSink = ::java::util::stream::ReduceOps$5ReducingSink;
using $ReduceOps$AccumulatingSink = ::java::util::stream::ReduceOps$AccumulatingSink;
using $ReduceOps$ReduceOp = ::java::util::stream::ReduceOps$ReduceOp;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _ReduceOps$6_FieldInfo_[] = {
	{"val$identity", "I", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$6, val$identity)},
	{"val$operator", "Ljava/util/function/IntBinaryOperator;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$6, val$operator)},
	{}
};

$MethodInfo _ReduceOps$6_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/StreamShape;Ljava/util/function/IntBinaryOperator;I)V", nullptr, 0, $method(static_cast<void(ReduceOps$6::*)($StreamShape*,$IntBinaryOperator*,int32_t)>(&ReduceOps$6::init$))},
	{"makeSink", "()Ljava/util/stream/ReduceOps$5ReducingSink;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ReduceOps$6_EnclosingMethodInfo_ = {
	"java.util.stream.ReduceOps",
	"makeInt",
	"(ILjava/util/function/IntBinaryOperator;)Ljava/util/stream/TerminalOp;"
};

$InnerClassInfo _ReduceOps$6_InnerClassesInfo_[] = {
	{"java.util.stream.ReduceOps$6", nullptr, nullptr, 0},
	{"java.util.stream.ReduceOps$ReduceOp", "java.util.stream.ReduceOps", "ReduceOp", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.ReduceOps$5ReducingSink", nullptr, "ReducingSink", 0},
	{}
};

$ClassInfo _ReduceOps$6_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.ReduceOps$6",
	"java.util.stream.ReduceOps$ReduceOp",
	nullptr,
	_ReduceOps$6_FieldInfo_,
	_ReduceOps$6_MethodInfo_,
	"Ljava/util/stream/ReduceOps$ReduceOp<Ljava/lang/Integer;Ljava/lang/Integer;Ljava/util/stream/ReduceOps$5ReducingSink;>;",
	&_ReduceOps$6_EnclosingMethodInfo_,
	_ReduceOps$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ReduceOps"
};

$Object* allocate$ReduceOps$6($Class* clazz) {
	return $of($alloc(ReduceOps$6));
}

void ReduceOps$6::init$($StreamShape* shape, $IntBinaryOperator* val$operator, int32_t val$identity) {
	$set(this, val$operator, val$operator);
	this->val$identity = val$identity;
	$ReduceOps$ReduceOp::init$(shape);
}

$ReduceOps$AccumulatingSink* ReduceOps$6::makeSink() {
	return $new($ReduceOps$5ReducingSink, this->val$identity, this->val$operator);
}

ReduceOps$6::ReduceOps$6() {
}

$Class* ReduceOps$6::load$($String* name, bool initialize) {
	$loadClass(ReduceOps$6, name, initialize, &_ReduceOps$6_ClassInfo_, allocate$ReduceOps$6);
	return class$;
}

$Class* ReduceOps$6::class$ = nullptr;

		} // stream
	} // util
} // java