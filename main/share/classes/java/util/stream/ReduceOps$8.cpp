#include <java/util/stream/ReduceOps$8.h>

#include <java/util/function/BinaryOperator.h>
#include <java/util/function/ObjIntConsumer.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/ReduceOps$7ReducingSink.h>
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
using $ObjIntConsumer = ::java::util::function::ObjIntConsumer;
using $Supplier = ::java::util::function::Supplier;
using $ReduceOps$7ReducingSink = ::java::util::stream::ReduceOps$7ReducingSink;
using $ReduceOps$AccumulatingSink = ::java::util::stream::ReduceOps$AccumulatingSink;
using $ReduceOps$ReduceOp = ::java::util::stream::ReduceOps$ReduceOp;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _ReduceOps$8_FieldInfo_[] = {
	{"val$supplier", "Ljava/util/function/Supplier;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$8, val$supplier)},
	{"val$accumulator", "Ljava/util/function/ObjIntConsumer;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$8, val$accumulator)},
	{"val$combiner", "Ljava/util/function/BinaryOperator;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$8, val$combiner)},
	{}
};

$MethodInfo _ReduceOps$8_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/StreamShape;Ljava/util/function/BinaryOperator;Ljava/util/function/ObjIntConsumer;Ljava/util/function/Supplier;)V", nullptr, 0, $method(ReduceOps$8, init$, void, $StreamShape*, $BinaryOperator*, $ObjIntConsumer*, $Supplier*)},
	{"makeSink", "()Ljava/util/stream/ReduceOps$7ReducingSink;", nullptr, $PUBLIC, $virtualMethod(ReduceOps$8, makeSink, $ReduceOps$AccumulatingSink*)},
	{}
};

$EnclosingMethodInfo _ReduceOps$8_EnclosingMethodInfo_ = {
	"java.util.stream.ReduceOps",
	"makeInt",
	"(Ljava/util/function/Supplier;Ljava/util/function/ObjIntConsumer;Ljava/util/function/BinaryOperator;)Ljava/util/stream/TerminalOp;"
};

$InnerClassInfo _ReduceOps$8_InnerClassesInfo_[] = {
	{"java.util.stream.ReduceOps$8", nullptr, nullptr, 0},
	{"java.util.stream.ReduceOps$ReduceOp", "java.util.stream.ReduceOps", "ReduceOp", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.ReduceOps$7ReducingSink", nullptr, "ReducingSink", 0},
	{}
};

$ClassInfo _ReduceOps$8_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.ReduceOps$8",
	"java.util.stream.ReduceOps$ReduceOp",
	nullptr,
	_ReduceOps$8_FieldInfo_,
	_ReduceOps$8_MethodInfo_,
	"Ljava/util/stream/ReduceOps$ReduceOp<Ljava/lang/Integer;TR;Ljava/util/stream/ReduceOps$7ReducingSink;>;",
	&_ReduceOps$8_EnclosingMethodInfo_,
	_ReduceOps$8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ReduceOps"
};

$Object* allocate$ReduceOps$8($Class* clazz) {
	return $of($alloc(ReduceOps$8));
}

void ReduceOps$8::init$($StreamShape* shape, $BinaryOperator* val$combiner, $ObjIntConsumer* val$accumulator, $Supplier* val$supplier) {
	$set(this, val$combiner, val$combiner);
	$set(this, val$accumulator, val$accumulator);
	$set(this, val$supplier, val$supplier);
	$ReduceOps$ReduceOp::init$(shape);
}

$ReduceOps$AccumulatingSink* ReduceOps$8::makeSink() {
	return $new($ReduceOps$7ReducingSink, this->val$supplier, this->val$accumulator, this->val$combiner);
}

ReduceOps$8::ReduceOps$8() {
}

$Class* ReduceOps$8::load$($String* name, bool initialize) {
	$loadClass(ReduceOps$8, name, initialize, &_ReduceOps$8_ClassInfo_, allocate$ReduceOps$8);
	return class$;
}

$Class* ReduceOps$8::class$ = nullptr;

		} // stream
	} // util
} // java