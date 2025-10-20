#include <java/util/HashMap$ValueSpliterator.h>

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

$MethodInfo _HashMap$ValueSpliterator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*estimateSize", "()J", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/HashMap;IIII)V", "(Ljava/util/HashMap<TK;TV;>;IIII)V", 0, $method(static_cast<void(HashMap$ValueSpliterator::*)($HashMap*,int32_t,int32_t,int32_t,int32_t)>(&HashMap$ValueSpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TV;>;)V", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TV;>;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/HashMap$ValueSpliterator;", "()Ljava/util/HashMap$ValueSpliterator<TK;TV;>;", $PUBLIC},
	{}
};

$InnerClassInfo _HashMap$ValueSpliterator_InnerClassesInfo_[] = {
	{"java.util.HashMap$ValueSpliterator", "java.util.HashMap", "ValueSpliterator", $STATIC | $FINAL},
	{"java.util.HashMap$HashMapSpliterator", "java.util.HashMap", "HashMapSpliterator", $STATIC},
	{}
};

$ClassInfo _HashMap$ValueSpliterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.HashMap$ValueSpliterator",
	"java.util.HashMap$HashMapSpliterator",
	"java.util.Spliterator",
	nullptr,
	_HashMap$ValueSpliterator_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/HashMap$HashMapSpliterator<TK;TV;>;Ljava/util/Spliterator<TV;>;",
	nullptr,
	_HashMap$ValueSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.HashMap"
};

$Object* allocate$HashMap$ValueSpliterator($Class* clazz) {
	return $of($alloc(HashMap$ValueSpliterator));
}

int64_t HashMap$ValueSpliterator::estimateSize() {
	 return this->$HashMap$HashMapSpliterator::estimateSize();
}

int32_t HashMap$ValueSpliterator::hashCode() {
	 return this->$HashMap$HashMapSpliterator::hashCode();
}

bool HashMap$ValueSpliterator::equals(Object$* obj) {
	 return this->$HashMap$HashMapSpliterator::equals(obj);
}

$Object* HashMap$ValueSpliterator::clone() {
	 return this->$HashMap$HashMapSpliterator::clone();
}

$String* HashMap$ValueSpliterator::toString() {
	 return this->$HashMap$HashMapSpliterator::toString();
}

void HashMap$ValueSpliterator::finalize() {
	this->$HashMap$HashMapSpliterator::finalize();
}

void HashMap$ValueSpliterator::init$($HashMap* m, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount) {
	$HashMap$HashMapSpliterator::init$(m, origin, fence, est, expectedModCount);
}

$Spliterator* HashMap$ValueSpliterator::trySplit() {
	int32_t hi = getFence();
	int32_t lo = this->index;
	int32_t mid = (int32_t)((uint32_t)(lo + hi) >> 1);
	return ((lo >= mid || this->current != nullptr) ? (HashMap$ValueSpliterator*)nullptr : $new(HashMap$ValueSpliterator, this->map, lo, this->index = mid, $usrAssign(this->est, 1), this->expectedModCount));
}

void HashMap$ValueSpliterator::forEachRemaining($Consumer* action) {
	$useLocalCurrentObjectStackCache();
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
				$nc(action)->accept($nc(p)->value);
				$assign(p, $nc(p)->next);
			}
		} while (p != nullptr || i < hi);
		if (m->modCount != mc) {
			$throwNew($ConcurrentModificationException);
		}
	}
}

bool HashMap$ValueSpliterator::tryAdvance($Consumer* action) {
	$useLocalCurrentObjectStackCache();
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
				$var($Object, v, $nc(this->current)->value);
				$set(this, current, $nc(this->current)->next);
				$nc(action)->accept(v);
				if ($nc(this->map)->modCount != this->expectedModCount) {
					$throwNew($ConcurrentModificationException);
				}
				return true;
			}
		}
	}
	return false;
}

int32_t HashMap$ValueSpliterator::characteristics() {
	return (this->fence < 0 || this->est == $nc(this->map)->size$ ? $Spliterator::SIZED : 0);
}

HashMap$ValueSpliterator::HashMap$ValueSpliterator() {
}

$Class* HashMap$ValueSpliterator::load$($String* name, bool initialize) {
	$loadClass(HashMap$ValueSpliterator, name, initialize, &_HashMap$ValueSpliterator_ClassInfo_, allocate$HashMap$ValueSpliterator);
	return class$;
}

$Class* HashMap$ValueSpliterator::class$ = nullptr;

	} // util
} // java