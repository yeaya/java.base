#include <java/util/AbstractList$RandomAccessSpliterator.h>

#include <java/lang/AssertionError.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/util/AbstractList.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/RandomAccess.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef ORDERED
#undef SIZED
#undef SUBSIZED

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractList = ::java::util::AbstractList;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $RandomAccess = ::java::util::RandomAccess;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$FieldInfo _AbstractList$RandomAccessSpliterator_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(AbstractList$RandomAccessSpliterator, $assertionsDisabled)},
	{"list", "Ljava/util/List;", "Ljava/util/List<TE;>;", $PRIVATE | $FINAL, $field(AbstractList$RandomAccessSpliterator, list)},
	{"index", "I", nullptr, $PRIVATE, $field(AbstractList$RandomAccessSpliterator, index)},
	{"fence", "I", nullptr, $PRIVATE, $field(AbstractList$RandomAccessSpliterator, fence)},
	{"alist", "Ljava/util/AbstractList;", "Ljava/util/AbstractList<TE;>;", $PRIVATE | $FINAL, $field(AbstractList$RandomAccessSpliterator, alist)},
	{"expectedModCount", "I", nullptr, $PRIVATE, $field(AbstractList$RandomAccessSpliterator, expectedModCount)},
	{}
};

$MethodInfo _AbstractList$RandomAccessSpliterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<TE;>;)V", 0, $method(AbstractList$RandomAccessSpliterator, init$, void, $List*)},
	{"<init>", "(Ljava/util/AbstractList$RandomAccessSpliterator;II)V", "(Ljava/util/AbstractList$RandomAccessSpliterator<TE;>;II)V", $PRIVATE, $method(AbstractList$RandomAccessSpliterator, init$, void, AbstractList$RandomAccessSpliterator*, int32_t, int32_t)},
	{"characteristics", "()I", nullptr, $PUBLIC, $virtualMethod(AbstractList$RandomAccessSpliterator, characteristics, int32_t)},
	{"checkAbstractListModCount", "(Ljava/util/AbstractList;I)V", "(Ljava/util/AbstractList<*>;I)V", $STATIC, $staticMethod(AbstractList$RandomAccessSpliterator, checkAbstractListModCount, void, $AbstractList*, int32_t)},
	{"estimateSize", "()J", nullptr, $PUBLIC, $virtualMethod(AbstractList$RandomAccessSpliterator, estimateSize, int64_t)},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC, $virtualMethod(AbstractList$RandomAccessSpliterator, forEachRemaining, void, $Consumer*)},
	{"get", "(Ljava/util/List;I)Ljava/lang/Object;", "<E:Ljava/lang/Object;>(Ljava/util/List<TE;>;I)TE;", $PRIVATE | $STATIC, $staticMethod(AbstractList$RandomAccessSpliterator, get, $Object*, $List*, int32_t)},
	{"getFence", "()I", nullptr, $PRIVATE, $method(AbstractList$RandomAccessSpliterator, getFence, int32_t)},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TE;>;)Z", $PUBLIC, $virtualMethod(AbstractList$RandomAccessSpliterator, tryAdvance, bool, $Consumer*)},
	{"trySplit", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE;>;", $PUBLIC, $virtualMethod(AbstractList$RandomAccessSpliterator, trySplit, $Spliterator*)},
	{}
};

$InnerClassInfo _AbstractList$RandomAccessSpliterator_InnerClassesInfo_[] = {
	{"java.util.AbstractList$RandomAccessSpliterator", "java.util.AbstractList", "RandomAccessSpliterator", $STATIC | $FINAL},
	{}
};

$ClassInfo _AbstractList$RandomAccessSpliterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.AbstractList$RandomAccessSpliterator",
	"java.lang.Object",
	"java.util.Spliterator",
	_AbstractList$RandomAccessSpliterator_FieldInfo_,
	_AbstractList$RandomAccessSpliterator_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Spliterator<TE;>;",
	nullptr,
	_AbstractList$RandomAccessSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.AbstractList"
};

$Object* allocate$AbstractList$RandomAccessSpliterator($Class* clazz) {
	return $of($alloc(AbstractList$RandomAccessSpliterator));
}

bool AbstractList$RandomAccessSpliterator::$assertionsDisabled = false;

