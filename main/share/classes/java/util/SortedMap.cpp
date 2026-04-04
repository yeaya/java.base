#include <java/util/SortedMap.h>
#include <java/util/Comparator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;

namespace java {
	namespace util {

$Class* SortedMap::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"comparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<-TK;>;", $PUBLIC | $ABSTRACT, $virtualMethod(SortedMap, comparator, $Comparator*)},
		{"entrySet", "()Ljava/util/Set;", nullptr, $PUBLIC | $ABSTRACT},
		{"firstKey", "()Ljava/lang/Object;", "()TK;", $PUBLIC | $ABSTRACT, $virtualMethod(SortedMap, firstKey, $Object*)},
		{"headMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;", "(TK;)Ljava/util/SortedMap<TK;TV;>;", $PUBLIC | $ABSTRACT, $virtualMethod(SortedMap, headMap, SortedMap*, Object$*)},
		{"keySet", "()Ljava/util/Set;", nullptr, $PUBLIC | $ABSTRACT},
		{"lastKey", "()Ljava/lang/Object;", "()TK;", $PUBLIC | $ABSTRACT, $virtualMethod(SortedMap, lastKey, $Object*)},
		{"subMap", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedMap;", "(TK;TK;)Ljava/util/SortedMap<TK;TV;>;", $PUBLIC | $ABSTRACT, $virtualMethod(SortedMap, subMap, SortedMap*, Object$*, Object$*)},
		{"tailMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;", "(TK;)Ljava/util/SortedMap<TK;TV;>;", $PUBLIC | $ABSTRACT, $virtualMethod(SortedMap, tailMap, SortedMap*, Object$*)},
		{"values", "()Ljava/util/Collection;", nullptr, $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.SortedMap",
		nullptr,
		"java.util.Map",
		nullptr,
		methodInfos$$,
		"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Map<TK;TV;>;"
	};
	$loadClass(SortedMap, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SortedMap);
	});
	return class$;
}

$Class* SortedMap::class$ = nullptr;

	} // util
} // java