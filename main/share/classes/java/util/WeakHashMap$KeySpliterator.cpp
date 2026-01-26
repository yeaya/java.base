#include <java/util/WeakHashMap$KeySpliterator.h>

#include <java/lang/ref/Reference.h>
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
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $Spliterator = ::java::util::Spliterator;
using $WeakHashMap = ::java::util::WeakHashMap;
using $WeakHashMap$Entry = ::java::util::WeakHashMap$Entry;
using $WeakHashMap$WeakHashMapSpliterator = ::java::util::WeakHashMap$WeakHashMapSpliterator;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$MethodInfo _WeakHashMap$KeySpliterator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*estimateSize", "()J", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/WeakHashMap;IIII)V", "(Ljava/util/WeakHashMap<TK;TV;>;IIII)V", 0, $method(WeakHashMap$KeySpliterator, init$, void, $WeakHashMap*, int32_t, int32_t, int32_t, int32_t)},
	{"characteristics", "()I", nullptr, $PUBLIC, $virtualMethod(WeakHashMap$KeySpliterator, characteristics, int32_t)},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TK;>;)V", $PUBLIC, $virtualMethod(WeakHashMap$KeySpliterator, forEachRemaining, void, $Consumer*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TK;>;)Z", $PUBLIC, $virtualMethod(WeakHashMap$KeySpliterator, tryAdvance, bool, $Consumer*)},
	{"trySplit", "()Ljava/util/WeakHashMap$KeySpliterator;", "()Ljava/util/WeakHashMap$KeySpliterator<TK;TV;>;", $PUBLIC, $virtualMethod(WeakHashMap$KeySpliterator, trySplit, $Spliterator*)},
	{}
};

$InnerClassInfo _WeakHashMap$KeySpliterator_InnerClassesInfo_[] = {
	{"java.util.WeakHashMap$KeySpliterator", "java.util.WeakHashMap", "KeySpliterator", $STATIC | $FINAL},
	{"java.util.WeakHashMap$WeakHashMapSpliterator", "java.util.WeakHashMap", "WeakHashMapSpliterator", $STATIC},
	{}
};

$ClassInfo _WeakHashMap$KeySpliterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.WeakHashMap$KeySpliterator",
	"java.util.WeakHashMap$WeakHashMapSpliterator",
	"java.util.Spliterator",
	nullptr,
	_WeakHashMap$KeySpliterator_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/WeakHashMap$WeakHashMapSpliterator<TK;TV;>;Ljava/util/Spliterator<TK;>;",
	nullptr,
	_WeakHashMap$KeySpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.WeakHashMap"
};

$Object* allocate$WeakHashMap$KeySpliterator($Class* clazz) {
	return $of($alloc(WeakHashMap$KeySpliterator));
}

int64_t WeakHashMap$KeySpliterator::estimateSize() {
	 return this->$WeakHashMap$WeakHashMapSpliterator::estimateSize();
}

int32_t WeakHashMap$KeySpliterator::hashCode() {
	 return this->$WeakHashMap$WeakHashMapSpliterator::hashCode();
}

bool WeakHashMap$KeySpliterator::equals(Object$* obj) {
	 return this->$WeakHashMap$WeakHashMapSpliterator::equals(obj);
}

$Object* WeakHashMap$KeySpliterator::clone() {
	 return this->$WeakHashMap$WeakHashMapSpliterator::clone();
}

$String* WeakHashMap$KeySpliterator::toString() {
	 return this->$WeakHashMap$WeakHashMapSpliterator::toString();
}

void WeakHashMap$KeySpliterator::finalize() {
	this->$WeakHashMap$WeakHashMapSpliterator::finalize();
}

void WeakHashMap$KeySpliterator::init$($WeakHashMap* m, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount) {
	$WeakHashMap$WeakHashMapSpliterator::init$(m, origin, fence, est, expectedModCount);
}

$Spliterator* WeakHashMap$KeySpliterator::trySplit() {
	int32_t hi = getFence();
	int32_t lo = this->index;
	int32_t mid = (int32_t)((uint32_t)(lo + hi) >> 1);
	return ((lo >= mid) ? (WeakHashMap$KeySpliterator*)nullptr : $new(WeakHashMap$KeySpliterator, this->map, lo, this->index = mid, $usrAssign(this->est, 1), this->expectedModCount));
}

void WeakHashMap$KeySpliterator::forEachRemaining($Consumer* action) {
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
				$assign(p, p->next);
				if (x != nullptr) {
					$var($Object, k, $WeakHashMap::unmaskNull(x));
					$nc(action)->accept(k);
				}
			}
		} while (p != nullptr || i < hi);
	}
	if (m->modCount != mc) {
		$throwNew($ConcurrentModificationException);
	}
}

bool WeakHashMap$KeySpliterator::tryAdvance($Consumer* action) {
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
				$set(this, current, $nc(this->current)->next);
				if (x != nullptr) {
					$var($Object, k, $WeakHashMap::unmaskNull(x));
					$nc(action)->accept(k);
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

int32_t WeakHashMap$KeySpliterator::characteristics() {
	return $Spliterator::DISTINCT;
}

WeakHashMap$KeySpliterator::WeakHashMap$KeySpliterator() {
}

$Class* WeakHashMap$KeySpliterator::load$($String* name, bool initialize) {
	$loadClass(WeakHashMap$KeySpliterator, name, initialize, &_WeakHashMap$KeySpliterator_ClassInfo_, allocate$WeakHashMap$KeySpliterator);
	return class$;
}

$Class* WeakHashMap$KeySpliterator::class$ = nullptr;

	} // util
} // java