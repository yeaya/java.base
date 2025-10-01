#include <java/util/stream/DoublePipeline$6$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/function/DoubleConsumer.h>
#include <java/util/stream/DoublePipeline$6.h>
#include <java/util/stream/DoubleStream$DoubleMapMultiConsumer.h>
#include <java/util/stream/Sink$ChainedDouble.h>
#include <java/util/stream/Sink.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleConsumer = ::java::util::function::DoubleConsumer;
using $DoublePipeline$6 = ::java::util::stream::DoublePipeline$6;
using $DoubleStream$DoubleMapMultiConsumer = ::java::util::stream::DoubleStream$DoubleMapMultiConsumer;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedDouble = ::java::util::stream::Sink$ChainedDouble;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _DoublePipeline$6$1_FieldInfo_[] = {
	{"this$1", "Ljava/util/stream/DoublePipeline$6;", nullptr, $FINAL | $SYNTHETIC, $field(DoublePipeline$6$1, this$1)},
	{}
};

$MethodInfo _DoublePipeline$6$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/DoublePipeline$6;Ljava/util/stream/Sink;)V", nullptr, 0, $method(static_cast<void(DoublePipeline$6$1::*)($DoublePipeline$6*,$Sink*)>(&DoublePipeline$6$1::init$))},
	{"accept", "(D)V", nullptr, $PUBLIC},
	{"begin", "(J)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DoublePipeline$6$1_EnclosingMethodInfo_ = {
	"java.util.stream.DoublePipeline$6",
	"opWrapSink",
	"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
};

$InnerClassInfo _DoublePipeline$6$1_InnerClassesInfo_[] = {
	{"java.util.stream.DoublePipeline$6", nullptr, nullptr, 0},
	{"java.util.stream.DoublePipeline$6$1", nullptr, nullptr, 0},
	{"java.util.stream.Sink$ChainedDouble", "java.util.stream.Sink", "ChainedDouble", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DoublePipeline$6$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.DoublePipeline$6$1",
	"java.util.stream.Sink$ChainedDouble",
	nullptr,
	_DoublePipeline$6$1_FieldInfo_,
	_DoublePipeline$6$1_MethodInfo_,
	"Ljava/util/stream/Sink$ChainedDouble<Ljava/lang/Double;>;",
	&_DoublePipeline$6$1_EnclosingMethodInfo_,
	_DoublePipeline$6$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.DoublePipeline"
};

$Object* allocate$DoublePipeline$6$1($Class* clazz) {
	return $of($alloc(DoublePipeline$6$1));
}

void DoublePipeline$6$1::init$($DoublePipeline$6* this$1, $Sink* downstream) {
	$set(this, this$1, this$1);
	$Sink$ChainedDouble::init$(downstream);
}

void DoublePipeline$6$1::begin(int64_t size) {
	$nc(this->downstream)->begin(-1);
}

void DoublePipeline$6$1::accept(double t) {
	$nc(this->this$1->val$mapper)->accept(t, $cast($DoubleConsumer, this->downstream));
}

DoublePipeline$6$1::DoublePipeline$6$1() {
}

$Class* DoublePipeline$6$1::load$($String* name, bool initialize) {
	$loadClass(DoublePipeline$6$1, name, initialize, &_DoublePipeline$6$1_ClassInfo_, allocate$DoublePipeline$6$1);
	return class$;
}

$Class* DoublePipeline$6$1::class$ = nullptr;

		} // stream
	} // util
} // java