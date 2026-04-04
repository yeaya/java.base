#include <java/util/concurrent/CopyOnWriteArrayList$COWIterator.h>
#include <java/lang/UnsupportedOperationException.h>
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
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Objects = ::java::util::Objects;
using $CopyOnWriteArrayList = ::java::util::concurrent::CopyOnWriteArrayList;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {
		namespace concurrent {

void CopyOnWriteArrayList$COWIterator::init$($ObjectArray* es, int32_t initialCursor) {
	this->cursor = initialCursor;
	$set(this, snapshot, es);
}

bool CopyOnWriteArrayList$COWIterator::hasNext() {
	return this->cursor < $nc(this->snapshot)->length;
}

bool CopyOnWriteArrayList$COWIterator::hasPrevious() {
	return this->cursor > 0;
}

$Object* CopyOnWriteArrayList$COWIterator::next() {
	if (!hasNext()) {
		$throwNew($NoSuchElementException);
	}
	return $nc(this->snapshot)->get(this->cursor++);
}

$Object* CopyOnWriteArrayList$COWIterator::previous() {
	if (!hasPrevious()) {
		$throwNew($NoSuchElementException);
	}
	return $nc(this->snapshot)->get(--this->cursor);
}

int32_t CopyOnWriteArrayList$COWIterator::nextIndex() {
	return this->cursor;
}

int32_t CopyOnWriteArrayList$COWIterator::previousIndex() {
	return this->cursor - 1;
}

void CopyOnWriteArrayList$COWIterator::remove() {
	$throwNew($UnsupportedOperationException);
}

void CopyOnWriteArrayList$COWIterator::set(Object$* e) {
	$throwNew($UnsupportedOperationException);
}

void CopyOnWriteArrayList$COWIterator::add(Object$* e) {
	$throwNew($UnsupportedOperationException);
}

void CopyOnWriteArrayList$COWIterator::forEachRemaining($Consumer* action) {
	$useLocalObjectStack();
	$Objects::requireNonNull(action);
	int32_t size = $nc(this->snapshot)->length;
	int32_t i = this->cursor;
	this->cursor = size;
	for (; i < size; ++i) {
		action->accept($($CopyOnWriteArrayList::elementAt(this->snapshot, i)));
	}
}

CopyOnWriteArrayList$COWIterator::CopyOnWriteArrayList$COWIterator() {
}

$Class* CopyOnWriteArrayList$COWIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"snapshot", "[Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(CopyOnWriteArrayList$COWIterator, snapshot)},
		{"cursor", "I", nullptr, $PRIVATE, $field(CopyOnWriteArrayList$COWIterator, cursor)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/lang/Object;I)V", nullptr, 0, $method(CopyOnWriteArrayList$COWIterator, init$, void, $ObjectArray*, int32_t)},
		{"add", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWIterator, add, void, Object$*)},
		{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWIterator, forEachRemaining, void, $Consumer*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWIterator, hasNext, bool)},
		{"hasPrevious", "()Z", nullptr, $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWIterator, hasPrevious, bool)},
		{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWIterator, next, $Object*)},
		{"nextIndex", "()I", nullptr, $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWIterator, nextIndex, int32_t)},
		{"previous", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWIterator, previous, $Object*)},
		{"previousIndex", "()I", nullptr, $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWIterator, previousIndex, int32_t)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWIterator, remove, void)},
		{"set", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC, $virtualMethod(CopyOnWriteArrayList$COWIterator, set, void, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.CopyOnWriteArrayList$COWIterator", "java.util.concurrent.CopyOnWriteArrayList", "COWIterator", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.CopyOnWriteArrayList$COWIterator",
		"java.lang.Object",
		"java.util.ListIterator",
		fieldInfos$$,
		methodInfos$$,
		"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/ListIterator<TE;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.CopyOnWriteArrayList"
	};
	$loadClass(CopyOnWriteArrayList$COWIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CopyOnWriteArrayList$COWIterator);
	});
	return class$;
}

$Class* CopyOnWriteArrayList$COWIterator::class$ = nullptr;

		} // concurrent
	} // util
} // java