#include <java/util/concurrent/ConcurrentSkipListMap$Values.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Spliterator.h>
#include <java/util/concurrent/ConcurrentNavigableMap.h>
#include <java/util/concurrent/ConcurrentSkipListMap$SubMap$SubMapEntryIterator.h>
#include <java/util/concurrent/ConcurrentSkipListMap$SubMap$SubMapValueIterator.h>
#include <java/util/concurrent/ConcurrentSkipListMap$SubMap.h>
#include <java/util/concurrent/ConcurrentSkipListMap$ValueIterator.h>
#include <java/util/concurrent/ConcurrentSkipListMap$ValueSpliterator.h>
#include <java/util/concurrent/ConcurrentSkipListMap.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractCollection = ::java::util::AbstractCollection;
using $Iterator = ::java::util::Iterator;
using $Map$Entry = ::java::util::Map$Entry;
using $Spliterator = ::java::util::Spliterator;
using $ConcurrentNavigableMap = ::java::util::concurrent::ConcurrentNavigableMap;
using $ConcurrentSkipListMap = ::java::util::concurrent::ConcurrentSkipListMap;
using $ConcurrentSkipListMap$SubMap = ::java::util::concurrent::ConcurrentSkipListMap$SubMap;
using $ConcurrentSkipListMap$SubMap$SubMapEntryIterator = ::java::util::concurrent::ConcurrentSkipListMap$SubMap$SubMapEntryIterator;
using $ConcurrentSkipListMap$SubMap$SubMapValueIterator = ::java::util::concurrent::ConcurrentSkipListMap$SubMap$SubMapValueIterator;
using $ConcurrentSkipListMap$ValueIterator = ::java::util::concurrent::ConcurrentSkipListMap$ValueIterator;
using $Predicate = ::java::util::function::Predicate;

namespace java {
	namespace util {
		namespace concurrent {

void ConcurrentSkipListMap$Values::init$($ConcurrentNavigableMap* map) {
	$AbstractCollection::init$();
	$set(this, m, map);
}

$Iterator* ConcurrentSkipListMap$Values::iterator() {
	return ($instanceOf($ConcurrentSkipListMap, this->m)) ? $cast($Iterator, $new($ConcurrentSkipListMap$ValueIterator, $cast($ConcurrentSkipListMap, this->m))) : $cast($Iterator, $new($ConcurrentSkipListMap$SubMap$SubMapValueIterator, $nc($cast($ConcurrentSkipListMap$SubMap, this->m))));
}

int32_t ConcurrentSkipListMap$Values::size() {
	return $nc(this->m)->size();
}

bool ConcurrentSkipListMap$Values::isEmpty() {
	return $nc(this->m)->isEmpty();
}

bool ConcurrentSkipListMap$Values::contains(Object$* o) {
	return $nc(this->m)->containsValue(o);
}

void ConcurrentSkipListMap$Values::clear() {
	$nc(this->m)->clear();
}

$ObjectArray* ConcurrentSkipListMap$Values::toArray() {
	return $$nc($ConcurrentSkipListMap::toList(this))->toArray();
}

$ObjectArray* ConcurrentSkipListMap$Values::toArray($ObjectArray* a) {
	return $$nc($ConcurrentSkipListMap::toList(this))->toArray(a);
}

$Spliterator* ConcurrentSkipListMap$Values::spliterator() {
	return ($instanceOf($ConcurrentSkipListMap, this->m)) ? $cast($Spliterator, $cast($ConcurrentSkipListMap, this->m)->valueSpliterator()) : $cast($Spliterator, $new($ConcurrentSkipListMap$SubMap$SubMapValueIterator, $nc($cast($ConcurrentSkipListMap$SubMap, this->m))));
}

bool ConcurrentSkipListMap$Values::removeIf($Predicate* filter) {
	$useLocalObjectStack();
	if (filter == nullptr) {
		$throwNew($NullPointerException);
	}
	if ($instanceOf($ConcurrentSkipListMap, this->m)) {
		return $cast($ConcurrentSkipListMap, this->m)->removeValueIf(filter);
	}
	$var($Iterator, it, $new($ConcurrentSkipListMap$SubMap$SubMapEntryIterator, $nc($cast($ConcurrentSkipListMap$SubMap, this->m))));
	bool removed = false;
	while (it->hasNext()) {
		$var($Map$Entry, e, $cast($Map$Entry, it->next()));
		$var($Object, v, $nc(e)->getValue());
		bool var$0 = $nc(filter)->test(v);
		if (var$0 && this->m->remove($(e->getKey()), v)) {
			removed = true;
		}
	}
	return removed;
}

ConcurrentSkipListMap$Values::ConcurrentSkipListMap$Values() {
}

$Class* ConcurrentSkipListMap$Values::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"m", "Ljava/util/concurrent/ConcurrentNavigableMap;", "Ljava/util/concurrent/ConcurrentNavigableMap<TK;TV;>;", $FINAL, $field(ConcurrentSkipListMap$Values, m)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/ConcurrentNavigableMap;)V", "(Ljava/util/concurrent/ConcurrentNavigableMap<TK;TV;>;)V", 0, $method(ConcurrentSkipListMap$Values, init$, void, $ConcurrentNavigableMap*)},
		{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(ConcurrentSkipListMap$Values, clear, void)},
		{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ConcurrentSkipListMap$Values, contains, bool, Object$*)},
		{"isEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(ConcurrentSkipListMap$Values, isEmpty, bool)},
		{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TV;>;", $PUBLIC, $virtualMethod(ConcurrentSkipListMap$Values, iterator, $Iterator*)},
		{"removeIf", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<-TV;>;)Z", $PUBLIC, $virtualMethod(ConcurrentSkipListMap$Values, removeIf, bool, $Predicate*)},
		{"size", "()I", nullptr, $PUBLIC, $virtualMethod(ConcurrentSkipListMap$Values, size, int32_t)},
		{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TV;>;", $PUBLIC, $virtualMethod(ConcurrentSkipListMap$Values, spliterator, $Spliterator*)},
		{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ConcurrentSkipListMap$Values, toArray, $ObjectArray*)},
		{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC, $virtualMethod(ConcurrentSkipListMap$Values, toArray, $ObjectArray*, $ObjectArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.ConcurrentSkipListMap$Values", "java.util.concurrent.ConcurrentSkipListMap", "Values", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.ConcurrentSkipListMap$Values",
		"java.util.AbstractCollection",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/AbstractCollection<TV;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.ConcurrentSkipListMap"
	};
	$loadClass(ConcurrentSkipListMap$Values, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConcurrentSkipListMap$Values);
	});
	return class$;
}

$Class* ConcurrentSkipListMap$Values::class$ = nullptr;

		} // concurrent
	} // util
} // java