#include <java/util/stream/WhileOps$4$1.h>
#include <java/util/function/DoublePredicate.h>
#include <java/util/stream/Sink$ChainedDouble.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/WhileOps$4.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedDouble = ::java::util::stream::Sink$ChainedDouble;
using $WhileOps$4 = ::java::util::stream::WhileOps$4;

namespace java {
	namespace util {
		namespace stream {

void WhileOps$4$1::init$($WhileOps$4* this$0, $Sink* downstream) {
	$set(this, this$0, this$0);
	$Sink$ChainedDouble::init$(downstream);
	this->take = true;
}

void WhileOps$4$1::begin(int64_t size) {
	$nc(this->downstream)->begin(-1);
}

void WhileOps$4$1::accept(double t) {
	bool var$0 = this->take;
	if (var$0 && (this->take = $nc(this->this$0->val$predicate)->test(t))) {
		$nc(this->downstream)->accept(t);
	}
}

bool WhileOps$4$1::cancellationRequested() {
	return !this->take || $nc(this->downstream)->cancellationRequested();
}

WhileOps$4$1::WhileOps$4$1() {
}

$Class* WhileOps$4$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/stream/WhileOps$4;", nullptr, $FINAL | $SYNTHETIC, $field(WhileOps$4$1, this$0)},
		{"take", "Z", nullptr, 0, $field(WhileOps$4$1, take)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/WhileOps$4;Ljava/util/stream/Sink;)V", nullptr, 0, $method(WhileOps$4$1, init$, void, $WhileOps$4*, $Sink*)},
		{"accept", "(D)V", nullptr, $PUBLIC, $virtualMethod(WhileOps$4$1, accept, void, double)},
		{"begin", "(J)V", nullptr, $PUBLIC, $virtualMethod(WhileOps$4$1, begin, void, int64_t)},
		{"cancellationRequested", "()Z", nullptr, $PUBLIC, $virtualMethod(WhileOps$4$1, cancellationRequested, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.stream.WhileOps$4",
		"opWrapSink",
		"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.WhileOps$4", nullptr, nullptr, 0},
		{"java.util.stream.WhileOps$4$1", nullptr, nullptr, 0},
		{"java.util.stream.Sink$ChainedDouble", "java.util.stream.Sink", "ChainedDouble", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.stream.WhileOps$4$1",
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
		"java.util.stream.WhileOps"
	};
	$loadClass(WhileOps$4$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WhileOps$4$1));
	});
	return class$;
}

$Class* WhileOps$4$1::class$ = nullptr;

		} // stream
	} // util
} // java