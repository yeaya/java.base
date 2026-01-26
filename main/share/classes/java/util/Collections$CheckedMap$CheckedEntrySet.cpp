#include <java/util/Collections$CheckedMap$CheckedEntrySet.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/util/AbstractMap$SimpleImmutableEntry.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Collections$CheckedMap$CheckedEntrySet$1.h>
#include <java/util/Collections$CheckedMap$CheckedEntrySet$CheckedEntry.h>
#include <java/util/Collections$CheckedMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AbstractMap$SimpleImmutableEntry = ::java::util::AbstractMap$SimpleImmutableEntry;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Collections$CheckedMap$CheckedEntrySet$1 = ::java::util::Collections$CheckedMap$CheckedEntrySet$1;
using $Collections$CheckedMap$CheckedEntrySet$CheckedEntry = ::java::util::Collections$CheckedMap$CheckedEntrySet$CheckedEntry;
using $Iterator = ::java::util::Iterator;
using $Map$Entry = ::java::util::Map$Entry;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;

namespace java {
	namespace util {

$FieldInfo _Collections$CheckedMap$CheckedEntrySet_FieldInfo_[] = {
	{"s", "Ljava/util/Set;", "Ljava/util/Set<Ljava/util/Map$Entry<TK;TV;>;>;", $PRIVATE | $FINAL, $field(Collections$CheckedMap$CheckedEntrySet, s)},
	{"valueType", "Ljava/lang/Class;", "Ljava/lang/Class<TV;>;", $PRIVATE | $FINAL, $field(Collections$CheckedMap$CheckedEntrySet, valueType)},
	{}
};

$MethodInfo _Collections$CheckedMap$CheckedEntrySet_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Set;Ljava/lang/Class;)V", "(Ljava/util/Set<Ljava/util/Map$Entry<TK;TV;>;>;Ljava/lang/Class<TV;>;)V", 0, $method(Collections$CheckedMap$CheckedEntrySet, init$, void, $Set*, $Class*)},
	{"add", "(Ljava/util/Map$Entry;)Z", "(Ljava/util/Map$Entry<TK;TV;>;)Z", $PUBLIC, $virtualMethod(Collections$CheckedMap$CheckedEntrySet, add, bool, $Map$Entry*)},
	{"add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Collections$CheckedMap$CheckedEntrySet, add, bool, Object$*)},
	{"addAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<+Ljava/util/Map$Entry<TK;TV;>;>;)Z", $PUBLIC, $virtualMethod(Collections$CheckedMap$CheckedEntrySet, addAll, bool, $Collection*)},
	{"batchRemove", "(Ljava/util/Collection;Z)Z", "(Ljava/util/Collection<*>;Z)Z", $PRIVATE, $method(Collections$CheckedMap$CheckedEntrySet, batchRemove, bool, $Collection*, bool)},
	{"checkedEntry", "(Ljava/util/Map$Entry;Ljava/lang/Class;)Ljava/util/Collections$CheckedMap$CheckedEntrySet$CheckedEntry;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;T:Ljava/lang/Object;>(Ljava/util/Map$Entry<TK;TV;>;Ljava/lang/Class<TT;>;)Ljava/util/Collections$CheckedMap$CheckedEntrySet$CheckedEntry<TK;TV;TT;>;", $STATIC, $staticMethod(Collections$CheckedMap$CheckedEntrySet, checkedEntry, $Collections$CheckedMap$CheckedEntrySet$CheckedEntry*, $Map$Entry*, $Class*)},
	{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(Collections$CheckedMap$CheckedEntrySet, clear, void)},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Collections$CheckedMap$CheckedEntrySet, contains, bool, Object$*)},
	{"containsAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC, $virtualMethod(Collections$CheckedMap$CheckedEntrySet, containsAll, bool, $Collection*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Collections$CheckedMap$CheckedEntrySet, equals, bool, Object$*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Collections$CheckedMap$CheckedEntrySet, hashCode, int32_t)},
	{"isEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(Collections$CheckedMap$CheckedEntrySet, isEmpty, bool)},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/util/Map$Entry<TK;TV;>;>;", $PUBLIC, $virtualMethod(Collections$CheckedMap$CheckedEntrySet, iterator, $Iterator*)},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Collections$CheckedMap$CheckedEntrySet, remove, bool, Object$*)},
	{"removeAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC, $virtualMethod(Collections$CheckedMap$CheckedEntrySet, removeAll, bool, $Collection*)},
	{"retainAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC, $virtualMethod(Collections$CheckedMap$CheckedEntrySet, retainAll, bool, $Collection*)},
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(Collections$CheckedMap$CheckedEntrySet, size, int32_t)},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collections$CheckedMap$CheckedEntrySet, toArray, $ObjectArray*)},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC, $virtualMethod(Collections$CheckedMap$CheckedEntrySet, toArray, $ObjectArray*, $ObjectArray*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Collections$CheckedMap$CheckedEntrySet, toString, $String*)},
	{}
};

