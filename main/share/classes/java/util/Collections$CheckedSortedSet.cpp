#include <java/util/Collections$CheckedSortedSet.h>

#include <java/util/Collection.h>
#include <java/util/Collections$CheckedCollection.h>
#include <java/util/Collections$CheckedSet.h>
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
using $Collections$CheckedSet = ::java::util::Collections$CheckedSet;
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

$FieldInfo _Collections$CheckedSortedSet_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$CheckedSortedSet, serialVersionUID)},
	{"ss", "Ljava/util/SortedSet;", "Ljava/util/SortedSet<TE;>;", $PRIVATE | $FINAL, $field(Collections$CheckedSortedSet, ss)},
	{}
};

$MethodInfo _Collections$CheckedSortedSet_MethodInfo_[] = {
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
	{"<init>", "(Ljava/util/SortedSet;Ljava/lang/Class;)V", "(Ljava/util/SortedSet<TE;>;Ljava/lang/Class<TE;>;)V", 0, $method(Collections$CheckedSortedSet, init$, void, $SortedSet*, $Class*)},
	{"comparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<-TE;>;", $PUBLIC, $virtualMethod(Collections$CheckedSortedSet, comparator, $Comparator*)},
	{"first", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(Collections$CheckedSortedSet, first, $Object*)},
	{"headSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;", "(TE;)Ljava/util/SortedSet<TE;>;", $PUBLIC, $virtualMethod(Collections$CheckedSortedSet, headSet, $SortedSet*, Object$*)},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"*iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC},
	{"last", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(Collections$CheckedSortedSet, last, $Object*)},
	{"*parallelStream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC},
	{"*remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*removeAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*removeIf", "(Ljava/util/function/Predicate;)Z", nullptr, $PUBLIC},
	{"*retainAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*size", "()I", nullptr, $PUBLIC},
	{"*spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC},
	{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC},
	{"subSet", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedSet;", "(TE;TE;)Ljava/util/SortedSet<TE;>;", $PUBLIC, $virtualMethod(Collections$CheckedSortedSet, subSet, $SortedSet*, Object$*, Object$*)},
	{"tailSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;", "(TE;)Ljava/util/SortedSet<TE;>;", $PUBLIC, $virtualMethod(Collections$CheckedSortedSet, tailSet, $SortedSet*, Object$*)},
	{"*toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Collections$CheckedSortedSet_InnerClassesInfo_[] = {
	{"java.util.Collections$CheckedSortedSet", "java.util.Collections", "CheckedSortedSet", $STATIC},
	{"java.util.Collections$CheckedSet", "java.util.Collections", "CheckedSet", $STATIC},
	{}
};

$ClassInfo _Collections$CheckedSortedSet_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$CheckedSortedSet",
	"java.util.Collections$CheckedSet",
	"java.util.SortedSet",
	_Collections$CheckedSortedSet_FieldInfo_,
	_Collections$CheckedSortedSet_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/Collections$CheckedSet<TE;>;Ljava/util/SortedSet<TE;>;Ljava/io/Serializable;",
	nullptr,
	_Collections$CheckedSortedSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$CheckedSortedSet($Class* clazz) {
	return $of($alloc(Collections$CheckedSortedSet));
}

bool Collections$CheckedSortedSet::equals(Object$* o) {
	 return this->$Collections$CheckedSet::equals(o);
}

int32_t Collections$CheckedSortedSet::hashCode() {
	 return this->$Collections$CheckedSet::hashCode();
}

int32_t Collections$CheckedSortedSet::size() {
	 return this->$Collections$CheckedSet::size();
}

bool Collections$CheckedSortedSet::isEmpty() {
	 return this->$Collections$CheckedSet::isEmpty();
}

bool Collections$CheckedSortedSet::contains(Object$* o) {
	 return this->$Collections$CheckedSet::contains(o);
}

$ObjectArray* Collections$CheckedSortedSet::toArray() {
	 return this->$Collections$CheckedSet::toArray();
}

$ObjectArray* Collections$CheckedSortedSet::toArray($ObjectArray* a) {
	 return this->$Collections$CheckedSet::toArray(a);
}

$ObjectArray* Collections$CheckedSortedSet::toArray($IntFunction* f) {
	 return this->$Collections$CheckedSet::toArray(f);
}

$String* Collections$CheckedSortedSet::toString() {
	 return this->$Collections$CheckedSet::toString();
}

bool Collections$CheckedSortedSet::remove(Object$* o) {
	 return this->$Collections$CheckedSet::remove(o);
}

void Collections$CheckedSortedSet::clear() {
	this->$Collections$CheckedSet::clear();
}

bool Collections$CheckedSortedSet::containsAll($Collection* coll) {
	 return this->$Collections$CheckedSet::containsAll(coll);
}

bool Collections$CheckedSortedSet::removeAll($Collection* coll) {
	 return this->$Collections$CheckedSet::removeAll(coll);
}

bool Collections$CheckedSortedSet::retainAll($Collection* coll) {
	 return this->$Collections$CheckedSet::retainAll(coll);
}

$Iterator* Collections$CheckedSortedSet::iterator() {
	 return this->$Collections$CheckedSet::iterator();
}

bool Collections$CheckedSortedSet::add(Object$* e) {
	 return this->$Collections$CheckedSet::add(e);
}

bool Collections$CheckedSortedSet::addAll($Collection* coll) {
	 return this->$Collections$CheckedSet::addAll(coll);
}

void Collections$CheckedSortedSet::forEach($Consumer* action) {
	this->$Collections$CheckedSet::forEach(action);
}

bool Collections$CheckedSortedSet::removeIf($Predicate* filter) {
	 return this->$Collections$CheckedSet::removeIf(filter);
}

$Spliterator* Collections$CheckedSortedSet::spliterator() {
	 return this->$Collections$CheckedSet::spliterator();
}

$Stream* Collections$CheckedSortedSet::stream() {
	 return this->$Collections$CheckedSet::stream();
}

$Stream* Collections$CheckedSortedSet::parallelStream() {
	 return this->$Collections$CheckedSet::parallelStream();
}

$Object* Collections$CheckedSortedSet::clone() {
	 return this->$Collections$CheckedSet::clone();
}

void Collections$CheckedSortedSet::finalize() {
	this->$Collections$CheckedSet::finalize();
}

void Collections$CheckedSortedSet::init$($SortedSet* s, $Class* type) {
	$Collections$CheckedSet::init$(s, type);
	$set(this, ss, s);
}

$Comparator* Collections$CheckedSortedSet::comparator() {
	return $nc(this->ss)->comparator();
}

$Object* Collections$CheckedSortedSet::first() {
	return $of($nc(this->ss)->first());
}

$Object* Collections$CheckedSortedSet::last() {
	return $of($nc(this->ss)->last());
}

$SortedSet* Collections$CheckedSortedSet::subSet(Object$* fromElement, Object$* toElement) {
	return $Collections::checkedSortedSet($($nc(this->ss)->subSet(fromElement, toElement)), this->type);
}

$SortedSet* Collections$CheckedSortedSet::headSet(Object$* toElement) {
	return $Collections::checkedSortedSet($($nc(this->ss)->headSet(toElement)), this->type);
}

$SortedSet* Collections$CheckedSortedSet::tailSet(Object$* fromElement) {
	return $Collections::checkedSortedSet($($nc(this->ss)->tailSet(fromElement)), this->type);
}

Collections$CheckedSortedSet::Collections$CheckedSortedSet() {
}

$Class* Collections$CheckedSortedSet::load$($String* name, bool initialize) {
	$loadClass(Collections$CheckedSortedSet, name, initialize, &_Collections$CheckedSortedSet_ClassInfo_, allocate$Collections$CheckedSortedSet);
	return class$;
}

$Class* Collections$CheckedSortedSet::class$ = nullptr;

	} // util
} // java