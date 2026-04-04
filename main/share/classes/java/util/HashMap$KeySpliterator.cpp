#include <java/util/HashMap$KeySpliterator.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/HashMap$HashMapSpliterator.h>
#include <java/util/HashMap$Node.h>
#include <java/util/HashMap.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef DISTINCT
#undef SIZED

using $HashMap$NodeArray = $Array<::java::util::HashMap$Node>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $HashMap = ::java::util::HashMap;
using $HashMap$HashMapSpliterator = ::java::util::HashMap$HashMapSpliterator;
using $HashMap$Node = ::java::util::HashMap$Node;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

int64_t HashMap$KeySpliterator::estimateSize() {
	 return this->$HashMap$HashMapSpliterator::estimateSize();
}

int32_t HashMap$KeySpliterator::hashCode() {
	 return this->$HashMap$HashMapSpliterator::hashCode();
}

bool HashMap$KeySpliterator::equals(Object$* obj) {
	 return this->$HashMap$HashMapSpliterator::equals(obj);
}

$Object* HashMap$KeySpliterator::clone() {
	 return this->$HashMap$HashMapSpliterator::clone();
}

$String* HashMap$KeySpliterator::toString() {
	 return this->$HashMap$HashMapSpliterator::toString();
}

void HashMap$KeySpliterator::finalize() {
	this->$HashMap$HashMapSpliterator::finalize();
}

void HashMap$KeySpliterator::init$($HashMap* m, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount) {
	$HashMap$HashMapSpliterator::init$(m, origin, fence, est, expectedModCount);
}

$Spliterator* HashMap$KeySpliterator::trySplit() {
	int32_t hi = getFence();
	int32_t lo = this->index;
	int32_t mid = (int32_t)((uint32_t)(lo + hi) >> 1);
	return (lo >= mid || this->current != nullptr) ? (HashMap$KeySpliterator*)nullptr : $new(HashMap$KeySpliterator, this->map, lo, this->index = mid, $usrAssign(this->est, 1), this->expectedModCount);
}

void HashMap$KeySpliterator::forEachRemaining($Consumer* action) {
	$useLocalObjectStack();
	int32_t i = 0;
	int32_t hi = 0;
	int32_t mc = 0;
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($HashMap, m, this->map);
	$var($HashMap$NodeArray, tab, $nc(m)->table);
	if ((hi = this->fence) < 0) {
		mc = (this->expectedModCount = m->modCount);
		hi = (this->fence = (tab == nullptr) ? 0 : tab->length);
	} else {
		mc = this->expectedModCount;
	}
	bool var$0 = tab != nullptr && tab->length >= hi && (i = this->index) >= 0;
	if (var$0 && (i < (this->index = hi) || this->current != nullptr)) {
		$var($HashMap$Node, p, this->current);
		$set(this, current, nullptr);
		do {
			if (p == nullptr) {
				$assign(p, tab->get(i++));
			} else {
				$nc(action)->accept(p->key);
				$assign(p, p->next);
			}
		} while (p != nullptr || i < hi);
		if (m->modCount != mc) {
			$throwNew($ConcurrentModificationException);
		}
	}
}

bool HashMap$KeySpliterator::tryAdvance($Consumer* action) {
	$useLocalObjectStack();
	int32_t hi = 0;
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($HashMap$NodeArray, tab, $nc(this->map)->table);
	if (tab != nullptr && tab->length >= (hi = getFence()) && this->index >= 0) {
		while (this->current != nullptr || this->index < hi) {
			if (this->current == nullptr) {
				$set(this, current, tab->get(this->index++));
			} else {
				$var($Object, k, this->current->key);
				$set(this, current, this->current->next);
				$nc(action)->accept(k);
				if (this->map->modCount != this->expectedModCount) {
					$throwNew($ConcurrentModificationException);
				}
				return true;
			}
		}
	}
	return false;
}

int32_t HashMap$KeySpliterator::characteristics() {
	return (this->fence < 0 || this->est == $nc(this->map)->size$ ? $Spliterator::SIZED : 0) | $Spliterator::DISTINCT;
}

HashMap$KeySpliterator::HashMap$KeySpliterator() {
}

$Class* HashMap$KeySpliterator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*estimateSize", "()J", nullptr, $PUBLIC | $FINAL},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/util/HashMap;IIII)V", "(Ljava/util/HashMap<TK;TV;>;IIII)V", 0, $method(HashMap$KeySpliterator, init$, void, $HashMap*, int32_t, int32_t, int32_t, int32_t)},
		{"characteristics", "()I", nullptr, $PUBLIC, $virtualMethod(HashMap$KeySpliterator, characteristics, int32_t)},
		{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TK;>;)V", $PUBLIC, $virtualMethod(HashMap$KeySpliterator, forEachRemaining, void, $Consumer*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TK;>;)Z", $PUBLIC, $virtualMethod(HashMap$KeySpliterator, tryAdvance, bool, $Consumer*)},
		{"trySplit", "()Ljava/util/HashMap$KeySpliterator;", "()Ljava/util/HashMap$KeySpliterator<TK;TV;>;", $PUBLIC, $virtualMethod(HashMap$KeySpliterator, trySplit, $Spliterator*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.HashMap$KeySpliterator", "java.util.HashMap", "KeySpliterator", $STATIC | $FINAL},
		{"java.util.HashMap$HashMapSpliterator", "java.util.HashMap", "HashMapSpliterator", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.HashMap$KeySpliterator",
		"java.util.HashMap$HashMapSpliterator",
		"java.util.Spliterator",
		nullptr,
		methodInfos$$,
		"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/HashMap$HashMapSpliterator<TK;TV;>;Ljava/util/Spliterator<TK;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.HashMap"
	};
	$loadClass(HashMap$KeySpliterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(HashMap$KeySpliterator));
	});
	return class$;
}

$Class* HashMap$KeySpliterator::class$ = nullptr;

	} // util
} // java