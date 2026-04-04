#include <java/util/stream/ReduceOps$2.h>
#include <java/util/function/BinaryOperator.h>
#include <java/util/stream/ReduceOps$2ReducingSink.h>
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
using $BinaryOperator = ::java::util::function::BinaryOperator;
using $ReduceOps$2ReducingSink = ::java::util::stream::ReduceOps$2ReducingSink;
using $ReduceOps$AccumulatingSink = ::java::util::stream::ReduceOps$AccumulatingSink;
using $ReduceOps$ReduceOp = ::java::util::stream::ReduceOps$ReduceOp;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

void ReduceOps$2::init$($StreamShape* shape, $BinaryOperator* val$operator) {
	$set(this, val$operator, val$operator);
	$ReduceOps$ReduceOp::init$(shape);
}

$ReduceOps$AccumulatingSink* ReduceOps$2::makeSink() {
	return $new($ReduceOps$2ReducingSink, this->val$operator);
}

ReduceOps$2::ReduceOps$2() {
}

$Class* ReduceOps$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$operator", "Ljava/util/function/BinaryOperator;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$2, val$operator)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/StreamShape;Ljava/util/function/BinaryOperator;)V", nullptr, 0, $method(ReduceOps$2, init$, void, $StreamShape*, $BinaryOperator*)},
		{"makeSink", "()Ljava/util/stream/ReduceOps$2ReducingSink;", nullptr, $PUBLIC, $virtualMethod(ReduceOps$2, makeSink, $ReduceOps$AccumulatingSink*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.stream.ReduceOps",
		"makeRef",
		"(Ljava/util/function/BinaryOperator;)Ljava/util/stream/TerminalOp;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.ReduceOps$2", nullptr, nullptr, 0},
		{"java.util.stream.ReduceOps$ReduceOp", "java.util.stream.ReduceOps", "ReduceOp", $PRIVATE | $STATIC | $ABSTRACT},
		{"java.util.stream.ReduceOps$2ReducingSink", nullptr, "ReducingSink", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.stream.ReduceOps$2",
		"java.util.stream.ReduceOps$ReduceOp",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/stream/ReduceOps$ReduceOp<TT;Ljava/util/Optional<TT;>;Ljava/util/stream/ReduceOps$2ReducingSink;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.ReduceOps"
	};
	$loadClass(ReduceOps$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReduceOps$2);
	});
	return class$;
}

$Class* ReduceOps$2::class$ = nullptr;

		} // stream
	} // util
} // java