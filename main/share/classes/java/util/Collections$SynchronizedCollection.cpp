#include <java/util/Collections$SynchronizedCollection.h>

#include <java/io/ObjectOutputStream.h>
#include <java/lang/Iterable.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace util {

$FieldInfo _Collections$SynchronizedCollection_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$SynchronizedCollection, serialVersionUID)},
	{"c", "Ljava/util/Collection;", "Ljava/util/Collection<TE;>;", $FINAL, $field(Collections$SynchronizedCollection, c)},
	{"mutex", "Ljava/lang/Object;", nullptr, $FINAL, $field(Collections$SynchronizedCollection, mutex)},
	{}
};

$MethodInfo _Collections$SynchronizedCollection_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "(Ljava/util/Collection;)V", "(Ljava/util/Collection<TE;>;)V", 0, $method(static_cast<void(Collections$SynchronizedCollection::*)($Collection*)>(&Collections$SynchronizedCollection::init$))},
	{"<init>", "(Ljava/util/Collection;Ljava/lang/Object;)V", "(Ljava/util/Collection<TE;>;Ljava/lang/Object;)V", 0, $method(static_cast<void(Collections$SynchronizedCollection::*)($Collection*,Object$*)>(&Collections$SynchronizedCollection::init$))},
	{"add", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC},
	{"addAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<+TE;>;)Z", $PUBLIC},
	{"clear", "()V", nullptr, $PUBLIC},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"containsAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC},
	{"parallelStream", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<TE;>;", $PUBLIC},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"removeAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"removeIf", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<-TE;>;)Z", $PUBLIC},
	{"retainAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE;>;", $PUBLIC},
	{"stream", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<TE;>;", $PUBLIC},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC},
	{"toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/util/function/IntFunction<[TT;>;)[TT;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Collections$SynchronizedCollection::*)($ObjectOutputStream*)>(&Collections$SynchronizedCollection::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _Collections$SynchronizedCollection_InnerClassesInfo_[] = {
	{"java.util.Collections$SynchronizedCollection", "java.util.Collections", "SynchronizedCollection", $STATIC},
	{}
};

$ClassInfo _Collections$SynchronizedCollection_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$SynchronizedCollection",
	"java.lang.Object",
	"java.util.Collection,java.io.Serializable",
	_Collections$SynchronizedCollection_FieldInfo_,
	_Collections$SynchronizedCollection_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Collection<TE;>;Ljava/io/Serializable;",
	nullptr,
	_Collections$SynchronizedCollection_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$SynchronizedCollection($Class* clazz) {
	return $of($alloc(Collections$SynchronizedCollection));
}

bool Collections$SynchronizedCollection::equals(Object$* o) {
	 return this->$Collection::equals(o);
}

int32_t Collections$SynchronizedCollection::hashCode() {
	 return this->$Collection::hashCode();
}

$Object* Collections$SynchronizedCollection::clone() {
	 return this->$Collection::clone();
}

void Collections$SynchronizedCollection::finalize() {
	this->$Collection::finalize();
}

void Collections$SynchronizedCollection::init$($Collection* c) {
	$set(this, c, $cast($Collection, $Objects::requireNonNull(c)));
	$set(this, mutex, this);
}

void Collections$SynchronizedCollection::init$($Collection* c, Object$* mutex) {
	$set(this, c, $cast($Collection, $Objects::requireNonNull(c)));
	$set(this, mutex, $Objects::requireNonNull(mutex));
}

int32_t Collections$SynchronizedCollection::size() {
	$synchronized(this->mutex) {
		return $nc(this->c)->size();
	}
}

bool Collections$SynchronizedCollection::isEmpty() {
	$synchronized(this->mutex) {
		return $nc(this->c)->isEmpty();
	}
}

bool Collections$SynchronizedCollection::contains(Object$* o) {
	$synchronized(this->mutex) {
		return $nc(this->c)->contains(o);
	}
}

$ObjectArray* Collections$SynchronizedCollection::toArray() {
	$synchronized(this->mutex) {
		return $nc(this->c)->toArray();
	}
}

$ObjectArray* Collections$SynchronizedCollection::toArray($ObjectArray* a) {
	$synchronized(this->mutex) {
		return $nc(this->c)->toArray(a);
	}
}

$ObjectArray* Collections$SynchronizedCollection::toArray($IntFunction* f) {
	$synchronized(this->mutex) {
		return $nc(this->c)->toArray(f);
	}
}

$Iterator* Collections$SynchronizedCollection::iterator() {
	return $nc(this->c)->iterator();
}

bool Collections$SynchronizedCollection::add(Object$* e) {
	$synchronized(this->mutex) {
		return $nc(this->c)->add(e);
	}
}

bool Collections$SynchronizedCollection::remove(Object$* o) {
	$synchronized(this->mutex) {
		return $nc(this->c)->remove(o);
	}
}

bool Collections$SynchronizedCollection::containsAll($Collection* coll) {
	$synchronized(this->mutex) {
		return $nc(this->c)->containsAll(coll);
	}
}

bool Collections$SynchronizedCollection::addAll($Collection* coll) {
	$synchronized(this->mutex) {
		return $nc(this->c)->addAll(coll);
	}
}

bool Collections$SynchronizedCollection::removeAll($Collection* coll) {
	$synchronized(this->mutex) {
		return $nc(this->c)->removeAll(coll);
	}
}

bool Collections$SynchronizedCollection::retainAll($Collection* coll) {
	$synchronized(this->mutex) {
		return $nc(this->c)->retainAll(coll);
	}
}

void Collections$SynchronizedCollection::clear() {
	$synchronized(this->mutex) {
		$nc(this->c)->clear();
	}
}

$String* Collections$SynchronizedCollection::toString() {
	$synchronized(this->mutex) {
		return $nc($of(this->c))->toString();
	}
}

void Collections$SynchronizedCollection::forEach($Consumer* consumer) {
	$synchronized(this->mutex) {
		$nc(this->c)->forEach(consumer);
	}
}

bool Collections$SynchronizedCollection::removeIf($Predicate* filter) {
	$synchronized(this->mutex) {
		return $nc(this->c)->removeIf(filter);
	}
}

$Spliterator* Collections$SynchronizedCollection::spliterator() {
	return $nc(this->c)->spliterator();
}

$Stream* Collections$SynchronizedCollection::stream() {
	return $nc(this->c)->stream();
}

$Stream* Collections$SynchronizedCollection::parallelStream() {
	return $nc(this->c)->parallelStream();
}

void Collections$SynchronizedCollection::writeObject($ObjectOutputStream* s) {
	$synchronized(this->mutex) {
		$nc(s)->defaultWriteObject();
	}
}

Collections$SynchronizedCollection::Collections$SynchronizedCollection() {
}

$Class* Collections$SynchronizedCollection::load$($String* name, bool initialize) {
	$loadClass(Collections$SynchronizedCollection, name, initialize, &_Collections$SynchronizedCollection_ClassInfo_, allocate$Collections$SynchronizedCollection);
	return class$;
}

$Class* Collections$SynchronizedCollection::class$ = nullptr;

	} // util
} // java