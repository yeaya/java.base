#include <java/util/Vector$VectorSpliterator.h>

#include <java/util/ConcurrentModificationException.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/Vector.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef ORDERED
#undef SIZED
#undef SUBSIZED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Vector = ::java::util::Vector;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$FieldInfo _Vector$VectorSpliterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/Vector;", nullptr, $FINAL | $SYNTHETIC, $field(Vector$VectorSpliterator, this$0)},
	{"array", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(Vector$VectorSpliterator, array)},
	{"index", "I", nullptr, $PRIVATE, $field(Vector$VectorSpliterator, index)},
	{"fence", "I", nullptr, $PRIVATE, $field(Vector$VectorSpliterator, fence)},
	{"expectedModCount", "I", nullptr, $PRIVATE, $field(Vector$VectorSpliterator, expectedModCount)},
	{}
};

$MethodInfo _Vector$VectorSpliterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Vector;[Ljava/lang/Object;III)V", nullptr, 0, $method(Vector$VectorSpliterator, init$, void, $Vector*, $ObjectArray*, int32_t, int32_t, int32_t)},
	{"characteristics", "()I", nullptr, $PUBLIC, $virtualMethod(Vector$VectorSpliterator, characteristics, int32_t)},
	{"estimateSize", "()J", nullptr, $PUBLIC, $virtualMethod(Vector$VectorSpliterator, estimateSize, int64_t)},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC, $virtualMethod(Vector$VectorSpliterator, forEachRemaining, void, $Consumer*)},
	{"getFence", "()I", nullptr, $PRIVATE, $method(Vector$VectorSpliterator, getFence, int32_t)},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TE;>;)Z", $PUBLIC, $virtualMethod(Vector$VectorSpliterator, tryAdvance, bool, $Consumer*)},
	{"trySplit", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE;>;", $PUBLIC, $virtualMethod(Vector$VectorSpliterator, trySplit, $Spliterator*)},
	{}
};

$InnerClassInfo _Vector$VectorSpliterator_InnerClassesInfo_[] = {
	{"java.util.Vector$VectorSpliterator", "java.util.Vector", "VectorSpliterator", $FINAL},
	{}
};

$ClassInfo _Vector$VectorSpliterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.Vector$VectorSpliterator",
	"java.lang.Object",
	"java.util.Spliterator",
	_Vector$VectorSpliterator_FieldInfo_,
	_Vector$VectorSpliterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Spliterator<TE;>;",
	nullptr,
	_Vector$VectorSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Vector"
};

$Object* allocate$Vector$VectorSpliterator($Class* clazz) {
	return $of($alloc(Vector$VectorSpliterator));
}

void Vector$VectorSpliterator::init$($Vector* this$0, $ObjectArray* array, int32_t origin, int32_t fence, int32_t expectedModCount) {
	$set(this, this$0, this$0);
	$set(this, array, array);
	this->index = origin;
	this->fence = fence;
	this->expectedModCount = expectedModCount;
}

int32_t Vector$VectorSpliterator::getFence() {
	int32_t hi = 0;
	if ((hi = this->fence) < 0) {
		$synchronized(this->this$0) {
			$set(this, array, this->this$0->elementData$);
			this->expectedModCount = this->this$0->modCount;
			hi = (this->fence = this->this$0->elementCount);
		}
	}
	return hi;
}

$Spliterator* Vector$VectorSpliterator::trySplit() {
	int32_t hi = getFence();
	int32_t lo = this->index;
	int32_t mid = (int32_t)((uint32_t)(lo + hi) >> 1);
	return (lo >= mid) ? ($Spliterator*)nullptr : static_cast<$Spliterator*>($new(Vector$VectorSpliterator, this->this$0, this->array, lo, this->index = mid, this->expectedModCount));
}

bool Vector$VectorSpliterator::tryAdvance($Consumer* action) {
	$Objects::requireNonNull(action);
	int32_t i = 0;
	if (getFence() > (i = this->index)) {
		this->index = i + 1;
		action->accept($nc(this->array)->get(i));
		if (this->this$0->modCount != this->expectedModCount) {
			$throwNew($ConcurrentModificationException);
		}
		return true;
	}
	return false;
}

void Vector$VectorSpliterator::forEachRemaining($Consumer* action) {
	$Objects::requireNonNull(action);
	int32_t hi = getFence();
	$var($ObjectArray, a, this->array);
	int32_t i = 0;
	for (i = this->index, this->index = hi; i < hi; ++i) {
		action->accept($nc(a)->get(i));
	}
	if (this->this$0->modCount != this->expectedModCount) {
		$throwNew($ConcurrentModificationException);
	}
}

int64_t Vector$VectorSpliterator::estimateSize() {
	return getFence() - this->index;
}

int32_t Vector$VectorSpliterator::characteristics() {
	return ($Spliterator::ORDERED | $Spliterator::SIZED) | $Spliterator::SUBSIZED;
}

Vector$VectorSpliterator::Vector$VectorSpliterator() {
}

$Class* Vector$VectorSpliterator::load$($String* name, bool initialize) {
	$loadClass(Vector$VectorSpliterator, name, initialize, &_Vector$VectorSpliterator_ClassInfo_, allocate$Vector$VectorSpliterator);
	return class$;
}

$Class* Vector$VectorSpliterator::class$ = nullptr;

	} // util
} // java