void AbstractList$RandomAccessSpliterator::init$($List* list) {
	if (!AbstractList$RandomAccessSpliterator::$assertionsDisabled && !$instanceOf($RandomAccess, list)) {
		$throwNew($AssertionError);
	}
	$set(this, list, list);
	this->index = 0;
	this->fence = -1;
	$set(this, alist, $instanceOf($AbstractList, list) ? $cast($AbstractList, list) : ($AbstractList*)nullptr);
	this->expectedModCount = this->alist != nullptr ? $nc(this->alist)->modCount : 0;
}

void AbstractList$RandomAccessSpliterator::init$(AbstractList$RandomAccessSpliterator* parent, int32_t origin, int32_t fence) {
	$set(this, list, $nc(parent)->list);
	this->index = origin;
	this->fence = fence;
	$set(this, alist, parent->alist);
	this->expectedModCount = parent->expectedModCount;
}

int32_t AbstractList$RandomAccessSpliterator::getFence() {
	int32_t hi = 0;
	$var($List, lst, this->list);
	if ((hi = this->fence) < 0) {
		if (this->alist != nullptr) {
			this->expectedModCount = $nc(this->alist)->modCount;
		}
		hi = (this->fence = $nc(lst)->size());
	}
	return hi;
}

$Spliterator* AbstractList$RandomAccessSpliterator::trySplit() {
	int32_t hi = getFence();
	int32_t lo = this->index;
	int32_t mid = (int32_t)((uint32_t)(lo + hi) >> 1);
	return (lo >= mid) ? ($Spliterator*)nullptr : static_cast<$Spliterator*>($new(AbstractList$RandomAccessSpliterator, this, lo, this->index = mid));
}

bool AbstractList$RandomAccessSpliterator::tryAdvance($Consumer* action) {
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	int32_t hi = getFence();
	int32_t i = this->index;
	if (i < hi) {
		this->index = i + 1;
		$nc(action)->accept($(get(this->list, i)));
		checkAbstractListModCount(this->alist, this->expectedModCount);
		return true;
	}
	return false;
}

void AbstractList$RandomAccessSpliterator::forEachRemaining($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(action);
	$var($List, lst, this->list);
	int32_t hi = getFence();
	int32_t i = this->index;
	this->index = hi;
	for (; i < hi; ++i) {
		action->accept($(get(lst, i)));
	}
	checkAbstractListModCount(this->alist, this->expectedModCount);
}

int64_t AbstractList$RandomAccessSpliterator::estimateSize() {
	return (int64_t)(getFence() - this->index);
}

int32_t AbstractList$RandomAccessSpliterator::characteristics() {
	return ($Spliterator::ORDERED | $Spliterator::SIZED) | $Spliterator::SUBSIZED;
}

$Object* AbstractList$RandomAccessSpliterator::get($List* list, int32_t i) {
	$init(AbstractList$RandomAccessSpliterator);
	try {
		return $of($nc(list)->get(i));
	} catch ($IndexOutOfBoundsException& ex) {
		$throwNew($ConcurrentModificationException);
	}
	$shouldNotReachHere();
}

void AbstractList$RandomAccessSpliterator::checkAbstractListModCount($AbstractList* alist, int32_t expectedModCount) {
	$init(AbstractList$RandomAccessSpliterator);
	if (alist != nullptr && alist->modCount != expectedModCount) {
		$throwNew($ConcurrentModificationException);
	}
}

void clinit$AbstractList$RandomAccessSpliterator($Class* class$) {
	$load($AbstractList);
	AbstractList$RandomAccessSpliterator::$assertionsDisabled = !$AbstractList::class$->desiredAssertionStatus();
}

AbstractList$RandomAccessSpliterator::AbstractList$RandomAccessSpliterator() {
}

$Class* AbstractList$RandomAccessSpliterator::load$($String* name, bool initialize) {
	$loadClass(AbstractList$RandomAccessSpliterator, name, initialize, &_AbstractList$RandomAccessSpliterator_ClassInfo_, clinit$AbstractList$RandomAccessSpliterator, allocate$AbstractList$RandomAccessSpliterator);
	return class$;
}

$Class* AbstractList$RandomAccessSpliterator::class$ = nullptr;

	} // util
} // java