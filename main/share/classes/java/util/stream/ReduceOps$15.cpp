#include <java/util/stream/ReduceOps$15.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/function/DoubleBinaryOperator.h>
#include <java/util/stream/ReduceOps$12ReducingSink.h>
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
using $DoubleBinaryOperator = ::java::util::function::DoubleBinaryOperator;
using $ReduceOps = ::java::util::stream::ReduceOps;
using $ReduceOps$12ReducingSink = ::java::util::stream::ReduceOps$12ReducingSink;
using $ReduceOps$AccumulatingSink = ::java::util::stream::ReduceOps$AccumulatingSink;
using $ReduceOps$ReduceOp = ::java::util::stream::ReduceOps$ReduceOp;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _ReduceOps$15_FieldInfo_[] = {
	{"val$operator", "Ljava/util/function/DoubleBinaryOperator;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$15, val$operator)},
	{}
};

$MethodInfo _ReduceOps$15_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/StreamShape;Ljava/util/function/DoubleBinaryOperator;)V", nullptr, 0, $method(static_cast<void(ReduceOps$15::*)($StreamShape*,$DoubleBinaryOperator*)>(&ReduceOps$15::init$))},
	{"makeSink", "()Ljava/util/stream/ReduceOps$12ReducingSink;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ReduceOps$15_EnclosingMethodInfo_ = {
	"java.util.stream.ReduceOps",
	"makeDouble",
	"(Ljava/util/function/DoubleBinaryOperator;)Ljava/util/stream/TerminalOp;"
};

$InnerClassInfo _ReduceOps$15_InnerClassesInfo_[] = {
	{"java.util.stream.ReduceOps$15", nullptr, nullptr, 0},
	{"java.util.stream.ReduceOps$ReduceOp", "java.util.stream.ReduceOps", "ReduceOp", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.ReduceOps$12ReducingSink", nullptr, "ReducingSink", 0},
	{}
};

$ClassInfo _ReduceOps$15_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.ReduceOps$15",
	"java.util.stream.ReduceOps$ReduceOp",
	nullptr,
	_ReduceOps$15_FieldInfo_,
	_ReduceOps$15_MethodInfo_,
	"Ljava/util/stream/ReduceOps$ReduceOp<Ljava/lang/Double;Ljava/util/OptionalDouble;Ljava/util/stream/ReduceOps$12ReducingSink;>;",
	&_ReduceOps$15_EnclosingMethodInfo_,
	_ReduceOps$15_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ReduceOps"
};

$Object* allocate$ReduceOps$15($Class* clazz) {
	return $of($alloc(ReduceOps$15));
}

void ReduceOps$15::init$($StreamShape* shape, $DoubleBinaryOperator* val$operator) {
	$set(this, val$operator, val$operator);
	$ReduceOps$ReduceOp::init$(shape);
}

$ReduceOps$AccumulatingSink* ReduceOps$15::makeSink() {
	return $new($ReduceOps$12ReducingSink, this->val$operator);
}

ReduceOps$15::ReduceOps$15() {
}

$Class* ReduceOps$15::load$($String* name, bool initialize) {
	$loadClass(ReduceOps$15, name, initialize, &_ReduceOps$15_ClassInfo_, allocate$ReduceOps$15);
	return class$;
}

$Class* ReduceOps$15::class$ = nullptr;

		} // stream
	} // util
} // java