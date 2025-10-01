#include <java/util/stream/ReduceOps$11.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/function/LongBinaryOperator.h>
#include <java/util/stream/ReduceOps$9ReducingSink.h>
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
using $LongBinaryOperator = ::java::util::function::LongBinaryOperator;
using $ReduceOps = ::java::util::stream::ReduceOps;
using $ReduceOps$9ReducingSink = ::java::util::stream::ReduceOps$9ReducingSink;
using $ReduceOps$AccumulatingSink = ::java::util::stream::ReduceOps$AccumulatingSink;
using $ReduceOps$ReduceOp = ::java::util::stream::ReduceOps$ReduceOp;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _ReduceOps$11_FieldInfo_[] = {
	{"val$operator", "Ljava/util/function/LongBinaryOperator;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$11, val$operator)},
	{}
};

$MethodInfo _ReduceOps$11_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/StreamShape;Ljava/util/function/LongBinaryOperator;)V", nullptr, 0, $method(static_cast<void(ReduceOps$11::*)($StreamShape*,$LongBinaryOperator*)>(&ReduceOps$11::init$))},
	{"makeSink", "()Ljava/util/stream/ReduceOps$9ReducingSink;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ReduceOps$11_EnclosingMethodInfo_ = {
	"java.util.stream.ReduceOps",
	"makeLong",
	"(Ljava/util/function/LongBinaryOperator;)Ljava/util/stream/TerminalOp;"
};

$InnerClassInfo _ReduceOps$11_InnerClassesInfo_[] = {
	{"java.util.stream.ReduceOps$11", nullptr, nullptr, 0},
	{"java.util.stream.ReduceOps$ReduceOp", "java.util.stream.ReduceOps", "ReduceOp", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.ReduceOps$9ReducingSink", nullptr, "ReducingSink", 0},
	{}
};

$ClassInfo _ReduceOps$11_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.ReduceOps$11",
	"java.util.stream.ReduceOps$ReduceOp",
	nullptr,
	_ReduceOps$11_FieldInfo_,
	_ReduceOps$11_MethodInfo_,
	"Ljava/util/stream/ReduceOps$ReduceOp<Ljava/lang/Long;Ljava/util/OptionalLong;Ljava/util/stream/ReduceOps$9ReducingSink;>;",
	&_ReduceOps$11_EnclosingMethodInfo_,
	_ReduceOps$11_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ReduceOps"
};

$Object* allocate$ReduceOps$11($Class* clazz) {
	return $of($alloc(ReduceOps$11));
}

void ReduceOps$11::init$($StreamShape* shape, $LongBinaryOperator* val$operator) {
	$set(this, val$operator, val$operator);
	$ReduceOps$ReduceOp::init$(shape);
}

$ReduceOps$AccumulatingSink* ReduceOps$11::makeSink() {
	return $new($ReduceOps$9ReducingSink, this->val$operator);
}

ReduceOps$11::ReduceOps$11() {
}

$Class* ReduceOps$11::load$($String* name, bool initialize) {
	$loadClass(ReduceOps$11, name, initialize, &_ReduceOps$11_ClassInfo_, allocate$ReduceOps$11);
	return class$;
}

$Class* ReduceOps$11::class$ = nullptr;

		} // stream
	} // util
} // java