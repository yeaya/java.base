#include <java/util/stream/ReferencePipeline$11$1.h>

#include <java/util/function/BiConsumer.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/ReferencePipeline$11.h>
#include <java/util/stream/Sink$ChainedReference.h>
#include <java/util/stream/Sink.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BiConsumer = ::java::util::function::BiConsumer;
using $Consumer = ::java::util::function::Consumer;
using $ReferencePipeline$11 = ::java::util::stream::ReferencePipeline$11;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedReference = ::java::util::stream::Sink$ChainedReference;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _ReferencePipeline$11$1_FieldInfo_[] = {
	{"this$1", "Ljava/util/stream/ReferencePipeline$11;", nullptr, $FINAL | $SYNTHETIC, $field(ReferencePipeline$11$1, this$1)},
	{}
};

$MethodInfo _ReferencePipeline$11$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/ReferencePipeline$11;Ljava/util/stream/Sink;)V", nullptr, 0, $method(ReferencePipeline$11$1, init$, void, $ReferencePipeline$11*, $Sink*)},
	{"accept", "(Ljava/lang/Object;)V", "(TP_OUT;)V", $PUBLIC, $virtualMethod(ReferencePipeline$11$1, accept, void, Object$*)},
	{"begin", "(J)V", nullptr, $PUBLIC, $virtualMethod(ReferencePipeline$11$1, begin, void, int64_t)},
	{}
};

$EnclosingMethodInfo _ReferencePipeline$11$1_EnclosingMethodInfo_ = {
	"java.util.stream.ReferencePipeline$11",
	"opWrapSink",
	"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
};

$InnerClassInfo _ReferencePipeline$11$1_InnerClassesInfo_[] = {
	{"java.util.stream.ReferencePipeline$11", nullptr, nullptr, 0},
	{"java.util.stream.ReferencePipeline$11$1", nullptr, nullptr, 0},
	{"java.util.stream.Sink$ChainedReference", "java.util.stream.Sink", "ChainedReference", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ReferencePipeline$11$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.ReferencePipeline$11$1",
	"java.util.stream.Sink$ChainedReference",
	nullptr,
	_ReferencePipeline$11$1_FieldInfo_,
	_ReferencePipeline$11$1_MethodInfo_,
	"Ljava/util/stream/Sink$ChainedReference<TP_OUT;TR;>;",
	&_ReferencePipeline$11$1_EnclosingMethodInfo_,
	_ReferencePipeline$11$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ReferencePipeline"
};

$Object* allocate$ReferencePipeline$11$1($Class* clazz) {
	return $of($alloc(ReferencePipeline$11$1));
}

void ReferencePipeline$11$1::init$($ReferencePipeline$11* this$1, $Sink* downstream) {
	$set(this, this$1, this$1);
	$Sink$ChainedReference::init$(downstream);
}

void ReferencePipeline$11$1::begin(int64_t size) {
	$nc(this->downstream)->begin(-1);
}

void ReferencePipeline$11$1::accept(Object$* u) {
	$nc(this->this$1->val$mapper)->accept(u, static_cast<$Consumer*>(this->downstream));
}

ReferencePipeline$11$1::ReferencePipeline$11$1() {
}

$Class* ReferencePipeline$11$1::load$($String* name, bool initialize) {
	$loadClass(ReferencePipeline$11$1, name, initialize, &_ReferencePipeline$11$1_ClassInfo_, allocate$ReferencePipeline$11$1);
	return class$;
}

$Class* ReferencePipeline$11$1::class$ = nullptr;

		} // stream
	} // util
} // java