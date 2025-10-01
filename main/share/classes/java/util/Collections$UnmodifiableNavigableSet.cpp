#include <java/util/Collections$UnmodifiableNavigableSet.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Collection.h>
#include <java/util/Collections$UnmodifiableNavigableSet$EmptyNavigableSet.h>
#include <java/util/Collections$UnmodifiableSortedSet.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/NavigableSet.h>
#include <java/util/SortedSet.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef EMPTY_NAVIGABLE_SET

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Collections$UnmodifiableNavigableSet$EmptyNavigableSet = ::java::util::Collections$UnmodifiableNavigableSet$EmptyNavigableSet;
using $Collections$UnmodifiableSortedSet = ::java::util::Collections$UnmodifiableSortedSet;
using $Comparator = ::java::util::Comparator;
using $Iterator = ::java::util::Iterator;
using $NavigableSet = ::java::util::NavigableSet;
using $SortedSet = ::java::util::SortedSet;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace util {

$FieldInfo _Collections$UnmodifiableNavigableSet_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$UnmodifiableNavigableSet, serialVersionUID)},
	{"EMPTY_NAVIGABLE_SET", "Ljava/util/NavigableSet;", "Ljava/util/NavigableSet<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(Collections$UnmodifiableNavigableSet, EMPTY_NAVIGABLE_SET)},
	{"ns", "Ljava/util/NavigableSet;", "Ljava/util/NavigableSet<TE;>;", $PRIVATE | $FINAL, $field(Collections$UnmodifiableNavigableSet, ns)},
	{}
};

