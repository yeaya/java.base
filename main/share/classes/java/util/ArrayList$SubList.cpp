#include <java/util/ArrayList$SubList.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $RandomAccess = ::java::util::RandomAccess;
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
	{"<init>", "(Ljava/util/ArrayList;II)V", "(Ljava/util/ArrayList<TE;>;II)V", $PUBLIC, $method(static_cast<void(ArrayList$SubList::*)($ArrayList*,int32_t,int32_t)>(&ArrayList$SubList::init$))},
	{"<init>", "(Ljava/util/ArrayList$SubList;II)V", "(Ljava/util/ArrayList$SubList<TE;>;II)V", $PRIVATE, $method(static_cast<void(ArrayList$SubList::*)(ArrayList$SubList*,int32_t,int32_t)>(&ArrayList$SubList::init$))},
	{"add", "(ILjava/lang/Object;)V", "(ITE;)V", $PUBLIC},
	{"addAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<+TE;>;)Z", $PUBLIC},
	{"addAll", "(ILjava/util/Collection;)Z", "(ILjava/util/Collection<+TE;>;)Z", $PUBLIC},
	{"batchRemove", "(Ljava/util/Collection;Z)Z", "(Ljava/util/Collection<*>;Z)Z", $PRIVATE, $method(static_cast<bool(ArrayList$SubList::*)($Collection*,bool)>(&ArrayList$SubList::batchRemove))},
	{"checkForComodification", "()V", nullptr, $PRIVATE, $method(static_cast<void(ArrayList$SubList::*)()>(&ArrayList$SubList::checkForComodification))},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"get", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"indexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC},
	{"lastIndexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"listIterator", "(I)Ljava/util/ListIterator;", "(I)Ljava/util/ListIterator<TE;>;", $PUBLIC},
	{"outOfBoundsMsg", "(I)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(ArrayList$SubList::*)(int32_t)>(&ArrayList$SubList::outOfBoundsMsg))},
	{"rangeCheckForAdd", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(ArrayList$SubList::*)(int32_t)>(&ArrayList$SubList::rangeCheckForAdd))},
	{"remove", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC},
	{"removeAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"removeIf", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<-TE;>;)Z", $PUBLIC},
	{"removeRange", "(II)V", nullptr, $PROTECTED},
	{"replaceAll", "(Ljava/util/function/UnaryOperator;)V", "(Ljava/util/function/UnaryOperator<TE;>;)V", $PUBLIC},
	{"retainAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"set", "(ILjava/lang/Object;)Ljava/lang/Object;", "(ITE;)TE;", $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE;>;", $PUBLIC},
	{"subList", "(II)Ljava/util/List;", "(II)Ljava/util/List<TE;>;", $PUBLIC},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateSizeAndModCount", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(ArrayList$SubList::*)(int32_t)>(&ArrayList$SubList::updateSizeAndModCount))},
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