#include <java/util/stream/ReferencePipeline$4$1.h>

#include <java/util/function/ToIntFunction.h>
#include <java/util/stream/ReferencePipeline$4.h>
#include <java/util/stream/Sink$ChainedReference.h>
#include <java/util/stream/Sink.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ToIntFunction = ::java::util::function::ToIntFunction;
using $ReferencePipeline$4 = ::java::util::stream::ReferencePipeline$4;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedReference = ::java::util::stream::Sink$ChainedReference;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _ReferencePipeline$4$1_FieldInfo_[] = {
	{"this$1", "Ljava/util/stream/ReferencePipeline$4;", nullptr, $FINAL | $SYNTHETIC, $field(ReferencePipeline$4$1, this$1)},
	{}
};

$MethodInfo _ReferencePipeline$4$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/ReferencePipeline$4;Ljava/util/stream/Sink;)V", nullptr, 0, $method(static_cast<void(ReferencePipeline$4$1::*)($ReferencePipeline$4*,$Sink*)>(&ReferencePipeline$4$1::init$))},
	{"accept", "(Ljava/lang/Object;)V", "(TP_OUT;)V", $PUBLIC},
	{}
};

$EnclosingMethodInfo _ReferencePipeline$4$1_EnclosingMethodInfo_ = {
	"java.util.stream.ReferencePipeline$4",
	"opWrapSink",
	"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
};

$InnerClassInfo _ReferencePipeline$4$1_InnerClassesInfo_[] = {
	{"java.util.stream.ReferencePipeline$4", nullptr, nullptr, 0},
	{"java.util.stream.ReferencePipeline$4$1", nullptr, nullptr, 0},
	{"java.util.stream.Sink$ChainedReference", "java.util.stream.Sink", "ChainedReference", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ReferencePipeline$4$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.ReferencePipeline$4$1",
	"java.util.stream.Sink$ChainedReference",
	nullptr,
	_ReferencePipeline$4$1_FieldInfo_,
	_ReferencePipeline$4$1_MethodInfo_,
	"Ljava/util/stream/Sink$ChainedReference<TP_OUT;Ljava/lang/Integer;>;",
	&_ReferencePipeline$4$1_EnclosingMethodInfo_,
	_ReferencePipeline$4$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ReferencePipeline"
};

$Object* allocate$ReferencePipeline$4$1($Class* clazz) {
	return $of($alloc(ReferencePipeline$4$1));
}

void ReferencePipeline$4$1::init$($ReferencePipeline$4* this$1, $Sink* downstream) {
	$set(this, this$1, this$1);
	$Sink$ChainedReference::init$(downstream);
}

void ReferencePipeline$4$1::accept(Object$* u) {
	$nc(this->downstream)->accept($nc(this->this$1->val$mapper)->applyAsInt(u));
}

ReferencePipeline$4$1::ReferencePipeline$4$1() {
}

$Class* ReferencePipeline$4$1::load$($String* name, bool initialize) {
	$loadClass(ReferencePipeline$4$1, name, initialize, &_ReferencePipeline$4$1_ClassInfo_, allocate$ReferencePipeline$4$1);
	return class$;
}

$Class* ReferencePipeline$4$1::class$ = nullptr;

		} // stream
	} // util
} // java