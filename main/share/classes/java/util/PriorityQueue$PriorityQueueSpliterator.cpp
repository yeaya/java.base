#include <java/util/PriorityQueue$PriorityQueueSpliterator.h>

#include <java/util/ConcurrentModificationException.h>
#include <java/util/PriorityQueue.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef NONNULL
#undef SIZED
#undef SUBSIZED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $PriorityQueue = ::java::util::PriorityQueue;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$FieldInfo _PriorityQueue$PriorityQueueSpliterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/PriorityQueue;", nullptr, $FINAL | $SYNTHETIC, $field(PriorityQueue$PriorityQueueSpliterator, this$0)},
	{"index", "I", nullptr, $PRIVATE, $field(PriorityQueue$PriorityQueueSpliterator, index)},
	{"fence", "I", nullptr, $PRIVATE, $field(PriorityQueue$PriorityQueueSpliterator, fence)},
	{"expectedModCount", "I", nullptr, $PRIVATE, $field(PriorityQueue$PriorityQueueSpliterator, expectedModCount)},
	{}
};

$MethodInfo _PriorityQueue$PriorityQueueSpliterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/PriorityQueue;III)V", nullptr, 0, $method(static_cast<void(PriorityQueue$PriorityQueueSpliterator::*)($PriorityQueue*,int32_t,int32_t,int32_t)>(&PriorityQueue$PriorityQueueSpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC},
	{"getFence", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(PriorityQueue$PriorityQueueSpliterator::*)()>(&PriorityQueue$PriorityQueueSpliterator::getFence))},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TE;>;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/PriorityQueue$PriorityQueueSpliterator;", "()Ljava/util/PriorityQueue<TE;>.PriorityQueueSpliterator;", $PUBLIC},
	{}
};

$InnerClassInfo _PriorityQueue$PriorityQueueSpliterator_InnerClassesInfo_[] = {
	{"java.util.PriorityQueue$PriorityQueueSpliterator", "java.util.PriorityQueue", "PriorityQueueSpliterator", $FINAL},
	{}
};

$ClassInfo _PriorityQueue$PriorityQueueSpliterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.PriorityQueue$PriorityQueueSpliterator",
	"java.lang.Object",
	"java.util.Spliterator",
	_PriorityQueue$PriorityQueueSpliterator_FieldInfo_,
	_PriorityQueue$PriorityQueueSpliterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Spliterator<TE;>;",
	nullptr,
	_PriorityQueue$PriorityQueueSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.PriorityQueue"
};

$Object* allocate$PriorityQueue$PriorityQueueSpliterator($Class* clazz) {
	return $of($alloc(PriorityQueue$PriorityQueueSpliterator));
}

void PriorityQueue$PriorityQueueSpliterator::init$($PriorityQueue* this$0, int32_t origin, int32_t fence, int32_t expectedModCount) {
	$set(this, this$0, this$0);
	this->index = origin;
	this->fence = fence;
	this->expectedModCount = expectedModCount;
}

int32_t PriorityQueue$PriorityQueueSpliterator::getFence() {
	int32_t hi = 0;
	if ((hi = this->fence) < 0) {
		this->expectedModCount = this->this$0->modCount;
		hi = (this->fence = this->this$0->size$);
	}
	return hi;
}

PriorityQueue$PriorityQueueSpliterator* PriorityQueue$PriorityQueueSpliterator::trySplit() {
	int32_t hi = getFence();
	int32_t lo = this->index;
	int32_t mid = (int32_t)((uint32_t)(lo + hi) >> 1);
	return (lo >= mid) ? (PriorityQueue$PriorityQueueSpliterator*)nullptr : $new(PriorityQueue$PriorityQueueSpliterator, this->this$0, lo, this->index = mid, this->expectedModCount);
}

void PriorityQueue$PriorityQueueSpliterator::forEachRemaining($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	if (this->fence < 0) {
		this->fence = this->this$0->size$;
		this->expectedModCount = this->this$0->modCount;
	}
	$var($ObjectArray, es, this->this$0->queue);
	int32_t i = 0;
	int32_t hi = 0;
	$var($Object, e, nullptr);
	for (i = this->index, this->index = (hi = this->fence); i < hi; ++i) {
		if (($assign(e, $nc(es)->get(i))) == nullptr) {
			break;
		}
		$nc(action)->accept(e);
	}
	if (this->this$0->modCount != this->expectedModCount) {
		$throwNew($ConcurrentModificationException);
	}
}

bool PriorityQueue$PriorityQueueSpliterator::tryAdvance($Consumer* action) {
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	if (this->fence < 0) {
		this->fence = this->this$0->size$;
		this->expectedModCount = this->this$0->modCount;
	}
	int32_t i = 0;
	if ((i = this->index) < this->fence) {
		this->index = i + 1;
		$var($Object, e, nullptr);
		if (($assign(e, $nc(this->this$0->queue)->get(i))) == nullptr || this->this$0->modCount != this->expectedModCount) {
			$throwNew($ConcurrentModificationException);
		}
		$nc(action)->accept(e);
		return true;
	}
	return false;
}

int64_t PriorityQueue$PriorityQueueSpliterator::estimateSize() {
	return getFence() - this->index;
}

int32_t PriorityQueue$PriorityQueueSpliterator::characteristics() {
	return ($Spliterator::SIZED | $Spliterator::SUBSIZED) | $Spliterator::NONNULL;
}

PriorityQueue$PriorityQueueSpliterator::PriorityQueue$PriorityQueueSpliterator() {
}

$Class* PriorityQueue$PriorityQueueSpliterator::load$($String* name, bool initialize) {
	$loadClass(PriorityQueue$PriorityQueueSpliterator, name, initialize, &_PriorityQueue$PriorityQueueSpliterator_ClassInfo_, allocate$PriorityQueue$PriorityQueueSpliterator);
	return class$;
}

$Class* PriorityQueue$PriorityQueueSpliterator::class$ = nullptr;

	} // util
} // java