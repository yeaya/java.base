#include <java/util/stream/ReduceOps$14.h>
#include <java/util/function/DoubleBinaryOperator.h>
#include <java/util/stream/ReduceOps$11ReducingSink.h>
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
using $ReduceOps$11ReducingSink = ::java::util::stream::ReduceOps$11ReducingSink;
using $ReduceOps$AccumulatingSink = ::java::util::stream::ReduceOps$AccumulatingSink;
using $ReduceOps$ReduceOp = ::java::util::stream::ReduceOps$ReduceOp;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

void ReduceOps$14::init$($StreamShape* shape, $DoubleBinaryOperator* val$operator, double val$identity) {
	$set(this, val$operator, val$operator);
	this->val$identity = val$identity;
	$ReduceOps$ReduceOp::init$(shape);
}

$ReduceOps$AccumulatingSink* ReduceOps$14::makeSink() {
	return $new($ReduceOps$11ReducingSink, this->val$identity, this->val$operator);
}

ReduceOps$14::ReduceOps$14() {
}

$Class* ReduceOps$14::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$identity", "D", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$14, val$identity)},
		{"val$operator", "Ljava/util/function/DoubleBinaryOperator;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$14, val$operator)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/StreamShape;Ljava/util/function/DoubleBinaryOperator;D)V", nullptr, 0, $method(ReduceOps$14, init$, void, $StreamShape*, $DoubleBinaryOperator*, double)},
		{"makeSink", "()Ljava/util/stream/ReduceOps$11ReducingSink;", nullptr, $PUBLIC, $virtualMethod(ReduceOps$14, makeSink, $ReduceOps$AccumulatingSink*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.stream.ReduceOps",
		"makeDouble",
		"(DLjava/util/function/DoubleBinaryOperator;)Ljava/util/stream/TerminalOp;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.ReduceOps$14", nullptr, nullptr, 0},
		{"java.util.stream.ReduceOps$ReduceOp", "java.util.stream.ReduceOps", "ReduceOp", $PRIVATE | $STATIC | $ABSTRACT},
		{"java.util.stream.ReduceOps$11ReducingSink", nullptr, "ReducingSink", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.stream.ReduceOps$14",
		"java.util.stream.ReduceOps$ReduceOp",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/stream/ReduceOps$ReduceOp<Ljava/lang/Double;Ljava/lang/Double;Ljava/util/stream/ReduceOps$11ReducingSink;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.ReduceOps"
	};
	$loadClass(ReduceOps$14, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReduceOps$14);
	});
	return class$;
}

$Class* ReduceOps$14::class$ = nullptr;

		} // stream
	} // util
} // java