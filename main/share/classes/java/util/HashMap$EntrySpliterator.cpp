#include <java/util/HashMap$EntrySpliterator.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/HashMap$HashMapSpliterator.h>
#include <java/util/HashMap$Node.h>
#include <java/util/HashMap.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef SIZED
#undef DISTINCT

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

$MethodInfo _HashMap$EntrySpliterator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*estimateSize", "()J", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/HashMap;IIII)V", "(Ljava/util/HashMap<TK;TV;>;IIII)V", 0, $method(static_cast<void(HashMap$EntrySpliterator::*)($HashMap*,int32_t,int32_t,int32_t,int32_t)>(&HashMap$EntrySpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-Ljava/util/Map$Entry<TK;TV;>;>;)V", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-Ljava/util/Map$Entry<TK;TV;>;>;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/HashMap$EntrySpliterator;", "()Ljava/util/HashMap$EntrySpliterator<TK;TV;>;", $PUBLIC},
	{}
};

$InnerClassInfo _HashMap$EntrySpliterator_InnerClassesInfo_[] = {
	{"java.util.HashMap$EntrySpliterator", "java.util.HashMap", "EntrySpliterator", $STATIC | $FINAL},
	{"java.util.HashMap$HashMapSpliterator", "java.util.HashMap", "HashMapSpliterator", $STATIC},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _HashMap$EntrySpliterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.HashMap$EntrySpliterator",
	"java.util.HashMap$HashMapSpliterator",
	"java.util.Spliterator",
	nullptr,
	_HashMap$EntrySpliterator_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/HashMap$HashMapSpliterator<TK;TV;>;Ljava/util/Spliterator<Ljava/util/Map$Entry<TK;TV;>;>;",
	nullptr,
	_HashMap$EntrySpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.HashMap"
};

$Object* allocate$HashMap$EntrySpliterator($Class* clazz) {
	return $of($alloc(HashMap$EntrySpliterator));
}

int64_t HashMap$EntrySpliterator::estimateSize() {
	 return this->$HashMap$HashMapSpliterator::estimateSize();
}

int32_t HashMap$EntrySpliterator::hashCode() {
	 return this->$HashMap$HashMapSpliterator::hashCode();
}

bool HashMap$EntrySpliterator::equals(Object$* obj) {
	 return this->$HashMap$HashMapSpliterator::equals(obj);
}

$Object* HashMap$EntrySpliterator::clone() {
	 return this->$HashMap$HashMapSpliterator::clone();
}

$String* HashMap$EntrySpliterator::toString() {
	 return this->$HashMap$HashMapSpliterator::toString();
}

void HashMap$EntrySpliterator::finalize() {
	this->$HashMap$HashMapSpliterator::finalize();
}

void HashMap$EntrySpliterator::init$($HashMap* m, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount) {
	$HashMap$HashMapSpliterator::init$(m, origin, fence, est, expectedModCount);
}

$Spliterator* HashMap$EntrySpliterator::trySplit() {
	int32_t hi = getFence();
	int32_t lo = this->index;
	int32_t mid = (int32_t)((uint32_t)(lo + hi) >> 1);
	return ((lo >= mid || this->current != nullptr) ? (HashMap$EntrySpliterator*)nullptr : $new(HashMap$EntrySpliterator, this->map, lo, this->index = mid, $usrAssign(this->est, 1), this->expectedModCount));
}

void HashMap$EntrySpliterator::forEachRemaining($Consumer* action) {
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
		hi = (this->fence = (tab == nullptr) ? 0 : $nc(tab)->length);
	} else {
		mc = this->expectedModCount;
	}
	bool var$0 = tab != nullptr && tab->length >= hi && (i = this->index) >= 0;
	if (var$0 && (i < (this->index = hi) || this->current != nullptr)) {
		$var($HashMap$Node, p, this->current);
		$set(this, current, nullptr);
		do {
			if (p == nullptr) {
				$assign(p, $nc(tab)->get(i++));
			} else {
				$nc(action)->accept(p);
				$assign(p, $nc(p)->next);
			}
		} while (p != nullptr || i < hi);
		if (m->modCount != mc) {
			$throwNew($ConcurrentModificationException);
		}
	}
}

bool HashMap$EntrySpliterator::tryAdvance($Consumer* action) {
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
				$var($HashMap$Node, e, this->current);
				$set(this, current, $nc(this->current)->next);
				$nc(action)->accept(e);
				if ($nc(this->map)->modCount != this->expectedModCount) {
					$throwNew($ConcurrentModificationException);
				}
				return true;
			}
		}
	}
	return false;
}

int32_t HashMap$EntrySpliterator::characteristics() {
	return (this->fence < 0 || this->est == $nc(this->map)->size$ ? $Spliterator::SIZED : 0) | $Spliterator::DISTINCT;
}

HashMap$EntrySpliterator::HashMap$EntrySpliterator() {
}

$Class* HashMap$EntrySpliterator::load$($String* name, bool initialize) {
	$loadClass(HashMap$EntrySpliterator, name, initialize, &_HashMap$EntrySpliterator_ClassInfo_, allocate$HashMap$EntrySpliterator);
	return class$;
}

$Class* HashMap$EntrySpliterator::class$ = nullptr;

	} // util
} // java