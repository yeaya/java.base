#include <java/util/stream/DoublePipeline$2$1.h>

#include <java/util/function/DoubleUnaryOperator.h>
#include <java/util/stream/DoublePipeline$2.h>
#include <java/util/stream/Sink$ChainedDouble.h>
#include <java/util/stream/Sink.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleUnaryOperator = ::java::util::function::DoubleUnaryOperator;
using $DoublePipeline$2 = ::java::util::stream::DoublePipeline$2;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedDouble = ::java::util::stream::Sink$ChainedDouble;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _DoublePipeline$2$1_FieldInfo_[] = {
	{"this$1", "Ljava/util/stream/DoublePipeline$2;", nullptr, $FINAL | $SYNTHETIC, $field(DoublePipeline$2$1, this$1)},
	{}
};

$MethodInfo _DoublePipeline$2$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/DoublePipeline$2;Ljava/util/stream/Sink;)V", nullptr, 0, $method(DoublePipeline$2$1, init$, void, $DoublePipeline$2*, $Sink*)},
	{"accept", "(D)V", nullptr, $PUBLIC, $virtualMethod(DoublePipeline$2$1, accept, void, double)},
	{}
};

$EnclosingMethodInfo _DoublePipeline$2$1_EnclosingMethodInfo_ = {
	"java.util.stream.DoublePipeline$2",
	"opWrapSink",
	"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
};

$InnerClassInfo _DoublePipeline$2$1_InnerClassesInfo_[] = {
	{"java.util.stream.DoublePipeline$2", nullptr, nullptr, 0},
	{"java.util.stream.DoublePipeline$2$1", nullptr, nullptr, 0},
	{"java.util.stream.Sink$ChainedDouble", "java.util.stream.Sink", "ChainedDouble", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DoublePipeline$2$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.DoublePipeline$2$1",
	"java.util.stream.Sink$ChainedDouble",
	nullptr,
	_DoublePipeline$2$1_FieldInfo_,
	_DoublePipeline$2$1_MethodInfo_,
	"Ljava/util/stream/Sink$ChainedDouble<Ljava/lang/Double;>;",
	&_DoublePipeline$2$1_EnclosingMethodInfo_,
	_DoublePipeline$2$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.DoublePipeline"
};

$Object* allocate$DoublePipeline$2$1($Class* clazz) {
	return $of($alloc(DoublePipeline$2$1));
}

void DoublePipeline$2$1::init$($DoublePipeline$2* this$1, $Sink* downstream) {
	$set(this, this$1, this$1);
	$Sink$ChainedDouble::init$(downstream);
}

void DoublePipeline$2$1::accept(double t) {
	$nc(this->downstream)->accept($nc(this->this$1->val$mapper)->applyAsDouble(t));
}

DoublePipeline$2$1::DoublePipeline$2$1() {
}

$Class* DoublePipeline$2$1::load$($String* name, bool initialize) {
	$loadClass(DoublePipeline$2$1, name, initialize, &_DoublePipeline$2$1_ClassInfo_, allocate$DoublePipeline$2$1);
	return class$;
}

$Class* DoublePipeline$2$1::class$ = nullptr;

		} // stream
	} // util
} // java