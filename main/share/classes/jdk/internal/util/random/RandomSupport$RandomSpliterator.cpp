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
using $RandomSupport = ::jdk::internal::util::random::RandomSupport;

namespace jdk {
	namespace internal {
		namespace util {
			namespace random {

$FieldInfo _RandomSupport$RandomSpliterator_FieldInfo_[] = {
	{"index", "J", nullptr, $PUBLIC, $field(RandomSupport$RandomSpliterator, index)},
	{"fence", "J", nullptr, $PUBLIC | $FINAL, $field(RandomSupport$RandomSpliterator, fence)},
	{}
};

$MethodInfo _RandomSupport$RandomSpliterator_MethodInfo_[] = {
	{"<init>", "(JJ)V", nullptr, $PUBLIC, $method(static_cast<void(RandomSupport$RandomSpliterator::*)(int64_t,int64_t)>(&RandomSupport$RandomSpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RandomSupport$RandomSpliterator_InnerClassesInfo_[] = {
	{"jdk.internal.util.random.RandomSupport$RandomSpliterator", "jdk.internal.util.random.RandomSupport", "RandomSpliterator", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _RandomSupport$RandomSpliterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"jdk.internal.util.random.RandomSupport$RandomSpliterator",
	"java.lang.Object",
	nullptr,
	_RandomSupport$RandomSpliterator_FieldInfo_,
	_RandomSupport$RandomSpliterator_MethodInfo_,
	nullptr,
	nullptr,
	_RandomSupport$RandomSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.util.random.RandomSupport"
};

$Object* allocate$RandomSupport$RandomSpliterator($Class* clazz) {
	return $of($alloc(RandomSupport$RandomSpliterator));
}

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
	$loadClass(RandomSupport$RandomSpliterator, name, initialize, &_RandomSupport$RandomSpliterator_ClassInfo_, allocate$RandomSupport$RandomSpliterator);
	return class$;
}

$Class* RandomSupport$RandomSpliterator::class$ = nullptr;

			} // random
		} // util
	} // internal
} // jdk