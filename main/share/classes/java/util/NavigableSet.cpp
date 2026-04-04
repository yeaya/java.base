#include <java/util/NavigableSet.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace java {
	namespace util {

$Class* NavigableSet::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"ceiling", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TE;)TE;", $PUBLIC | $ABSTRACT, $virtualMethod(NavigableSet, ceiling, $Object*, Object$*)},
		{"descendingIterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC | $ABSTRACT, $virtualMethod(NavigableSet, descendingIterator, $Iterator*)},
		{"descendingSet", "()Ljava/util/NavigableSet;", "()Ljava/util/NavigableSet<TE;>;", $PUBLIC | $ABSTRACT, $virtualMethod(NavigableSet, descendingSet, NavigableSet*)},
		{"floor", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TE;)TE;", $PUBLIC | $ABSTRACT, $virtualMethod(NavigableSet, floor, $Object*, Object$*)},
		{"headSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;", nullptr, $PUBLIC | $ABSTRACT},
		{"headSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;", "(TE;Z)Ljava/util/NavigableSet<TE;>;", $PUBLIC | $ABSTRACT, $virtualMethod(NavigableSet, headSet, NavigableSet*, Object$*, bool)},
		{"higher", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TE;)TE;", $PUBLIC | $ABSTRACT, $virtualMethod(NavigableSet, higher, $Object*, Object$*)},
		{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC | $ABSTRACT},
		{"lower", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TE;)TE;", $PUBLIC | $ABSTRACT, $virtualMethod(NavigableSet, lower, $Object*, Object$*)},
		{"pollFirst", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $ABSTRACT, $virtualMethod(NavigableSet, pollFirst, $Object*)},
		{"pollLast", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $ABSTRACT, $virtualMethod(NavigableSet, pollLast, $Object*)},
		{"subSet", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedSet;", nullptr, $PUBLIC | $ABSTRACT},
		{"subSet", "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableSet;", "(TE;ZTE;Z)Ljava/util/NavigableSet<TE;>;", $PUBLIC | $ABSTRACT, $virtualMethod(NavigableSet, subSet, NavigableSet*, Object$*, bool, Object$*, bool)},
		{"tailSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;", nullptr, $PUBLIC | $ABSTRACT},
		{"tailSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;", "(TE;Z)Ljava/util/NavigableSet<TE;>;", $PUBLIC | $ABSTRACT, $virtualMethod(NavigableSet, tailSet, NavigableSet*, Object$*, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.NavigableSet",
		nullptr,
		"java.util.SortedSet",
		nullptr,
		methodInfos$$,
		"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/SortedSet<TE;>;"
	};
	$loadClass(NavigableSet, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NavigableSet);
	});
	return class$;
}

$Class* NavigableSet::class$ = nullptr;

	} // util
} // java