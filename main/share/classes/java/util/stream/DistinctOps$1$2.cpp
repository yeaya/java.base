#include <java/util/stream/DistinctOps$1$2.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <java/util/stream/DistinctOps$1.h>
#include <java/util/stream/Sink$ChainedReference.h>
#include <java/util/stream/Sink.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashSet = ::java::util::HashSet;
using $DistinctOps$1 = ::java::util::stream::DistinctOps$1;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedReference = ::java::util::stream::Sink$ChainedReference;

namespace java {
	namespace util {
		namespace stream {

void DistinctOps$1$2::init$($DistinctOps$1* this$0, $Sink* downstream) {
	$set(this, this$0, this$0);
	$Sink$ChainedReference::init$(downstream);
}

void DistinctOps$1$2::begin(int64_t size) {
	$set(this, seen, $new($HashSet));
	$nc(this->downstream)->begin(-1);
}

void DistinctOps$1$2::end() {
	$set(this, seen, nullptr);
	$nc(this->downstream)->end();
}

void DistinctOps$1$2::accept(Object$* t) {
	if ($nc(this->seen)->add(t)) {
		$nc(this->downstream)->accept(t);
	}
}

DistinctOps$1$2::DistinctOps$1$2() {
}

$Class* DistinctOps$1$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/stream/DistinctOps$1;", nullptr, $FINAL | $SYNTHETIC, $field(DistinctOps$1$2, this$0)},
		{"seen", "Ljava/util/Set;", "Ljava/util/Set<TT;>;", 0, $field(DistinctOps$1$2, seen)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/DistinctOps$1;Ljava/util/stream/Sink;)V", nullptr, 0, $method(DistinctOps$1$2, init$, void, $DistinctOps$1*, $Sink*)},
		{"accept", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC, $virtualMethod(DistinctOps$1$2, accept, void, Object$*)},
		{"begin", "(J)V", nullptr, $PUBLIC, $virtualMethod(DistinctOps$1$2, begin, void, int64_t)},
		{"end", "()V", nullptr, $PUBLIC, $virtualMethod(DistinctOps$1$2, end, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.stream.DistinctOps$1",
		"opWrapSink",
		"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.DistinctOps$1", nullptr, nullptr, 0},
		{"java.util.stream.DistinctOps$1$2", nullptr, nullptr, 0},
		{"java.util.stream.Sink$ChainedReference", "java.util.stream.Sink", "ChainedReference", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.stream.DistinctOps$1$2",
		"java.util.stream.Sink$ChainedReference",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/stream/Sink$ChainedReference<TT;TT;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.DistinctOps"
	};
	$loadClass(DistinctOps$1$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DistinctOps$1$2);
	});
	return class$;
}

$Class* DistinctOps$1$2::class$ = nullptr;

		} // stream
	} // util
} // java