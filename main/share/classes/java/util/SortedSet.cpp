#include <java/util/SortedSet.h>
#include <java/util/Collection.h>
#include <java/util/Comparator.h>
#include <java/util/SortedSet$1.h>
#include <java/util/Spliterator.h>
#include <jcpp.h>

#undef DISTINCT
#undef ORDERED
#undef SORTED

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $SortedSet$1 = ::java::util::SortedSet$1;
using $Spliterator = ::java::util::Spliterator;

namespace java {
	namespace util {

$Spliterator* SortedSet::spliterator() {
	return $new($SortedSet$1, this, this, ($Spliterator::DISTINCT | $Spliterator::SORTED) | $Spliterator::ORDERED);
}

$Class* SortedSet::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"comparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<-TE;>;", $PUBLIC | $ABSTRACT, $virtualMethod(SortedSet, comparator, $Comparator*)},
		{"first", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $ABSTRACT, $virtualMethod(SortedSet, first, $Object*)},
		{"headSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;", "(TE;)Ljava/util/SortedSet<TE;>;", $PUBLIC | $ABSTRACT, $virtualMethod(SortedSet, headSet, SortedSet*, Object$*)},
		{"last", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $ABSTRACT, $virtualMethod(SortedSet, last, $Object*)},
		{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE;>;", $PUBLIC, $virtualMethod(SortedSet, spliterator, $Spliterator*)},
		{"subSet", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedSet;", "(TE;TE;)Ljava/util/SortedSet<TE;>;", $PUBLIC | $ABSTRACT, $virtualMethod(SortedSet, subSet, SortedSet*, Object$*, Object$*)},
		{"tailSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;", "(TE;)Ljava/util/SortedSet<TE;>;", $PUBLIC | $ABSTRACT, $virtualMethod(SortedSet, tailSet, SortedSet*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.SortedSet$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.SortedSet",
		nullptr,
		"java.util.Set",
		nullptr,
		methodInfos$$,
		"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Set<TE;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.util.SortedSet$1"
	};
	$loadClass(SortedSet, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SortedSet);
	});
	return class$;
}

$Class* SortedSet::class$ = nullptr;

	} // util
} // java