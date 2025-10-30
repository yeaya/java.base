#include <java/util/stream/ReferencePipeline$5$1.h>

#include <java/util/function/ToLongFunction.h>
#include <java/util/stream/ReferencePipeline$5.h>
#include <java/util/stream/Sink$ChainedReference.h>
#include <java/util/stream/Sink.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ToLongFunction = ::java::util::function::ToLongFunction;
using $ReferencePipeline$5 = ::java::util::stream::ReferencePipeline$5;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedReference = ::java::util::stream::Sink$ChainedReference;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _ReferencePipeline$5$1_FieldInfo_[] = {
	{"this$1", "Ljava/util/stream/ReferencePipeline$5;", nullptr, $FINAL | $SYNTHETIC, $field(ReferencePipeline$5$1, this$1)},
	{}
};

$MethodInfo _ReferencePipeline$5$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/ReferencePipeline$5;Ljava/util/stream/Sink;)V", nullptr, 0, $method(static_cast<void(ReferencePipeline$5$1::*)($ReferencePipeline$5*,$Sink*)>(&ReferencePipeline$5$1::init$))},
	{"accept", "(Ljava/lang/Object;)V", "(TP_OUT;)V", $PUBLIC},
	{}
};

$EnclosingMethodInfo _ReferencePipeline$5$1_EnclosingMethodInfo_ = {
	"java.util.stream.ReferencePipeline$5",
	"opWrapSink",
	"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
};

$InnerClassInfo _ReferencePipeline$5$1_InnerClassesInfo_[] = {
	{"java.util.stream.ReferencePipeline$5", nullptr, nullptr, 0},
	{"java.util.stream.ReferencePipeline$5$1", nullptr, nullptr, 0},
	{"java.util.stream.Sink$ChainedReference", "java.util.stream.Sink", "ChainedReference", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ReferencePipeline$5$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.ReferencePipeline$5$1",
	"java.util.stream.Sink$ChainedReference",
	nullptr,
	_ReferencePipeline$5$1_FieldInfo_,
	_ReferencePipeline$5$1_MethodInfo_,
	"Ljava/util/stream/Sink$ChainedReference<TP_OUT;Ljava/lang/Long;>;",
	&_ReferencePipeline$5$1_EnclosingMethodInfo_,
	_ReferencePipeline$5$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ReferencePipeline"
};

$Object* allocate$ReferencePipeline$5$1($Class* clazz) {
	return $of($alloc(ReferencePipeline$5$1));
}

void ReferencePipeline$5$1::init$($ReferencePipeline$5* this$1, $Sink* downstream) {
	$set(this, this$1, this$1);
	$Sink$ChainedReference::init$(downstream);
}

void ReferencePipeline$5$1::accept(Object$* u) {
	$nc(this->downstream)->accept($nc(this->this$1->val$mapper)->applyAsLong(u));
}

ReferencePipeline$5$1::ReferencePipeline$5$1() {
}

$Class* ReferencePipeline$5$1::load$($String* name, bool initialize) {
	$loadClass(ReferencePipeline$5$1, name, initialize, &_ReferencePipeline$5$1_ClassInfo_, allocate$ReferencePipeline$5$1);
	return class$;
}

$Class* ReferencePipeline$5$1::class$ = nullptr;

		} // stream
	} // util
} // java