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
using $ReferencePipeline$2 = ::java::util::stream::ReferencePipeline$2;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedReference = ::java::util::stream::Sink$ChainedReference;

namespace java {
	namespace util {
		namespace stream {

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
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljava/util/stream/ReferencePipeline$2;", nullptr, $FINAL | $SYNTHETIC, $field(ReferencePipeline$2$1, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/ReferencePipeline$2;Ljava/util/stream/Sink;)V", nullptr, 0, $method(ReferencePipeline$2$1, init$, void, $ReferencePipeline$2*, $Sink*)},
		{"accept", "(Ljava/lang/Object;)V", "(TP_OUT;)V", $PUBLIC, $virtualMethod(ReferencePipeline$2$1, accept, void, Object$*)},
		{"begin", "(J)V", nullptr, $PUBLIC, $virtualMethod(ReferencePipeline$2$1, begin, void, int64_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.stream.ReferencePipeline$2",
		"opWrapSink",
		"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.ReferencePipeline$2", nullptr, nullptr, 0},
		{"java.util.stream.ReferencePipeline$2$1", nullptr, nullptr, 0},
		{"java.util.stream.Sink$ChainedReference", "java.util.stream.Sink", "ChainedReference", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.stream.ReferencePipeline$2$1",
		"java.util.stream.Sink$ChainedReference",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/stream/Sink$ChainedReference<TP_OUT;TP_OUT;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.ReferencePipeline"
	};
	$loadClass(ReferencePipeline$2$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReferencePipeline$2$1);
	});
	return class$;
}

$Class* ReferencePipeline$2$1::class$ = nullptr;

		} // stream
	} // util
} // java