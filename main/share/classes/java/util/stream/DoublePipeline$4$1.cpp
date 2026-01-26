#include <java/util/stream/DoublePipeline$4$1.h>

#include <java/util/function/DoubleToLongFunction.h>
#include <java/util/stream/DoublePipeline$4.h>
#include <java/util/stream/Sink$ChainedDouble.h>
#include <java/util/stream/Sink.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleToLongFunction = ::java::util::function::DoubleToLongFunction;
using $DoublePipeline$4 = ::java::util::stream::DoublePipeline$4;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedDouble = ::java::util::stream::Sink$ChainedDouble;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _DoublePipeline$4$1_FieldInfo_[] = {
	{"this$1", "Ljava/util/stream/DoublePipeline$4;", nullptr, $FINAL | $SYNTHETIC, $field(DoublePipeline$4$1, this$1)},
	{}
};

$MethodInfo _DoublePipeline$4$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/DoublePipeline$4;Ljava/util/stream/Sink;)V", nullptr, 0, $method(DoublePipeline$4$1, init$, void, $DoublePipeline$4*, $Sink*)},
	{"accept", "(D)V", nullptr, $PUBLIC, $virtualMethod(DoublePipeline$4$1, accept, void, double)},
	{}
};

$EnclosingMethodInfo _DoublePipeline$4$1_EnclosingMethodInfo_ = {
	"java.util.stream.DoublePipeline$4",
	"opWrapSink",
	"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
};

$InnerClassInfo _DoublePipeline$4$1_InnerClassesInfo_[] = {
	{"java.util.stream.DoublePipeline$4", nullptr, nullptr, 0},
	{"java.util.stream.DoublePipeline$4$1", nullptr, nullptr, 0},
	{"java.util.stream.Sink$ChainedDouble", "java.util.stream.Sink", "ChainedDouble", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DoublePipeline$4$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.DoublePipeline$4$1",
	"java.util.stream.Sink$ChainedDouble",
	nullptr,
	_DoublePipeline$4$1_FieldInfo_,
	_DoublePipeline$4$1_MethodInfo_,
	"Ljava/util/stream/Sink$ChainedDouble<Ljava/lang/Long;>;",
	&_DoublePipeline$4$1_EnclosingMethodInfo_,
	_DoublePipeline$4$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.DoublePipeline"
};

$Object* allocate$DoublePipeline$4$1($Class* clazz) {
	return $of($alloc(DoublePipeline$4$1));
}

void DoublePipeline$4$1::init$($DoublePipeline$4* this$1, $Sink* downstream) {
	$set(this, this$1, this$1);
	$Sink$ChainedDouble::init$(downstream);
}

void DoublePipeline$4$1::accept(double t) {
	$nc(this->downstream)->accept($nc(this->this$1->val$mapper)->applyAsLong(t));
}

DoublePipeline$4$1::DoublePipeline$4$1() {
}

$Class* DoublePipeline$4$1::load$($String* name, bool initialize) {
	$loadClass(DoublePipeline$4$1, name, initialize, &_DoublePipeline$4$1_ClassInfo_, allocate$DoublePipeline$4$1);
	return class$;
}

$Class* DoublePipeline$4$1::class$ = nullptr;

		} // stream
	} // util
} // java