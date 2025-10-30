#include <java/util/ImmutableCollections$AbstractImmutableList.h>

#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Collection.h>
#include <java/util/Comparator.h>
#include <java/util/ImmutableCollections$AbstractImmutableCollection.h>
#include <java/util/ImmutableCollections$ListItr.h>
#include <java/util/ImmutableCollections$SubList.h>
#include <java/util/ImmutableCollections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/ListIterator.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/UnaryOperator.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Collection = ::java::util::Collection;
using $Comparator = ::java::util::Comparator;
using $ImmutableCollections = ::java::util::ImmutableCollections;
using $ImmutableCollections$AbstractImmutableCollection = ::java::util::ImmutableCollections$AbstractImmutableCollection;
using $ImmutableCollections$ListItr = ::java::util::ImmutableCollections$ListItr;
using $ImmutableCollections$SubList = ::java::util::ImmutableCollections$SubList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ListIterator = ::java::util::ListIterator;
using $Objects = ::java::util::Objects;
using $RandomAccess = ::java::util::RandomAccess;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $UnaryOperator = ::java::util::function::UnaryOperator;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace util {

$CompoundAttribute _ImmutableCollections$AbstractImmutableList_Annotations_[] = {
	{"Ljdk/internal/ValueBased;", nullptr},
	{}
};

$MethodInfo _ImmutableCollections$AbstractImmutableList_MethodInfo_[] = {
	{"*add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*addAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*clear", "()V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*containsAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEach", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ImmutableCollections$AbstractImmutableList::*)()>(&ImmutableCollections$AbstractImmutableList::init$))},
	{"add", "(ILjava/lang/Object;)V", "(ITE;)V", $PUBLIC},
	{"addAll", "(ILjava/util/Collection;)Z", "(ILjava/util/Collection<+TE;>;)Z", $PUBLIC},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC},
	{"listIterator", "()Ljava/util/ListIterator;", "()Ljava/util/ListIterator<TE;>;", $PUBLIC},
	{"listIterator", "(I)Ljava/util/ListIterator;", "(I)Ljava/util/ListIterator<TE;>;", $PUBLIC},
	{"outOfBounds", "(I)Ljava/lang/IndexOutOfBoundsException;", nullptr, 0},
	{"*parallelStream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"*remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"remove", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC},
	{"*removeAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*removeIf", "(Ljava/util/function/Predicate;)Z", nullptr, $PUBLIC},
	{"replaceAll", "(Ljava/util/function/UnaryOperator;)V", "(Ljava/util/function/UnaryOperator<TE;>;)V", $PUBLIC},
	{"*retainAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"set", "(ILjava/lang/Object;)Ljava/lang/Object;", "(ITE;)TE;", $PUBLIC},
	{"*size", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"sort", "(Ljava/util/Comparator;)V", "(Ljava/util/Comparator<-TE;>;)V", $PUBLIC},
	{"*spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"subList", "(II)Ljava/util/List;", "(II)Ljava/util/List<TE;>;", $PUBLIC},
	{"subListRangeCheck", "(III)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t,int32_t,int32_t)>(&ImmutableCollections$AbstractImmutableList::subListRangeCheck))},
	{"*toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _ImmutableCollections$AbstractImmutableList_InnerClassesInfo_[] = {
	{"java.util.ImmutableCollections$AbstractImmutableList", "java.util.ImmutableCollections", "AbstractImmutableList", $STATIC | $ABSTRACT},
	{"java.util.ImmutableCollections$AbstractImmutableCollection", "java.util.ImmutableCollections", "AbstractImmutableCollection", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ImmutableCollections$AbstractImmutableList_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.ImmutableCollections$AbstractImmutableList",
	"java.util.ImmutableCollections$AbstractImmutableCollection",
	"java.util.List,java.util.RandomAccess",
	nullptr,
	_ImmutableCollections$AbstractImmutableList_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/ImmutableCollections$AbstractImmutableCollection<TE;>;Ljava/util/List<TE;>;Ljava/util/RandomAccess;",
	nullptr,
	_ImmutableCollections$AbstractImmutableList_InnerClassesInfo_,
	_ImmutableCollections$AbstractImmutableList_Annotations_,
	nullptr,
	nullptr,
	"java.util.ImmutableCollections"
};

$Object* allocate$ImmutableCollections$AbstractImmutableList($Class* clazz) {
	return $of($alloc(ImmutableCollections$AbstractImmutableList));
}

bool ImmutableCollections$AbstractImmutableList::add(Object$* e) {
	 return this->$ImmutableCollections$AbstractImmutableCollection::add(e);
}

bool ImmutableCollections$AbstractImmutableList::addAll($Collection* c) {
	 return this->$ImmutableCollections$AbstractImmutableCollection::addAll(c);
}

void ImmutableCollections$AbstractImmutableList::clear() {
	this->$ImmutableCollections$AbstractImmutableCollection::clear();
}

bool ImmutableCollections$AbstractImmutableList::remove(Object$* o) {
	 return this->$ImmutableCollections$AbstractImmutableCollection::remove(o);
}

bool ImmutableCollections$AbstractImmutableList::removeAll($Collection* c) {
	 return this->$ImmutableCollections$AbstractImmutableCollection::removeAll(c);
}

bool ImmutableCollections$AbstractImmutableList::removeIf($Predicate* filter) {
	 return this->$ImmutableCollections$AbstractImmutableCollection::removeIf(filter);
}

bool ImmutableCollections$AbstractImmutableList::retainAll($Collection* c) {
	 return this->$ImmutableCollections$AbstractImmutableCollection::retainAll(c);
}

bool ImmutableCollections$AbstractImmutableList::isEmpty() {
	 return this->$ImmutableCollections$AbstractImmutableCollection::isEmpty();
}

$ObjectArray* ImmutableCollections$AbstractImmutableList::toArray() {
	 return this->$ImmutableCollections$AbstractImmutableCollection::toArray();
}

$ObjectArray* ImmutableCollections$AbstractImmutableList::toArray($ObjectArray* a) {
	 return this->$ImmutableCollections$AbstractImmutableCollection::toArray(a);
}

bool ImmutableCollections$AbstractImmutableList::containsAll($Collection* c) {
	 return this->$ImmutableCollections$AbstractImmutableCollection::containsAll(c);
}

$String* ImmutableCollections$AbstractImmutableList::toString() {
	 return this->$ImmutableCollections$AbstractImmutableCollection::toString();
}

$ObjectArray* ImmutableCollections$AbstractImmutableList::toArray($IntFunction* generator) {
	 return this->$ImmutableCollections$AbstractImmutableCollection::toArray(generator);
}

$Spliterator* ImmutableCollections$AbstractImmutableList::spliterator() {
	 return this->$ImmutableCollections$AbstractImmutableCollection::spliterator();
}

$Stream* ImmutableCollections$AbstractImmutableList::stream() {
	 return this->$ImmutableCollections$AbstractImmutableCollection::stream();
}

$Stream* ImmutableCollections$AbstractImmutableList::parallelStream() {
	 return this->$ImmutableCollections$AbstractImmutableCollection::parallelStream();
}

void ImmutableCollections$AbstractImmutableList::forEach($Consumer* action) {
	this->$ImmutableCollections$AbstractImmutableCollection::forEach(action);
}

$Object* ImmutableCollections$AbstractImmutableList::clone() {
	 return this->$ImmutableCollections$AbstractImmutableCollection::clone();
}

void ImmutableCollections$AbstractImmutableList::finalize() {
	this->$ImmutableCollections$AbstractImmutableCollection::finalize();
}

void ImmutableCollections$AbstractImmutableList::init$() {
	$ImmutableCollections$AbstractImmutableCollection::init$();
}

void ImmutableCollections$AbstractImmutableList::add(int32_t index, Object$* element) {
	$throw($($ImmutableCollections::uoe()));
}

bool ImmutableCollections$AbstractImmutableList::addAll(int32_t index, $Collection* c) {
	$throw($($ImmutableCollections::uoe()));
	$shouldNotReachHere();
}

$Object* ImmutableCollections$AbstractImmutableList::remove(int32_t index) {
	$throw($($ImmutableCollections::uoe()));
	$shouldNotReachHere();
}

void ImmutableCollections$AbstractImmutableList::replaceAll($UnaryOperator* operator$) {
	$throw($($ImmutableCollections::uoe()));
}

$Object* ImmutableCollections$AbstractImmutableList::set(int32_t index, Object$* element) {
	$throw($($ImmutableCollections::uoe()));
	$shouldNotReachHere();
}

void ImmutableCollections$AbstractImmutableList::sort($Comparator* c) {
	$throw($($ImmutableCollections::uoe()));
}

$List* ImmutableCollections$AbstractImmutableList::subList(int32_t fromIndex, int32_t toIndex) {
	int32_t size = this->size();
	subListRangeCheck(fromIndex, toIndex, size);
	return $ImmutableCollections$SubList::fromList(this, fromIndex, toIndex);
}

void ImmutableCollections$AbstractImmutableList::subListRangeCheck(int32_t fromIndex, int32_t toIndex, int32_t size) {
	$init(ImmutableCollections$AbstractImmutableList);
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

$Iterator* ImmutableCollections$AbstractImmutableList::iterator() {
	return $new($ImmutableCollections$ListItr, this, size());
}

$ListIterator* ImmutableCollections$AbstractImmutableList::listIterator() {
	return listIterator(0);
}

$ListIterator* ImmutableCollections$AbstractImmutableList::listIterator(int32_t index) {
	int32_t size = this->size();
	if (index < 0 || index > size) {
		$throw($(outOfBounds(index)));
	}
	return $new($ImmutableCollections$ListItr, this, size, index);
}

bool ImmutableCollections$AbstractImmutableList::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if ($equals(o, this)) {
		return true;
	}
	if (!($instanceOf($List, o))) {
		return false;
	}
	$var($Iterator, oit, $nc(($cast($List, o)))->iterator());
	{
		int32_t i = 0;
		int32_t s = size();
		for (; i < s; ++i) {
			bool var$0 = !$nc(oit)->hasNext();
			if (!var$0) {
				$var($Object, var$1, get(i));
				var$0 = !$Objects::equals(var$1, $($nc(oit)->next()));
			}
			if (var$0) {
				return false;
			}
		}
	}
	return !$nc(oit)->hasNext();
}

int32_t ImmutableCollections$AbstractImmutableList::hashCode() {
	$useLocalCurrentObjectStackCache();
	int32_t hash = 1;
	{
		int32_t i = 0;
		int32_t s = size();
		for (; i < s; ++i) {
			hash = 31 * hash + $Objects::hashCode($(get(i)));
		}
	}
	return hash;
}

bool ImmutableCollections$AbstractImmutableList::contains(Object$* o) {
	return indexOf(o) >= 0;
}

$IndexOutOfBoundsException* ImmutableCollections$AbstractImmutableList::outOfBounds(int32_t index) {
	$useLocalCurrentObjectStackCache();
	return $new($IndexOutOfBoundsException, $$str({"Index: "_s, $$str(index), " Size: "_s, $$str(size())}));
}

ImmutableCollections$AbstractImmutableList::ImmutableCollections$AbstractImmutableList() {
}

$Class* ImmutableCollections$AbstractImmutableList::load$($String* name, bool initialize) {
	$loadClass(ImmutableCollections$AbstractImmutableList, name, initialize, &_ImmutableCollections$AbstractImmutableList_ClassInfo_, allocate$ImmutableCollections$AbstractImmutableList);
	return class$;
}

$Class* ImmutableCollections$AbstractImmutableList::class$ = nullptr;

	} // util
} // java