#include <java/util/stream/DoublePipeline$8$1.h>
#include <java/util/function/DoublePredicate.h>
#include <java/util/stream/DoublePipeline$8.h>
#include <java/util/stream/Sink$ChainedDouble.h>
#include <java/util/stream/Sink.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoublePipeline$8 = ::java::util::stream::DoublePipeline$8;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedDouble = ::java::util::stream::Sink$ChainedDouble;

namespace java {
	namespace util {
		namespace stream {

void DoublePipeline$8$1::init$($DoublePipeline$8* this$1, $Sink* downstream) {
	$set(this, this$1, this$1);
	$Sink$ChainedDouble::init$(downstream);
}

void DoublePipeline$8$1::begin(int64_t size) {
	$nc(this->downstream)->begin(-1);
}

void DoublePipeline$8$1::accept(double t) {
	if ($nc(this->this$1->val$predicate)->test(t)) {
		$nc(this->downstream)->accept(t);
	}
}

DoublePipeline$8$1::DoublePipeline$8$1() {
}

$Class* DoublePipeline$8$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljava/util/stream/DoublePipeline$8;", nullptr, $FINAL | $SYNTHETIC, $field(DoublePipeline$8$1, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/DoublePipeline$8;Ljava/util/stream/Sink;)V", nullptr, 0, $method(DoublePipeline$8$1, init$, void, $DoublePipeline$8*, $Sink*)},
		{"accept", "(D)V", nullptr, $PUBLIC, $virtualMethod(DoublePipeline$8$1, accept, void, double)},
		{"begin", "(J)V", nullptr, $PUBLIC, $virtualMethod(DoublePipeline$8$1, begin, void, int64_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.stream.DoublePipeline$8",
		"opWrapSink",
		"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.DoublePipeline$8", nullptr, nullptr, 0},
		{"java.util.stream.DoublePipeline$8$1", nullptr, nullptr, 0},
		{"java.util.stream.Sink$ChainedDouble", "java.util.stream.Sink", "ChainedDouble", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.stream.DoublePipeline$8$1",
		"java.util.stream.Sink$ChainedDouble",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/stream/Sink$ChainedDouble<Ljava/lang/Double;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.DoublePipeline"
	};
	$loadClass(DoublePipeline$8$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DoublePipeline$8$1));
	});
	return class$;
}

$Class* DoublePipeline$8$1::class$ = nullptr;

		} // stream
	} // util
} // java