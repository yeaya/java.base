#include <java/util/Collections$SynchronizedList.h>

#include <java/util/Collection.h>
#include <java/util/Collections$SynchronizedCollection.h>
#include <java/util/Collections$SynchronizedRandomAccessList.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/ListIterator.h>
#include <java/util/RandomAccess.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/UnaryOperator.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $Collections$SynchronizedCollection = ::java::util::Collections$SynchronizedCollection;
using $Collections$SynchronizedRandomAccessList = ::java::util::Collections$SynchronizedRandomAccessList;
using $Comparator = ::java::util::Comparator;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ListIterator = ::java::util::ListIterator;
using $RandomAccess = ::java::util::RandomAccess;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $UnaryOperator = ::java::util::function::UnaryOperator;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace util {

$FieldInfo _Collections$SynchronizedList_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$SynchronizedList, serialVersionUID)},
	{"list", "Ljava/util/List;", "Ljava/util/List<TE;>;", $FINAL, $field(Collections$SynchronizedList, list)},
	{}
};

$MethodInfo _Collections$SynchronizedList_MethodInfo_[] = {
	{"*add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*addAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*clear", "()V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*containsAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEach", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC},
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<TE;>;)V", 0, $method(Collections$SynchronizedList, init$, void, $List*)},
	{"<init>", "(Ljava/util/List;Ljava/lang/Object;)V", "(Ljava/util/List<TE;>;Ljava/lang/Object;)V", 0, $method(Collections$SynchronizedList, init$, void, $List*, Object$*)},
	{"add", "(ILjava/lang/Object;)V", "(ITE;)V", $PUBLIC, $virtualMethod(Collections$SynchronizedList, add, void, int32_t, Object$*)},
	{"addAll", "(ILjava/util/Collection;)Z", "(ILjava/util/Collection<+TE;>;)Z", $PUBLIC, $virtualMethod(Collections$SynchronizedList, addAll, bool, int32_t, $Collection*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Collections$SynchronizedList, equals, bool, Object$*)},
	{"get", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC, $virtualMethod(Collections$SynchronizedList, get, $Object*, int32_t)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Collections$SynchronizedList, hashCode, int32_t)},
	{"indexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(Collections$SynchronizedList, indexOf, int32_t, Object$*)},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"*iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC},
	{"lastIndexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(Collections$SynchronizedList, lastIndexOf, int32_t, Object$*)},
	{"listIterator", "()Ljava/util/ListIterator;", "()Ljava/util/ListIterator<TE;>;", $PUBLIC, $virtualMethod(Collections$SynchronizedList, listIterator, $ListIterator*)},
	{"listIterator", "(I)Ljava/util/ListIterator;", "(I)Ljava/util/ListIterator<TE;>;", $PUBLIC, $virtualMethod(Collections$SynchronizedList, listIterator, $ListIterator*, int32_t)},
	{"*parallelStream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC},
	{"readResolve", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(Collections$SynchronizedList, readResolve, $Object*)},
	{"*remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"remove", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC, $virtualMethod(Collections$SynchronizedList, remove, $Object*, int32_t)},
	{"*removeAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*removeIf", "(Ljava/util/function/Predicate;)Z", nullptr, $PUBLIC},
	{"replaceAll", "(Ljava/util/function/UnaryOperator;)V", "(Ljava/util/function/UnaryOperator<TE;>;)V", $PUBLIC, $virtualMethod(Collections$SynchronizedList, replaceAll, void, $UnaryOperator*)},
	{"*retainAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"set", "(ILjava/lang/Object;)Ljava/lang/Object;", "(ITE;)TE;", $PUBLIC, $virtualMethod(Collections$SynchronizedList, set, $Object*, int32_t, Object$*)},
	{"*size", "()I", nullptr, $PUBLIC},
	{"sort", "(Ljava/util/Comparator;)V", "(Ljava/util/Comparator<-TE;>;)V", $PUBLIC, $virtualMethod(Collections$SynchronizedList, sort, void, $Comparator*)},
	{"*spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC},
	{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC},
	{"subList", "(II)Ljava/util/List;", "(II)Ljava/util/List<TE;>;", $PUBLIC, $virtualMethod(Collections$SynchronizedList, subList, $List*, int32_t, int32_t)},
	{"*toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Collections$SynchronizedList_InnerClassesInfo_[] = {
	{"java.util.Collections$SynchronizedList", "java.util.Collections", "SynchronizedList", $STATIC},
	{"java.util.Collections$SynchronizedCollection", "java.util.Collections", "SynchronizedCollection", $STATIC},
	{}
};

$ClassInfo _Collections$SynchronizedList_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$SynchronizedList",
	"java.util.Collections$SynchronizedCollection",
	"java.util.List",
	_Collections$SynchronizedList_FieldInfo_,
	_Collections$SynchronizedList_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/Collections$SynchronizedCollection<TE;>;Ljava/util/List<TE;>;",
	nullptr,
	_Collections$SynchronizedList_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$SynchronizedList($Class* clazz) {
	return $of($alloc(Collections$SynchronizedList));
}

int32_t Collections$SynchronizedList::size() {
	 return this->$Collections$SynchronizedCollection::size();
}

bool Collections$SynchronizedList::isEmpty() {
	 return this->$Collections$SynchronizedCollection::isEmpty();
}

bool Collections$SynchronizedList::contains(Object$* o) {
	 return this->$Collections$SynchronizedCollection::contains(o);
}

$ObjectArray* Collections$SynchronizedList::toArray() {
	 return this->$Collections$SynchronizedCollection::toArray();
}

$ObjectArray* Collections$SynchronizedList::toArray($ObjectArray* a) {
	 return this->$Collections$SynchronizedCollection::toArray(a);
}

$ObjectArray* Collections$SynchronizedList::toArray($IntFunction* f) {
	 return this->$Collections$SynchronizedCollection::toArray(f);
}

$Iterator* Collections$SynchronizedList::iterator() {
	 return this->$Collections$SynchronizedCollection::iterator();
}

bool Collections$SynchronizedList::add(Object$* e) {
	 return this->$Collections$SynchronizedCollection::add(e);
}

bool Collections$SynchronizedList::remove(Object$* o) {
	 return this->$Collections$SynchronizedCollection::remove(o);
}

bool Collections$SynchronizedList::containsAll($Collection* coll) {
	 return this->$Collections$SynchronizedCollection::containsAll(coll);
}

bool Collections$SynchronizedList::addAll($Collection* coll) {
	 return this->$Collections$SynchronizedCollection::addAll(coll);
}

bool Collections$SynchronizedList::removeAll($Collection* coll) {
	 return this->$Collections$SynchronizedCollection::removeAll(coll);
}

bool Collections$SynchronizedList::retainAll($Collection* coll) {
	 return this->$Collections$SynchronizedCollection::retainAll(coll);
}

void Collections$SynchronizedList::clear() {
	this->$Collections$SynchronizedCollection::clear();
}

$String* Collections$SynchronizedList::toString() {
	 return this->$Collections$SynchronizedCollection::toString();
}

void Collections$SynchronizedList::forEach($Consumer* consumer) {
	this->$Collections$SynchronizedCollection::forEach(consumer);
}

bool Collections$SynchronizedList::removeIf($Predicate* filter) {
	 return this->$Collections$SynchronizedCollection::removeIf(filter);
}

$Spliterator* Collections$SynchronizedList::spliterator() {
	 return this->$Collections$SynchronizedCollection::spliterator();
}

$Stream* Collections$SynchronizedList::stream() {
	 return this->$Collections$SynchronizedCollection::stream();
}

$Stream* Collections$SynchronizedList::parallelStream() {
	 return this->$Collections$SynchronizedCollection::parallelStream();
}

$Object* Collections$SynchronizedList::clone() {
	 return this->$Collections$SynchronizedCollection::clone();
}

void Collections$SynchronizedList::finalize() {
	this->$Collections$SynchronizedCollection::finalize();
}

void Collections$SynchronizedList::init$($List* list) {
	$Collections$SynchronizedCollection::init$(list);
	$set(this, list, list);
}

void Collections$SynchronizedList::init$($List* list, Object$* mutex) {
	$Collections$SynchronizedCollection::init$(list, mutex);
	$set(this, list, list);
}

bool Collections$SynchronizedList::equals(Object$* o) {
	if ($equals(this, o)) {
		return true;
	}
	$synchronized(this->mutex) {
		return $nc(this->list)->equals(o);
	}
}

int32_t Collections$SynchronizedList::hashCode() {
	$synchronized(this->mutex) {
		return $nc(this->list)->hashCode();
	}
}

$Object* Collections$SynchronizedList::get(int32_t index) {
	$synchronized(this->mutex) {
		return $of($nc(this->list)->get(index));
	}
}

$Object* Collections$SynchronizedList::set(int32_t index, Object$* element) {
	$synchronized(this->mutex) {
		return $of($nc(this->list)->set(index, element));
	}
}

void Collections$SynchronizedList::add(int32_t index, Object$* element) {
	$synchronized(this->mutex) {
		$nc(this->list)->add(index, element);
	}
}

$Object* Collections$SynchronizedList::remove(int32_t index) {
	$synchronized(this->mutex) {
		return $of($nc(this->list)->remove(index));
	}
}

int32_t Collections$SynchronizedList::indexOf(Object$* o) {
	$synchronized(this->mutex) {
		return $nc(this->list)->indexOf(o);
	}
}

int32_t Collections$SynchronizedList::lastIndexOf(Object$* o) {
	$synchronized(this->mutex) {
		return $nc(this->list)->lastIndexOf(o);
	}
}

bool Collections$SynchronizedList::addAll(int32_t index, $Collection* c) {
	$synchronized(this->mutex) {
		return $nc(this->list)->addAll(index, c);
	}
}

$ListIterator* Collections$SynchronizedList::listIterator() {
	return $nc(this->list)->listIterator();
}

$ListIterator* Collections$SynchronizedList::listIterator(int32_t index) {
	return $nc(this->list)->listIterator(index);
}

$List* Collections$SynchronizedList::subList(int32_t fromIndex, int32_t toIndex) {
	$synchronized(this->mutex) {
		return $new(Collections$SynchronizedList, $($nc(this->list)->subList(fromIndex, toIndex)), this->mutex);
	}
}

void Collections$SynchronizedList::replaceAll($UnaryOperator* operator$) {
	$synchronized(this->mutex) {
		$nc(this->list)->replaceAll(operator$);
	}
}

void Collections$SynchronizedList::sort($Comparator* c) {
	$synchronized(this->mutex) {
		$nc(this->list)->sort(c);
	}
}

$Object* Collections$SynchronizedList::readResolve() {
	return $of(($instanceOf($RandomAccess, this->list) ? $of($new($Collections$SynchronizedRandomAccessList, this->list)) : $of(this)));
}

Collections$SynchronizedList::Collections$SynchronizedList() {
}

$Class* Collections$SynchronizedList::load$($String* name, bool initialize) {
	$loadClass(Collections$SynchronizedList, name, initialize, &_Collections$SynchronizedList_ClassInfo_, allocate$Collections$SynchronizedList);
	return class$;
}

$Class* Collections$SynchronizedList::class$ = nullptr;

	} // util
} // java