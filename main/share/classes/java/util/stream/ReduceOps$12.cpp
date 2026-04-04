#include <java/util/stream/ReduceOps$12.h>
#include <java/util/function/BinaryOperator.h>
#include <java/util/function/ObjLongConsumer.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/ReduceOps$10ReducingSink.h>
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
using $ObjLongConsumer = ::java::util::function::ObjLongConsumer;
using $Supplier = ::java::util::function::Supplier;
using $ReduceOps$10ReducingSink = ::java::util::stream::ReduceOps$10ReducingSink;
using $ReduceOps$AccumulatingSink = ::java::util::stream::ReduceOps$AccumulatingSink;
using $ReduceOps$ReduceOp = ::java::util::stream::ReduceOps$ReduceOp;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

void ReduceOps$12::init$($StreamShape* shape, $BinaryOperator* val$combiner, $ObjLongConsumer* val$accumulator, $Supplier* val$supplier) {
	$set(this, val$combiner, val$combiner);
	$set(this, val$accumulator, val$accumulator);
	$set(this, val$supplier, val$supplier);
	$ReduceOps$ReduceOp::init$(shape);
}

$ReduceOps$AccumulatingSink* ReduceOps$12::makeSink() {
	return $new($ReduceOps$10ReducingSink, this->val$supplier, this->val$accumulator, this->val$combiner);
}

ReduceOps$12::ReduceOps$12() {
}

$Class* ReduceOps$12::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$supplier", "Ljava/util/function/Supplier;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$12, val$supplier)},
		{"val$accumulator", "Ljava/util/function/ObjLongConsumer;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$12, val$accumulator)},
		{"val$combiner", "Ljava/util/function/BinaryOperator;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$12, val$combiner)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/StreamShape;Ljava/util/function/BinaryOperator;Ljava/util/function/ObjLongConsumer;Ljava/util/function/Supplier;)V", nullptr, 0, $method(ReduceOps$12, init$, void, $StreamShape*, $BinaryOperator*, $ObjLongConsumer*, $Supplier*)},
		{"makeSink", "()Ljava/util/stream/ReduceOps$10ReducingSink;", nullptr, $PUBLIC, $virtualMethod(ReduceOps$12, makeSink, $ReduceOps$AccumulatingSink*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.stream.ReduceOps",
		"makeLong",
		"(Ljava/util/function/Supplier;Ljava/util/function/ObjLongConsumer;Ljava/util/function/BinaryOperator;)Ljava/util/stream/TerminalOp;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.ReduceOps$12", nullptr, nullptr, 0},
		{"java.util.stream.ReduceOps$ReduceOp", "java.util.stream.ReduceOps", "ReduceOp", $PRIVATE | $STATIC | $ABSTRACT},
		{"java.util.stream.ReduceOps$10ReducingSink", nullptr, "ReducingSink", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.stream.ReduceOps$12",
		"java.util.stream.ReduceOps$ReduceOp",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/stream/ReduceOps$ReduceOp<Ljava/lang/Long;TR;Ljava/util/stream/ReduceOps$10ReducingSink;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.ReduceOps"
	};
	$loadClass(ReduceOps$12, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReduceOps$12);
	});
	return class$;
}

$Class* ReduceOps$12::class$ = nullptr;

		} // stream
	} // util
} // java