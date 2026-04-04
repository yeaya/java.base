#include <jdk/internal/util/random/RandomSupport$RandomSpliterator.h>
#include <java/util/Spliterator.h>
#include <jdk/internal/util/random/RandomSupport.h>
#include <jcpp.h>

#undef IMMUTABLE
#undef NONNULL
#undef SIZED
#undef SUBSIZED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;

namespace jdk {
	namespace internal {
		namespace util {
			namespace random {

void RandomSupport$RandomSpliterator::init$(int64_t index, int64_t fence) {
	this->index = index;
	this->fence = fence;
}

int64_t RandomSupport$RandomSpliterator::estimateSize() {
	return this->fence - this->index;
}

int32_t RandomSupport$RandomSpliterator::characteristics() {
	return ((($Spliterator::SIZED | $Spliterator::SUBSIZED) | $Spliterator::NONNULL) | $Spliterator::IMMUTABLE);
}

RandomSupport$RandomSpliterator::RandomSupport$RandomSpliterator() {
}

$Class* RandomSupport$RandomSpliterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"index", "J", nullptr, $PUBLIC, $field(RandomSupport$RandomSpliterator, index)},
		{"fence", "J", nullptr, $PUBLIC | $FINAL, $field(RandomSupport$RandomSpliterator, fence)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(JJ)V", nullptr, $PUBLIC, $method(RandomSupport$RandomSpliterator, init$, void, int64_t, int64_t)},
		{"characteristics", "()I", nullptr, $PUBLIC, $virtualMethod(RandomSupport$RandomSpliterator, characteristics, int32_t)},
		{"estimateSize", "()J", nullptr, $PUBLIC, $virtualMethod(RandomSupport$RandomSpliterator, estimateSize, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.util.random.RandomSupport$RandomSpliterator", "jdk.internal.util.random.RandomSupport", "RandomSpliterator", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"jdk.internal.util.random.RandomSupport$RandomSpliterator",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.util.random.RandomSupport"
	};
	$loadClass(RandomSupport$RandomSpliterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RandomSupport$RandomSpliterator);
	});
	return class$;
}

$Class* RandomSupport$RandomSpliterator::class$ = nullptr;

			} // random
		} // util
	} // internal
} // jdk