$InnerClassInfo _Collections$CheckedMap$CheckedEntrySet_InnerClassesInfo_[] = {
	{"java.util.Collections$CheckedMap", "java.util.Collections", "CheckedMap", $PRIVATE | $STATIC},
	{"java.util.Collections$CheckedMap$CheckedEntrySet", "java.util.Collections$CheckedMap", "CheckedEntrySet", $STATIC},
	{"java.util.Collections$CheckedMap$CheckedEntrySet$CheckedEntry", "java.util.Collections$CheckedMap$CheckedEntrySet", "CheckedEntry", $PRIVATE | $STATIC},
	{"java.util.Collections$CheckedMap$CheckedEntrySet$1", nullptr, nullptr, 0},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Collections$CheckedMap$CheckedEntrySet_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$CheckedMap$CheckedEntrySet",
	"java.lang.Object",
	"java.util.Set",
	_Collections$CheckedMap$CheckedEntrySet_FieldInfo_,
	_Collections$CheckedMap$CheckedEntrySet_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Set<Ljava/util/Map$Entry<TK;TV;>;>;",
	nullptr,
	_Collections$CheckedMap$CheckedEntrySet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$CheckedMap$CheckedEntrySet($Class* clazz) {
	return $of($alloc(Collections$CheckedMap$CheckedEntrySet));
}

void Collections$CheckedMap$CheckedEntrySet::init$($Set* s, $Class* valueType) {
	$set(this, s, s);
	$set(this, valueType, valueType);
}

int32_t Collections$CheckedMap$CheckedEntrySet::size() {
	return $nc(this->s)->size();
}

bool Collections$CheckedMap$CheckedEntrySet::isEmpty() {
	return $nc(this->s)->isEmpty();
}

$String* Collections$CheckedMap$CheckedEntrySet::toString() {
	return $nc($of(this->s))->toString();
}

int32_t Collections$CheckedMap$CheckedEntrySet::hashCode() {
	return $nc(this->s)->hashCode();
}

void Collections$CheckedMap$CheckedEntrySet::clear() {
	$nc(this->s)->clear();
}

bool Collections$CheckedMap$CheckedEntrySet::add($Map$Entry* e) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool Collections$CheckedMap$CheckedEntrySet::addAll($Collection* coll) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Iterator* Collections$CheckedMap$CheckedEntrySet::iterator() {
	$var($Iterator, i, $nc(this->s)->iterator());
	return $new($Collections$CheckedMap$CheckedEntrySet$1, this, i);
}

$ObjectArray* Collections$CheckedMap$CheckedEntrySet::toArray() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, source, $nc(this->s)->toArray());
	$load($ObjectArray);
	$var($ObjectArray, dest, ($nc($of(source))->getClass() == $getClass($ObjectArray)) ? source : $new($ObjectArray, $nc(source)->length));
	for (int32_t i = 0; i < source->length; ++i) {
		$nc(dest)->set(i, $(checkedEntry($cast($Map$Entry, source->get(i)), this->valueType)));
	}
	return dest;
}

