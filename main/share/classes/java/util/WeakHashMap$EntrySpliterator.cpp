#include <java/util/WeakHashMap$EntrySpliterator.h>

#include <java/lang/ref/Reference.h>
#include <java/util/AbstractMap$SimpleImmutableEntry.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/Spliterator.h>
#include <java/util/WeakHashMap$Entry.h>
#include <java/util/WeakHashMap$WeakHashMapSpliterator.h>
#include <java/util/WeakHashMap.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef DISTINCT

using $WeakHashMap$EntryArray = $Array<::java::util::WeakHashMap$Entry>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractMap$SimpleImmutableEntry = ::java::util::AbstractMap$SimpleImmutableEntry;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $Spliterator = ::java::util::Spliterator;
using $WeakHashMap = ::java::util::WeakHashMap;
using $WeakHashMap$Entry = ::java::util::WeakHashMap$Entry;
using $WeakHashMap$WeakHashMapSpliterator = ::java::util::WeakHashMap$WeakHashMapSpliterator;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$MethodInfo _WeakHashMap$EntrySpliterator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*estimateSize", "()J", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/WeakHashMap;IIII)V", "(Ljava/util/WeakHashMap<TK;TV;>;IIII)V", 0, $method(static_cast<void(WeakHashMap$EntrySpliterator::*)($WeakHashMap*,int32_t,int32_t,int32_t,int32_t)>(&WeakHashMap$EntrySpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-Ljava/util/Map$Entry<TK;TV;>;>;)V", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-Ljava/util/Map$Entry<TK;TV;>;>;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/WeakHashMap$EntrySpliterator;", "()Ljava/util/WeakHashMap$EntrySpliterator<TK;TV;>;", $PUBLIC},
	{}
};

$InnerClassInfo _WeakHashMap$EntrySpliterator_InnerClassesInfo_[] = {
	{"java.util.WeakHashMap$EntrySpliterator", "java.util.WeakHashMap", "EntrySpliterator", $STATIC | $FINAL},
	{"java.util.WeakHashMap$WeakHashMapSpliterator", "java.util.WeakHashMap", "WeakHashMapSpliterator", $STATIC},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _WeakHashMap$EntrySpliterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.WeakHashMap$EntrySpliterator",
	"java.util.WeakHashMap$WeakHashMapSpliterator",
	"java.util.Spliterator",
	nullptr,
	_WeakHashMap$EntrySpliterator_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/WeakHashMap$WeakHashMapSpliterator<TK;TV;>;Ljava/util/Spliterator<Ljava/util/Map$Entry<TK;TV;>;>;",
	nullptr,
	_WeakHashMap$EntrySpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.WeakHashMap"
};

$Object* allocate$WeakHashMap$EntrySpliterator($Class* clazz) {
	return $of($alloc(WeakHashMap$EntrySpliterator));
}

int64_t WeakHashMap$EntrySpliterator::estimateSize() {
	 return this->$WeakHashMap$WeakHashMapSpliterator::estimateSize();
}

int32_t WeakHashMap$EntrySpliterator::hashCode() {
	 return this->$WeakHashMap$WeakHashMapSpliterator::hashCode();
}

bool WeakHashMap$EntrySpliterator::equals(Object$* obj) {
	 return this->$WeakHashMap$WeakHashMapSpliterator::equals(obj);
}

$Object* WeakHashMap$EntrySpliterator::clone() {
	 return this->$WeakHashMap$WeakHashMapSpliterator::clone();
}

$String* WeakHashMap$EntrySpliterator::toString() {
	 return this->$WeakHashMap$WeakHashMapSpliterator::toString();
}

void WeakHashMap$EntrySpliterator::finalize() {
	this->$WeakHashMap$WeakHashMapSpliterator::finalize();
}

void WeakHashMap$EntrySpliterator::init$($WeakHashMap* m, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount) {
	$WeakHashMap$WeakHashMapSpliterator::init$(m, origin, fence, est, expectedModCount);
}

$Spliterator* WeakHashMap$EntrySpliterator::trySplit() {
	int32_t hi = getFence();
	int32_t lo = this->index;
	int32_t mid = (int32_t)((uint32_t)(lo + hi) >> 1);
	return ((lo >= mid) ? (WeakHashMap$EntrySpliterator*)nullptr : $new(WeakHashMap$EntrySpliterator, this->map, lo, this->index = mid, $usrAssign(this->est, 1), this->expectedModCount));
}

void WeakHashMap$EntrySpliterator::forEachRemaining($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	int32_t i = 0;
	int32_t hi = 0;
	int32_t mc = 0;
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($WeakHashMap, m, this->map);
	$var($WeakHashMap$EntryArray, tab, $nc(m)->table);
	if ((hi = this->fence) < 0) {
		mc = (this->expectedModCount = m->modCount);
		hi = (this->fence = $nc(tab)->length);
	} else {
		mc = this->expectedModCount;
	}
	bool var$0 = $nc(tab)->length >= hi && (i = this->index) >= 0;
	if (var$0 && (i < (this->index = hi) || this->current != nullptr)) {
		$var($WeakHashMap$Entry, p, this->current);
		$set(this, current, nullptr);
		do {
			if (p == nullptr) {
				$assign(p, $nc(tab)->get(i++));
			} else {
				$var($Object, x, $nc(p)->get());
				$var($Object, v, p->value);
				$assign(p, p->next);
				if (x != nullptr) {
					$var($Object, k, $WeakHashMap::unmaskNull(x));
					$nc(action)->accept($$new($AbstractMap$SimpleImmutableEntry, k, v));
				}
			}
		} while (p != nullptr || i < hi);
	}
	if (m->modCount != mc) {
		$throwNew($ConcurrentModificationException);
	}
}

bool WeakHashMap$EntrySpliterator::tryAdvance($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	int32_t hi = 0;
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($WeakHashMap$EntryArray, tab, $nc(this->map)->table);
	if ($nc(tab)->length >= (hi = getFence()) && this->index >= 0) {
		while (this->current != nullptr || this->index < hi) {
			if (this->current == nullptr) {
				$set(this, current, tab->get(this->index++));
			} else {
				$var($Object, x, $nc(this->current)->get());
				$var($Object, v, $nc(this->current)->value);
				$set(this, current, $nc(this->current)->next);
				if (x != nullptr) {
					$var($Object, k, $WeakHashMap::unmaskNull(x));
					$nc(action)->accept($$new($AbstractMap$SimpleImmutableEntry, k, v));
					if ($nc(this->map)->modCount != this->expectedModCount) {
						$throwNew($ConcurrentModificationException);
					}
					return true;
				}
			}
		}
	}
	return false;
}

int32_t WeakHashMap$EntrySpliterator::characteristics() {
	return $Spliterator::DISTINCT;
}

WeakHashMap$EntrySpliterator::WeakHashMap$EntrySpliterator() {
}

$Class* WeakHashMap$EntrySpliterator::load$($String* name, bool initialize) {
	$loadClass(WeakHashMap$EntrySpliterator, name, initialize, &_WeakHashMap$EntrySpliterator_ClassInfo_, allocate$WeakHashMap$EntrySpliterator);
	return class$;
}

$Class* WeakHashMap$EntrySpliterator::class$ = nullptr;

	} // util
} // java