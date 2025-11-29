#include <java/util/stream/ReferencePipeline$2$1.h>

#include <java/util/function/Predicate.h>
#include <java/util/stream/ReferencePipeline$2.h>
#include <java/util/stream/Sink$ChainedReference.h>
#include <java/util/stream/Sink.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Predicate = ::java::util::function::Predicate;
using $ReferencePipeline$2 = ::java::util::stream::ReferencePipeline$2;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedReference = ::java::util::stream::Sink$ChainedReference;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _ReferencePipeline$2$1_FieldInfo_[] = {
	{"this$1", "Ljava/util/stream/ReferencePipeline$2;", nullptr, $FINAL | $SYNTHETIC, $field(ReferencePipeline$2$1, this$1)},
	{}
};

$MethodInfo _ReferencePipeline$2$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/ReferencePipeline$2;Ljava/util/stream/Sink;)V", nullptr, 0, $method(static_cast<void(ReferencePipeline$2$1::*)($ReferencePipeline$2*,$Sink*)>(&ReferencePipeline$2$1::init$))},
	{"accept", "(Ljava/lang/Object;)V", "(TP_OUT;)V", $PUBLIC},
	{"begin", "(J)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ReferencePipeline$2$1_EnclosingMethodInfo_ = {
	"java.util.stream.ReferencePipeline$2",
	"opWrapSink",
	"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
};

$InnerClassInfo _ReferencePipeline$2$1_InnerClassesInfo_[] = {
	{"java.util.stream.ReferencePipeline$2", nullptr, nullptr, 0},
	{"java.util.stream.ReferencePipeline$2$1", nullptr, nullptr, 0},
	{"java.util.stream.Sink$ChainedReference", "java.util.stream.Sink", "ChainedReference", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ReferencePipeline$2$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.ReferencePipeline$2$1",
	"java.util.stream.Sink$ChainedReference",
	nullptr,
	_ReferencePipeline$2$1_FieldInfo_,
	_ReferencePipeline$2$1_MethodInfo_,
	"Ljava/util/stream/Sink$ChainedReference<TP_OUT;TP_OUT;>;",
	&_ReferencePipeline$2$1_EnclosingMethodInfo_,
	_ReferencePipeline$2$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ReferencePipeline"
};

$Object* allocate$ReferencePipeline$2$1($Class* clazz) {
	return $of($alloc(ReferencePipeline$2$1));
}

void ReferencePipeline$2$1::init$($ReferencePipeline$2* this$1, $Sink* downstream) {
	$set(this, this$1, this$1);
	$Sink$ChainedReference::init$(downstream);
}

void ReferencePipeline$2$1::begin(int64_t size) {
	$nc(this->downstream)->begin(-1);
}

void ReferencePipeline$2$1::accept(Object$* u) {
	if ($nc(this->this$1->val$predicate)->test(u)) {
		$nc(this->downstream)->accept(u);
	}
}

ReferencePipeline$2$1::ReferencePipeline$2$1() {
}

$Class* ReferencePipeline$2$1::load$($String* name, bool initialize) {
	$loadClass(ReferencePipeline$2$1, name, initialize, &_ReferencePipeline$2$1_ClassInfo_, allocate$ReferencePipeline$2$1);
	return class$;
}

$Class* ReferencePipeline$2$1::class$ = nullptr;

		} // stream
	} // util
} // java