#include <java/util/Collections$UnmodifiableList.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Collection.h>
#include <java/util/Collections$UnmodifiableCollection.h>
#include <java/util/Collections$UnmodifiableList$1.h>
#include <java/util/Collections$UnmodifiableRandomAccessList.h>
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
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Collection = ::java::util::Collection;
using $Collections$UnmodifiableCollection = ::java::util::Collections$UnmodifiableCollection;
using $Collections$UnmodifiableList$1 = ::java::util::Collections$UnmodifiableList$1;
using $Collections$UnmodifiableRandomAccessList = ::java::util::Collections$UnmodifiableRandomAccessList;
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

$FieldInfo _Collections$UnmodifiableList_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$UnmodifiableList, serialVersionUID)},
	{"list", "Ljava/util/List;", "Ljava/util/List<+TE;>;", $FINAL, $field(Collections$UnmodifiableList, list)},
	{}
};

$MethodInfo _Collections$UnmodifiableList_MethodInfo_[] = {
	{"*add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*addAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*clear", "()V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*containsAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEach", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC},
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<+TE;>;)V", 0, $method(static_cast<void(Collections$UnmodifiableList::*)($List*)>(&Collections$UnmodifiableList::init$))},
	{"add", "(ILjava/lang/Object;)V", "(ITE;)V", $PUBLIC},
	{"addAll", "(ILjava/util/Collection;)Z", "(ILjava/util/Collection<+TE;>;)Z", $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"get", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"indexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"*iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC},
	{"lastIndexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"listIterator", "()Ljava/util/ListIterator;", "()Ljava/util/ListIterator<TE;>;", $PUBLIC},
	{"listIterator", "(I)Ljava/util/ListIterator;", "(I)Ljava/util/ListIterator<TE;>;", $PUBLIC},
	{"*parallelStream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC},
	{"readResolve", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(Collections$UnmodifiableList::*)()>(&Collections$UnmodifiableList::readResolve))},
	{"*remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"remove", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC},
	{"*removeAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*removeIf", "(Ljava/util/function/Predicate;)Z", nullptr, $PUBLIC},
	{"replaceAll", "(Ljava/util/function/UnaryOperator;)V", "(Ljava/util/function/UnaryOperator<TE;>;)V", $PUBLIC},
	{"*retainAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"set", "(ILjava/lang/Object;)Ljava/lang/Object;", "(ITE;)TE;", $PUBLIC},
	{"*size", "()I", nullptr, $PUBLIC},
	{"sort", "(Ljava/util/Comparator;)V", "(Ljava/util/Comparator<-TE;>;)V", $PUBLIC},
	{"*spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC},
	{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC},
	{"subList", "(II)Ljava/util/List;", "(II)Ljava/util/List<TE;>;", $PUBLIC},
	{"*toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Collections$UnmodifiableList_InnerClassesInfo_[] = {
	{"java.util.Collections$UnmodifiableList", "java.util.Collections", "UnmodifiableList", $STATIC},
	{"java.util.Collections$UnmodifiableCollection", "java.util.Collections", "UnmodifiableCollection", $STATIC},
	{"java.util.Collections$UnmodifiableList$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Collections$UnmodifiableList_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$UnmodifiableList",
	"java.util.Collections$UnmodifiableCollection",
	"java.util.List",
	_Collections$UnmodifiableList_FieldInfo_,
	_Collections$UnmodifiableList_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/Collections$UnmodifiableCollection<TE;>;Ljava/util/List<TE;>;",
	nullptr,
	_Collections$UnmodifiableList_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$UnmodifiableList($Class* clazz) {
	return $of($alloc(Collections$UnmodifiableList));
}

int32_t Collections$UnmodifiableList::size() {
	 return this->$Collections$UnmodifiableCollection::size();
}

bool Collections$UnmodifiableList::isEmpty() {
	 return this->$Collections$UnmodifiableCollection::isEmpty();
}

bool Collections$UnmodifiableList::contains(Object$* o) {
	 return this->$Collections$UnmodifiableCollection::contains(o);
}

$ObjectArray* Collections$UnmodifiableList::toArray() {
	 return this->$Collections$UnmodifiableCollection::toArray();
}

$ObjectArray* Collections$UnmodifiableList::toArray($ObjectArray* a) {
	 return this->$Collections$UnmodifiableCollection::toArray(a);
}

$ObjectArray* Collections$UnmodifiableList::toArray($IntFunction* f) {
	 return this->$Collections$UnmodifiableCollection::toArray(f);
}

$String* Collections$UnmodifiableList::toString() {
	 return this->$Collections$UnmodifiableCollection::toString();
}

$Iterator* Collections$UnmodifiableList::iterator() {
	 return this->$Collections$UnmodifiableCollection::iterator();
}

bool Collections$UnmodifiableList::add(Object$* e) {
	 return this->$Collections$UnmodifiableCollection::add(e);
}

bool Collections$UnmodifiableList::remove(Object$* o) {
	 return this->$Collections$UnmodifiableCollection::remove(o);
}

bool Collections$UnmodifiableList::containsAll($Collection* coll) {
	 return this->$Collections$UnmodifiableCollection::containsAll(coll);
}

bool Collections$UnmodifiableList::addAll($Collection* coll) {
	 return this->$Collections$UnmodifiableCollection::addAll(coll);
}

bool Collections$UnmodifiableList::removeAll($Collection* coll) {
	 return this->$Collections$UnmodifiableCollection::removeAll(coll);
}

bool Collections$UnmodifiableList::retainAll($Collection* coll) {
	 return this->$Collections$UnmodifiableCollection::retainAll(coll);
}

void Collections$UnmodifiableList::clear() {
	this->$Collections$UnmodifiableCollection::clear();
}

void Collections$UnmodifiableList::forEach($Consumer* action) {
	this->$Collections$UnmodifiableCollection::forEach(action);
}

bool Collections$UnmodifiableList::removeIf($Predicate* filter) {
	 return this->$Collections$UnmodifiableCollection::removeIf(filter);
}

$Spliterator* Collections$UnmodifiableList::spliterator() {
	 return this->$Collections$UnmodifiableCollection::spliterator();
}

$Stream* Collections$UnmodifiableList::stream() {
	 return this->$Collections$UnmodifiableCollection::stream();
}

$Stream* Collections$UnmodifiableList::parallelStream() {
	 return this->$Collections$UnmodifiableCollection::parallelStream();
}

$Object* Collections$UnmodifiableList::clone() {
	 return this->$Collections$UnmodifiableCollection::clone();
}

void Collections$UnmodifiableList::finalize() {
	this->$Collections$UnmodifiableCollection::finalize();
}

void Collections$UnmodifiableList::init$($List* list) {
	$Collections$UnmodifiableCollection::init$(list);
	$set(this, list, list);
}

bool Collections$UnmodifiableList::equals(Object$* o) {
	return $equals(o, this) || $nc(this->list)->equals(o);
}

int32_t Collections$UnmodifiableList::hashCode() {
	return $nc(this->list)->hashCode();
}

$Object* Collections$UnmodifiableList::get(int32_t index) {
	return $of($nc(this->list)->get(index));
}

$Object* Collections$UnmodifiableList::set(int32_t index, Object$* element) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

void Collections$UnmodifiableList::add(int32_t index, Object$* element) {
	$throwNew($UnsupportedOperationException);
}

$Object* Collections$UnmodifiableList::remove(int32_t index) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

int32_t Collections$UnmodifiableList::indexOf(Object$* o) {
	return $nc(this->list)->indexOf(o);
}

int32_t Collections$UnmodifiableList::lastIndexOf(Object$* o) {
	return $nc(this->list)->lastIndexOf(o);
}

bool Collections$UnmodifiableList::addAll(int32_t index, $Collection* c) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

void Collections$UnmodifiableList::replaceAll($UnaryOperator* operator$) {
	$throwNew($UnsupportedOperationException);
}

void Collections$UnmodifiableList::sort($Comparator* c) {
	$throwNew($UnsupportedOperationException);
}

$ListIterator* Collections$UnmodifiableList::listIterator() {
	return listIterator(0);
}

$ListIterator* Collections$UnmodifiableList::listIterator(int32_t index) {
	return $new($Collections$UnmodifiableList$1, this, index);
}

$List* Collections$UnmodifiableList::subList(int32_t fromIndex, int32_t toIndex) {
	return $new(Collections$UnmodifiableList, $($nc(this->list)->subList(fromIndex, toIndex)));
}

$Object* Collections$UnmodifiableList::readResolve() {
	return $of(($instanceOf($RandomAccess, this->list) ? $of($new($Collections$UnmodifiableRandomAccessList, this->list)) : $of(this)));
}

Collections$UnmodifiableList::Collections$UnmodifiableList() {
}

$Class* Collections$UnmodifiableList::load$($String* name, bool initialize) {
	$loadClass(Collections$UnmodifiableList, name, initialize, &_Collections$UnmodifiableList_ClassInfo_, allocate$Collections$UnmodifiableList);
	return class$;
}

$Class* Collections$UnmodifiableList::class$ = nullptr;

	} // util
} // java