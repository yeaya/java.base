#include <java/util/stream/ReduceOps$1.h>

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
#include <java/util/stream/ReduceOps$1ReducingSink.h>
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
using $BiFunction = ::java::util::function::BiFunction;
using $BinaryOperator = ::java::util::function::BinaryOperator;
using $ReduceOps = ::java::util::stream::ReduceOps;
using $ReduceOps$1ReducingSink = ::java::util::stream::ReduceOps$1ReducingSink;
using $ReduceOps$AccumulatingSink = ::java::util::stream::ReduceOps$AccumulatingSink;
using $ReduceOps$ReduceOp = ::java::util::stream::ReduceOps$ReduceOp;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _ReduceOps$1_FieldInfo_[] = {
	{"val$seed", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$1, val$seed)},
	{"val$reducer", "Ljava/util/function/BiFunction;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$1, val$reducer)},
	{"val$combiner", "Ljava/util/function/BinaryOperator;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$1, val$combiner)},
	{}
};

$MethodInfo _ReduceOps$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/StreamShape;Ljava/util/function/BinaryOperator;Ljava/util/function/BiFunction;Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(ReduceOps$1::*)($StreamShape*,$BinaryOperator*,$BiFunction*,Object$*)>(&ReduceOps$1::init$))},
	{"makeSink", "()Ljava/util/stream/ReduceOps$1ReducingSink;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ReduceOps$1_EnclosingMethodInfo_ = {
	"java.util.stream.ReduceOps",
	"makeRef",
	"(Ljava/lang/Object;Ljava/util/function/BiFunction;Ljava/util/function/BinaryOperator;)Ljava/util/stream/TerminalOp;"
};

$InnerClassInfo _ReduceOps$1_InnerClassesInfo_[] = {
	{"java.util.stream.ReduceOps$1", nullptr, nullptr, 0},
	{"java.util.stream.ReduceOps$ReduceOp", "java.util.stream.ReduceOps", "ReduceOp", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.ReduceOps$1ReducingSink", nullptr, "ReducingSink", 0},
	{}
};

$ClassInfo _ReduceOps$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.ReduceOps$1",
	"java.util.stream.ReduceOps$ReduceOp",
	nullptr,
	_ReduceOps$1_FieldInfo_,
	_ReduceOps$1_MethodInfo_,
	"Ljava/util/stream/ReduceOps$ReduceOp<TT;TU;Ljava/util/stream/ReduceOps$1ReducingSink;>;",
	&_ReduceOps$1_EnclosingMethodInfo_,
	_ReduceOps$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ReduceOps"
};

$Object* allocate$ReduceOps$1($Class* clazz) {
	return $of($alloc(ReduceOps$1));
}

void ReduceOps$1::init$($StreamShape* shape, $BinaryOperator* val$combiner, $BiFunction* val$reducer, Object$* val$seed) {
	$set(this, val$combiner, val$combiner);
	$set(this, val$reducer, val$reducer);
	$set(this, val$seed, val$seed);
	$ReduceOps$ReduceOp::init$(shape);
}

$ReduceOps$AccumulatingSink* ReduceOps$1::makeSink() {
	return $new($ReduceOps$1ReducingSink, this->val$seed, this->val$reducer, this->val$combiner);
}

ReduceOps$1::ReduceOps$1() {
}

$Class* ReduceOps$1::load$($String* name, bool initialize) {
	$loadClass(ReduceOps$1, name, initialize, &_ReduceOps$1_ClassInfo_, allocate$ReduceOps$1);
	return class$;
}

$Class* ReduceOps$1::class$ = nullptr;

		} // stream
	} // util
} // java