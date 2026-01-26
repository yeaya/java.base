#include <java/util/TreeMap$ValueSpliterator.h>

#include <java/util/ConcurrentModificationException.h>
#include <java/util/Spliterator.h>
#include <java/util/TreeMap$Entry.h>
#include <java/util/TreeMap$TreeMapSpliterator.h>
#include <java/util/TreeMap.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef ORDERED
#undef SIZED

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $Spliterator = ::java::util::Spliterator;
using $TreeMap = ::java::util::TreeMap;
using $TreeMap$Entry = ::java::util::TreeMap$Entry;
using $TreeMap$TreeMapSpliterator = ::java::util::TreeMap$TreeMapSpliterator;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$MethodInfo _TreeMap$ValueSpliterator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*estimateSize", "()J", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/TreeMap;Ljava/util/TreeMap$Entry;Ljava/util/TreeMap$Entry;III)V", "(Ljava/util/TreeMap<TK;TV;>;Ljava/util/TreeMap$Entry<TK;TV;>;Ljava/util/TreeMap$Entry<TK;TV;>;III)V", 0, $method(TreeMap$ValueSpliterator, init$, void, $TreeMap*, $TreeMap$Entry*, $TreeMap$Entry*, int32_t, int32_t, int32_t)},
	{"characteristics", "()I", nullptr, $PUBLIC, $virtualMethod(TreeMap$ValueSpliterator, characteristics, int32_t)},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TV;>;)V", $PUBLIC, $virtualMethod(TreeMap$ValueSpliterator, forEachRemaining, void, $Consumer*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TV;>;)Z", $PUBLIC, $virtualMethod(TreeMap$ValueSpliterator, tryAdvance, bool, $Consumer*)},
	{"trySplit", "()Ljava/util/TreeMap$ValueSpliterator;", "()Ljava/util/TreeMap$ValueSpliterator<TK;TV;>;", $PUBLIC, $virtualMethod(TreeMap$ValueSpliterator, trySplit, $Spliterator*)},
	{}
};

$InnerClassInfo _TreeMap$ValueSpliterator_InnerClassesInfo_[] = {
	{"java.util.TreeMap$ValueSpliterator", "java.util.TreeMap", "ValueSpliterator", $STATIC | $FINAL},
	{"java.util.TreeMap$TreeMapSpliterator", "java.util.TreeMap", "TreeMapSpliterator", $STATIC},
	{}
};

$ClassInfo _TreeMap$ValueSpliterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.TreeMap$ValueSpliterator",
	"java.util.TreeMap$TreeMapSpliterator",
	"java.util.Spliterator",
	nullptr,
	_TreeMap$ValueSpliterator_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/TreeMap$TreeMapSpliterator<TK;TV;>;Ljava/util/Spliterator<TV;>;",
	nullptr,
	_TreeMap$ValueSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.TreeMap"
};

$Object* allocate$TreeMap$ValueSpliterator($Class* clazz) {
	return $of($alloc(TreeMap$ValueSpliterator));
}

int64_t TreeMap$ValueSpliterator::estimateSize() {
	 return this->$TreeMap$TreeMapSpliterator::estimateSize();
}

int32_t TreeMap$ValueSpliterator::hashCode() {
	 return this->$TreeMap$TreeMapSpliterator::hashCode();
}

bool TreeMap$ValueSpliterator::equals(Object$* obj) {
	 return this->$TreeMap$TreeMapSpliterator::equals(obj);
}

$Object* TreeMap$ValueSpliterator::clone() {
	 return this->$TreeMap$TreeMapSpliterator::clone();
}

$String* TreeMap$ValueSpliterator::toString() {
	 return this->$TreeMap$TreeMapSpliterator::toString();
}

void TreeMap$ValueSpliterator::finalize() {
	this->$TreeMap$TreeMapSpliterator::finalize();
}

void TreeMap$ValueSpliterator::init$($TreeMap* tree, $TreeMap$Entry* origin, $TreeMap$Entry* fence, int32_t side, int32_t est, int32_t expectedModCount) {
	$TreeMap$TreeMapSpliterator::init$(tree, origin, fence, side, est, expectedModCount);
}

$Spliterator* TreeMap$ValueSpliterator::trySplit() {
	$useLocalCurrentObjectStackCache();
	if (this->est < 0) {
		getEstimate();
	}
	int32_t d = this->side;
	$var($TreeMap$Entry, e, this->current);
	$var($TreeMap$Entry, f, this->fence);
	$var($TreeMap$Entry, s, (e == nullptr || e == f) ? ($TreeMap$Entry*)nullptr : (d == 0) ? $nc(this->tree)->root : (d > 0) ? $nc(e)->right : (d < 0 && f != nullptr) ? $nc(f)->left : ($TreeMap$Entry*)nullptr);
	if (s != nullptr && s != e && s != f && $nc(this->tree)->compare(e->key, s->key) < 0) {
		this->side = 1;
		return $new(TreeMap$ValueSpliterator, this->tree, e, $set(this, current, s), -1, $usrAssign(this->est, 1), this->expectedModCount);
	}
	return nullptr;
}

void TreeMap$ValueSpliterator::forEachRemaining($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	if (this->est < 0) {
		getEstimate();
	}
	$var($TreeMap$Entry, f, this->fence);
	$var($TreeMap$Entry, e, nullptr);
	$var($TreeMap$Entry, p, nullptr);
	$var($TreeMap$Entry, pl, nullptr);
	bool var$0 = ($assign(e, this->current)) != nullptr;
	if (var$0 && e != f) {
		$set(this, current, f);
		bool var$2 = false;
		do {
			$nc(action)->accept($nc(e)->value);
			if (($assign(p, $nc(e)->right)) != nullptr) {
				while (($assign(pl, $nc(p)->left)) != nullptr) {
					$assign(p, pl);
				}
			} else {
				while (true) {
					bool var$1 = ($assign(p, e->parent)) != nullptr;
					if (!(var$1 && e == $nc(p)->right)) {
						break;
					}
					{
						$assign(e, p);
					}
				}
			}
			var$2 = ($assign(e, p)) != nullptr;
		} while (var$2 && e != f);
		if ($nc(this->tree)->modCount != this->expectedModCount) {
			$throwNew($ConcurrentModificationException);
		}
	}
}

bool TreeMap$ValueSpliterator::tryAdvance($Consumer* action) {
	$var($TreeMap$Entry, e, nullptr);
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	if (this->est < 0) {
		getEstimate();
	}
	bool var$0 = ($assign(e, this->current)) == nullptr;
	if (var$0 || e == this->fence) {
		return false;
	}
	$set(this, current, $TreeMap::successor(e));
	$nc(action)->accept($nc(e)->value);
	if ($nc(this->tree)->modCount != this->expectedModCount) {
		$throwNew($ConcurrentModificationException);
	}
	return true;
}

int32_t TreeMap$ValueSpliterator::characteristics() {
	return (this->side == 0 ? $Spliterator::SIZED : 0) | $Spliterator::ORDERED;
}

TreeMap$ValueSpliterator::TreeMap$ValueSpliterator() {
}

$Class* TreeMap$ValueSpliterator::load$($String* name, bool initialize) {
	$loadClass(TreeMap$ValueSpliterator, name, initialize, &_TreeMap$ValueSpliterator_ClassInfo_, allocate$TreeMap$ValueSpliterator);
	return class$;
}

$Class* TreeMap$ValueSpliterator::class$ = nullptr;

	} // util
} // java