#include <java/util/IdentityHashMap$IdentityHashMapSpliterator.h>
#include <java/util/IdentityHashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IdentityHashMap = ::java::util::IdentityHashMap;

namespace java {
	namespace util {

void IdentityHashMap$IdentityHashMapSpliterator::init$($IdentityHashMap* map, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount) {
	$set(this, map, map);
	this->index = origin;
	this->fence = fence;
	this->est = est;
	this->expectedModCount = expectedModCount;
}

int32_t IdentityHashMap$IdentityHashMapSpliterator::getFence() {
	int32_t hi = 0;
	if ((hi = this->fence) < 0) {
		this->est = $nc(this->map)->size$;
		this->expectedModCount = this->map->modCount;
		hi = (this->fence = $nc(this->map->table)->length);
	}
	return hi;
}

int64_t IdentityHashMap$IdentityHashMapSpliterator::estimateSize() {
	getFence();
	return (int64_t)this->est;
}

IdentityHashMap$IdentityHashMapSpliterator::IdentityHashMap$IdentityHashMapSpliterator() {
}

$Class* IdentityHashMap$IdentityHashMapSpliterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"map", "Ljava/util/IdentityHashMap;", "Ljava/util/IdentityHashMap<TK;TV;>;", $FINAL, $field(IdentityHashMap$IdentityHashMapSpliterator, map)},
		{"index", "I", nullptr, 0, $field(IdentityHashMap$IdentityHashMapSpliterator, index)},
		{"fence", "I", nullptr, 0, $field(IdentityHashMap$IdentityHashMapSpliterator, fence)},
		{"est", "I", nullptr, 0, $field(IdentityHashMap$IdentityHashMapSpliterator, est)},
		{"expectedModCount", "I", nullptr, 0, $field(IdentityHashMap$IdentityHashMapSpliterator, expectedModCount)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/IdentityHashMap;IIII)V", "(Ljava/util/IdentityHashMap<TK;TV;>;IIII)V", 0, $method(IdentityHashMap$IdentityHashMapSpliterator, init$, void, $IdentityHashMap*, int32_t, int32_t, int32_t, int32_t)},
		{"estimateSize", "()J", nullptr, $PUBLIC | $FINAL, $method(IdentityHashMap$IdentityHashMapSpliterator, estimateSize, int64_t)},
		{"getFence", "()I", nullptr, $FINAL, $method(IdentityHashMap$IdentityHashMapSpliterator, getFence, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.IdentityHashMap$IdentityHashMapSpliterator", "java.util.IdentityHashMap", "IdentityHashMapSpliterator", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.IdentityHashMap$IdentityHashMapSpliterator",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.IdentityHashMap"
	};
	$loadClass(IdentityHashMap$IdentityHashMapSpliterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IdentityHashMap$IdentityHashMapSpliterator);
	});
	return class$;
}

$Class* IdentityHashMap$IdentityHashMapSpliterator::class$ = nullptr;

	} // util
} // java