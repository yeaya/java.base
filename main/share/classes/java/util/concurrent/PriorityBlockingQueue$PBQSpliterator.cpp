#include <java/util/concurrent/PriorityBlockingQueue$PBQSpliterator.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/concurrent/PriorityBlockingQueue.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef NONNULL
#undef SIZED
#undef SUBSIZED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $PriorityBlockingQueue = ::java::util::concurrent::PriorityBlockingQueue;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _PriorityBlockingQueue$PBQSpliterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/concurrent/PriorityBlockingQueue;", nullptr, $FINAL | $SYNTHETIC, $field(PriorityBlockingQueue$PBQSpliterator, this$0)},
	{"array", "[Ljava/lang/Object;", nullptr, 0, $field(PriorityBlockingQueue$PBQSpliterator, array)},
	{"index", "I", nullptr, 0, $field(PriorityBlockingQueue$PBQSpliterator, index)},
	{"fence", "I", nullptr, 0, $field(PriorityBlockingQueue$PBQSpliterator, fence)},
	{}
};

$MethodInfo _PriorityBlockingQueue$PBQSpliterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/PriorityBlockingQueue;)V", nullptr, 0, $method(static_cast<void(PriorityBlockingQueue$PBQSpliterator::*)($PriorityBlockingQueue*)>(&PriorityBlockingQueue$PBQSpliterator::init$))},
	{"<init>", "(Ljava/util/concurrent/PriorityBlockingQueue;[Ljava/lang/Object;II)V", nullptr, 0, $method(static_cast<void(PriorityBlockingQueue$PBQSpliterator::*)($PriorityBlockingQueue*,$ObjectArray*,int32_t,int32_t)>(&PriorityBlockingQueue$PBQSpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC},
	{"getFence", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(PriorityBlockingQueue$PBQSpliterator::*)()>(&PriorityBlockingQueue$PBQSpliterator::getFence))},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TE;>;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/concurrent/PriorityBlockingQueue$PBQSpliterator;", "()Ljava/util/concurrent/PriorityBlockingQueue<TE;>.PBQSpliterator;", $PUBLIC},
	{}
};

$InnerClassInfo _PriorityBlockingQueue$PBQSpliterator_InnerClassesInfo_[] = {
	{"java.util.concurrent.PriorityBlockingQueue$PBQSpliterator", "java.util.concurrent.PriorityBlockingQueue", "PBQSpliterator", $FINAL},
	{}
};

$ClassInfo _PriorityBlockingQueue$PBQSpliterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.PriorityBlockingQueue$PBQSpliterator",
	"java.lang.Object",
	"java.util.Spliterator",
	_PriorityBlockingQueue$PBQSpliterator_FieldInfo_,
	_PriorityBlockingQueue$PBQSpliterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Spliterator<TE;>;",
	nullptr,
	_PriorityBlockingQueue$PBQSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.PriorityBlockingQueue"
};

$Object* allocate$PriorityBlockingQueue$PBQSpliterator($Class* clazz) {
	return $of($alloc(PriorityBlockingQueue$PBQSpliterator));
}

void PriorityBlockingQueue$PBQSpliterator::init$($PriorityBlockingQueue* this$0) {
	$set(this, this$0, this$0);
}

void PriorityBlockingQueue$PBQSpliterator::init$($PriorityBlockingQueue* this$0, $ObjectArray* array, int32_t index, int32_t fence) {
	$set(this, this$0, this$0);
	$set(this, array, array);
	this->index = index;
	this->fence = fence;
}

int32_t PriorityBlockingQueue$PBQSpliterator::getFence() {
	if (this->array == nullptr) {
		this->fence = $nc(($assignField(this, array, this->this$0->toArray())))->length;
	}
	return this->fence;
}

PriorityBlockingQueue$PBQSpliterator* PriorityBlockingQueue$PBQSpliterator::trySplit() {
	int32_t hi = getFence();
	int32_t lo = this->index;
	int32_t mid = (int32_t)((uint32_t)(lo + hi) >> 1);
	return (lo >= mid) ? (PriorityBlockingQueue$PBQSpliterator*)nullptr : $new(PriorityBlockingQueue$PBQSpliterator, this->this$0, this->array, lo, this->index = mid);
}

void PriorityBlockingQueue$PBQSpliterator::forEachRemaining($Consumer* action) {
	$Objects::requireNonNull(action);
	int32_t hi = getFence();
	int32_t lo = this->index;
	$var($ObjectArray, es, this->array);
	this->index = hi;
	for (int32_t i = lo; i < hi; ++i) {
		action->accept($nc(es)->get(i));
	}
}

bool PriorityBlockingQueue$PBQSpliterator::tryAdvance($Consumer* action) {
	$Objects::requireNonNull(action);
	if (getFence() > this->index && this->index >= 0) {
		action->accept($nc(this->array)->get(this->index++));
		return true;
	}
	return false;
}

int64_t PriorityBlockingQueue$PBQSpliterator::estimateSize() {
	return getFence() - this->index;
}

int32_t PriorityBlockingQueue$PBQSpliterator::characteristics() {
	return (($Spliterator::NONNULL | $Spliterator::SIZED) | $Spliterator::SUBSIZED);
}

PriorityBlockingQueue$PBQSpliterator::PriorityBlockingQueue$PBQSpliterator() {
}

$Class* PriorityBlockingQueue$PBQSpliterator::load$($String* name, bool initialize) {
	$loadClass(PriorityBlockingQueue$PBQSpliterator, name, initialize, &_PriorityBlockingQueue$PBQSpliterator_ClassInfo_, allocate$PriorityBlockingQueue$PBQSpliterator);
	return class$;
}

$Class* PriorityBlockingQueue$PBQSpliterator::class$ = nullptr;

		} // concurrent
	} // util
} // java