#include <java/util/AbstractSequentialList.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(AbstractSequentialList::*)()>(&AbstractSequentialList::init$))},
	{"add", "(ILjava/lang/Object;)V", "(ITE;)V", $PUBLIC},
	{"addAll", "(ILjava/util/Collection;)Z", "(ILjava/util/Collection<+TE;>;)Z", $PUBLIC},
	{"get", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC},
	{"listIterator", "(I)Ljava/util/ListIterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"remove", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC},
	{"set", "(ILjava/lang/Object;)Ljava/lang/Object;", "(ITE;)TE;", $PUBLIC},
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
	try {
		return $of($nc($(listIterator(index)))->next());
	} catch ($NoSuchElementException&) {
		$var($NoSuchElementException, exc, $catch());
		$throwNew($IndexOutOfBoundsException, $$str({"Index: "_s, $$str(index)}));
	}
	$shouldNotReachHere();
}

$Object* AbstractSequentialList::set(int32_t index, Object$* element) {
	try {
		$var($ListIterator, e, listIterator(index));
		$var($Object, oldVal, $nc(e)->next());
		e->set(element);
		return $of(oldVal);
	} catch ($NoSuchElementException&) {
		$var($NoSuchElementException, exc, $catch());
		$throwNew($IndexOutOfBoundsException, $$str({"Index: "_s, $$str(index)}));
	}
	$shouldNotReachHere();
}

void AbstractSequentialList::add(int32_t index, Object$* element) {
	try {
		$nc($(listIterator(index)))->add(element);
	} catch ($NoSuchElementException&) {
		$var($NoSuchElementException, exc, $catch());
		$throwNew($IndexOutOfBoundsException, $$str({"Index: "_s, $$str(index)}));
	}
}

$Object* AbstractSequentialList::remove(int32_t index) {
	try {
		$var($ListIterator, e, listIterator(index));
		$var($Object, outCast, $nc(e)->next());
		e->remove();
		return $of(outCast);
	} catch ($NoSuchElementException&) {
		$var($NoSuchElementException, exc, $catch());
		$throwNew($IndexOutOfBoundsException, $$str({"Index: "_s, $$str(index)}));
	}
	$shouldNotReachHere();
}

bool AbstractSequentialList::addAll(int32_t index, $Collection* c) {
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
	} catch ($NoSuchElementException&) {
		$var($NoSuchElementException, exc, $catch());
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