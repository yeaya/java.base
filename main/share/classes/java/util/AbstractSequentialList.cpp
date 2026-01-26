#include <java/util/AbstractSequentialList.h>

#include <java/lang/IndexOutOfBoundsException.h>
#include <java/util/AbstractList.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/ListIterator.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $ListIterator = ::java::util::ListIterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace util {

$MethodInfo _AbstractSequentialList_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(AbstractSequentialList, init$, void)},
	{"add", "(ILjava/lang/Object;)V", "(ITE;)V", $PUBLIC, $virtualMethod(AbstractSequentialList, add, void, int32_t, Object$*)},
	{"addAll", "(ILjava/util/Collection;)Z", "(ILjava/util/Collection<+TE;>;)Z", $PUBLIC, $virtualMethod(AbstractSequentialList, addAll, bool, int32_t, $Collection*)},
	{"get", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC, $virtualMethod(AbstractSequentialList, get, $Object*, int32_t)},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC, $virtualMethod(AbstractSequentialList, iterator, $Iterator*)},
	{"listIterator", "(I)Ljava/util/ListIterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"remove", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC, $virtualMethod(AbstractSequentialList, remove, $Object*, int32_t)},
	{"set", "(ILjava/lang/Object;)Ljava/lang/Object;", "(ITE;)TE;", $PUBLIC, $virtualMethod(AbstractSequentialList, set, $Object*, int32_t, Object$*)},
	{}
};

$ClassInfo _AbstractSequentialList_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.util.AbstractSequentialList",
	"java.util.AbstractList",
	nullptr,
	nullptr,
	_AbstractSequentialList_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/AbstractList<TE;>;"
};

$Object* allocate$AbstractSequentialList($Class* clazz) {
	return $of($alloc(AbstractSequentialList));
}

$ListIterator* AbstractSequentialList::listIterator(int32_t index) {
	 return this->$AbstractList::listIterator(index);
}

void AbstractSequentialList::init$() {
	$AbstractList::init$();
}

$Object* AbstractSequentialList::get(int32_t index) {
	$useLocalCurrentObjectStackCache();
	try {
		return $of($nc($(listIterator(index)))->next());
	} catch ($NoSuchElementException& exc) {
		$throwNew($IndexOutOfBoundsException, $$str({"Index: "_s, $$str(index)}));
	}
	$shouldNotReachHere();
}

$Object* AbstractSequentialList::set(int32_t index, Object$* element) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($ListIterator, e, listIterator(index));
		$var($Object, oldVal, $nc(e)->next());
		e->set(element);
		return $of(oldVal);
	} catch ($NoSuchElementException& exc) {
		$throwNew($IndexOutOfBoundsException, $$str({"Index: "_s, $$str(index)}));
	}
	$shouldNotReachHere();
}

void AbstractSequentialList::add(int32_t index, Object$* element) {
	$useLocalCurrentObjectStackCache();
	try {
		$nc($(listIterator(index)))->add(element);
	} catch ($NoSuchElementException& exc) {
		$throwNew($IndexOutOfBoundsException, $$str({"Index: "_s, $$str(index)}));
	}
}

$Object* AbstractSequentialList::remove(int32_t index) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($ListIterator, e, listIterator(index));
		$var($Object, outCast, $nc(e)->next());
		e->remove();
		return $of(outCast);
	} catch ($NoSuchElementException& exc) {
		$throwNew($IndexOutOfBoundsException, $$str({"Index: "_s, $$str(index)}));
	}
	$shouldNotReachHere();
}

bool AbstractSequentialList::addAll(int32_t index, $Collection* c) {
	$useLocalCurrentObjectStackCache();
	try {
		bool modified = false;
		$var($ListIterator, e1, listIterator(index));
		{
			$var($Iterator, i$, $nc(c)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Object, e, i$->next());
				{
					$nc(e1)->add(e);
					modified = true;
				}
			}
		}
		return modified;
	} catch ($NoSuchElementException& exc) {
		$throwNew($IndexOutOfBoundsException, $$str({"Index: "_s, $$str(index)}));
	}
	$shouldNotReachHere();
}

$Iterator* AbstractSequentialList::iterator() {
	return listIterator();
}

AbstractSequentialList::AbstractSequentialList() {
}

$Class* AbstractSequentialList::load$($String* name, bool initialize) {
	$loadClass(AbstractSequentialList, name, initialize, &_AbstractSequentialList_ClassInfo_, allocate$AbstractSequentialList);
	return class$;
}

$Class* AbstractSequentialList::class$ = nullptr;

	} // util
} // java