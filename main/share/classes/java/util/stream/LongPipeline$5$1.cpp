#include <java/util/stream/LongPipeline$5$1.h>

#include <java/util/function/LongToDoubleFunction.h>
#include <java/util/stream/LongPipeline$5.h>
#include <java/util/stream/Sink$ChainedLong.h>
#include <java/util/stream/Sink.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LongToDoubleFunction = ::java::util::function::LongToDoubleFunction;
using $LongPipeline$5 = ::java::util::stream::LongPipeline$5;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedLong = ::java::util::stream::Sink$ChainedLong;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _LongPipeline$5$1_FieldInfo_[] = {
	{"this$1", "Ljava/util/stream/LongPipeline$5;", nullptr, $FINAL | $SYNTHETIC, $field(LongPipeline$5$1, this$1)},
	{}
};

$MethodInfo _LongPipeline$5$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/LongPipeline$5;Ljava/util/stream/Sink;)V", nullptr, 0, $method(LongPipeline$5$1, init$, void, $LongPipeline$5*, $Sink*)},
	{"accept", "(J)V", nullptr, $PUBLIC, $virtualMethod(LongPipeline$5$1, accept, void, int64_t)},
	{}
};

$EnclosingMethodInfo _LongPipeline$5$1_EnclosingMethodInfo_ = {
	"java.util.stream.LongPipeline$5",
	"opWrapSink",
	"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
};

$InnerClassInfo _LongPipeline$5$1_InnerClassesInfo_[] = {
	{"java.util.stream.LongPipeline$5", nullptr, nullptr, 0},
	{"java.util.stream.LongPipeline$5$1", nullptr, nullptr, 0},
	{"java.util.stream.Sink$ChainedLong", "java.util.stream.Sink", "ChainedLong", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LongPipeline$5$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.LongPipeline$5$1",
	"java.util.stream.Sink$ChainedLong",
	nullptr,
	_LongPipeline$5$1_FieldInfo_,
	_LongPipeline$5$1_MethodInfo_,
	"Ljava/util/stream/Sink$ChainedLong<Ljava/lang/Double;>;",
	&_LongPipeline$5$1_EnclosingMethodInfo_,
	_LongPipeline$5$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.LongPipeline"
};

$Object* allocate$LongPipeline$5$1($Class* clazz) {
	return $of($alloc(LongPipeline$5$1));
}

void LongPipeline$5$1::init$($LongPipeline$5* this$1, $Sink* downstream) {
	$set(this, this$1, this$1);
	$Sink$ChainedLong::init$(downstream);
}

void LongPipeline$5$1::accept(int64_t t) {
	$nc(this->downstream)->accept($nc(this->this$1->val$mapper)->applyAsDouble(t));
}

LongPipeline$5$1::LongPipeline$5$1() {
}

$Class* LongPipeline$5$1::load$($String* name, bool initialize) {
	$loadClass(LongPipeline$5$1, name, initialize, &_LongPipeline$5$1_ClassInfo_, allocate$LongPipeline$5$1);
	return class$;
}

$Class* LongPipeline$5$1::class$ = nullptr;

		} // stream
	} // util
} // java