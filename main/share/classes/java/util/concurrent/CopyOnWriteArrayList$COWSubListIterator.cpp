#include <java/util/concurrent/CopyOnWriteArrayList$COWSubListIterator.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/util/List.h>
#include <java/util/ListIterator.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/CopyOnWriteArrayList.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $List = ::java::util::List;
using $ListIterator = ::java::util::ListIterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Objects = ::java::util::Objects;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _CopyOnWriteArrayList$COWSubListIterator_FieldInfo_[] = {
	{"it", "Ljava/util/ListIterator;", "Ljava/util/ListIterator<TE;>;", $PRIVATE | $FINAL, $field(CopyOnWriteArrayList$COWSubListIterator, it)},
	{"offset", "I", nullptr, $PRIVATE | $FINAL, $field(CopyOnWriteArrayList$COWSubListIterator, offset)},
	{"size", "I", nullptr, $PRIVATE | $FINAL, $field(CopyOnWriteArrayList$COWSubListIterator, size)},
	{}
};

$MethodInfo _CopyOnWriteArrayList$COWSubListIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/List;III)V", "(Ljava/util/List<TE;>;III)V", 0, $method(CopyOnWriteArrayList$COWSubListIterator, init$, void, $List*, int32_t, int32_t, int32_t)},
	{"add", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubListIterator, add, void, Object$*)},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubListIterator, forEachRemaining, void, $Consumer*)},
	{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubListIterator, hasNext, bool)},
	{"hasPrevious", "()Z", nullptr, $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubListIterator, hasPrevious, bool)},
	{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubListIterator, next, $Object*)},
	{"nextIndex", "()I", nullptr, $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubListIterator, nextIndex, int32_t)},
	{"previous", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubListIterator, previous, $Object*)},
	{"previousIndex", "()I", nullptr, $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubListIterator, previousIndex, int32_t)},
	{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubListIterator, remove, void)},
	{"set", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWSubListIterator, set, void, Object$*)},
	{}
};

$InnerClassInfo _CopyOnWriteArrayList$COWSubListIterator_InnerClassesInfo_[] = {
	{"java.util.concurrent.CopyOnWriteArrayList$COWSubListIterator", "java.util.concurrent.CopyOnWriteArrayList", "COWSubListIterator", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _CopyOnWriteArrayList$COWSubListIterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.CopyOnWriteArrayList$COWSubListIterator",
	"java.lang.Object",
	"java.util.ListIterator",
	_CopyOnWriteArrayList$COWSubListIterator_FieldInfo_,
	_CopyOnWriteArrayList$COWSubListIterator_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/ListIterator<TE;>;",
	nullptr,
	_CopyOnWriteArrayList$COWSubListIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.CopyOnWriteArrayList"
};

$Object* allocate$CopyOnWriteArrayList$COWSubListIterator($Class* clazz) {
	return $of($alloc(CopyOnWriteArrayList$COWSubListIterator));
}

void CopyOnWriteArrayList$COWSubListIterator::init$($List* l, int32_t index, int32_t offset, int32_t size) {
	this->offset = offset;
	this->size = size;
	$set(this, it, $nc(l)->listIterator(index + offset));
}

bool CopyOnWriteArrayList$COWSubListIterator::hasNext() {
	return nextIndex() < this->size;
}

$Object* CopyOnWriteArrayList$COWSubListIterator::next() {
	if (hasNext()) {
		return $of($nc(this->it)->next());
	} else {
		$throwNew($NoSuchElementException);
	}
}

bool CopyOnWriteArrayList$COWSubListIterator::hasPrevious() {
	return previousIndex() >= 0;
}

$Object* CopyOnWriteArrayList$COWSubListIterator::previous() {
	if (hasPrevious()) {
		return $of($nc(this->it)->previous());
	} else {
		$throwNew($NoSuchElementException);
	}
}

int32_t CopyOnWriteArrayList$COWSubListIterator::nextIndex() {
	return $nc(this->it)->nextIndex() - this->offset;
}

int32_t CopyOnWriteArrayList$COWSubListIterator::previousIndex() {
	return $nc(this->it)->previousIndex() - this->offset;
}

void CopyOnWriteArrayList$COWSubListIterator::remove() {
	$throwNew($UnsupportedOperationException);
}

void CopyOnWriteArrayList$COWSubListIterator::set(Object$* e) {
	$throwNew($UnsupportedOperationException);
}

void CopyOnWriteArrayList$COWSubListIterator::add(Object$* e) {
	$throwNew($UnsupportedOperationException);
}

void CopyOnWriteArrayList$COWSubListIterator::forEachRemaining($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(action);
	while (hasNext()) {
		action->accept($($nc(this->it)->next()));
	}
}

CopyOnWriteArrayList$COWSubListIterator::CopyOnWriteArrayList$COWSubListIterator() {
}

$Class* CopyOnWriteArrayList$COWSubListIterator::load$($String* name, bool initialize) {
	$loadClass(CopyOnWriteArrayList$COWSubListIterator, name, initialize, &_CopyOnWriteArrayList$COWSubListIterator_ClassInfo_, allocate$CopyOnWriteArrayList$COWSubListIterator);
	return class$;
}

$Class* CopyOnWriteArrayList$COWSubListIterator::class$ = nullptr;

		} // concurrent
	} // util
} // java