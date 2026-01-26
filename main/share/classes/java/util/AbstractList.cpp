#include <java/util/AbstractList.h>

#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList$Itr.h>
#include <java/util/AbstractList$ListItr.h>
#include <java/util/AbstractList$RandomAccessSubList.h>
#include <java/util/AbstractList$SubList.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/ListIterator.h>
#include <java/util/RandomAccess.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList$Itr = ::java::util::AbstractList$Itr;
using $AbstractList$ListItr = ::java::util::AbstractList$ListItr;
using $AbstractList$RandomAccessSubList = ::java::util::AbstractList$RandomAccessSubList;
using $AbstractList$SubList = ::java::util::AbstractList$SubList;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ListIterator = ::java::util::ListIterator;
using $RandomAccess = ::java::util::RandomAccess;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace util {

$FieldInfo _AbstractList_FieldInfo_[] = {
	{"modCount", "I", nullptr, $PROTECTED | $TRANSIENT, $field(AbstractList, modCount)},
	{}
};

$MethodInfo _AbstractList_MethodInfo_[] = {
	{"*addAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*containsAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEach", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"get", "(I)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "()V", nullptr, $PROTECTED, $method(AbstractList, init$, void)},
	{"add", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC, $virtualMethod(AbstractList, add, bool, Object$*)},
	{"add", "(ILjava/lang/Object;)V", "(ITE;)V", $PUBLIC, $virtualMethod(AbstractList, add, void, int32_t, Object$*)},
	{"addAll", "(ILjava/util/Collection;)Z", "(ILjava/util/Collection<+TE;>;)Z", $PUBLIC, $virtualMethod(AbstractList, addAll, bool, int32_t, $Collection*)},
	{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(AbstractList, clear, void)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(AbstractList, equals, bool, Object$*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(AbstractList, hashCode, int32_t)},
	{"indexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(AbstractList, indexOf, int32_t, Object$*)},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC, $virtualMethod(AbstractList, iterator, $Iterator*)},
	{"lastIndexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(AbstractList, lastIndexOf, int32_t, Object$*)},
	{"listIterator", "()Ljava/util/ListIterator;", "()Ljava/util/ListIterator<TE;>;", $PUBLIC, $virtualMethod(AbstractList, listIterator, $ListIterator*)},
	{"listIterator", "(I)Ljava/util/ListIterator;", "(I)Ljava/util/ListIterator<TE;>;", $PUBLIC, $virtualMethod(AbstractList, listIterator, $ListIterator*, int32_t)},
	{"outOfBoundsMsg", "(I)Ljava/lang/String;", nullptr, $PRIVATE, $method(AbstractList, outOfBoundsMsg, $String*, int32_t)},
	{"*parallelStream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"rangeCheckForAdd", "(I)V", nullptr, $PRIVATE, $method(AbstractList, rangeCheckForAdd, void, int32_t)},
	{"*remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"remove", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC, $virtualMethod(AbstractList, remove, $Object*, int32_t)},
	{"*removeAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*removeIf", "(Ljava/util/function/Predicate;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"removeRange", "(II)V", nullptr, $PROTECTED, $virtualMethod(AbstractList, removeRange, void, int32_t, int32_t)},
	{"*retainAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"set", "(ILjava/lang/Object;)Ljava/lang/Object;", "(ITE;)TE;", $PUBLIC, $virtualMethod(AbstractList, set, $Object*, int32_t, Object$*)},
	{"*size", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"*spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"subList", "(II)Ljava/util/List;", "(II)Ljava/util/List<TE;>;", $PUBLIC, $virtualMethod(AbstractList, subList, $List*, int32_t, int32_t)},
	{"subListRangeCheck", "(III)V", nullptr, $STATIC, $staticMethod(AbstractList, subListRangeCheck, void, int32_t, int32_t, int32_t)},
	{"*toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AbstractList_InnerClassesInfo_[] = {
	{"java.util.AbstractList$RandomAccessSubList", "java.util.AbstractList", "RandomAccessSubList", $PRIVATE | $STATIC},
	{"java.util.AbstractList$SubList", "java.util.AbstractList", "SubList", $PRIVATE | $STATIC},
	{"java.util.AbstractList$RandomAccessSpliterator", "java.util.AbstractList", "RandomAccessSpliterator", $STATIC | $FINAL},
	{"java.util.AbstractList$ListItr", "java.util.AbstractList", "ListItr", $PRIVATE},
	{"java.util.AbstractList$Itr", "java.util.AbstractList", "Itr", $PRIVATE},
	{}
};

$ClassInfo _AbstractList_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.util.AbstractList",
	"java.util.AbstractCollection",
	"java.util.List",
	_AbstractList_FieldInfo_,
	_AbstractList_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/AbstractCollection<TE;>;Ljava/util/List<TE;>;",
	nullptr,
	_AbstractList_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.AbstractList$RandomAccessSubList,java.util.AbstractList$SubList,java.util.AbstractList$SubList$1,java.util.AbstractList$RandomAccessSpliterator,java.util.AbstractList$ListItr,java.util.AbstractList$Itr"
};

$Object* allocate$AbstractList($Class* clazz) {
	return $of($alloc(AbstractList));
}

bool AbstractList::isEmpty() {
	 return this->$AbstractCollection::isEmpty();
}

bool AbstractList::contains(Object$* o) {
	 return this->$AbstractCollection::contains(o);
}

$ObjectArray* AbstractList::toArray() {
	 return this->$AbstractCollection::toArray();
}

$ObjectArray* AbstractList::toArray($ObjectArray* a) {
	 return this->$AbstractCollection::toArray(a);
}

bool AbstractList::remove(Object$* o) {
	 return this->$AbstractCollection::remove(o);
}

bool AbstractList::containsAll($Collection* c) {
	 return this->$AbstractCollection::containsAll(c);
}

bool AbstractList::addAll($Collection* c) {
	 return this->$AbstractCollection::addAll(c);
}

bool AbstractList::removeAll($Collection* c) {
	 return this->$AbstractCollection::removeAll(c);
}

bool AbstractList::retainAll($Collection* c) {
	 return this->$AbstractCollection::retainAll(c);
}

$String* AbstractList::toString() {
	 return this->$AbstractCollection::toString();
}

$ObjectArray* AbstractList::toArray($IntFunction* generator) {
	 return this->$AbstractCollection::toArray(generator);
}

bool AbstractList::removeIf($Predicate* filter) {
	 return this->$AbstractCollection::removeIf(filter);
}

$Spliterator* AbstractList::spliterator() {
	 return this->$AbstractCollection::spliterator();
}

$Stream* AbstractList::stream() {
	 return this->$AbstractCollection::stream();
}

$Stream* AbstractList::parallelStream() {
	 return this->$AbstractCollection::parallelStream();
}

void AbstractList::forEach($Consumer* action) {
	this->$AbstractCollection::forEach(action);
}

$Object* AbstractList::clone() {
	 return this->$AbstractCollection::clone();
}

void AbstractList::finalize() {
	this->$AbstractCollection::finalize();
}

void AbstractList::init$() {
	$AbstractCollection::init$();
	this->modCount = 0;
}

bool AbstractList::add(Object$* e) {
	add(size(), e);
	return true;
}

$Object* AbstractList::set(int32_t index, Object$* element) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

void AbstractList::add(int32_t index, Object$* element) {
	$throwNew($UnsupportedOperationException);
}

$Object* AbstractList::remove(int32_t index) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

int32_t AbstractList::indexOf(Object$* o) {
	$useLocalCurrentObjectStackCache();
	$var($ListIterator, it, listIterator());
	if (o == nullptr) {
		while ($nc(it)->hasNext()) {
			if (it->next() == nullptr) {
				return it->previousIndex();
			}
		}
	} else {
		while ($nc(it)->hasNext()) {
			if ($nc($of(o))->equals($(it->next()))) {
				return it->previousIndex();
			}
		}
	}
	return -1;
}

int32_t AbstractList::lastIndexOf(Object$* o) {
	$useLocalCurrentObjectStackCache();
	$var($ListIterator, it, listIterator(size()));
	if (o == nullptr) {
		while ($nc(it)->hasPrevious()) {
			if (it->previous() == nullptr) {
				return it->nextIndex();
			}
		}
	} else {
		while ($nc(it)->hasPrevious()) {
			if ($nc($of(o))->equals($(it->previous()))) {
				return it->nextIndex();
			}
		}
	}
	return -1;
}

void AbstractList::clear() {
	removeRange(0, size());
}

bool AbstractList::addAll(int32_t index, $Collection* c) {
	$useLocalCurrentObjectStackCache();
	rangeCheckForAdd(index);
	bool modified = false;
	{
		$var($Iterator, i$, $nc(c)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, e, i$->next());
			{
				add(index++, e);
				modified = true;
			}
		}
	}
	return modified;
}

$Iterator* AbstractList::iterator() {
	return $new($AbstractList$Itr, this);
}

$ListIterator* AbstractList::listIterator() {
	return listIterator(0);
}

$ListIterator* AbstractList::listIterator(int32_t index) {
	rangeCheckForAdd(index);
	return $new($AbstractList$ListItr, this, index);
}

$List* AbstractList::subList(int32_t fromIndex, int32_t toIndex) {
	subListRangeCheck(fromIndex, toIndex, size());
	return ($instanceOf($RandomAccess, this) ? static_cast<$List*>($new($AbstractList$RandomAccessSubList, this, fromIndex, toIndex)) : static_cast<$List*>($new($AbstractList$SubList, this, fromIndex, toIndex)));
}

void AbstractList::subListRangeCheck(int32_t fromIndex, int32_t toIndex, int32_t size) {
	$init(AbstractList);
	$useLocalCurrentObjectStackCache();
	if (fromIndex < 0) {
		$throwNew($IndexOutOfBoundsException, $$str({"fromIndex = "_s, $$str(fromIndex)}));
	}
	if (toIndex > size) {
		$throwNew($IndexOutOfBoundsException, $$str({"toIndex = "_s, $$str(toIndex)}));
	}
	if (fromIndex > toIndex) {
		$throwNew($IllegalArgumentException, $$str({"fromIndex("_s, $$str(fromIndex), ") > toIndex("_s, $$str(toIndex), ")"_s}));
	}
}

bool AbstractList::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if ($equals(o, this)) {
		return true;
	}
	if (!($instanceOf($List, o))) {
		return false;
	}
	$var($ListIterator, e1, listIterator());
	$var($ListIterator, e2, $nc(($cast($List, o)))->listIterator());
	while (true) {
		bool var$0 = $nc(e1)->hasNext();
		if (!(var$0 && $nc(e2)->hasNext())) {
			break;
		}
		{
			$var($Object, o1, e1->next());
			$var($Object, o2, e2->next());
			if (!(o1 == nullptr ? o2 == nullptr : $nc($of(o1))->equals(o2))) {
				return false;
			}
		}
	}
	bool var$1 = $nc(e1)->hasNext();
	return !(var$1 || $nc(e2)->hasNext());
}

int32_t AbstractList::hashCode() {
	$useLocalCurrentObjectStackCache();
	int32_t hashCode = 1;
	{
		$var($Iterator, i$, this->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, e, i$->next());
			hashCode = 31 * hashCode + (e == nullptr ? 0 : $nc($of(e))->hashCode());
		}
	}
	return hashCode;
}

void AbstractList::removeRange(int32_t fromIndex, int32_t toIndex) {
	$var($ListIterator, it, listIterator(fromIndex));
	{
		int32_t i = 0;
		int32_t n = toIndex - fromIndex;
		for (; i < n; ++i) {
			$nc(it)->next();
			it->remove();
		}
	}
}

void AbstractList::rangeCheckForAdd(int32_t index) {
	if (index < 0 || index > size()) {
		$throwNew($IndexOutOfBoundsException, $(outOfBoundsMsg(index)));
	}
}

$String* AbstractList::outOfBoundsMsg(int32_t index) {
	$useLocalCurrentObjectStackCache();
	return $str({"Index: "_s, $$str(index), ", Size: "_s, $$str(size())});
}

AbstractList::AbstractList() {
}

$Class* AbstractList::load$($String* name, bool initialize) {
	$loadClass(AbstractList, name, initialize, &_AbstractList_ClassInfo_, allocate$AbstractList);
	return class$;
}

$Class* AbstractList::class$ = nullptr;

	} // util
} // java