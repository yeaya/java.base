#include <java/util/stream/DoublePipeline$6$1.h>
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
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedDouble = ::java::util::stream::Sink$ChainedDouble;

namespace java {
	namespace util {
		namespace stream {

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
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljava/util/stream/DoublePipeline$6;", nullptr, $FINAL | $SYNTHETIC, $field(DoublePipeline$6$1, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/DoublePipeline$6;Ljava/util/stream/Sink;)V", nullptr, 0, $method(DoublePipeline$6$1, init$, void, $DoublePipeline$6*, $Sink*)},
		{"accept", "(D)V", nullptr, $PUBLIC, $virtualMethod(DoublePipeline$6$1, accept, void, double)},
		{"begin", "(J)V", nullptr, $PUBLIC, $virtualMethod(DoublePipeline$6$1, begin, void, int64_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.stream.DoublePipeline$6",
		"opWrapSink",
		"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.DoublePipeline$6", nullptr, nullptr, 0},
		{"java.util.stream.DoublePipeline$6$1", nullptr, nullptr, 0},
		{"java.util.stream.Sink$ChainedDouble", "java.util.stream.Sink", "ChainedDouble", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.stream.DoublePipeline$6$1",
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
	$loadClass(DoublePipeline$6$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DoublePipeline$6$1));
	});
	return class$;
}

$Class* DoublePipeline$6$1::class$ = nullptr;

		} // stream
	} // util
} // java