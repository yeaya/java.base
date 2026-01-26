#include <java/util/Collections$SynchronizedSet.h>

#include <java/util/Collection.h>
#include <java/util/Collections$SynchronizedCollection.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
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
using $Collections$SynchronizedCollection = ::java::util::Collections$SynchronizedCollection;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace util {

$FieldInfo _Collections$SynchronizedSet_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$SynchronizedSet, serialVersionUID)},
	{}
};

$MethodInfo _Collections$SynchronizedSet_MethodInfo_[] = {
	{"*add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*addAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*clear", "()V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*containsAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEach", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC},
	{"<init>", "(Ljava/util/Set;)V", "(Ljava/util/Set<TE;>;)V", 0, $method(Collections$SynchronizedSet, init$, void, $Set*)},
	{"<init>", "(Ljava/util/Set;Ljava/lang/Object;)V", "(Ljava/util/Set<TE;>;Ljava/lang/Object;)V", 0, $method(Collections$SynchronizedSet, init$, void, $Set*, Object$*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Collections$SynchronizedSet, equals, bool, Object$*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Collections$SynchronizedSet, hashCode, int32_t)},
	{"*size", "()I", nullptr, $PUBLIC},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"*toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC},
	{"*remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*removeAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*retainAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*removeIf", "(Ljava/util/function/Predicate;)Z", nullptr, $PUBLIC},
	{"*spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC},
	{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC},
	{"*parallelStream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Collections$SynchronizedSet_InnerClassesInfo_[] = {
	{"java.util.Collections$SynchronizedSet", "java.util.Collections", "SynchronizedSet", $STATIC},
	{"java.util.Collections$SynchronizedCollection", "java.util.Collections", "SynchronizedCollection", $STATIC},
	{}
};

$ClassInfo _Collections$SynchronizedSet_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$SynchronizedSet",
	"java.util.Collections$SynchronizedCollection",
	"java.util.Set",
	_Collections$SynchronizedSet_FieldInfo_,
	_Collections$SynchronizedSet_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/Collections$SynchronizedCollection<TE;>;Ljava/util/Set<TE;>;",
	nullptr,
	_Collections$SynchronizedSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$SynchronizedSet($Class* clazz) {
	return $of($alloc(Collections$SynchronizedSet));
}

int32_t Collections$SynchronizedSet::size() {
	 return this->$Collections$SynchronizedCollection::size();
}

bool Collections$SynchronizedSet::isEmpty() {
	 return this->$Collections$SynchronizedCollection::isEmpty();
}

bool Collections$SynchronizedSet::contains(Object$* o) {
	 return this->$Collections$SynchronizedCollection::contains(o);
}

$ObjectArray* Collections$SynchronizedSet::toArray() {
	 return this->$Collections$SynchronizedCollection::toArray();
}

$ObjectArray* Collections$SynchronizedSet::toArray($ObjectArray* a) {
	 return this->$Collections$SynchronizedCollection::toArray(a);
}

$ObjectArray* Collections$SynchronizedSet::toArray($IntFunction* f) {
	 return this->$Collections$SynchronizedCollection::toArray(f);
}

$Iterator* Collections$SynchronizedSet::iterator() {
	 return this->$Collections$SynchronizedCollection::iterator();
}

bool Collections$SynchronizedSet::add(Object$* e) {
	 return this->$Collections$SynchronizedCollection::add(e);
}

bool Collections$SynchronizedSet::remove(Object$* o) {
	 return this->$Collections$SynchronizedCollection::remove(o);
}

bool Collections$SynchronizedSet::containsAll($Collection* coll) {
	 return this->$Collections$SynchronizedCollection::containsAll(coll);
}

bool Collections$SynchronizedSet::addAll($Collection* coll) {
	 return this->$Collections$SynchronizedCollection::addAll(coll);
}

bool Collections$SynchronizedSet::removeAll($Collection* coll) {
	 return this->$Collections$SynchronizedCollection::removeAll(coll);
}

bool Collections$SynchronizedSet::retainAll($Collection* coll) {
	 return this->$Collections$SynchronizedCollection::retainAll(coll);
}

void Collections$SynchronizedSet::clear() {
	this->$Collections$SynchronizedCollection::clear();
}

$String* Collections$SynchronizedSet::toString() {
	 return this->$Collections$SynchronizedCollection::toString();
}

void Collections$SynchronizedSet::forEach($Consumer* consumer) {
	this->$Collections$SynchronizedCollection::forEach(consumer);
}

bool Collections$SynchronizedSet::removeIf($Predicate* filter) {
	 return this->$Collections$SynchronizedCollection::removeIf(filter);
}

$Spliterator* Collections$SynchronizedSet::spliterator() {
	 return this->$Collections$SynchronizedCollection::spliterator();
}

$Stream* Collections$SynchronizedSet::stream() {
	 return this->$Collections$SynchronizedCollection::stream();
}

$Stream* Collections$SynchronizedSet::parallelStream() {
	 return this->$Collections$SynchronizedCollection::parallelStream();
}

$Object* Collections$SynchronizedSet::clone() {
	 return this->$Collections$SynchronizedCollection::clone();
}

void Collections$SynchronizedSet::finalize() {
	this->$Collections$SynchronizedCollection::finalize();
}

void Collections$SynchronizedSet::init$($Set* s) {
	$Collections$SynchronizedCollection::init$(s);
}

void Collections$SynchronizedSet::init$($Set* s, Object$* mutex) {
	$Collections$SynchronizedCollection::init$(s, mutex);
}

bool Collections$SynchronizedSet::equals(Object$* o) {
	if ($equals(this, o)) {
		return true;
	}
	$synchronized(this->mutex) {
		return $nc(this->c)->equals(o);
	}
}

int32_t Collections$SynchronizedSet::hashCode() {
	$synchronized(this->mutex) {
		return $nc(this->c)->hashCode();
	}
}

Collections$SynchronizedSet::Collections$SynchronizedSet() {
}

$Class* Collections$SynchronizedSet::load$($String* name, bool initialize) {
	$loadClass(Collections$SynchronizedSet, name, initialize, &_Collections$SynchronizedSet_ClassInfo_, allocate$Collections$SynchronizedSet);
	return class$;
}

$Class* Collections$SynchronizedSet::class$ = nullptr;

	} // util
} // java