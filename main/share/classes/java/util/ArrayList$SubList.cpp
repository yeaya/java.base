#include <java/util/ArrayList$SubList.h>

#include <java/lang/IndexOutOfBoundsException.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList$SubList$1.h>
#include <java/util/ArrayList$SubList$2.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/ListIterator.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/UnaryOperator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $ArrayList$SubList$1 = ::java::util::ArrayList$SubList$1;
using $ArrayList$SubList$2 = ::java::util::ArrayList$SubList$2;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ListIterator = ::java::util::ListIterator;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Predicate = ::java::util::function::Predicate;
using $UnaryOperator = ::java::util::function::UnaryOperator;

namespace java {
	namespace util {

$FieldInfo _ArrayList$SubList_FieldInfo_[] = {
	{"root", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<TE;>;", $PRIVATE | $FINAL, $field(ArrayList$SubList, root)},
	{"parent", "Ljava/util/ArrayList$SubList;", "Ljava/util/ArrayList$SubList<TE;>;", $PRIVATE | $FINAL, $field(ArrayList$SubList, parent)},
	{"offset", "I", nullptr, $PRIVATE | $FINAL, $field(ArrayList$SubList, offset)},
	{"size", "I", nullptr, $PRIVATE, $field(ArrayList$SubList, size$)},
	{}
};

$MethodInfo _ArrayList$SubList_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/util/ArrayList;II)V", "(Ljava/util/ArrayList<TE;>;II)V", $PUBLIC, $method(ArrayList$SubList, init$, void, $ArrayList*, int32_t, int32_t)},
	{"<init>", "(Ljava/util/ArrayList$SubList;II)V", "(Ljava/util/ArrayList$SubList<TE;>;II)V", $PRIVATE, $method(ArrayList$SubList, init$, void, ArrayList$SubList*, int32_t, int32_t)},
	{"add", "(ILjava/lang/Object;)V", "(ITE;)V", $PUBLIC, $virtualMethod(ArrayList$SubList, add, void, int32_t, Object$*)},
	{"addAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<+TE;>;)Z", $PUBLIC, $virtualMethod(ArrayList$SubList, addAll, bool, $Collection*)},
	{"addAll", "(ILjava/util/Collection;)Z", "(ILjava/util/Collection<+TE;>;)Z", $PUBLIC, $virtualMethod(ArrayList$SubList, addAll, bool, int32_t, $Collection*)},
	{"batchRemove", "(Ljava/util/Collection;Z)Z", "(Ljava/util/Collection<*>;Z)Z", $PRIVATE, $method(ArrayList$SubList, batchRemove, bool, $Collection*, bool)},
	{"checkForComodification", "()V", nullptr, $PRIVATE, $method(ArrayList$SubList, checkForComodification, void)},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ArrayList$SubList, contains, bool, Object$*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ArrayList$SubList, equals, bool, Object$*)},
	{"get", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC, $virtualMethod(ArrayList$SubList, get, $Object*, int32_t)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(ArrayList$SubList, hashCode, int32_t)},
	{"indexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(ArrayList$SubList, indexOf, int32_t, Object$*)},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC, $virtualMethod(ArrayList$SubList, iterator, $Iterator*)},
	{"lastIndexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(ArrayList$SubList, lastIndexOf, int32_t, Object$*)},
	{"listIterator", "(I)Ljava/util/ListIterator;", "(I)Ljava/util/ListIterator<TE;>;", $PUBLIC, $virtualMethod(ArrayList$SubList, listIterator, $ListIterator*, int32_t)},
	{"outOfBoundsMsg", "(I)Ljava/lang/String;", nullptr, $PRIVATE, $method(ArrayList$SubList, outOfBoundsMsg, $String*, int32_t)},
	{"rangeCheckForAdd", "(I)V", nullptr, $PRIVATE, $method(ArrayList$SubList, rangeCheckForAdd, void, int32_t)},
	{"remove", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC, $virtualMethod(ArrayList$SubList, remove, $Object*, int32_t)},
	{"removeAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC, $virtualMethod(ArrayList$SubList, removeAll, bool, $Collection*)},
	{"removeIf", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<-TE;>;)Z", $PUBLIC, $virtualMethod(ArrayList$SubList, removeIf, bool, $Predicate*)},
	{"removeRange", "(II)V", nullptr, $PROTECTED, $virtualMethod(ArrayList$SubList, removeRange, void, int32_t, int32_t)},
	{"replaceAll", "(Ljava/util/function/UnaryOperator;)V", "(Ljava/util/function/UnaryOperator<TE;>;)V", $PUBLIC, $virtualMethod(ArrayList$SubList, replaceAll, void, $UnaryOperator*)},
	{"retainAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC, $virtualMethod(ArrayList$SubList, retainAll, bool, $Collection*)},
	{"set", "(ILjava/lang/Object;)Ljava/lang/Object;", "(ITE;)TE;", $PUBLIC, $virtualMethod(ArrayList$SubList, set, $Object*, int32_t, Object$*)},
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(ArrayList$SubList, size, int32_t)},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE;>;", $PUBLIC, $virtualMethod(ArrayList$SubList, spliterator, $Spliterator*)},
	{"subList", "(II)Ljava/util/List;", "(II)Ljava/util/List<TE;>;", $PUBLIC, $virtualMethod(ArrayList$SubList, subList, $List*, int32_t, int32_t)},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ArrayList$SubList, toArray, $ObjectArray*)},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC, $virtualMethod(ArrayList$SubList, toArray, $ObjectArray*, $ObjectArray*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateSizeAndModCount", "(I)V", nullptr, $PRIVATE, $method(ArrayList$SubList, updateSizeAndModCount, void, int32_t)},
	{}
};

$InnerClassInfo _ArrayList$SubList_InnerClassesInfo_[] = {
	{"java.util.ArrayList$SubList", "java.util.ArrayList", "SubList", $PRIVATE | $STATIC},
	{"java.util.ArrayList$SubList$2", nullptr, nullptr, 0},
	{"java.util.ArrayList$SubList$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ArrayList$SubList_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.ArrayList$SubList",
	"java.util.AbstractList",
	"java.util.RandomAccess",
	_ArrayList$SubList_FieldInfo_,
	_ArrayList$SubList_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/AbstractList<TE;>;Ljava/util/RandomAccess;",
	nullptr,
	_ArrayList$SubList_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ArrayList"
};

$Object* allocate$ArrayList$SubList($Class* clazz) {
	return $of($alloc(ArrayList$SubList));
}

$String* ArrayList$SubList::toString() {
	 return this->$AbstractList::toString();
}

$Object* ArrayList$SubList::clone() {
	 return this->$AbstractList::clone();
}

void ArrayList$SubList::finalize() {
	this->$AbstractList::finalize();
}

void ArrayList$SubList::init$($ArrayList* root, int32_t fromIndex, int32_t toIndex) {
	$AbstractList::init$();
	$set(this, root, root);
	$set(this, parent, nullptr);
	this->offset = fromIndex;
	this->size$ = toIndex - fromIndex;
	this->modCount = $nc(root)->modCount;
}

void ArrayList$SubList::init$(ArrayList$SubList* parent, int32_t fromIndex, int32_t toIndex) {
	$AbstractList::init$();
	$set(this, root, $nc(parent)->root);
	$set(this, parent, parent);
	this->offset = parent->offset + fromIndex;
	this->size$ = toIndex - fromIndex;
	this->modCount = parent->modCount;
}

$Object* ArrayList$SubList::set(int32_t index, Object$* element) {
	$Objects::checkIndex(index, this->size$);
	checkForComodification();
	$var($Object, oldValue, $nc(this->root)->elementData(this->offset + index));
	$nc($nc(this->root)->elementData$)->set(this->offset + index, element);
	return $of(oldValue);
}

$Object* ArrayList$SubList::get(int32_t index) {
	$Objects::checkIndex(index, this->size$);
	checkForComodification();
	return $of($nc(this->root)->elementData(this->offset + index));
}

int32_t ArrayList$SubList::size() {
	checkForComodification();
	return this->size$;
}

void ArrayList$SubList::add(int32_t index, Object$* element) {
	rangeCheckForAdd(index);
	checkForComodification();
	$nc(this->root)->add(this->offset + index, element);
	updateSizeAndModCount(1);
}

$Object* ArrayList$SubList::remove(int32_t index) {
	$Objects::checkIndex(index, this->size$);
	checkForComodification();
	$var($Object, result, $nc(this->root)->remove(this->offset + index));
	updateSizeAndModCount(-1);
	return $of(result);
}

void ArrayList$SubList::removeRange(int32_t fromIndex, int32_t toIndex) {
	checkForComodification();
	$nc(this->root)->removeRange(this->offset + fromIndex, this->offset + toIndex);
	updateSizeAndModCount(fromIndex - toIndex);
}

bool ArrayList$SubList::addAll($Collection* c) {
	return addAll(this->size$, c);
}

bool ArrayList$SubList::addAll(int32_t index, $Collection* c) {
	rangeCheckForAdd(index);
	int32_t cSize = $nc(c)->size();
	if (cSize == 0) {
		return false;
	}
	checkForComodification();
	$nc(this->root)->addAll(this->offset + index, c);
	updateSizeAndModCount(cSize);
	return true;
}

void ArrayList$SubList::replaceAll($UnaryOperator* operator$) {
	$nc(this->root)->replaceAllRange(operator$, this->offset, this->offset + this->size$);
}

bool ArrayList$SubList::removeAll($Collection* c) {
	return batchRemove(c, false);
}

bool ArrayList$SubList::retainAll($Collection* c) {
	return batchRemove(c, true);
}

bool ArrayList$SubList::batchRemove($Collection* c, bool complement) {
	checkForComodification();
	int32_t oldSize = $nc(this->root)->size$;
	bool modified = $nc(this->root)->batchRemove(c, complement, this->offset, this->offset + this->size$);
	if (modified) {
		updateSizeAndModCount($nc(this->root)->size$ - oldSize);
	}
	return modified;
}

bool ArrayList$SubList::removeIf($Predicate* filter) {
	checkForComodification();
	int32_t oldSize = $nc(this->root)->size$;
	bool modified = $nc(this->root)->removeIf(filter, this->offset, this->offset + this->size$);
	if (modified) {
		updateSizeAndModCount($nc(this->root)->size$ - oldSize);
	}
	return modified;
}

$ObjectArray* ArrayList$SubList::toArray() {
	checkForComodification();
	return $Arrays::copyOfRange($nc(this->root)->elementData$, this->offset, this->offset + this->size$);
}

$ObjectArray* ArrayList$SubList::toArray($ObjectArray* a) {
	checkForComodification();
	if ($nc(a)->length < this->size$) {
		return $Arrays::copyOfRange($nc(this->root)->elementData$, this->offset, this->offset + this->size$, $of(a)->getClass());
	}
	$System::arraycopy($nc(this->root)->elementData$, this->offset, a, 0, this->size$);
	if ($nc(a)->length > this->size$) {
		a->set(this->size$, nullptr);
	}
	return a;
}

bool ArrayList$SubList::equals(Object$* o) {
	if ($equals(o, this)) {
		return true;
	}
	if (!($instanceOf($List, o))) {
		return false;
	}
	bool equal = $nc(this->root)->equalsRange($cast($List, o), this->offset, this->offset + this->size$);
	checkForComodification();
	return equal;
}

int32_t ArrayList$SubList::hashCode() {
	int32_t hash = $nc(this->root)->hashCodeRange(this->offset, this->offset + this->size$);
	checkForComodification();
	return hash;
}

int32_t ArrayList$SubList::indexOf(Object$* o) {
	int32_t index = $nc(this->root)->indexOfRange(o, this->offset, this->offset + this->size$);
	checkForComodification();
	return index >= 0 ? index - this->offset : -1;
}

int32_t ArrayList$SubList::lastIndexOf(Object$* o) {
	int32_t index = $nc(this->root)->lastIndexOfRange(o, this->offset, this->offset + this->size$);
	checkForComodification();
	return index >= 0 ? index - this->offset : -1;
}

bool ArrayList$SubList::contains(Object$* o) {
	return indexOf(o) >= 0;
}

$Iterator* ArrayList$SubList::iterator() {
	return listIterator();
}

$ListIterator* ArrayList$SubList::listIterator(int32_t index) {
	checkForComodification();
	rangeCheckForAdd(index);
	return $new($ArrayList$SubList$1, this, index);
}

$List* ArrayList$SubList::subList(int32_t fromIndex, int32_t toIndex) {
	subListRangeCheck(fromIndex, toIndex, this->size$);
	return $new(ArrayList$SubList, this, fromIndex, toIndex);
}

void ArrayList$SubList::rangeCheckForAdd(int32_t index) {
	if (index < 0 || index > this->size$) {
		$throwNew($IndexOutOfBoundsException, $(outOfBoundsMsg(index)));
	}
}

$String* ArrayList$SubList::outOfBoundsMsg(int32_t index) {
	$useLocalCurrentObjectStackCache();
	return $str({"Index: "_s, $$str(index), ", Size: "_s, $$str(this->size$)});
}

void ArrayList$SubList::checkForComodification() {
	if ($nc(this->root)->modCount != this->modCount) {
		$throwNew($ConcurrentModificationException);
	}
}

void ArrayList$SubList::updateSizeAndModCount(int32_t sizeChange) {
	$var(ArrayList$SubList, slist, this);
	do {
		slist->size$ += sizeChange;
		slist->modCount = $nc(this->root)->modCount;
		$assign(slist, slist->parent);
	} while (slist != nullptr);
}

$Spliterator* ArrayList$SubList::spliterator() {
	checkForComodification();
	return $new($ArrayList$SubList$2, this);
}

ArrayList$SubList::ArrayList$SubList() {
}

$Class* ArrayList$SubList::load$($String* name, bool initialize) {
	$loadClass(ArrayList$SubList, name, initialize, &_ArrayList$SubList_ClassInfo_, allocate$ArrayList$SubList);
	return class$;
}

$Class* ArrayList$SubList::class$ = nullptr;

	} // util
} // java