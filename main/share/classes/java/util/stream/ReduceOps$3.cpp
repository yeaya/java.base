#include <java/util/stream/ReduceOps$3.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Set.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/BinaryOperator.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/Collector$Characteristics.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/ReduceOps$3ReducingSink.h>
#include <java/util/stream/ReduceOps$AccumulatingSink.h>
#include <java/util/stream/ReduceOps$ReduceOp.h>
#include <java/util/stream/ReduceOps.h>
#include <java/util/stream/StreamOpFlag.h>
#include <java/util/stream/StreamShape.h>
#include <jcpp.h>

#undef NOT_ORDERED
#undef UNORDERED

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Set = ::java::util::Set;
using $BiConsumer = ::java::util::function::BiConsumer;
using $BinaryOperator = ::java::util::function::BinaryOperator;
using $Supplier = ::java::util::function::Supplier;
using $Collector = ::java::util::stream::Collector;
using $Collector$Characteristics = ::java::util::stream::Collector$Characteristics;
using $ReduceOps = ::java::util::stream::ReduceOps;
using $ReduceOps$3ReducingSink = ::java::util::stream::ReduceOps$3ReducingSink;
using $ReduceOps$AccumulatingSink = ::java::util::stream::ReduceOps$AccumulatingSink;
using $ReduceOps$ReduceOp = ::java::util::stream::ReduceOps$ReduceOp;
using $StreamOpFlag = ::java::util::stream::StreamOpFlag;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _ReduceOps$3_FieldInfo_[] = {
	{"val$collector", "Ljava/util/stream/Collector;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$3, val$collector)},
	{"val$supplier", "Ljava/util/function/Supplier;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$3, val$supplier)},
	{"val$accumulator", "Ljava/util/function/BiConsumer;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$3, val$accumulator)},
	{"val$combiner", "Ljava/util/function/BinaryOperator;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$3, val$combiner)},
	{}
};

$MethodInfo _ReduceOps$3_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/StreamShape;Ljava/util/function/BinaryOperator;Ljava/util/function/BiConsumer;Ljava/util/function/Supplier;Ljava/util/stream/Collector;)V", nullptr, 0, $method(static_cast<void(ReduceOps$3::*)($StreamShape*,$BinaryOperator*,$BiConsumer*,$Supplier*,$Collector*)>(&ReduceOps$3::init$))},
	{"getOpFlags", "()I", nullptr, $PUBLIC},
	{"makeSink", "()Ljava/util/stream/ReduceOps$3ReducingSink;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ReduceOps$3_EnclosingMethodInfo_ = {
	"java.util.stream.ReduceOps",
	"makeRef",
	"(Ljava/util/stream/Collector;)Ljava/util/stream/TerminalOp;"
};

$InnerClassInfo _ReduceOps$3_InnerClassesInfo_[] = {
	{"java.util.stream.ReduceOps$3", nullptr, nullptr, 0},
	{"java.util.stream.ReduceOps$ReduceOp", "java.util.stream.ReduceOps", "ReduceOp", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.ReduceOps$3ReducingSink", nullptr, "ReducingSink", 0},
	{}
};

$ClassInfo _ReduceOps$3_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.ReduceOps$3",
	"java.util.stream.ReduceOps$ReduceOp",
	nullptr,
	_ReduceOps$3_FieldInfo_,
	_ReduceOps$3_MethodInfo_,
	"Ljava/util/stream/ReduceOps$ReduceOp<TT;TI;Ljava/util/stream/ReduceOps$3ReducingSink;>;",
	&_ReduceOps$3_EnclosingMethodInfo_,
	_ReduceOps$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ReduceOps"
};

$Object* allocate$ReduceOps$3($Class* clazz) {
	return $of($alloc(ReduceOps$3));
}

void ReduceOps$3::init$($StreamShape* shape, $BinaryOperator* val$combiner, $BiConsumer* val$accumulator, $Supplier* val$supplier, $Collector* val$collector) {
	$set(this, val$combiner, val$combiner);
	$set(this, val$accumulator, val$accumulator);
	$set(this, val$supplier, val$supplier);
	$set(this, val$collector, val$collector);
	$ReduceOps$ReduceOp::init$(shape);
}

$ReduceOps$AccumulatingSink* ReduceOps$3::makeSink() {
	return $new($ReduceOps$3ReducingSink, this->val$supplier, this->val$accumulator, this->val$combiner);
}

int32_t ReduceOps$3::getOpFlags() {
	$init($Collector$Characteristics);
	$init($StreamOpFlag);
	return $nc($($nc(this->val$collector)->characteristics()))->contains($Collector$Characteristics::UNORDERED) ? $StreamOpFlag::NOT_ORDERED : 0;
}

ReduceOps$3::ReduceOps$3() {
}

$Class* ReduceOps$3::load$($String* name, bool initialize) {
	$loadClass(ReduceOps$3, name, initialize, &_ReduceOps$3_ClassInfo_, allocate$ReduceOps$3);
	return class$;
}

$Class* ReduceOps$3::class$ = nullptr;

		} // stream
	} // util
} // java