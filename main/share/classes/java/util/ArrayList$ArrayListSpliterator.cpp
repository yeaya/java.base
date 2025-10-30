#include <java/util/ArrayList$ArrayListSpliterator.h>

#include <java/util/ArrayList.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef ORDERED
#undef SIZED
#undef SUBSIZED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$FieldInfo _ArrayList$ArrayListSpliterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/ArrayList;", nullptr, $FINAL | $SYNTHETIC, $field(ArrayList$ArrayListSpliterator, this$0)},
	{"index", "I", nullptr, $PRIVATE, $field(ArrayList$ArrayListSpliterator, index)},
	{"fence", "I", nullptr, $PRIVATE, $field(ArrayList$ArrayListSpliterator, fence)},
	{"expectedModCount", "I", nullptr, $PRIVATE, $field(ArrayList$ArrayListSpliterator, expectedModCount)},
	{}
};

$MethodInfo _ArrayList$ArrayListSpliterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/ArrayList;III)V", nullptr, 0, $method(static_cast<void(ArrayList$ArrayListSpliterator::*)($ArrayList*,int32_t,int32_t,int32_t)>(&ArrayList$ArrayListSpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC},
	{"getFence", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(ArrayList$ArrayListSpliterator::*)()>(&ArrayList$ArrayListSpliterator::getFence))},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TE;>;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/ArrayList$ArrayListSpliterator;", "()Ljava/util/ArrayList<TE;>.ArrayListSpliterator;", $PUBLIC},
	{}
};

$InnerClassInfo _ArrayList$ArrayListSpliterator_InnerClassesInfo_[] = {
	{"java.util.ArrayList$ArrayListSpliterator", "java.util.ArrayList", "ArrayListSpliterator", $FINAL},
	{}
};

$ClassInfo _ArrayList$ArrayListSpliterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.ArrayList$ArrayListSpliterator",
	"java.lang.Object",
	"java.util.Spliterator",
	_ArrayList$ArrayListSpliterator_FieldInfo_,
	_ArrayList$ArrayListSpliterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Spliterator<TE;>;",
	nullptr,
	_ArrayList$ArrayListSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ArrayList"
};

$Object* allocate$ArrayList$ArrayListSpliterator($Class* clazz) {
	return $of($alloc(ArrayList$ArrayListSpliterator));
}

void ArrayList$ArrayListSpliterator::init$($ArrayList* this$0, int32_t origin, int32_t fence, int32_t expectedModCount) {
	$set(this, this$0, this$0);
	this->index = origin;
	this->fence = fence;
	this->expectedModCount = expectedModCount;
}

int32_t ArrayList$ArrayListSpliterator::getFence() {
	int32_t hi = 0;
	if ((hi = this->fence) < 0) {
		this->expectedModCount = this->this$0->modCount;
		hi = (this->fence = this->this$0->size$);
	}
	return hi;
}

ArrayList$ArrayListSpliterator* ArrayList$ArrayListSpliterator::trySplit() {
	int32_t hi = getFence();
	int32_t lo = this->index;
	int32_t mid = (int32_t)((uint32_t)(lo + hi) >> 1);
	return (lo >= mid) ? (ArrayList$ArrayListSpliterator*)nullptr : $new(ArrayList$ArrayListSpliterator, this->this$0, lo, this->index = mid, this->expectedModCount);
}

bool ArrayList$ArrayListSpliterator::tryAdvance($Consumer* action) {
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	int32_t hi = getFence();
	int32_t i = this->index;
	if (i < hi) {
		this->index = i + 1;
		$var($Object, e, $nc(this->this$0->elementData$)->get(i));
		$nc(action)->accept(e);
		if (this->this$0->modCount != this->expectedModCount) {
			$throwNew($ConcurrentModificationException);
		}
		return true;
	}
	return false;
}

void ArrayList$ArrayListSpliterator::forEachRemaining($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	int32_t i = 0;
	int32_t hi = 0;
	int32_t mc = 0;
	$var($ObjectArray, a, nullptr);
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	if (($assign(a, this->this$0->elementData$)) != nullptr) {
		if ((hi = this->fence) < 0) {
			mc = this->this$0->modCount;
			hi = this->this$0->size$;
		} else {
			mc = this->expectedModCount;
		}
		bool var$0 = (i = this->index) >= 0;
		if (var$0 && (this->index = hi) <= $nc(a)->length) {
			for (; i < hi; ++i) {
				$var($Object, e, a->get(i));
				$nc(action)->accept(e);
			}
			if (this->this$0->modCount == mc) {
				return;
			}
		}
	}
	$throwNew($ConcurrentModificationException);
}

int64_t ArrayList$ArrayListSpliterator::estimateSize() {
	return getFence() - this->index;
}

int32_t ArrayList$ArrayListSpliterator::characteristics() {
	return ($Spliterator::ORDERED | $Spliterator::SIZED) | $Spliterator::SUBSIZED;
}

ArrayList$ArrayListSpliterator::ArrayList$ArrayListSpliterator() {
}

$Class* ArrayList$ArrayListSpliterator::load$($String* name, bool initialize) {
	$loadClass(ArrayList$ArrayListSpliterator, name, initialize, &_ArrayList$ArrayListSpliterator_ClassInfo_, allocate$ArrayList$ArrayListSpliterator);
	return class$;
}

$Class* ArrayList$ArrayListSpliterator::class$ = nullptr;

	} // util
} // java