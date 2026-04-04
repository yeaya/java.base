#include <java/util/stream/DoublePipeline$3$1.h>
#include <java/util/function/DoubleToIntFunction.h>
#include <java/util/stream/DoublePipeline$3.h>
#include <java/util/stream/Sink$ChainedDouble.h>
#include <java/util/stream/Sink.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoublePipeline$3 = ::java::util::stream::DoublePipeline$3;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedDouble = ::java::util::stream::Sink$ChainedDouble;

namespace java {
	namespace util {
		namespace stream {

void DoublePipeline$3$1::init$($DoublePipeline$3* this$1, $Sink* downstream) {
	$set(this, this$1, this$1);
	$Sink$ChainedDouble::init$(downstream);
}

void DoublePipeline$3$1::accept(double t) {
	$nc(this->downstream)->accept($nc(this->this$1->val$mapper)->applyAsInt(t));
}

DoublePipeline$3$1::DoublePipeline$3$1() {
}

$Class* DoublePipeline$3$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljava/util/stream/DoublePipeline$3;", nullptr, $FINAL | $SYNTHETIC, $field(DoublePipeline$3$1, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/DoublePipeline$3;Ljava/util/stream/Sink;)V", nullptr, 0, $method(DoublePipeline$3$1, init$, void, $DoublePipeline$3*, $Sink*)},
		{"accept", "(D)V", nullptr, $PUBLIC, $virtualMethod(DoublePipeline$3$1, accept, void, double)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.stream.DoublePipeline$3",
		"opWrapSink",
		"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.DoublePipeline$3", nullptr, nullptr, 0},
		{"java.util.stream.DoublePipeline$3$1", nullptr, nullptr, 0},
		{"java.util.stream.Sink$ChainedDouble", "java.util.stream.Sink", "ChainedDouble", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.stream.DoublePipeline$3$1",
		"java.util.stream.Sink$ChainedDouble",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/stream/Sink$ChainedDouble<Ljava/lang/Integer;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.DoublePipeline"
	};
	$loadClass(DoublePipeline$3$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DoublePipeline$3$1));
	});
	return class$;
}

$Class* DoublePipeline$3$1::class$ = nullptr;

		} // stream
	} // util
} // java