#include <java/util/stream/ReduceOps$10.h>
#include <java/util/function/LongBinaryOperator.h>
#include <java/util/stream/ReduceOps$8ReducingSink.h>
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
using $ReduceOps$8ReducingSink = ::java::util::stream::ReduceOps$8ReducingSink;
using $ReduceOps$AccumulatingSink = ::java::util::stream::ReduceOps$AccumulatingSink;
using $ReduceOps$ReduceOp = ::java::util::stream::ReduceOps$ReduceOp;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

void ReduceOps$10::init$($StreamShape* shape, $LongBinaryOperator* val$operator, int64_t val$identity) {
	$set(this, val$operator, val$operator);
	this->val$identity = val$identity;
	$ReduceOps$ReduceOp::init$(shape);
}

$ReduceOps$AccumulatingSink* ReduceOps$10::makeSink() {
	return $new($ReduceOps$8ReducingSink, this->val$identity, this->val$operator);
}

ReduceOps$10::ReduceOps$10() {
}

$Class* ReduceOps$10::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$identity", "J", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$10, val$identity)},
		{"val$operator", "Ljava/util/function/LongBinaryOperator;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$10, val$operator)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/StreamShape;Ljava/util/function/LongBinaryOperator;J)V", nullptr, 0, $method(ReduceOps$10, init$, void, $StreamShape*, $LongBinaryOperator*, int64_t)},
		{"makeSink", "()Ljava/util/stream/ReduceOps$8ReducingSink;", nullptr, $PUBLIC, $virtualMethod(ReduceOps$10, makeSink, $ReduceOps$AccumulatingSink*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.stream.ReduceOps",
		"makeLong",
		"(JLjava/util/function/LongBinaryOperator;)Ljava/util/stream/TerminalOp;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.ReduceOps$10", nullptr, nullptr, 0},
		{"java.util.stream.ReduceOps$ReduceOp", "java.util.stream.ReduceOps", "ReduceOp", $PRIVATE | $STATIC | $ABSTRACT},
		{"java.util.stream.ReduceOps$8ReducingSink", nullptr, "ReducingSink", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.stream.ReduceOps$10",
		"java.util.stream.ReduceOps$ReduceOp",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/stream/ReduceOps$ReduceOp<Ljava/lang/Long;Ljava/lang/Long;Ljava/util/stream/ReduceOps$8ReducingSink;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.ReduceOps"
	};
	$loadClass(ReduceOps$10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReduceOps$10);
	});
	return class$;
}

$Class* ReduceOps$10::class$ = nullptr;

		} // stream
	} // util
} // java