#include <java/util/SortedMap.h>

#include <java/util/Comparator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

$MethodInfo _SortedMap_MethodInfo_[] = {
	{"comparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<-TK;>;", $PUBLIC | $ABSTRACT},
	{"entrySet", "()Ljava/util/Set;", nullptr, $PUBLIC | $ABSTRACT},
	{"firstKey", "()Ljava/lang/Object;", "()TK;", $PUBLIC | $ABSTRACT},
	{"headMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;", "(TK;)Ljava/util/SortedMap<TK;TV;>;", $PUBLIC | $ABSTRACT},
	{"keySet", "()Ljava/util/Set;", nullptr, $PUBLIC | $ABSTRACT},
	{"lastKey", "()Ljava/lang/Object;", "()TK;", $PUBLIC | $ABSTRACT},
	{"subMap", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedMap;", "(TK;TK;)Ljava/util/SortedMap<TK;TV;>;", $PUBLIC | $ABSTRACT},
	{"tailMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;", "(TK;)Ljava/util/SortedMap<TK;TV;>;", $PUBLIC | $ABSTRACT},
	{"values", "()Ljava/util/Collection;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SortedMap_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.SortedMap",
	nullptr,
	"java.util.Map",
	nullptr,
	_SortedMap_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Map<TK;TV;>;"
};

$Object* allocate$SortedMap($Class* clazz) {
	return $of($alloc(SortedMap));
}

$Class* SortedMap::load$($String* name, bool initialize) {
	$loadClass(SortedMap, name, initialize, &_SortedMap_ClassInfo_, allocate$SortedMap);
	return class$;
}

$Class* SortedMap::class$ = nullptr;

	} // util
} // java