$ObjectArray* Collections$CheckedMap$CheckedEntrySet::toArray($ObjectArray* a) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, arr, $nc(this->s)->toArray($nc(a)->length == 0 ? a : $($Arrays::copyOf(a, 0))));
	for (int32_t i = 0; i < $nc(arr)->length; ++i) {
		arr->set(i, $of($(checkedEntry($cast($Map$Entry, arr->get(i)), this->valueType))));
	}
	if ($nc(arr)->length > $nc(a)->length) {
		return arr;
	}
	$System::arraycopy(arr, 0, a, 0, $nc(arr)->length);
	if ($nc(a)->length > $nc(arr)->length) {
		a->set(arr->length, nullptr);
	}
	return a;
}

bool Collections$CheckedMap$CheckedEntrySet::contains(Object$* o) {
	$useLocalCurrentObjectStackCache();
	$var($Map$Entry, e, nullptr);
	bool var$1 = $instanceOf($Map$Entry, o);
	if (var$1) {
		$assign(e, $cast($Map$Entry, o));
		var$1 = true;
	}
	bool var$0 = var$1;
	return var$0 && $nc(this->s)->contains(($instanceOf($Collections$CheckedMap$CheckedEntrySet$CheckedEntry, e)) ? $of(e) : $($of(checkedEntry(e, this->valueType))));
}

bool Collections$CheckedMap$CheckedEntrySet::containsAll($Collection* c) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(c)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, o, i$->next());
			if (!contains(o)) {
				return false;
			}
		}
	}
	return true;
}

bool Collections$CheckedMap$CheckedEntrySet::remove(Object$* o) {
	if (!($instanceOf($Map$Entry, o))) {
		return false;
	}
	return $nc(this->s)->remove($$new($AbstractMap$SimpleImmutableEntry, $cast($Map$Entry, o)));
}

bool Collections$CheckedMap$CheckedEntrySet::removeAll($Collection* c) {
	return batchRemove(c, false);
}

bool Collections$CheckedMap$CheckedEntrySet::retainAll($Collection* c) {
	return batchRemove(c, true);
}

bool Collections$CheckedMap$CheckedEntrySet::batchRemove($Collection* c, bool complement) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(c);
	bool modified = false;
	$var($Iterator, it, iterator());
	while ($nc(it)->hasNext()) {
		if (c->contains($(it->next())) != complement) {
			it->remove();
			modified = true;
		}
	}
	return modified;
}

bool Collections$CheckedMap$CheckedEntrySet::equals(Object$* o) {
	if ($equals(o, this)) {
		return true;
	}
	$var($Set, that, nullptr);
	bool var$2 = $instanceOf($Set, o);
	if (var$2) {
		$assign(that, $cast($Set, o));
		var$2 = true;
	}
	bool var$1 = var$2;
	if (var$1) {
		int32_t var$3 = $nc(that)->size();
		var$1 = var$3 == $nc(this->s)->size();
	}
	bool var$0 = var$1;
	return var$0 && containsAll(that);
}

$Collections$CheckedMap$CheckedEntrySet$CheckedEntry* Collections$CheckedMap$CheckedEntrySet::checkedEntry($Map$Entry* e, $Class* valueType) {
	$init(Collections$CheckedMap$CheckedEntrySet);
	return $new($Collections$CheckedMap$CheckedEntrySet$CheckedEntry, e, valueType);
}

bool Collections$CheckedMap$CheckedEntrySet::add(Object$* e) {
	return this->add($cast($Map$Entry, e));
}

Collections$CheckedMap$CheckedEntrySet::Collections$CheckedMap$CheckedEntrySet() {
}

$Class* Collections$CheckedMap$CheckedEntrySet::load$($String* name, bool initialize) {
	$loadClass(Collections$CheckedMap$CheckedEntrySet, name, initialize, &_Collections$CheckedMap$CheckedEntrySet_ClassInfo_, allocate$Collections$CheckedMap$CheckedEntrySet);
	return class$;
}

$Class* Collections$CheckedMap$CheckedEntrySet::class$ = nullptr;

	} // util
} // java