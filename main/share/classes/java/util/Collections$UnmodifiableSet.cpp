#include <java/util/Collections$UnmodifiableSet.h>

#include <java/util/Collection.h>
#include <java/util/Collections$UnmodifiableCollection.h>
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
using $Collections$UnmodifiableCollection = ::java::util::Collections$UnmodifiableCollection;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace util {

$FieldInfo _Collections$UnmodifiableSet_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$UnmodifiableSet, serialVersionUID)},
	{}
};

$MethodInfo _Collections$UnmodifiableSet_MethodInfo_[] = {
	{"*add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*addAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*clear", "()V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*containsAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEach", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC},
	{"<init>", "(Ljava/util/Set;)V", "(Ljava/util/Set<+TE;>;)V", 0, $method(Collections$UnmodifiableSet, init$, void, $Set*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Collections$UnmodifiableSet, equals, bool, Object$*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Collections$UnmodifiableSet, hashCode, int32_t)},
	{"*size", "()I", nullptr, $PUBLIC},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"*toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC},
	{"*remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*removeAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*retainAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*removeIf", "(Ljava/util/function/Predicate;)Z", nullptr, $PUBLIC},
	{"*spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC},
	{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC},
	{"*parallelStream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Collections$UnmodifiableSet_InnerClassesInfo_[] = {
	{"java.util.Collections$UnmodifiableSet", "java.util.Collections", "UnmodifiableSet", $STATIC},
	{"java.util.Collections$UnmodifiableCollection", "java.util.Collections", "UnmodifiableCollection", $STATIC},
	{}
};

$ClassInfo _Collections$UnmodifiableSet_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$UnmodifiableSet",
	"java.util.Collections$UnmodifiableCollection",
	"java.util.Set",
	_Collections$UnmodifiableSet_FieldInfo_,
	_Collections$UnmodifiableSet_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/Collections$UnmodifiableCollection<TE;>;Ljava/util/Set<TE;>;Ljava/io/Serializable;",
	nullptr,
	_Collections$UnmodifiableSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$UnmodifiableSet($Class* clazz) {
	return $of($alloc(Collections$UnmodifiableSet));
}

int32_t Collections$UnmodifiableSet::size() {
	 return this->$Collections$UnmodifiableCollection::size();
}

bool Collections$UnmodifiableSet::isEmpty() {
	 return this->$Collections$UnmodifiableCollection::isEmpty();
}

bool Collections$UnmodifiableSet::contains(Object$* o) {
	 return this->$Collections$UnmodifiableCollection::contains(o);
}

$ObjectArray* Collections$UnmodifiableSet::toArray() {
	 return this->$Collections$UnmodifiableCollection::toArray();
}

$ObjectArray* Collections$UnmodifiableSet::toArray($ObjectArray* a) {
	 return this->$Collections$UnmodifiableCollection::toArray(a);
}

$ObjectArray* Collections$UnmodifiableSet::toArray($IntFunction* f) {
	 return this->$Collections$UnmodifiableCollection::toArray(f);
}

$String* Collections$UnmodifiableSet::toString() {
	 return this->$Collections$UnmodifiableCollection::toString();
}

$Iterator* Collections$UnmodifiableSet::iterator() {
	 return this->$Collections$UnmodifiableCollection::iterator();
}

bool Collections$UnmodifiableSet::add(Object$* e) {
	 return this->$Collections$UnmodifiableCollection::add(e);
}

bool Collections$UnmodifiableSet::remove(Object$* o) {
	 return this->$Collections$UnmodifiableCollection::remove(o);
}

bool Collections$UnmodifiableSet::containsAll($Collection* coll) {
	 return this->$Collections$UnmodifiableCollection::containsAll(coll);
}

bool Collections$UnmodifiableSet::addAll($Collection* coll) {
	 return this->$Collections$UnmodifiableCollection::addAll(coll);
}

bool Collections$UnmodifiableSet::removeAll($Collection* coll) {
	 return this->$Collections$UnmodifiableCollection::removeAll(coll);
}

bool Collections$UnmodifiableSet::retainAll($Collection* coll) {
	 return this->$Collections$UnmodifiableCollection::retainAll(coll);
}

void Collections$UnmodifiableSet::clear() {
	this->$Collections$UnmodifiableCollection::clear();
}

void Collections$UnmodifiableSet::forEach($Consumer* action) {
	this->$Collections$UnmodifiableCollection::forEach(action);
}

bool Collections$UnmodifiableSet::removeIf($Predicate* filter) {
	 return this->$Collections$UnmodifiableCollection::removeIf(filter);
}

$Spliterator* Collections$UnmodifiableSet::spliterator() {
	 return this->$Collections$UnmodifiableCollection::spliterator();
}

$Stream* Collections$UnmodifiableSet::stream() {
	 return this->$Collections$UnmodifiableCollection::stream();
}

$Stream* Collections$UnmodifiableSet::parallelStream() {
	 return this->$Collections$UnmodifiableCollection::parallelStream();
}

$Object* Collections$UnmodifiableSet::clone() {
	 return this->$Collections$UnmodifiableCollection::clone();
}

void Collections$UnmodifiableSet::finalize() {
	this->$Collections$UnmodifiableCollection::finalize();
}

void Collections$UnmodifiableSet::init$($Set* s) {
	$Collections$UnmodifiableCollection::init$(s);
}

bool Collections$UnmodifiableSet::equals(Object$* o) {
	return $equals(o, this) || $nc(this->c)->equals(o);
}

int32_t Collections$UnmodifiableSet::hashCode() {
	return $nc(this->c)->hashCode();
}

Collections$UnmodifiableSet::Collections$UnmodifiableSet() {
}

$Class* Collections$UnmodifiableSet::load$($String* name, bool initialize) {
	$loadClass(Collections$UnmodifiableSet, name, initialize, &_Collections$UnmodifiableSet_ClassInfo_, allocate$Collections$UnmodifiableSet);
	return class$;
}

$Class* Collections$UnmodifiableSet::class$ = nullptr;

	} // util
} // java