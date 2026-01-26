#include <java/util/WeakHashMap$WeakHashMapSpliterator.h>

#include <java/util/WeakHashMap$Entry.h>
#include <java/util/WeakHashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakHashMap = ::java::util::WeakHashMap;

namespace java {
	namespace util {

$FieldInfo _WeakHashMap$WeakHashMapSpliterator_FieldInfo_[] = {
	{"map", "Ljava/util/WeakHashMap;", "Ljava/util/WeakHashMap<TK;TV;>;", $FINAL, $field(WeakHashMap$WeakHashMapSpliterator, map)},
	{"current", "Ljava/util/WeakHashMap$Entry;", "Ljava/util/WeakHashMap$Entry<TK;TV;>;", 0, $field(WeakHashMap$WeakHashMapSpliterator, current)},
	{"index", "I", nullptr, 0, $field(WeakHashMap$WeakHashMapSpliterator, index)},
	{"fence", "I", nullptr, 0, $field(WeakHashMap$WeakHashMapSpliterator, fence)},
	{"est", "I", nullptr, 0, $field(WeakHashMap$WeakHashMapSpliterator, est)},
	{"expectedModCount", "I", nullptr, 0, $field(WeakHashMap$WeakHashMapSpliterator, expectedModCount)},
	{}
};

$MethodInfo _WeakHashMap$WeakHashMapSpliterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/WeakHashMap;IIII)V", "(Ljava/util/WeakHashMap<TK;TV;>;IIII)V", 0, $method(WeakHashMap$WeakHashMapSpliterator, init$, void, $WeakHashMap*, int32_t, int32_t, int32_t, int32_t)},
	{"estimateSize", "()J", nullptr, $PUBLIC | $FINAL, $method(WeakHashMap$WeakHashMapSpliterator, estimateSize, int64_t)},
	{"getFence", "()I", nullptr, $FINAL, $method(WeakHashMap$WeakHashMapSpliterator, getFence, int32_t)},
	{}
};

$InnerClassInfo _WeakHashMap$WeakHashMapSpliterator_InnerClassesInfo_[] = {
	{"java.util.WeakHashMap$WeakHashMapSpliterator", "java.util.WeakHashMap", "WeakHashMapSpliterator", $STATIC},
	{}
};

$ClassInfo _WeakHashMap$WeakHashMapSpliterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.WeakHashMap$WeakHashMapSpliterator",
	"java.lang.Object",
	nullptr,
	_WeakHashMap$WeakHashMapSpliterator_FieldInfo_,
	_WeakHashMap$WeakHashMapSpliterator_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_WeakHashMap$WeakHashMapSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.WeakHashMap"
};

$Object* allocate$WeakHashMap$WeakHashMapSpliterator($Class* clazz) {
	return $of($alloc(WeakHashMap$WeakHashMapSpliterator));
}

void WeakHashMap$WeakHashMapSpliterator::init$($WeakHashMap* m, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount) {
	$set(this, map, m);
	this->index = origin;
	this->fence = fence;
	this->est = est;
	this->expectedModCount = expectedModCount;
}

int32_t WeakHashMap$WeakHashMapSpliterator::getFence() {
	int32_t hi = 0;
	if ((hi = this->fence) < 0) {
		$var($WeakHashMap, m, this->map);
		this->est = $nc(m)->size();
		this->expectedModCount = m->modCount;
		hi = (this->fence = $nc(m->table)->length);
	}
	return hi;
}

int64_t WeakHashMap$WeakHashMapSpliterator::estimateSize() {
	getFence();
	return (int64_t)this->est;
}

WeakHashMap$WeakHashMapSpliterator::WeakHashMap$WeakHashMapSpliterator() {
}

$Class* WeakHashMap$WeakHashMapSpliterator::load$($String* name, bool initialize) {
	$loadClass(WeakHashMap$WeakHashMapSpliterator, name, initialize, &_WeakHashMap$WeakHashMapSpliterator_ClassInfo_, allocate$WeakHashMap$WeakHashMapSpliterator);
	return class$;
}

$Class* WeakHashMap$WeakHashMapSpliterator::class$ = nullptr;

	} // util
} // java