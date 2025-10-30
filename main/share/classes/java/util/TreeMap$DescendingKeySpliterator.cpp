#include <java/util/TreeMap$DescendingKeySpliterator.h>

#include <java/util/ConcurrentModificationException.h>
#include <java/util/Spliterator.h>
#include <java/util/TreeMap$Entry.h>
#include <java/util/TreeMap$TreeMapSpliterator.h>
#include <java/util/TreeMap.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef DISTINCT
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

$MethodInfo _TreeMap$DescendingKeySpliterator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*estimateSize", "()J", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/TreeMap;Ljava/util/TreeMap$Entry;Ljava/util/TreeMap$Entry;III)V", "(Ljava/util/TreeMap<TK;TV;>;Ljava/util/TreeMap$Entry<TK;TV;>;Ljava/util/TreeMap$Entry<TK;TV;>;III)V", 0, $method(static_cast<void(TreeMap$DescendingKeySpliterator::*)($TreeMap*,$TreeMap$Entry*,$TreeMap$Entry*,int32_t,int32_t,int32_t)>(&TreeMap$DescendingKeySpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TK;>;)V", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TK;>;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/TreeMap$DescendingKeySpliterator;", "()Ljava/util/TreeMap$DescendingKeySpliterator<TK;TV;>;", $PUBLIC},
	{}
};

$InnerClassInfo _TreeMap$DescendingKeySpliterator_InnerClassesInfo_[] = {
	{"java.util.TreeMap$DescendingKeySpliterator", "java.util.TreeMap", "DescendingKeySpliterator", $STATIC | $FINAL},
	{"java.util.TreeMap$TreeMapSpliterator", "java.util.TreeMap", "TreeMapSpliterator", $STATIC},
	{}
};

$ClassInfo _TreeMap$DescendingKeySpliterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.TreeMap$DescendingKeySpliterator",
	"java.util.TreeMap$TreeMapSpliterator",
	"java.util.Spliterator",
	nullptr,
	_TreeMap$DescendingKeySpliterator_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/TreeMap$TreeMapSpliterator<TK;TV;>;Ljava/util/Spliterator<TK;>;",
	nullptr,
	_TreeMap$DescendingKeySpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.TreeMap"
};

$Object* allocate$TreeMap$DescendingKeySpliterator($Class* clazz) {
	return $of($alloc(TreeMap$DescendingKeySpliterator));
}

int64_t TreeMap$DescendingKeySpliterator::estimateSize() {
	 return this->$TreeMap$TreeMapSpliterator::estimateSize();
}

int32_t TreeMap$DescendingKeySpliterator::hashCode() {
	 return this->$TreeMap$TreeMapSpliterator::hashCode();
}

bool TreeMap$DescendingKeySpliterator::equals(Object$* obj) {
	 return this->$TreeMap$TreeMapSpliterator::equals(obj);
}

$Object* TreeMap$DescendingKeySpliterator::clone() {
	 return this->$TreeMap$TreeMapSpliterator::clone();
}

$String* TreeMap$DescendingKeySpliterator::toString() {
	 return this->$TreeMap$TreeMapSpliterator::toString();
}

void TreeMap$DescendingKeySpliterator::finalize() {
	this->$TreeMap$TreeMapSpliterator::finalize();
}

void TreeMap$DescendingKeySpliterator::init$($TreeMap* tree, $TreeMap$Entry* origin, $TreeMap$Entry* fence, int32_t side, int32_t est, int32_t expectedModCount) {
	$TreeMap$TreeMapSpliterator::init$(tree, origin, fence, side, est, expectedModCount);
}

$Spliterator* TreeMap$DescendingKeySpliterator::trySplit() {
	$useLocalCurrentObjectStackCache();
	if (this->est < 0) {
		getEstimate();
	}
	int32_t d = this->side;
	$var($TreeMap$Entry, e, this->current);
	$var($TreeMap$Entry, f, this->fence);
	$var($TreeMap$Entry, s, (e == nullptr || e == f) ? ($TreeMap$Entry*)nullptr : (d == 0) ? $nc(this->tree)->root : (d < 0) ? $nc(e)->left : (d > 0 && f != nullptr) ? $nc(f)->right : ($TreeMap$Entry*)nullptr);
	if (s != nullptr && s != e && s != f && $nc(this->tree)->compare(e->key, s->key) > 0) {
		this->side = 1;
		return $new(TreeMap$DescendingKeySpliterator, this->tree, e, $set(this, current, s), -1, $usrAssign(this->est, 1), this->expectedModCount);
	}
	return nullptr;
}

void TreeMap$DescendingKeySpliterator::forEachRemaining($Consumer* action) {
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
	$var($TreeMap$Entry, pr, nullptr);
	bool var$0 = ($assign(e, this->current)) != nullptr;
	if (var$0 && e != f) {
		$set(this, current, f);
		bool var$2 = false;
		do {
			$nc(action)->accept($nc(e)->key);
			if (($assign(p, $nc(e)->left)) != nullptr) {
				while (($assign(pr, $nc(p)->right)) != nullptr) {
					$assign(p, pr);
				}
			} else {
				while (true) {
					bool var$1 = ($assign(p, e->parent)) != nullptr;
					if (!(var$1 && e == $nc(p)->left)) {
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

bool TreeMap$DescendingKeySpliterator::tryAdvance($Consumer* action) {
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
	$set(this, current, $TreeMap::predecessor(e));
	$nc(action)->accept($nc(e)->key);
	if ($nc(this->tree)->modCount != this->expectedModCount) {
		$throwNew($ConcurrentModificationException);
	}
	return true;
}

int32_t TreeMap$DescendingKeySpliterator::characteristics() {
	return ((this->side == 0 ? $Spliterator::SIZED : 0) | $Spliterator::DISTINCT) | $Spliterator::ORDERED;
}

TreeMap$DescendingKeySpliterator::TreeMap$DescendingKeySpliterator() {
}

$Class* TreeMap$DescendingKeySpliterator::load$($String* name, bool initialize) {
	$loadClass(TreeMap$DescendingKeySpliterator, name, initialize, &_TreeMap$DescendingKeySpliterator_ClassInfo_, allocate$TreeMap$DescendingKeySpliterator);
	return class$;
}

$Class* TreeMap$DescendingKeySpliterator::class$ = nullptr;

	} // util
} // java