#include <java/util/stream/DoublePipeline$1$1.h>

#include <java/util/function/DoubleFunction.h>
#include <java/util/stream/DoublePipeline$1.h>
#include <java/util/stream/Sink$ChainedDouble.h>
#include <java/util/stream/Sink.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleFunction = ::java::util::function::DoubleFunction;
using $DoublePipeline$1 = ::java::util::stream::DoublePipeline$1;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedDouble = ::java::util::stream::Sink$ChainedDouble;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _DoublePipeline$1$1_FieldInfo_[] = {
	{"this$1", "Ljava/util/stream/DoublePipeline$1;", nullptr, $FINAL | $SYNTHETIC, $field(DoublePipeline$1$1, this$1)},
	{}
};

$MethodInfo _DoublePipeline$1$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/DoublePipeline$1;Ljava/util/stream/Sink;)V", nullptr, 0, $method(static_cast<void(DoublePipeline$1$1::*)($DoublePipeline$1*,$Sink*)>(&DoublePipeline$1$1::init$))},
	{"accept", "(D)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DoublePipeline$1$1_EnclosingMethodInfo_ = {
	"java.util.stream.DoublePipeline$1",
	"opWrapSink",
	"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
};

$InnerClassInfo _DoublePipeline$1$1_InnerClassesInfo_[] = {
	{"java.util.stream.DoublePipeline$1", nullptr, nullptr, 0},
	{"java.util.stream.DoublePipeline$1$1", nullptr, nullptr, 0},
	{"java.util.stream.Sink$ChainedDouble", "java.util.stream.Sink", "ChainedDouble", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DoublePipeline$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.DoublePipeline$1$1",
	"java.util.stream.Sink$ChainedDouble",
	nullptr,
	_DoublePipeline$1$1_FieldInfo_,
	_DoublePipeline$1$1_MethodInfo_,
	"Ljava/util/stream/Sink$ChainedDouble<TU;>;",
	&_DoublePipeline$1$1_EnclosingMethodInfo_,
	_DoublePipeline$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.DoublePipeline"
};

$Object* allocate$DoublePipeline$1$1($Class* clazz) {
	return $of($alloc(DoublePipeline$1$1));
}

void DoublePipeline$1$1::init$($DoublePipeline$1* this$1, $Sink* downstream) {
	$set(this, this$1, this$1);
	$Sink$ChainedDouble::init$(downstream);
}

void DoublePipeline$1$1::accept(double t) {
	$nc(this->downstream)->accept($($nc(this->this$1->val$mapper)->apply(t)));
}

DoublePipeline$1$1::DoublePipeline$1$1() {
}

$Class* DoublePipeline$1$1::load$($String* name, bool initialize) {
	$loadClass(DoublePipeline$1$1, name, initialize, &_DoublePipeline$1$1_ClassInfo_, allocate$DoublePipeline$1$1);
	return class$;
}

$Class* DoublePipeline$1$1::class$ = nullptr;

		} // stream
	} // util
} // java