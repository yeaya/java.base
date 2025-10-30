#include <java/util/Collections$CheckedSet.h>

#include <java/util/Collection.h>
#include <java/util/Collections$CheckedCollection.h>
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
using $Collections = ::java::util::Collections;
using $Collections$CheckedCollection = ::java::util::Collections$CheckedCollection;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace util {

$FieldInfo _Collections$CheckedSet_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$CheckedSet, serialVersionUID)},
	{}
};

$MethodInfo _Collections$CheckedSet_MethodInfo_[] = {
	{"*add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*addAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*clear", "()V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*containsAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEach", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC},
	{"<init>", "(Ljava/util/Set;Ljava/lang/Class;)V", "(Ljava/util/Set<TE;>;Ljava/lang/Class<TE;>;)V", 0, $method(static_cast<void(Collections$CheckedSet::*)($Set*,$Class*)>(&Collections$CheckedSet::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"*size", "()I", nullptr, $PUBLIC},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"*toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*removeAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*retainAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC},
	{"*removeIf", "(Ljava/util/function/Predicate;)Z", nullptr, $PUBLIC},
	{"*spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC},
	{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC},
	{"*parallelStream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Collections$CheckedSet_InnerClassesInfo_[] = {
	{"java.util.Collections$CheckedSet", "java.util.Collections", "CheckedSet", $STATIC},
	{"java.util.Collections$CheckedCollection", "java.util.Collections", "CheckedCollection", $STATIC},
	{}
};

$ClassInfo _Collections$CheckedSet_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$CheckedSet",
	"java.util.Collections$CheckedCollection",
	"java.util.Set",
	_Collections$CheckedSet_FieldInfo_,
	_Collections$CheckedSet_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/Collections$CheckedCollection<TE;>;Ljava/util/Set<TE;>;Ljava/io/Serializable;",
	nullptr,
	_Collections$CheckedSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$CheckedSet($Class* clazz) {
	return $of($alloc(Collections$CheckedSet));
}

int32_t Collections$CheckedSet::size() {
	 return this->$Collections$CheckedCollection::size();
}

bool Collections$CheckedSet::isEmpty() {
	 return this->$Collections$CheckedCollection::isEmpty();
}

bool Collections$CheckedSet::contains(Object$* o) {
	 return this->$Collections$CheckedCollection::contains(o);
}

$ObjectArray* Collections$CheckedSet::toArray() {
	 return this->$Collections$CheckedCollection::toArray();
}

$ObjectArray* Collections$CheckedSet::toArray($ObjectArray* a) {
	 return this->$Collections$CheckedCollection::toArray(a);
}

$ObjectArray* Collections$CheckedSet::toArray($IntFunction* f) {
	 return this->$Collections$CheckedCollection::toArray(f);
}

$String* Collections$CheckedSet::toString() {
	 return this->$Collections$CheckedCollection::toString();
}

bool Collections$CheckedSet::remove(Object$* o) {
	 return this->$Collections$CheckedCollection::remove(o);
}

void Collections$CheckedSet::clear() {
	this->$Collections$CheckedCollection::clear();
}

bool Collections$CheckedSet::containsAll($Collection* coll) {
	 return this->$Collections$CheckedCollection::containsAll(coll);
}

bool Collections$CheckedSet::removeAll($Collection* coll) {
	 return this->$Collections$CheckedCollection::removeAll(coll);
}

bool Collections$CheckedSet::retainAll($Collection* coll) {
	 return this->$Collections$CheckedCollection::retainAll(coll);
}

$Iterator* Collections$CheckedSet::iterator() {
	 return this->$Collections$CheckedCollection::iterator();
}

bool Collections$CheckedSet::add(Object$* e) {
	 return this->$Collections$CheckedCollection::add(e);
}

bool Collections$CheckedSet::addAll($Collection* coll) {
	 return this->$Collections$CheckedCollection::addAll(coll);
}

void Collections$CheckedSet::forEach($Consumer* action) {
	this->$Collections$CheckedCollection::forEach(action);
}

bool Collections$CheckedSet::removeIf($Predicate* filter) {
	 return this->$Collections$CheckedCollection::removeIf(filter);
}

$Spliterator* Collections$CheckedSet::spliterator() {
	 return this->$Collections$CheckedCollection::spliterator();
}

$Stream* Collections$CheckedSet::stream() {
	 return this->$Collections$CheckedCollection::stream();
}

$Stream* Collections$CheckedSet::parallelStream() {
	 return this->$Collections$CheckedCollection::parallelStream();
}

$Object* Collections$CheckedSet::clone() {
	 return this->$Collections$CheckedCollection::clone();
}

void Collections$CheckedSet::finalize() {
	this->$Collections$CheckedCollection::finalize();
}

void Collections$CheckedSet::init$($Set* s, $Class* elementType) {
	$Collections$CheckedCollection::init$(s, elementType);
}

bool Collections$CheckedSet::equals(Object$* o) {
	return $equals(o, this) || $nc(this->c)->equals(o);
}

int32_t Collections$CheckedSet::hashCode() {
	return $nc(this->c)->hashCode();
}

Collections$CheckedSet::Collections$CheckedSet() {
}

$Class* Collections$CheckedSet::load$($String* name, bool initialize) {
	$loadClass(Collections$CheckedSet, name, initialize, &_Collections$CheckedSet_ClassInfo_, allocate$Collections$CheckedSet);
	return class$;
}

$Class* Collections$CheckedSet::class$ = nullptr;

	} // util
} // java