#include <java/util/ArrayList$SubList$2.h>

#include <java/util/ArrayList$ArrayListSpliterator.h>
#include <java/util/ArrayList$SubList.h>
#include <java/util/ArrayList.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef ORDERED
#undef SIZED
#undef SUBSIZED

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $ArrayList$ArrayListSpliterator = ::java::util::ArrayList$ArrayListSpliterator;
using $ArrayList$SubList = ::java::util::ArrayList$SubList;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$FieldInfo _ArrayList$SubList$2_FieldInfo_[] = {
	{"this$0", "Ljava/util/ArrayList$SubList;", nullptr, $FINAL | $SYNTHETIC, $field(ArrayList$SubList$2, this$0)},
	{"index", "I", nullptr, $PRIVATE, $field(ArrayList$SubList$2, index)},
	{"fence", "I", nullptr, $PRIVATE, $field(ArrayList$SubList$2, fence)},
	{"expectedModCount", "I", nullptr, $PRIVATE, $field(ArrayList$SubList$2, expectedModCount)},
	{}
};

$MethodInfo _ArrayList$SubList$2_MethodInfo_[] = {
	{"<init>", "(Ljava/util/ArrayList$SubList;)V", nullptr, 0, $method(static_cast<void(ArrayList$SubList$2::*)($ArrayList$SubList*)>(&ArrayList$SubList$2::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC},
	{"getFence", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(ArrayList$SubList$2::*)()>(&ArrayList$SubList$2::getFence))},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TE;>;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/ArrayList$ArrayListSpliterator;", "()Ljava/util/ArrayList<TE;>.ArrayListSpliterator;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _ArrayList$SubList$2_EnclosingMethodInfo_ = {
	"java.util.ArrayList$SubList",
	"spliterator",
	"()Ljava/util/Spliterator;"
};

$InnerClassInfo _ArrayList$SubList$2_InnerClassesInfo_[] = {
	{"java.util.ArrayList$SubList", "java.util.ArrayList", "SubList", $PRIVATE | $STATIC},
	{"java.util.ArrayList$SubList$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ArrayList$SubList$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.ArrayList$SubList$2",
	"java.lang.Object",
	"java.util.Spliterator",
	_ArrayList$SubList$2_FieldInfo_,
	_ArrayList$SubList$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Spliterator<TE;>;",
	&_ArrayList$SubList$2_EnclosingMethodInfo_,
	_ArrayList$SubList$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ArrayList"
};

$Object* allocate$ArrayList$SubList$2($Class* clazz) {
	return $of($alloc(ArrayList$SubList$2));
}

void ArrayList$SubList$2::init$($ArrayList$SubList* this$0) {
	$set(this, this$0, this$0);
	this->index = this->this$0->offset;
	this->fence = -1;
}

int32_t ArrayList$SubList$2::getFence() {
	int32_t hi = 0;
	if ((hi = this->fence) < 0) {
		this->expectedModCount = this->this$0->modCount;
		hi = (this->fence = this->this$0->offset + this->this$0->size$);
	}
	return hi;
}

$Spliterator* ArrayList$SubList$2::trySplit() {
	int32_t hi = getFence();
	int32_t lo = this->index;
	int32_t mid = (int32_t)((uint32_t)(lo + hi) >> 1);
	return ((lo >= mid) ? ($ArrayList$ArrayListSpliterator*)nullptr : $new($ArrayList$ArrayListSpliterator, static_cast<$ArrayList*>($nc(this->this$0->root)), lo, this->index = mid, this->expectedModCount));
}

bool ArrayList$SubList$2::tryAdvance($Consumer* action) {
	$Objects::requireNonNull(action);
	int32_t hi = getFence();
	int32_t i = this->index;
	if (i < hi) {
		this->index = i + 1;
		$var($Object, e, $nc($nc(this->this$0->root)->elementData$)->get(i));
		action->accept(e);
		if ($nc(this->this$0->root)->modCount != this->expectedModCount) {
			$throwNew($ConcurrentModificationException);
		}
		return true;
	}
	return false;
}

void ArrayList$SubList$2::forEachRemaining($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(action);
	int32_t i = 0;
	int32_t hi = 0;
	int32_t mc = 0;
	$var($ArrayList, lst, this->this$0->root);
	$var($ObjectArray, a, nullptr);
	if (($assign(a, $nc(lst)->elementData$)) != nullptr) {
		if ((hi = this->fence) < 0) {
			mc = this->this$0->modCount;
			hi = this->this$0->offset + this->this$0->size$;
		} else {
			mc = this->expectedModCount;
		}
		bool var$0 = (i = this->index) >= 0;
		if (var$0 && (this->index = hi) <= $nc(a)->length) {
			for (; i < hi; ++i) {
				$var($Object, e, a->get(i));
				action->accept(e);
			}
			if (lst->modCount == mc) {
				return;
			}
		}
	}
	$throwNew($ConcurrentModificationException);
}

int64_t ArrayList$SubList$2::estimateSize() {
	return getFence() - this->index;
}

int32_t ArrayList$SubList$2::characteristics() {
	return ($Spliterator::ORDERED | $Spliterator::SIZED) | $Spliterator::SUBSIZED;
}

ArrayList$SubList$2::ArrayList$SubList$2() {
}

$Class* ArrayList$SubList$2::load$($String* name, bool initialize) {
	$loadClass(ArrayList$SubList$2, name, initialize, &_ArrayList$SubList$2_ClassInfo_, allocate$ArrayList$SubList$2);
	return class$;
}

$Class* ArrayList$SubList$2::class$ = nullptr;

	} // util
} // java