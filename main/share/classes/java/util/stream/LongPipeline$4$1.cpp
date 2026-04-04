#include <java/util/stream/LongPipeline$4$1.h>
#include <java/util/function/LongToIntFunction.h>
#include <java/util/stream/LongPipeline$4.h>
#include <java/util/stream/Sink$ChainedLong.h>
#include <java/util/stream/Sink.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LongPipeline$4 = ::java::util::stream::LongPipeline$4;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedLong = ::java::util::stream::Sink$ChainedLong;

namespace java {
	namespace util {
		namespace stream {

void LongPipeline$4$1::init$($LongPipeline$4* this$1, $Sink* downstream) {
	$set(this, this$1, this$1);
	$Sink$ChainedLong::init$(downstream);
}

void LongPipeline$4$1::accept(int64_t t) {
	$nc(this->downstream)->accept($nc(this->this$1->val$mapper)->applyAsInt(t));
}

LongPipeline$4$1::LongPipeline$4$1() {
}

$Class* LongPipeline$4$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljava/util/stream/LongPipeline$4;", nullptr, $FINAL | $SYNTHETIC, $field(LongPipeline$4$1, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/LongPipeline$4;Ljava/util/stream/Sink;)V", nullptr, 0, $method(LongPipeline$4$1, init$, void, $LongPipeline$4*, $Sink*)},
		{"accept", "(J)V", nullptr, $PUBLIC, $virtualMethod(LongPipeline$4$1, accept, void, int64_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.stream.LongPipeline$4",
		"opWrapSink",
		"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.LongPipeline$4", nullptr, nullptr, 0},
		{"java.util.stream.LongPipeline$4$1", nullptr, nullptr, 0},
		{"java.util.stream.Sink$ChainedLong", "java.util.stream.Sink", "ChainedLong", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.stream.LongPipeline$4$1",
		"java.util.stream.Sink$ChainedLong",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/stream/Sink$ChainedLong<Ljava/lang/Integer;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.LongPipeline"
	};
	$loadClass(LongPipeline$4$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(LongPipeline$4$1));
	});
	return class$;
}

$Class* LongPipeline$4$1::class$ = nullptr;

		} // stream
	} // util
} // java