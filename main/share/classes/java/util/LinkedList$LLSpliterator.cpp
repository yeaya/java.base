#include <java/util/LinkedList$LLSpliterator.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/LinkedList$Node.h>
#include <java/util/LinkedList.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef BATCH_UNIT
#undef MAX_BATCH
#undef ORDERED
#undef SIZED
#undef SUBSIZED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractList = ::java::util::AbstractList;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $LinkedList = ::java::util::LinkedList;
using $LinkedList$Node = ::java::util::LinkedList$Node;
using $Spliterator = ::java::util::Spliterator;
using $Spliterators = ::java::util::Spliterators;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$FieldInfo _LinkedList$LLSpliterator_FieldInfo_[] = {
	{"BATCH_UNIT", "I", nullptr, $STATIC | $FINAL, $constField(LinkedList$LLSpliterator, BATCH_UNIT)},
	{"MAX_BATCH", "I", nullptr, $STATIC | $FINAL, $constField(LinkedList$LLSpliterator, MAX_BATCH)},
	{"list", "Ljava/util/LinkedList;", "Ljava/util/LinkedList<TE;>;", $FINAL, $field(LinkedList$LLSpliterator, list)},
	{"current", "Ljava/util/LinkedList$Node;", "Ljava/util/LinkedList$Node<TE;>;", 0, $field(LinkedList$LLSpliterator, current)},
	{"est", "I", nullptr, 0, $field(LinkedList$LLSpliterator, est)},
	{"expectedModCount", "I", nullptr, 0, $field(LinkedList$LLSpliterator, expectedModCount)},
	{"batch", "I", nullptr, 0, $field(LinkedList$LLSpliterator, batch)},
	{}
};

$MethodInfo _LinkedList$LLSpliterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/LinkedList;II)V", "(Ljava/util/LinkedList<TE;>;II)V", 0, $method(static_cast<void(LinkedList$LLSpliterator::*)($LinkedList*,int32_t,int32_t)>(&LinkedList$LLSpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC},
	{"getEst", "()I", nullptr, $FINAL, $method(static_cast<int32_t(LinkedList$LLSpliterator::*)()>(&LinkedList$LLSpliterator::getEst))},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TE;>;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE;>;", $PUBLIC},
	{}
};

$InnerClassInfo _LinkedList$LLSpliterator_InnerClassesInfo_[] = {
	{"java.util.LinkedList$LLSpliterator", "java.util.LinkedList", "LLSpliterator", $STATIC | $FINAL},
	{}
};

$ClassInfo _LinkedList$LLSpliterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.LinkedList$LLSpliterator",
	"java.lang.Object",
	"java.util.Spliterator",
	_LinkedList$LLSpliterator_FieldInfo_,
	_LinkedList$LLSpliterator_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Spliterator<TE;>;",
	nullptr,
	_LinkedList$LLSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.LinkedList"
};

$Object* allocate$LinkedList$LLSpliterator($Class* clazz) {
	return $of($alloc(LinkedList$LLSpliterator));
}

void LinkedList$LLSpliterator::init$($LinkedList* list, int32_t est, int32_t expectedModCount) {
	$set(this, list, list);
	this->est = est;
	this->expectedModCount = expectedModCount;
}

int32_t LinkedList$LLSpliterator::getEst() {
	int32_t s = 0;
	$var($LinkedList, lst, nullptr);
	if ((s = this->est) < 0) {
		if (($assign(lst, this->list)) == nullptr) {
			s = (this->est = 0);
		} else {
			this->expectedModCount = $nc(lst)->modCount;
			$set(this, current, lst->first);
			s = (this->est = lst->size$);
		}
	}
	return s;
}

int64_t LinkedList$LLSpliterator::estimateSize() {
	return (int64_t)getEst();
}

$Spliterator* LinkedList$LLSpliterator::trySplit() {
	$var($LinkedList$Node, p, nullptr);
	int32_t s = getEst();
	if (s > 1 && ($assign(p, this->current)) != nullptr) {
		int32_t n = this->batch + LinkedList$LLSpliterator::BATCH_UNIT;
		if (n > s) {
			n = s;
		}
		if (n > LinkedList$LLSpliterator::MAX_BATCH) {
			n = LinkedList$LLSpliterator::MAX_BATCH;
		}
		$var($ObjectArray, a, $new($ObjectArray, n));
		int32_t j = 0;
		do {
			a->set(j++, $nc(p)->item);
		} while (($assign(p, $nc(p)->next)) != nullptr && j < n);
		$set(this, current, p);
		this->batch = j;
		this->est = s - j;
		return $Spliterators::spliterator(a, 0, j, $Spliterator::ORDERED);
	}
	return nullptr;
}

void LinkedList$LLSpliterator::forEachRemaining($Consumer* action) {
	$var($LinkedList$Node, p, nullptr);
	int32_t n = 0;
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	if ((n = getEst()) > 0 && ($assign(p, this->current)) != nullptr) {
		$set(this, current, nullptr);
		this->est = 0;
		do {
			$var($Object, e, $nc(p)->item);
			$assign(p, p->next);
			$nc(action)->accept(e);
		} while (p != nullptr && --n > 0);
	}
	if ($nc(this->list)->modCount != this->expectedModCount) {
		$throwNew($ConcurrentModificationException);
	}
}

bool LinkedList$LLSpliterator::tryAdvance($Consumer* action) {
	$var($LinkedList$Node, p, nullptr);
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	if (getEst() > 0 && ($assign(p, this->current)) != nullptr) {
		--this->est;
		$var($Object, e, $nc(p)->item);
		$set(this, current, p->next);
		$nc(action)->accept(e);
		if ($nc(this->list)->modCount != this->expectedModCount) {
			$throwNew($ConcurrentModificationException);
		}
		return true;
	}
	return false;
}

int32_t LinkedList$LLSpliterator::characteristics() {
	return ($Spliterator::ORDERED | $Spliterator::SIZED) | $Spliterator::SUBSIZED;
}

LinkedList$LLSpliterator::LinkedList$LLSpliterator() {
}

$Class* LinkedList$LLSpliterator::load$($String* name, bool initialize) {
	$loadClass(LinkedList$LLSpliterator, name, initialize, &_LinkedList$LLSpliterator_ClassInfo_, allocate$LinkedList$LLSpliterator);
	return class$;
}

$Class* LinkedList$LLSpliterator::class$ = nullptr;

	} // util
} // java