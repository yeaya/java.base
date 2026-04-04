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
using $ReferencePipeline$4 = ::java::util::stream::ReferencePipeline$4;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedReference = ::java::util::stream::Sink$ChainedReference;

namespace java {
	namespace util {
		namespace stream {

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
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljava/util/stream/ReferencePipeline$4;", nullptr, $FINAL | $SYNTHETIC, $field(ReferencePipeline$4$1, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/ReferencePipeline$4;Ljava/util/stream/Sink;)V", nullptr, 0, $method(ReferencePipeline$4$1, init$, void, $ReferencePipeline$4*, $Sink*)},
		{"accept", "(Ljava/lang/Object;)V", "(TP_OUT;)V", $PUBLIC, $virtualMethod(ReferencePipeline$4$1, accept, void, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.stream.ReferencePipeline$4",
		"opWrapSink",
		"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.ReferencePipeline$4", nullptr, nullptr, 0},
		{"java.util.stream.ReferencePipeline$4$1", nullptr, nullptr, 0},
		{"java.util.stream.Sink$ChainedReference", "java.util.stream.Sink", "ChainedReference", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.stream.ReferencePipeline$4$1",
		"java.util.stream.Sink$ChainedReference",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/stream/Sink$ChainedReference<TP_OUT;Ljava/lang/Integer;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.ReferencePipeline"
	};
	$loadClass(ReferencePipeline$4$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReferencePipeline$4$1);
	});
	return class$;
}

$Class* ReferencePipeline$4$1::class$ = nullptr;

		} // stream
	} // util
} // java