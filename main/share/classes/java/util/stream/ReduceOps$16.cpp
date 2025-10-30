#include <java/util/stream/ReduceOps$16.h>

#include <java/util/function/BinaryOperator.h>
#include <java/util/function/ObjDoubleConsumer.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/ReduceOps$13ReducingSink.h>
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
using $ObjDoubleConsumer = ::java::util::function::ObjDoubleConsumer;
using $Supplier = ::java::util::function::Supplier;
using $ReduceOps = ::java::util::stream::ReduceOps;
using $ReduceOps$13ReducingSink = ::java::util::stream::ReduceOps$13ReducingSink;
using $ReduceOps$AccumulatingSink = ::java::util::stream::ReduceOps$AccumulatingSink;
using $ReduceOps$ReduceOp = ::java::util::stream::ReduceOps$ReduceOp;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _ReduceOps$16_FieldInfo_[] = {
	{"val$supplier", "Ljava/util/function/Supplier;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$16, val$supplier)},
	{"val$accumulator", "Ljava/util/function/ObjDoubleConsumer;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$16, val$accumulator)},
	{"val$combiner", "Ljava/util/function/BinaryOperator;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$16, val$combiner)},
	{}
};

$MethodInfo _ReduceOps$16_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/StreamShape;Ljava/util/function/BinaryOperator;Ljava/util/function/ObjDoubleConsumer;Ljava/util/function/Supplier;)V", nullptr, 0, $method(static_cast<void(ReduceOps$16::*)($StreamShape*,$BinaryOperator*,$ObjDoubleConsumer*,$Supplier*)>(&ReduceOps$16::init$))},
	{"makeSink", "()Ljava/util/stream/ReduceOps$13ReducingSink;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ReduceOps$16_EnclosingMethodInfo_ = {
	"java.util.stream.ReduceOps",
	"makeDouble",
	"(Ljava/util/function/Supplier;Ljava/util/function/ObjDoubleConsumer;Ljava/util/function/BinaryOperator;)Ljava/util/stream/TerminalOp;"
};

$InnerClassInfo _ReduceOps$16_InnerClassesInfo_[] = {
	{"java.util.stream.ReduceOps$16", nullptr, nullptr, 0},
	{"java.util.stream.ReduceOps$ReduceOp", "java.util.stream.ReduceOps", "ReduceOp", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.ReduceOps$13ReducingSink", nullptr, "ReducingSink", 0},
	{}
};

$ClassInfo _ReduceOps$16_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.ReduceOps$16",
	"java.util.stream.ReduceOps$ReduceOp",
	nullptr,
	_ReduceOps$16_FieldInfo_,
	_ReduceOps$16_MethodInfo_,
	"Ljava/util/stream/ReduceOps$ReduceOp<Ljava/lang/Double;TR;Ljava/util/stream/ReduceOps$13ReducingSink;>;",
	&_ReduceOps$16_EnclosingMethodInfo_,
	_ReduceOps$16_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ReduceOps"
};

$Object* allocate$ReduceOps$16($Class* clazz) {
	return $of($alloc(ReduceOps$16));
}

void ReduceOps$16::init$($StreamShape* shape, $BinaryOperator* val$combiner, $ObjDoubleConsumer* val$accumulator, $Supplier* val$supplier) {
	$set(this, val$combiner, val$combiner);
	$set(this, val$accumulator, val$accumulator);
	$set(this, val$supplier, val$supplier);
	$ReduceOps$ReduceOp::init$(shape);
}

$ReduceOps$AccumulatingSink* ReduceOps$16::makeSink() {
	return $new($ReduceOps$13ReducingSink, this->val$supplier, this->val$accumulator, this->val$combiner);
}

ReduceOps$16::ReduceOps$16() {
}

$Class* ReduceOps$16::load$($String* name, bool initialize) {
	$loadClass(ReduceOps$16, name, initialize, &_ReduceOps$16_ClassInfo_, allocate$ReduceOps$16);
	return class$;
}

$Class* ReduceOps$16::class$ = nullptr;

		} // stream
	} // util
} // java