#include <java/util/IdentityHashMap$EntrySpliterator.h>

#include <java/util/AbstractMap$SimpleImmutableEntry.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/IdentityHashMap$IdentityHashMapSpliterator.h>
#include <java/util/IdentityHashMap.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef DISTINCT
#undef SIZED

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractMap$SimpleImmutableEntry = ::java::util::AbstractMap$SimpleImmutableEntry;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $IdentityHashMap = ::java::util::IdentityHashMap;
using $IdentityHashMap$IdentityHashMapSpliterator = ::java::util::IdentityHashMap$IdentityHashMapSpliterator;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$MethodInfo _IdentityHashMap$EntrySpliterator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*estimateSize", "()J", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/IdentityHashMap;IIII)V", "(Ljava/util/IdentityHashMap<TK;TV;>;IIII)V", 0, $method(IdentityHashMap$EntrySpliterator, init$, void, $IdentityHashMap*, int32_t, int32_t, int32_t, int32_t)},
	{"characteristics", "()I", nullptr, $PUBLIC, $virtualMethod(IdentityHashMap$EntrySpliterator, characteristics, int32_t)},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-Ljava/util/Map$Entry<TK;TV;>;>;)V", $PUBLIC, $virtualMethod(IdentityHashMap$EntrySpliterator, forEachRemaining, void, $Consumer*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-Ljava/util/Map$Entry<TK;TV;>;>;)Z", $PUBLIC, $virtualMethod(IdentityHashMap$EntrySpliterator, tryAdvance, bool, $Consumer*)},
	{"trySplit", "()Ljava/util/IdentityHashMap$EntrySpliterator;", "()Ljava/util/IdentityHashMap$EntrySpliterator<TK;TV;>;", $PUBLIC, $virtualMethod(IdentityHashMap$EntrySpliterator, trySplit, $Spliterator*)},
	{}
};

$InnerClassInfo _IdentityHashMap$EntrySpliterator_InnerClassesInfo_[] = {
	{"java.util.IdentityHashMap$EntrySpliterator", "java.util.IdentityHashMap", "EntrySpliterator", $STATIC | $FINAL},
	{"java.util.IdentityHashMap$IdentityHashMapSpliterator", "java.util.IdentityHashMap", "IdentityHashMapSpliterator", $STATIC},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _IdentityHashMap$EntrySpliterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.IdentityHashMap$EntrySpliterator",
	"java.util.IdentityHashMap$IdentityHashMapSpliterator",
	"java.util.Spliterator",
	nullptr,
	_IdentityHashMap$EntrySpliterator_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/IdentityHashMap$IdentityHashMapSpliterator<TK;TV;>;Ljava/util/Spliterator<Ljava/util/Map$Entry<TK;TV;>;>;",
	nullptr,
	_IdentityHashMap$EntrySpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.IdentityHashMap"
};

$Object* allocate$IdentityHashMap$EntrySpliterator($Class* clazz) {
	return $of($alloc(IdentityHashMap$EntrySpliterator));
}

int64_t IdentityHashMap$EntrySpliterator::estimateSize() {
	 return this->$IdentityHashMap$IdentityHashMapSpliterator::estimateSize();
}

int32_t IdentityHashMap$EntrySpliterator::hashCode() {
	 return this->$IdentityHashMap$IdentityHashMapSpliterator::hashCode();
}

bool IdentityHashMap$EntrySpliterator::equals(Object$* obj) {
	 return this->$IdentityHashMap$IdentityHashMapSpliterator::equals(obj);
}

$Object* IdentityHashMap$EntrySpliterator::clone() {
	 return this->$IdentityHashMap$IdentityHashMapSpliterator::clone();
}

$String* IdentityHashMap$EntrySpliterator::toString() {
	 return this->$IdentityHashMap$IdentityHashMapSpliterator::toString();
}

void IdentityHashMap$EntrySpliterator::finalize() {
	this->$IdentityHashMap$IdentityHashMapSpliterator::finalize();
}

void IdentityHashMap$EntrySpliterator::init$($IdentityHashMap* m, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount) {
	$IdentityHashMap$IdentityHashMapSpliterator::init$(m, origin, fence, est, expectedModCount);
}

$Spliterator* IdentityHashMap$EntrySpliterator::trySplit() {
	int32_t hi = getFence();
	int32_t lo = this->index;
	int32_t mid = (int32_t)(((int32_t)((uint32_t)(lo + hi) >> 1)) & (uint32_t)~1);
	return ((lo >= mid) ? (IdentityHashMap$EntrySpliterator*)nullptr : $new(IdentityHashMap$EntrySpliterator, this->map, lo, this->index = mid, $usrAssign(this->est, 1), this->expectedModCount));
}

void IdentityHashMap$EntrySpliterator::forEachRemaining($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	int32_t i = 0;
	int32_t hi = 0;
	int32_t mc = 0;
	$var($IdentityHashMap, m, nullptr);
	$var($ObjectArray, a, nullptr);
	bool var$1 = ($assign(m, this->map)) != nullptr;
	bool var$0 = var$1 && ($assign(a, $nc(m)->table)) != nullptr && (i = this->index) >= 0;
	if (var$0 && (this->index = (hi = getFence())) <= $nc(a)->length) {
		for (; i < hi; i += 2) {
			$var($Object0, key, a->get(i));
			if (key != nullptr) {
				$var($Object, k, $IdentityHashMap::unmaskNull(key));
				$var($Object, v, a->get(i + 1));
				$nc(action)->accept($$new($AbstractMap$SimpleImmutableEntry, k, v));
			}
		}
		if (m->modCount == this->expectedModCount) {
			return;
		}
	}
	$throwNew($ConcurrentModificationException);
}

bool IdentityHashMap$EntrySpliterator::tryAdvance($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($ObjectArray, a, $nc(this->map)->table);
	int32_t hi = getFence();
	while (this->index < hi) {
		$var($Object0, key, $nc(a)->get(this->index));
		$var($Object, v, a->get(this->index + 1));
		this->index += 2;
		if (key != nullptr) {
			$var($Object, k, $IdentityHashMap::unmaskNull(key));
			$nc(action)->accept($$new($AbstractMap$SimpleImmutableEntry, k, v));
			if ($nc(this->map)->modCount != this->expectedModCount) {
				$throwNew($ConcurrentModificationException);
			}
			return true;
		}
	}
	return false;
}

int32_t IdentityHashMap$EntrySpliterator::characteristics() {
	return (this->fence < 0 || this->est == $nc(this->map)->size$ ? $Spliterator::SIZED : 0) | $Spliterator::DISTINCT;
}

IdentityHashMap$EntrySpliterator::IdentityHashMap$EntrySpliterator() {
}

$Class* IdentityHashMap$EntrySpliterator::load$($String* name, bool initialize) {
	$loadClass(IdentityHashMap$EntrySpliterator, name, initialize, &_IdentityHashMap$EntrySpliterator_ClassInfo_, allocate$IdentityHashMap$EntrySpliterator);
	return class$;
}

$Class* IdentityHashMap$EntrySpliterator::class$ = nullptr;

	} // util
} // java