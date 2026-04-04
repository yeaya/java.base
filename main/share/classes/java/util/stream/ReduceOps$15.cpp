#include <java/util/stream/ReduceOps$15.h>
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
using $ReduceOps$12ReducingSink = ::java::util::stream::ReduceOps$12ReducingSink;
using $ReduceOps$AccumulatingSink = ::java::util::stream::ReduceOps$AccumulatingSink;
using $ReduceOps$ReduceOp = ::java::util::stream::ReduceOps$ReduceOp;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

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
	$FieldInfo fieldInfos$$[] = {
		{"val$operator", "Ljava/util/function/DoubleBinaryOperator;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$15, val$operator)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/StreamShape;Ljava/util/function/DoubleBinaryOperator;)V", nullptr, 0, $method(ReduceOps$15, init$, void, $StreamShape*, $DoubleBinaryOperator*)},
		{"makeSink", "()Ljava/util/stream/ReduceOps$12ReducingSink;", nullptr, $PUBLIC, $virtualMethod(ReduceOps$15, makeSink, $ReduceOps$AccumulatingSink*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.stream.ReduceOps",
		"makeDouble",
		"(Ljava/util/function/DoubleBinaryOperator;)Ljava/util/stream/TerminalOp;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.ReduceOps$15", nullptr, nullptr, 0},
		{"java.util.stream.ReduceOps$ReduceOp", "java.util.stream.ReduceOps", "ReduceOp", $PRIVATE | $STATIC | $ABSTRACT},
		{"java.util.stream.ReduceOps$12ReducingSink", nullptr, "ReducingSink", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.stream.ReduceOps$15",
		"java.util.stream.ReduceOps$ReduceOp",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/stream/ReduceOps$ReduceOp<Ljava/lang/Double;Ljava/util/OptionalDouble;Ljava/util/stream/ReduceOps$12ReducingSink;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.ReduceOps"
	};
	$loadClass(ReduceOps$15, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReduceOps$15);
	});
	return class$;
}

$Class* ReduceOps$15::class$ = nullptr;

		} // stream
	} // util
} // java