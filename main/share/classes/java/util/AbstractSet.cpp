#include <java/util/AbstractSet.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractCollection = ::java::util::AbstractCollection;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace util {

$MethodInfo _AbstractSet_MethodInfo_[] = {
	{"*add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*addAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*clear", "()V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*containsAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEach", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(AbstractSet::*)()>(&AbstractSet::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"*iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"*parallelStream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"*remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"removeAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"*size", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"*toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*retainAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*removeIf", "(Ljava/util/function/Predicate;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AbstractSet_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.util.AbstractSet",
	"java.util.AbstractCollection",
	"java.util.Set",
	nullptr,
	_AbstractSet_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/AbstractCollection<TE;>;Ljava/util/Set<TE;>;"
};

$Object* allocate$AbstractSet($Class* clazz) {
	return $of($alloc(AbstractSet));
}

bool AbstractSet::isEmpty() {
	 return this->$AbstractCollection::isEmpty();
}

bool AbstractSet::contains(Object$* o) {
	 return this->$AbstractCollection::contains(o);
}

$ObjectArray* AbstractSet::toArray() {
	 return this->$AbstractCollection::toArray();
}

$ObjectArray* AbstractSet::toArray($ObjectArray* a) {
	 return this->$AbstractCollection::toArray(a);
}

bool AbstractSet::add(Object$* e) {
	 return this->$AbstractCollection::add(e);
}

bool AbstractSet::remove(Object$* o) {
	 return this->$AbstractCollection::remove(o);
}

bool AbstractSet::containsAll($Collection* c) {
	 return this->$AbstractCollection::containsAll(c);
}

bool AbstractSet::addAll($Collection* c) {
	 return this->$AbstractCollection::addAll(c);
}

bool AbstractSet::retainAll($Collection* c) {
	 return this->$AbstractCollection::retainAll(c);
}

void AbstractSet::clear() {
	this->$AbstractCollection::clear();
}

$String* AbstractSet::toString() {
	 return this->$AbstractCollection::toString();
}

$ObjectArray* AbstractSet::toArray($IntFunction* generator) {
	 return this->$AbstractCollection::toArray(generator);
}

bool AbstractSet::removeIf($Predicate* filter) {
	 return this->$AbstractCollection::removeIf(filter);
}

$Spliterator* AbstractSet::spliterator() {
	 return this->$AbstractCollection::spliterator();
}

$Stream* AbstractSet::stream() {
	 return this->$AbstractCollection::stream();
}

$Stream* AbstractSet::parallelStream() {
	 return this->$AbstractCollection::parallelStream();
}

void AbstractSet::forEach($Consumer* action) {
	this->$AbstractCollection::forEach(action);
}

$Object* AbstractSet::clone() {
	 return this->$AbstractCollection::clone();
}

void AbstractSet::finalize() {
	this->$AbstractCollection::finalize();
}

void AbstractSet::init$() {
	$AbstractCollection::init$();
}

bool AbstractSet::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if ($equals(o, this)) {
		return true;
	}
	if (!($instanceOf($Set, o))) {
		return false;
	}
	$var($Collection, c, $cast($Collection, o));
	int32_t var$0 = $nc(c)->size();
	if (var$0 != size()) {
		return false;
	}
	try {
		return containsAll(c);
	} catch ($ClassCastException&) {
		$var($RuntimeException, unused, $catch());
		return false;
	} catch ($NullPointerException&) {
		$var($RuntimeException, unused, $catch());
		return false;
	}
	$shouldNotReachHere();
}

int32_t AbstractSet::hashCode() {
	$useLocalCurrentObjectStackCache();
	int32_t h = 0;
	$var($Iterator, i, iterator());
	while ($nc(i)->hasNext()) {
		$var($Object, obj, i->next());
		if (obj != nullptr) {
			h += $of(obj)->hashCode();
		}
	}
	return h;
}

bool AbstractSet::removeAll($Collection* c) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(c);
	bool modified = false;
	int32_t var$0 = size();
	if (var$0 > c->size()) {
		{
			$var($Iterator, i$, c->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Object, e, i$->next());
				modified |= remove(e);
			}
		}
	} else {
		{
			$var($Iterator, i, iterator());
			for (; $nc(i)->hasNext();) {
				if (c->contains($(i->next()))) {
					i->remove();
					modified = true;
				}
			}
		}
	}
	return modified;
}

AbstractSet::AbstractSet() {
}

$Class* AbstractSet::load$($String* name, bool initialize) {
	$loadClass(AbstractSet, name, initialize, &_AbstractSet_ClassInfo_, allocate$AbstractSet);
	return class$;
}

$Class* AbstractSet::class$ = nullptr;

	} // util
} // java