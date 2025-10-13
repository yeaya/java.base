#include <java/util/IdentityHashMap$KeySpliterator.h>

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
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $IdentityHashMap = ::java::util::IdentityHashMap;
using $IdentityHashMap$IdentityHashMapSpliterator = ::java::util::IdentityHashMap$IdentityHashMapSpliterator;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$MethodInfo _IdentityHashMap$KeySpliterator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*estimateSize", "()J", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/IdentityHashMap;IIII)V", "(Ljava/util/IdentityHashMap<TK;TV;>;IIII)V", 0, $method(static_cast<void(IdentityHashMap$KeySpliterator::*)($IdentityHashMap*,int32_t,int32_t,int32_t,int32_t)>(&IdentityHashMap$KeySpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TK;>;)V", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TK;>;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/IdentityHashMap$KeySpliterator;", "()Ljava/util/IdentityHashMap$KeySpliterator<TK;TV;>;", $PUBLIC},
	{}
};

$InnerClassInfo _IdentityHashMap$KeySpliterator_InnerClassesInfo_[] = {
	{"java.util.IdentityHashMap$KeySpliterator", "java.util.IdentityHashMap", "KeySpliterator", $STATIC | $FINAL},
	{"java.util.IdentityHashMap$IdentityHashMapSpliterator", "java.util.IdentityHashMap", "IdentityHashMapSpliterator", $STATIC},
	{}
};

$ClassInfo _IdentityHashMap$KeySpliterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.IdentityHashMap$KeySpliterator",
	"java.util.IdentityHashMap$IdentityHashMapSpliterator",
	"java.util.Spliterator",
	nullptr,
	_IdentityHashMap$KeySpliterator_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/IdentityHashMap$IdentityHashMapSpliterator<TK;TV;>;Ljava/util/Spliterator<TK;>;",
	nullptr,
	_IdentityHashMap$KeySpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.IdentityHashMap"
};

$Object* allocate$IdentityHashMap$KeySpliterator($Class* clazz) {
	return $of($alloc(IdentityHashMap$KeySpliterator));
}

int64_t IdentityHashMap$KeySpliterator::estimateSize() {
	 return this->$IdentityHashMap$IdentityHashMapSpliterator::estimateSize();
}

int32_t IdentityHashMap$KeySpliterator::hashCode() {
	 return this->$IdentityHashMap$IdentityHashMapSpliterator::hashCode();
}

bool IdentityHashMap$KeySpliterator::equals(Object$* obj) {
	 return this->$IdentityHashMap$IdentityHashMapSpliterator::equals(obj);
}

$Object* IdentityHashMap$KeySpliterator::clone() {
	 return this->$IdentityHashMap$IdentityHashMapSpliterator::clone();
}

$String* IdentityHashMap$KeySpliterator::toString() {
	 return this->$IdentityHashMap$IdentityHashMapSpliterator::toString();
}

void IdentityHashMap$KeySpliterator::finalize() {
	this->$IdentityHashMap$IdentityHashMapSpliterator::finalize();
}

void IdentityHashMap$KeySpliterator::init$($IdentityHashMap* map, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount) {
	$IdentityHashMap$IdentityHashMapSpliterator::init$(map, origin, fence, est, expectedModCount);
}

$Spliterator* IdentityHashMap$KeySpliterator::trySplit() {
	int32_t hi = getFence();
	int32_t lo = this->index;
	int32_t mid = (int32_t)(((int32_t)((uint32_t)(lo + hi) >> 1)) & (uint32_t)~1);
	return ((lo >= mid) ? (IdentityHashMap$KeySpliterator*)nullptr : $new(IdentityHashMap$KeySpliterator, this->map, lo, this->index = mid, $usrAssign(this->est, 1), this->expectedModCount));
}

void IdentityHashMap$KeySpliterator::forEachRemaining($Consumer* action) {
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	int32_t i = 0;
	int32_t hi = 0;
	int32_t mc = 0;
	$var($Object, key, nullptr);
	$var($IdentityHashMap, m, nullptr);
	$var($ObjectArray, a, nullptr);
	bool var$1 = ($assign(m, this->map)) != nullptr;
	bool var$0 = var$1 && ($assign(a, $nc(m)->table)) != nullptr && (i = this->index) >= 0;
	if (var$0 && (this->index = (hi = getFence())) <= $nc(a)->length) {
		for (; i < hi; i += 2) {
			if (($assign(key, a->get(i))) != nullptr) {
				$nc(action)->accept($($IdentityHashMap::unmaskNull(key)));
			}
		}
		if (m->modCount == this->expectedModCount) {
			return;
		}
	}
	$throwNew($ConcurrentModificationException);
}

bool IdentityHashMap$KeySpliterator::tryAdvance($Consumer* action) {
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($ObjectArray, a, $nc(this->map)->table);
	int32_t hi = getFence();
	while (this->index < hi) {
		$var($Object0, key, $nc(a)->get(this->index));
		this->index += 2;
		if (key != nullptr) {
			$nc(action)->accept($($IdentityHashMap::unmaskNull(key)));
			if ($nc(this->map)->modCount != this->expectedModCount) {
				$throwNew($ConcurrentModificationException);
			}
			return true;
		}
	}
	return false;
}

int32_t IdentityHashMap$KeySpliterator::characteristics() {
	return (this->fence < 0 || this->est == $nc(this->map)->size$ ? $Spliterator::SIZED : 0) | $Spliterator::DISTINCT;
}

IdentityHashMap$KeySpliterator::IdentityHashMap$KeySpliterator() {
}

$Class* IdentityHashMap$KeySpliterator::load$($String* name, bool initialize) {
	$loadClass(IdentityHashMap$KeySpliterator, name, initialize, &_IdentityHashMap$KeySpliterator_ClassInfo_, allocate$IdentityHashMap$KeySpliterator);
	return class$;
}

$Class* IdentityHashMap$KeySpliterator::class$ = nullptr;

	} // util
} // java