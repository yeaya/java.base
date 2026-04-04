#include <java/util/stream/WhileOps$3$1.h>
#include <java/util/function/LongPredicate.h>
#include <java/util/stream/Sink$ChainedLong.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/WhileOps$3.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedLong = ::java::util::stream::Sink$ChainedLong;
using $WhileOps$3 = ::java::util::stream::WhileOps$3;

namespace java {
	namespace util {
		namespace stream {

void WhileOps$3$1::init$($WhileOps$3* this$0, $Sink* downstream) {
	$set(this, this$0, this$0);
	$Sink$ChainedLong::init$(downstream);
	this->take = true;
}

void WhileOps$3$1::begin(int64_t size) {
	$nc(this->downstream)->begin(-1);
}

void WhileOps$3$1::accept(int64_t t) {
	bool var$0 = this->take;
	if (var$0 && (this->take = $nc(this->this$0->val$predicate)->test(t))) {
		$nc(this->downstream)->accept(t);
	}
}

bool WhileOps$3$1::cancellationRequested() {
	return !this->take || $nc(this->downstream)->cancellationRequested();
}

WhileOps$3$1::WhileOps$3$1() {
}

$Class* WhileOps$3$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/stream/WhileOps$3;", nullptr, $FINAL | $SYNTHETIC, $field(WhileOps$3$1, this$0)},
		{"take", "Z", nullptr, 0, $field(WhileOps$3$1, take)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/WhileOps$3;Ljava/util/stream/Sink;)V", nullptr, 0, $method(WhileOps$3$1, init$, void, $WhileOps$3*, $Sink*)},
		{"accept", "(J)V", nullptr, $PUBLIC, $virtualMethod(WhileOps$3$1, accept, void, int64_t)},
		{"begin", "(J)V", nullptr, $PUBLIC, $virtualMethod(WhileOps$3$1, begin, void, int64_t)},
		{"cancellationRequested", "()Z", nullptr, $PUBLIC, $virtualMethod(WhileOps$3$1, cancellationRequested, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.stream.WhileOps$3",
		"opWrapSink",
		"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.WhileOps$3", nullptr, nullptr, 0},
		{"java.util.stream.WhileOps$3$1", nullptr, nullptr, 0},
		{"java.util.stream.Sink$ChainedLong", "java.util.stream.Sink", "ChainedLong", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.stream.WhileOps$3$1",
		"java.util.stream.Sink$ChainedLong",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/stream/Sink$ChainedLong<Ljava/lang/Long;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.WhileOps"
	};
	$loadClass(WhileOps$3$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WhileOps$3$1));
	});
	return class$;
}

$Class* WhileOps$3$1::class$ = nullptr;

		} // stream
	} // util
} // java