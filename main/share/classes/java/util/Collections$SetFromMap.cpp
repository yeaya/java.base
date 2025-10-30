#include <java/util/Collections$SetFromMap.h>

#include <java/io/ObjectInputStream.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef TRUE

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace util {

$FieldInfo _Collections$SetFromMap_FieldInfo_[] = {
	{"m", "Ljava/util/Map;", "Ljava/util/Map<TE;Ljava/lang/Boolean;>;", $PRIVATE | $FINAL, $field(Collections$SetFromMap, m)},
	{"s", "Ljava/util/Set;", "Ljava/util/Set<TE;>;", $PRIVATE | $TRANSIENT, $field(Collections$SetFromMap, s)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$SetFromMap, serialVersionUID)},
	{}
};

$MethodInfo _Collections$SetFromMap_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/util/Map;)V", "(Ljava/util/Map<TE;Ljava/lang/Boolean;>;)V", 0, $method(static_cast<void(Collections$SetFromMap::*)($Map*)>(&Collections$SetFromMap::init$))},
	{"add", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC},
	{"clear", "()V", nullptr, $PUBLIC},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"containsAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC},
	{"parallelStream", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<TE;>;", $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Collections$SetFromMap::*)($ObjectInputStream*)>(&Collections$SetFromMap::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"removeAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"removeIf", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<-TE;>;)Z", $PUBLIC},
	{"retainAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE;>;", $PUBLIC},
	{"stream", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<TE;>;", $PUBLIC},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Collections$SetFromMap_InnerClassesInfo_[] = {
	{"java.util.Collections$SetFromMap", "java.util.Collections", "SetFromMap", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Collections$SetFromMap_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$SetFromMap",
	"java.util.AbstractSet",
	"java.io.Serializable",
	_Collections$SetFromMap_FieldInfo_,
	_Collections$SetFromMap_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/AbstractSet<TE;>;Ljava/util/Set<TE;>;Ljava/io/Serializable;",
	nullptr,
	_Collections$SetFromMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$SetFromMap($Class* clazz) {
	return $of($alloc(Collections$SetFromMap));
}

$Object* Collections$SetFromMap::clone() {
	 return this->$AbstractSet::clone();
}

void Collections$SetFromMap::finalize() {
	this->$AbstractSet::finalize();
}

void Collections$SetFromMap::init$($Map* map) {
	$AbstractSet::init$();
	if (!$nc(map)->isEmpty()) {
		$throwNew($IllegalArgumentException, "Map is non-empty"_s);
	}
	$set(this, m, map);
	$set(this, s, $nc(map)->keySet());
}

void Collections$SetFromMap::clear() {
	$nc(this->m)->clear();
}

int32_t Collections$SetFromMap::size() {
	return $nc(this->m)->size();
}

bool Collections$SetFromMap::isEmpty() {
	return $nc(this->m)->isEmpty();
}

bool Collections$SetFromMap::contains(Object$* o) {
	return $nc(this->m)->containsKey(o);
}

bool Collections$SetFromMap::remove(Object$* o) {
	return $nc(this->m)->remove(o) != nullptr;
}

bool Collections$SetFromMap::add(Object$* e) {
	$init($Boolean);
	return $nc(this->m)->put(e, $Boolean::TRUE) == nullptr;
}

$Iterator* Collections$SetFromMap::iterator() {
	return $nc(this->s)->iterator();
}

$ObjectArray* Collections$SetFromMap::toArray() {
	return $nc(this->s)->toArray();
}

$ObjectArray* Collections$SetFromMap::toArray($ObjectArray* a) {
	return $nc(this->s)->toArray(a);
}

$String* Collections$SetFromMap::toString() {
	return $nc($of(this->s))->toString();
}

int32_t Collections$SetFromMap::hashCode() {
	return $nc(this->s)->hashCode();
}

bool Collections$SetFromMap::equals(Object$* o) {
	return $equals(o, this) || $nc(this->s)->equals(o);
}

bool Collections$SetFromMap::containsAll($Collection* c) {
	return $nc(this->s)->containsAll(c);
}

bool Collections$SetFromMap::removeAll($Collection* c) {
	return $nc(this->s)->removeAll(c);
}

bool Collections$SetFromMap::retainAll($Collection* c) {
	return $nc(this->s)->retainAll(c);
}

void Collections$SetFromMap::forEach($Consumer* action) {
	$nc(this->s)->forEach(action);
}

bool Collections$SetFromMap::removeIf($Predicate* filter) {
	return $nc(this->s)->removeIf(filter);
}

$Spliterator* Collections$SetFromMap::spliterator() {
	return $nc(this->s)->spliterator();
}

$Stream* Collections$SetFromMap::stream() {
	return $nc(this->s)->stream();
}

$Stream* Collections$SetFromMap::parallelStream() {
	return $nc(this->s)->parallelStream();
}

void Collections$SetFromMap::readObject($ObjectInputStream* stream) {
	$nc(stream)->defaultReadObject();
	$set(this, s, $nc(this->m)->keySet());
}

Collections$SetFromMap::Collections$SetFromMap() {
}

$Class* Collections$SetFromMap::load$($String* name, bool initialize) {
	$loadClass(Collections$SetFromMap, name, initialize, &_Collections$SetFromMap_ClassInfo_, allocate$Collections$SetFromMap);
	return class$;
}

$Class* Collections$SetFromMap::class$ = nullptr;

	} // util
} // java