#include <java/util/AbstractList$SubList.h>

#include <java/lang/IndexOutOfBoundsException.h>
#include <java/util/AbstractList$SubList$1.h>
#include <java/util/AbstractList.h>
#include <java/util/Collection.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/ListIterator.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $AbstractList$SubList$1 = ::java::util::AbstractList$SubList$1;
using $Collection = ::java::util::Collection;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ListIterator = ::java::util::ListIterator;
using $Objects = ::java::util::Objects;

namespace java {
	namespace util {

$FieldInfo _AbstractList$SubList_FieldInfo_[] = {
	{"root", "Ljava/util/AbstractList;", "Ljava/util/AbstractList<TE;>;", $PRIVATE | $FINAL, $field(AbstractList$SubList, root)},
	{"parent", "Ljava/util/AbstractList$SubList;", "Ljava/util/AbstractList$SubList<TE;>;", $PRIVATE | $FINAL, $field(AbstractList$SubList, parent)},
	{"offset", "I", nullptr, $PRIVATE | $FINAL, $field(AbstractList$SubList, offset)},
	{"size", "I", nullptr, $PROTECTED, $field(AbstractList$SubList, size$)},
	{}
};

$MethodInfo _AbstractList$SubList_MethodInfo_[] = {
	{"<init>", "(Ljava/util/AbstractList;II)V", "(Ljava/util/AbstractList<TE;>;II)V", $PUBLIC, $method(static_cast<void(AbstractList$SubList::*)($AbstractList*,int32_t,int32_t)>(&AbstractList$SubList::init$))},
	{"<init>", "(Ljava/util/AbstractList$SubList;II)V", "(Ljava/util/AbstractList$SubList<TE;>;II)V", $PROTECTED, $method(static_cast<void(AbstractList$SubList::*)(AbstractList$SubList*,int32_t,int32_t)>(&AbstractList$SubList::init$))},
	{"add", "(ILjava/lang/Object;)V", "(ITE;)V", $PUBLIC},
	{"addAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<+TE;>;)Z", $PUBLIC},
	{"addAll", "(ILjava/util/Collection;)Z", "(ILjava/util/Collection<+TE;>;)Z", $PUBLIC},
	{"checkForComodification", "()V", nullptr, $PRIVATE, $method(static_cast<void(AbstractList$SubList::*)()>(&AbstractList$SubList::checkForComodification))},
	{"get", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC},
	{"listIterator", "(I)Ljava/util/ListIterator;", "(I)Ljava/util/ListIterator<TE;>;", $PUBLIC},
	{"outOfBoundsMsg", "(I)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(AbstractList$SubList::*)(int32_t)>(&AbstractList$SubList::outOfBoundsMsg))},
	{"rangeCheckForAdd", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(AbstractList$SubList::*)(int32_t)>(&AbstractList$SubList::rangeCheckForAdd))},
	{"remove", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC},
	{"removeRange", "(II)V", nullptr, $PROTECTED},
	{"set", "(ILjava/lang/Object;)Ljava/lang/Object;", "(ITE;)TE;", $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"subList", "(II)Ljava/util/List;", "(II)Ljava/util/List<TE;>;", $PUBLIC},
	{"updateSizeAndModCount", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(AbstractList$SubList::*)(int32_t)>(&AbstractList$SubList::updateSizeAndModCount))},
	{}
};

$InnerClassInfo _AbstractList$SubList_InnerClassesInfo_[] = {
	{"java.util.AbstractList$SubList", "java.util.AbstractList", "SubList", $PRIVATE | $STATIC},
	{"java.util.AbstractList$SubList$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AbstractList$SubList_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.AbstractList$SubList",
	"java.util.AbstractList",
	nullptr,
	_AbstractList$SubList_FieldInfo_,
	_AbstractList$SubList_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/AbstractList<TE;>;",
	nullptr,
	_AbstractList$SubList_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.AbstractList"
};

$Object* allocate$AbstractList$SubList($Class* clazz) {
	return $of($alloc(AbstractList$SubList));
}

void AbstractList$SubList::init$($AbstractList* root, int32_t fromIndex, int32_t toIndex) {
	$AbstractList::init$();
	$set(this, root, root);
	$set(this, parent, nullptr);
	this->offset = fromIndex;
	this->size$ = toIndex - fromIndex;
	this->modCount = $nc(root)->modCount;
}

void AbstractList$SubList::init$(AbstractList$SubList* parent, int32_t fromIndex, int32_t toIndex) {
	$AbstractList::init$();
	$set(this, root, $nc(parent)->root);
	$set(this, parent, parent);
	this->offset = parent->offset + fromIndex;
	this->size$ = toIndex - fromIndex;
	this->modCount = $nc(this->root)->modCount;
}

$Object* AbstractList$SubList::set(int32_t index, Object$* element) {
	$Objects::checkIndex(index, this->size$);
	checkForComodification();
	return $of($nc(this->root)->set(this->offset + index, element));
}

$Object* AbstractList$SubList::get(int32_t index) {
	$Objects::checkIndex(index, this->size$);
	checkForComodification();
	return $of($nc(this->root)->get(this->offset + index));
}

int32_t AbstractList$SubList::size() {
	checkForComodification();
	return this->size$;
}

void AbstractList$SubList::add(int32_t index, Object$* element) {
	rangeCheckForAdd(index);
	checkForComodification();
	$nc(this->root)->add(this->offset + index, element);
	updateSizeAndModCount(1);
}

$Object* AbstractList$SubList::remove(int32_t index) {
	$Objects::checkIndex(index, this->size$);
	checkForComodification();
	$var($Object, result, $nc(this->root)->remove(this->offset + index));
	updateSizeAndModCount(-1);
	return $of(result);
}

void AbstractList$SubList::removeRange(int32_t fromIndex, int32_t toIndex) {
	checkForComodification();
	$nc(this->root)->removeRange(this->offset + fromIndex, this->offset + toIndex);
	updateSizeAndModCount(fromIndex - toIndex);
}

bool AbstractList$SubList::addAll($Collection* c) {
	return addAll(this->size$, c);
}

bool AbstractList$SubList::addAll(int32_t index, $Collection* c) {
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

$Iterator* AbstractList$SubList::iterator() {
	return listIterator();
}

$ListIterator* AbstractList$SubList::listIterator(int32_t index) {
	checkForComodification();
	rangeCheckForAdd(index);
	return $new($AbstractList$SubList$1, this, index);
}

$List* AbstractList$SubList::subList(int32_t fromIndex, int32_t toIndex) {
	subListRangeCheck(fromIndex, toIndex, this->size$);
	return $new(AbstractList$SubList, this, fromIndex, toIndex);
}

void AbstractList$SubList::rangeCheckForAdd(int32_t index) {
	if (index < 0 || index > this->size$) {
		$throwNew($IndexOutOfBoundsException, $(outOfBoundsMsg(index)));
	}
}

$String* AbstractList$SubList::outOfBoundsMsg(int32_t index) {
	$useLocalCurrentObjectStackCache();
	return $str({"Index: "_s, $$str(index), ", Size: "_s, $$str(this->size$)});
}

void AbstractList$SubList::checkForComodification() {
	if ($nc(this->root)->modCount != this->modCount) {
		$throwNew($ConcurrentModificationException);
	}
}

void AbstractList$SubList::updateSizeAndModCount(int32_t sizeChange) {
	$var(AbstractList$SubList, slist, this);
	do {
		slist->size$ += sizeChange;
		slist->modCount = $nc(this->root)->modCount;
		$assign(slist, slist->parent);
	} while (slist != nullptr);
}

AbstractList$SubList::AbstractList$SubList() {
}

$Class* AbstractList$SubList::load$($String* name, bool initialize) {
	$loadClass(AbstractList$SubList, name, initialize, &_AbstractList$SubList_ClassInfo_, allocate$AbstractList$SubList);
	return class$;
}

$Class* AbstractList$SubList::class$ = nullptr;

	} // util
} // java