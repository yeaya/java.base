#include <java/util/Collections$UnmodifiableSortedSet.h>

#include <java/util/Collection.h>
#include <java/util/Collections$UnmodifiableSet.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <java/util/SortedSet.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Collections$UnmodifiableSet = ::java::util::Collections$UnmodifiableSet;
using $Comparator = ::java::util::Comparator;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $SortedSet = ::java::util::SortedSet;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace util {

$FieldInfo _Collections$UnmodifiableSortedSet_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$UnmodifiableSortedSet, serialVersionUID)},
	{"ss", "Ljava/util/SortedSet;", "Ljava/util/SortedSet<TE;>;", $PRIVATE | $FINAL, $field(Collections$UnmodifiableSortedSet, ss)},
	{}
};

$MethodInfo _Collections$UnmodifiableSortedSet_MethodInfo_[] = {
	{"*add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*addAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*clear", "()V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*containsAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEach", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/util/SortedSet;)V", "(Ljava/util/SortedSet<TE;>;)V", 0, $method(static_cast<void(Collections$UnmodifiableSortedSet::*)($SortedSet*)>(&Collections$UnmodifiableSortedSet::init$))},
	{"comparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<-TE;>;", $PUBLIC},
	{"first", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"headSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;", "(TE;)Ljava/util/SortedSet<TE;>;", $PUBLIC},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"*iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC},
	{"last", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"*parallelStream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC},
	{"*remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*removeAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*removeIf", "(Ljava/util/function/Predicate;)Z", nullptr, $PUBLIC},
	{"*retainAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*size", "()I", nullptr, $PUBLIC},
	{"*spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC},
	{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC},
	{"subSet", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedSet;", "(TE;TE;)Ljava/util/SortedSet<TE;>;", $PUBLIC},
	{"tailSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;", "(TE;)Ljava/util/SortedSet<TE;>;", $PUBLIC},
	{"*toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Collections$UnmodifiableSortedSet_InnerClassesInfo_[] = {
	{"java.util.Collections$UnmodifiableSortedSet", "java.util.Collections", "UnmodifiableSortedSet", $STATIC},
	{"java.util.Collections$UnmodifiableSet", "java.util.Collections", "UnmodifiableSet", $STATIC},
	{}
};

$ClassInfo _Collections$UnmodifiableSortedSet_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$UnmodifiableSortedSet",
	"java.util.Collections$UnmodifiableSet",
	"java.util.SortedSet",
	_Collections$UnmodifiableSortedSet_FieldInfo_,
	_Collections$UnmodifiableSortedSet_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/Collections$UnmodifiableSet<TE;>;Ljava/util/SortedSet<TE;>;Ljava/io/Serializable;",
	nullptr,
	_Collections$UnmodifiableSortedSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$UnmodifiableSortedSet($Class* clazz) {
	return $of($alloc(Collections$UnmodifiableSortedSet));
}

bool Collections$UnmodifiableSortedSet::equals(Object$* o) {
	 return this->$Collections$UnmodifiableSet::equals(o);
}

int32_t Collections$UnmodifiableSortedSet::hashCode() {
	 return this->$Collections$UnmodifiableSet::hashCode();
}

int32_t Collections$UnmodifiableSortedSet::size() {
	 return this->$Collections$UnmodifiableSet::size();
}

bool Collections$UnmodifiableSortedSet::isEmpty() {
	 return this->$Collections$UnmodifiableSet::isEmpty();
}

bool Collections$UnmodifiableSortedSet::contains(Object$* o) {
	 return this->$Collections$UnmodifiableSet::contains(o);
}

$ObjectArray* Collections$UnmodifiableSortedSet::toArray() {
	 return this->$Collections$UnmodifiableSet::toArray();
}

$ObjectArray* Collections$UnmodifiableSortedSet::toArray($ObjectArray* a) {
	 return this->$Collections$UnmodifiableSet::toArray(a);
}

$ObjectArray* Collections$UnmodifiableSortedSet::toArray($IntFunction* f) {
	 return this->$Collections$UnmodifiableSet::toArray(f);
}

$String* Collections$UnmodifiableSortedSet::toString() {
	 return this->$Collections$UnmodifiableSet::toString();
}

$Iterator* Collections$UnmodifiableSortedSet::iterator() {
	 return this->$Collections$UnmodifiableSet::iterator();
}

bool Collections$UnmodifiableSortedSet::add(Object$* e) {
	 return this->$Collections$UnmodifiableSet::add(e);
}

bool Collections$UnmodifiableSortedSet::remove(Object$* o) {
	 return this->$Collections$UnmodifiableSet::remove(o);
}

bool Collections$UnmodifiableSortedSet::containsAll($Collection* coll) {
	 return this->$Collections$UnmodifiableSet::containsAll(coll);
}

bool Collections$UnmodifiableSortedSet::addAll($Collection* coll) {
	 return this->$Collections$UnmodifiableSet::addAll(coll);
}

bool Collections$UnmodifiableSortedSet::removeAll($Collection* coll) {
	 return this->$Collections$UnmodifiableSet::removeAll(coll);
}

bool Collections$UnmodifiableSortedSet::retainAll($Collection* coll) {
	 return this->$Collections$UnmodifiableSet::retainAll(coll);
}

void Collections$UnmodifiableSortedSet::clear() {
	this->$Collections$UnmodifiableSet::clear();
}

void Collections$UnmodifiableSortedSet::forEach($Consumer* action) {
	this->$Collections$UnmodifiableSet::forEach(action);
}

bool Collections$UnmodifiableSortedSet::removeIf($Predicate* filter) {
	 return this->$Collections$UnmodifiableSet::removeIf(filter);
}

$Spliterator* Collections$UnmodifiableSortedSet::spliterator() {
	 return this->$Collections$UnmodifiableSet::spliterator();
}

$Stream* Collections$UnmodifiableSortedSet::stream() {
	 return this->$Collections$UnmodifiableSet::stream();
}

$Stream* Collections$UnmodifiableSortedSet::parallelStream() {
	 return this->$Collections$UnmodifiableSet::parallelStream();
}

$Object* Collections$UnmodifiableSortedSet::clone() {
	 return this->$Collections$UnmodifiableSet::clone();
}

void Collections$UnmodifiableSortedSet::finalize() {
	this->$Collections$UnmodifiableSet::finalize();
}

void Collections$UnmodifiableSortedSet::init$($SortedSet* s) {
	$Collections$UnmodifiableSet::init$(s);
	$set(this, ss, s);
}

$Comparator* Collections$UnmodifiableSortedSet::comparator() {
	return $nc(this->ss)->comparator();
}

$SortedSet* Collections$UnmodifiableSortedSet::subSet(Object$* fromElement, Object$* toElement) {
	return $new(Collections$UnmodifiableSortedSet, $($nc(this->ss)->subSet(fromElement, toElement)));
}

$SortedSet* Collections$UnmodifiableSortedSet::headSet(Object$* toElement) {
	return $new(Collections$UnmodifiableSortedSet, $($nc(this->ss)->headSet(toElement)));
}

$SortedSet* Collections$UnmodifiableSortedSet::tailSet(Object$* fromElement) {
	return $new(Collections$UnmodifiableSortedSet, $($nc(this->ss)->tailSet(fromElement)));
}

$Object* Collections$UnmodifiableSortedSet::first() {
	return $of($nc(this->ss)->first());
}

$Object* Collections$UnmodifiableSortedSet::last() {
	return $of($nc(this->ss)->last());
}

Collections$UnmodifiableSortedSet::Collections$UnmodifiableSortedSet() {
}

$Class* Collections$UnmodifiableSortedSet::load$($String* name, bool initialize) {
	$loadClass(Collections$UnmodifiableSortedSet, name, initialize, &_Collections$UnmodifiableSortedSet_ClassInfo_, allocate$Collections$UnmodifiableSortedSet);
	return class$;
}

$Class* Collections$UnmodifiableSortedSet::class$ = nullptr;

	} // util
} // java