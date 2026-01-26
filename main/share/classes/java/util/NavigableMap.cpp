#include <java/util/NavigableMap.h>

#include <java/util/Map$Entry.h>
#include <java/util/NavigableSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map$Entry = ::java::util::Map$Entry;
using $NavigableSet = ::java::util::NavigableSet;

namespace java {
	namespace util {

$MethodInfo _NavigableMap_MethodInfo_[] = {
	{"ceilingEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;", "(TK;)Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC | $ABSTRACT, $virtualMethod(NavigableMap, ceilingEntry, $Map$Entry*, Object$*)},
	{"ceilingKey", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TK;)TK;", $PUBLIC | $ABSTRACT, $virtualMethod(NavigableMap, ceilingKey, $Object*, Object$*)},
	{"descendingKeySet", "()Ljava/util/NavigableSet;", "()Ljava/util/NavigableSet<TK;>;", $PUBLIC | $ABSTRACT, $virtualMethod(NavigableMap, descendingKeySet, $NavigableSet*)},
	{"descendingMap", "()Ljava/util/NavigableMap;", "()Ljava/util/NavigableMap<TK;TV;>;", $PUBLIC | $ABSTRACT, $virtualMethod(NavigableMap, descendingMap, NavigableMap*)},
	{"firstEntry", "()Ljava/util/Map$Entry;", "()Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC | $ABSTRACT, $virtualMethod(NavigableMap, firstEntry, $Map$Entry*)},
	{"floorEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;", "(TK;)Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC | $ABSTRACT, $virtualMethod(NavigableMap, floorEntry, $Map$Entry*, Object$*)},
	{"floorKey", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TK;)TK;", $PUBLIC | $ABSTRACT, $virtualMethod(NavigableMap, floorKey, $Object*, Object$*)},
	{"headMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;", nullptr, $PUBLIC | $ABSTRACT},
	{"headMap", "(Ljava/lang/Object;Z)Ljava/util/NavigableMap;", "(TK;Z)Ljava/util/NavigableMap<TK;TV;>;", $PUBLIC | $ABSTRACT, $virtualMethod(NavigableMap, headMap, NavigableMap*, Object$*, bool)},
	{"higherEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;", "(TK;)Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC | $ABSTRACT, $virtualMethod(NavigableMap, higherEntry, $Map$Entry*, Object$*)},
	{"higherKey", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TK;)TK;", $PUBLIC | $ABSTRACT, $virtualMethod(NavigableMap, higherKey, $Object*, Object$*)},
	{"lastEntry", "()Ljava/util/Map$Entry;", "()Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC | $ABSTRACT, $virtualMethod(NavigableMap, lastEntry, $Map$Entry*)},
	{"lowerEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;", "(TK;)Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC | $ABSTRACT, $virtualMethod(NavigableMap, lowerEntry, $Map$Entry*, Object$*)},
	{"lowerKey", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TK;)TK;", $PUBLIC | $ABSTRACT, $virtualMethod(NavigableMap, lowerKey, $Object*, Object$*)},
	{"navigableKeySet", "()Ljava/util/NavigableSet;", "()Ljava/util/NavigableSet<TK;>;", $PUBLIC | $ABSTRACT, $virtualMethod(NavigableMap, navigableKeySet, $NavigableSet*)},
	{"pollFirstEntry", "()Ljava/util/Map$Entry;", "()Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC | $ABSTRACT, $virtualMethod(NavigableMap, pollFirstEntry, $Map$Entry*)},
	{"pollLastEntry", "()Ljava/util/Map$Entry;", "()Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC | $ABSTRACT, $virtualMethod(NavigableMap, pollLastEntry, $Map$Entry*)},
	{"subMap", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedMap;", nullptr, $PUBLIC | $ABSTRACT},
	{"subMap", "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableMap;", "(TK;ZTK;Z)Ljava/util/NavigableMap<TK;TV;>;", $PUBLIC | $ABSTRACT, $virtualMethod(NavigableMap, subMap, NavigableMap*, Object$*, bool, Object$*, bool)},
	{"tailMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;", nullptr, $PUBLIC | $ABSTRACT},
	{"tailMap", "(Ljava/lang/Object;Z)Ljava/util/NavigableMap;", "(TK;Z)Ljava/util/NavigableMap<TK;TV;>;", $PUBLIC | $ABSTRACT, $virtualMethod(NavigableMap, tailMap, NavigableMap*, Object$*, bool)},
	{}
};

$ClassInfo _NavigableMap_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.NavigableMap",
	nullptr,
	"java.util.SortedMap",
	nullptr,
	_NavigableMap_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/SortedMap<TK;TV;>;"
};

$Object* allocate$NavigableMap($Class* clazz) {
	return $of($alloc(NavigableMap));
}

$Class* NavigableMap::load$($String* name, bool initialize) {
	$loadClass(NavigableMap, name, initialize, &_NavigableMap_ClassInfo_, allocate$NavigableMap);
	return class$;
}

$Class* NavigableMap::class$ = nullptr;

	} // util
} // java