$MethodInfo _Collections$UnmodifiableNavigableSet_MethodInfo_[] = {
	{"*add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*addAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*clear", "()V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*comparator", "()Ljava/util/Comparator;", nullptr, $PUBLIC},
	{"*contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*containsAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*first", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*forEach", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"*headSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;", nullptr, $PUBLIC},
	{"<init>", "(Ljava/util/NavigableSet;)V", "(Ljava/util/NavigableSet<TE;>;)V", 0, $method(static_cast<void(Collections$UnmodifiableNavigableSet::*)($NavigableSet*)>(&Collections$UnmodifiableNavigableSet::init$))},
	{"ceiling", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TE;)TE;", $PUBLIC},
	{"descendingIterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC},
	{"descendingSet", "()Ljava/util/NavigableSet;", "()Ljava/util/NavigableSet<TE;>;", $PUBLIC},
	{"floor", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TE;)TE;", $PUBLIC},
	{"headSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;", "(TE;Z)Ljava/util/NavigableSet<TE;>;", $PUBLIC},
	{"higher", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TE;)TE;", $PUBLIC},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"*iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC},
	{"*last", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"lower", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TE;)TE;", $PUBLIC},
	{"*parallelStream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC},
	{"pollFirst", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"pollLast", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"*remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*removeAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*removeIf", "(Ljava/util/function/Predicate;)Z", nullptr, $PUBLIC},
	{"*retainAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*size", "()I", nullptr, $PUBLIC},
	{"*spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC},
	{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC},
	{"*subSet", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedSet;", nullptr, $PUBLIC},
	{"subSet", "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableSet;", "(TE;ZTE;Z)Ljava/util/NavigableSet<TE;>;", $PUBLIC},
	{"*tailSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;", nullptr, $PUBLIC},
	{"tailSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;", "(TE;Z)Ljava/util/NavigableSet<TE;>;", $PUBLIC},
	{"*toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Collections$UnmodifiableNavigableSet_InnerClassesInfo_[] = {
	{"java.util.Collections$UnmodifiableNavigableSet", "java.util.Collections", "UnmodifiableNavigableSet", $STATIC},
	{"java.util.Collections$UnmodifiableSortedSet", "java.util.Collections", "UnmodifiableSortedSet", $STATIC},
	{"java.util.Collections$UnmodifiableNavigableSet$EmptyNavigableSet", "java.util.Collections$UnmodifiableNavigableSet", "EmptyNavigableSet", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Collections$UnmodifiableNavigableSet_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$UnmodifiableNavigableSet",
	"java.util.Collections$UnmodifiableSortedSet",
	"java.util.NavigableSet",
	_Collections$UnmodifiableNavigableSet_FieldInfo_,
	_Collections$UnmodifiableNavigableSet_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/Collections$UnmodifiableSortedSet<TE;>;Ljava/util/NavigableSet<TE;>;Ljava/io/Serializable;",
	nullptr,
	_Collections$UnmodifiableNavigableSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$UnmodifiableNavigableSet($Class* clazz) {
	return $of($alloc(Collections$UnmodifiableNavigableSet));
}

$Comparator* Collections$UnmodifiableNavigableSet::comparator() {
	 return this->$Collections$UnmodifiableSortedSet::comparator();
}

$SortedSet* Collections$UnmodifiableNavigableSet::subSet(Object$* fromElement, Object$* toElement) {
	 return this->$Collections$UnmodifiableSortedSet::subSet(fromElement, toElement);
}

$SortedSet* Collections$UnmodifiableNavigableSet::headSet(Object$* toElement) {
	 return this->$Collections$UnmodifiableSortedSet::headSet(toElement);
}

$SortedSet* Collections$UnmodifiableNavigableSet::tailSet(Object$* fromElement) {
	 return this->$Collections$UnmodifiableSortedSet::tailSet(fromElement);
}

$Object* Collections$UnmodifiableNavigableSet::first() {
	 return this->$Collections$UnmodifiableSortedSet::first();
}

$Object* Collections$UnmodifiableNavigableSet::last() {
	 return this->$Collections$UnmodifiableSortedSet::last();
}

bool Collections$UnmodifiableNavigableSet::equals(Object$* o) {
	 return this->$Collections$UnmodifiableSortedSet::equals(o);
}

int32_t Collections$UnmodifiableNavigableSet::hashCode() {
	 return this->$Collections$UnmodifiableSortedSet::hashCode();
}

int32_t Collections$UnmodifiableNavigableSet::size() {
	 return this->$Collections$UnmodifiableSortedSet::size();
}

bool Collections$UnmodifiableNavigableSet::isEmpty() {
	 return this->$Collections$UnmodifiableSortedSet::isEmpty();
}

bool Collections$UnmodifiableNavigableSet::contains(Object$* o) {
	 return this->$Collections$UnmodifiableSortedSet::contains(o);
}

$ObjectArray* Collections$UnmodifiableNavigableSet::toArray() {
	 return this->$Collections$UnmodifiableSortedSet::toArray();
}

$ObjectArray* Collections$UnmodifiableNavigableSet::toArray($ObjectArray* a) {
	 return this->$Collections$UnmodifiableSortedSet::toArray(a);
}

$ObjectArray* Collections$UnmodifiableNavigableSet::toArray($IntFunction* f) {
	 return this->$Collections$UnmodifiableSortedSet::toArray(f);
}

$String* Collections$UnmodifiableNavigableSet::toString() {
	 return this->$Collections$UnmodifiableSortedSet::toString();
}

$Iterator* Collections$UnmodifiableNavigableSet::iterator() {
	 return this->$Collections$UnmodifiableSortedSet::iterator();
}

bool Collections$UnmodifiableNavigableSet::add(Object$* e) {
	 return this->$Collections$UnmodifiableSortedSet::add(e);
}

bool Collections$UnmodifiableNavigableSet::remove(Object$* o) {
	 return this->$Collections$UnmodifiableSortedSet::remove(o);
}

bool Collections$UnmodifiableNavigableSet::containsAll($Collection* coll) {
	 return this->$Collections$UnmodifiableSortedSet::containsAll(coll);
}

bool Collections$UnmodifiableNavigableSet::addAll($Collection* coll) {
	 return this->$Collections$UnmodifiableSortedSet::addAll(coll);
}

bool Collections$UnmodifiableNavigableSet::removeAll($Collection* coll) {
	 return this->$Collections$UnmodifiableSortedSet::removeAll(coll);
}

bool Collections$UnmodifiableNavigableSet::retainAll($Collection* coll) {
	 return this->$Collections$UnmodifiableSortedSet::retainAll(coll);
}

void Collections$UnmodifiableNavigableSet::clear() {
	this->$Collections$UnmodifiableSortedSet::clear();
}

void Collections$UnmodifiableNavigableSet::forEach($Consumer* action) {
	this->$Collections$UnmodifiableSortedSet::forEach(action);
}

bool Collections$UnmodifiableNavigableSet::removeIf($Predicate* filter) {
	 return this->$Collections$UnmodifiableSortedSet::removeIf(filter);
}

$Spliterator* Collections$UnmodifiableNavigableSet::spliterator() {
	 return this->$Collections$UnmodifiableSortedSet::spliterator();
}

$Stream* Collections$UnmodifiableNavigableSet::stream() {
	 return this->$Collections$UnmodifiableSortedSet::stream();
}

$Stream* Collections$UnmodifiableNavigableSet::parallelStream() {
	 return this->$Collections$UnmodifiableSortedSet::parallelStream();
}

$Object* Collections$UnmodifiableNavigableSet::clone() {
	 return this->$Collections$UnmodifiableSortedSet::clone();
}

void Collections$UnmodifiableNavigableSet::finalize() {
	this->$Collections$UnmodifiableSortedSet::finalize();
}

$NavigableSet* Collections$UnmodifiableNavigableSet::EMPTY_NAVIGABLE_SET = nullptr;

void Collections$UnmodifiableNavigableSet::init$($NavigableSet* s) {
	$Collections$UnmodifiableSortedSet::init$(s);
	$set(this, ns, s);
}

$Object* Collections$UnmodifiableNavigableSet::lower(Object$* e) {
	return $of($nc(this->ns)->lower(e));
}

$Object* Collections$UnmodifiableNavigableSet::floor(Object$* e) {
	return $of($nc(this->ns)->floor(e));
}

$Object* Collections$UnmodifiableNavigableSet::ceiling(Object$* e) {
	return $of($nc(this->ns)->ceiling(e));
}

$Object* Collections$UnmodifiableNavigableSet::higher(Object$* e) {
	return $of($nc(this->ns)->higher(e));
}

$Object* Collections$UnmodifiableNavigableSet::pollFirst() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Object* Collections$UnmodifiableNavigableSet::pollLast() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$NavigableSet* Collections$UnmodifiableNavigableSet::descendingSet() {
	return $new(Collections$UnmodifiableNavigableSet, $($nc(this->ns)->descendingSet()));
}

$Iterator* Collections$UnmodifiableNavigableSet::descendingIterator() {
	return $nc($(descendingSet()))->iterator();
}

$NavigableSet* Collections$UnmodifiableNavigableSet::subSet(Object$* fromElement, bool fromInclusive, Object$* toElement, bool toInclusive) {
	return $new(Collections$UnmodifiableNavigableSet, $($nc(this->ns)->subSet(fromElement, fromInclusive, toElement, toInclusive)));
}

$NavigableSet* Collections$UnmodifiableNavigableSet::headSet(Object$* toElement, bool inclusive) {
	return $new(Collections$UnmodifiableNavigableSet, $($nc(this->ns)->headSet(toElement, inclusive)));
}

$NavigableSet* Collections$UnmodifiableNavigableSet::tailSet(Object$* fromElement, bool inclusive) {
	return $new(Collections$UnmodifiableNavigableSet, $($nc(this->ns)->tailSet(fromElement, inclusive)));
}

void clinit$Collections$UnmodifiableNavigableSet($Class* class$) {
	$assignStatic(Collections$UnmodifiableNavigableSet::EMPTY_NAVIGABLE_SET, $new($Collections$UnmodifiableNavigableSet$EmptyNavigableSet));
}

Collections$UnmodifiableNavigableSet::Collections$UnmodifiableNavigableSet() {
}

$Class* Collections$UnmodifiableNavigableSet::load$($String* name, bool initialize) {
	$loadClass(Collections$UnmodifiableNavigableSet, name, initialize, &_Collections$UnmodifiableNavigableSet_ClassInfo_, clinit$Collections$UnmodifiableNavigableSet, allocate$Collections$UnmodifiableNavigableSet);
	return class$;
}

$Class* Collections$UnmodifiableNavigableSet::class$ = nullptr;

	} // util
} // java