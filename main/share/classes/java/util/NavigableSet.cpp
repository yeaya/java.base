#include <java/util/NavigableSet.h>

#include <java/util/Iterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

$MethodInfo _NavigableSet_MethodInfo_[] = {
	{"ceiling", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TE;)TE;", $PUBLIC | $ABSTRACT},
	{"descendingIterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC | $ABSTRACT},
	{"descendingSet", "()Ljava/util/NavigableSet;", "()Ljava/util/NavigableSet<TE;>;", $PUBLIC | $ABSTRACT},
	{"floor", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TE;)TE;", $PUBLIC | $ABSTRACT},
	{"headSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;", nullptr, $PUBLIC | $ABSTRACT},
	{"headSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;", "(TE;Z)Ljava/util/NavigableSet<TE;>;", $PUBLIC | $ABSTRACT},
	{"higher", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TE;)TE;", $PUBLIC | $ABSTRACT},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"lower", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TE;)TE;", $PUBLIC | $ABSTRACT},
	{"pollFirst", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $ABSTRACT},
	{"pollLast", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $ABSTRACT},
	{"subSet", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedSet;", nullptr, $PUBLIC | $ABSTRACT},
	{"subSet", "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableSet;", "(TE;ZTE;Z)Ljava/util/NavigableSet<TE;>;", $PUBLIC | $ABSTRACT},
	{"tailSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;", nullptr, $PUBLIC | $ABSTRACT},
	{"tailSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;", "(TE;Z)Ljava/util/NavigableSet<TE;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _NavigableSet_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.NavigableSet",
	nullptr,
	"java.util.SortedSet",
	nullptr,
	_NavigableSet_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/SortedSet<TE;>;"
};

$Object* allocate$NavigableSet($Class* clazz) {
	return $of($alloc(NavigableSet));
}

$Class* NavigableSet::load$($String* name, bool initialize) {
	$loadClass(NavigableSet, name, initialize, &_NavigableSet_ClassInfo_, allocate$NavigableSet);
	return class$;
}

$Class* NavigableSet::class$ = nullptr;

	} // util
} // java