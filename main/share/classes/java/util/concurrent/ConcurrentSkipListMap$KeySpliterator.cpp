#include <java/util/concurrent/ConcurrentSkipListMap$KeySpliterator.h>

#include <java/util/Comparator.h>
#include <java/util/Spliterator.h>
#include <java/util/concurrent/ConcurrentSkipListMap$CSLMSpliterator.h>
#include <java/util/concurrent/ConcurrentSkipListMap$Index.h>
#include <java/util/concurrent/ConcurrentSkipListMap$Node.h>
#include <java/util/concurrent/ConcurrentSkipListMap.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef CONCURRENT
#undef DISTINCT
#undef NONNULL
#undef ORDERED
#undef SORTED

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Comparator = ::java::util::Comparator;
using $Spliterator = ::java::util::Spliterator;
using $ConcurrentSkipListMap = ::java::util::concurrent::ConcurrentSkipListMap;
using $ConcurrentSkipListMap$CSLMSpliterator = ::java::util::concurrent::ConcurrentSkipListMap$CSLMSpliterator;
using $ConcurrentSkipListMap$Index = ::java::util::concurrent::ConcurrentSkipListMap$Index;
using $ConcurrentSkipListMap$Node = ::java::util::concurrent::ConcurrentSkipListMap$Node;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {
		namespace concurrent {

$MethodInfo _ConcurrentSkipListMap$KeySpliterator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*estimateSize", "()J", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/Comparator;Ljava/util/concurrent/ConcurrentSkipListMap$Index;Ljava/util/concurrent/ConcurrentSkipListMap$Node;Ljava/lang/Object;J)V", "(Ljava/util/Comparator<-TK;>;Ljava/util/concurrent/ConcurrentSkipListMap$Index<TK;TV;>;Ljava/util/concurrent/ConcurrentSkipListMap$Node<TK;TV;>;TK;J)V", 0, $method(ConcurrentSkipListMap$KeySpliterator, init$, void, $Comparator*, $ConcurrentSkipListMap$Index*, $ConcurrentSkipListMap$Node*, Object$*, int64_t)},
	{"characteristics", "()I", nullptr, $PUBLIC, $virtualMethod(ConcurrentSkipListMap$KeySpliterator, characteristics, int32_t)},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TK;>;)V", $PUBLIC, $virtualMethod(ConcurrentSkipListMap$KeySpliterator, forEachRemaining, void, $Consumer*)},
	{"getComparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<-TK;>;", $PUBLIC | $FINAL, $virtualMethod(ConcurrentSkipListMap$KeySpliterator, getComparator, $Comparator*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TK;>;)Z", $PUBLIC, $virtualMethod(ConcurrentSkipListMap$KeySpliterator, tryAdvance, bool, $Consumer*)},
	{"trySplit", "()Ljava/util/concurrent/ConcurrentSkipListMap$KeySpliterator;", "()Ljava/util/concurrent/ConcurrentSkipListMap$KeySpliterator<TK;TV;>;", $PUBLIC, $virtualMethod(ConcurrentSkipListMap$KeySpliterator, trySplit, $Spliterator*)},
	{}
};

$InnerClassInfo _ConcurrentSkipListMap$KeySpliterator_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentSkipListMap$KeySpliterator", "java.util.concurrent.ConcurrentSkipListMap", "KeySpliterator", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentSkipListMap$CSLMSpliterator", "java.util.concurrent.ConcurrentSkipListMap", "CSLMSpliterator", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentSkipListMap$KeySpliterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentSkipListMap$KeySpliterator",
	"java.util.concurrent.ConcurrentSkipListMap$CSLMSpliterator",
	"java.util.Spliterator",
	nullptr,
	_ConcurrentSkipListMap$KeySpliterator_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/concurrent/ConcurrentSkipListMap$CSLMSpliterator<TK;TV;>;Ljava/util/Spliterator<TK;>;",
	nullptr,
	_ConcurrentSkipListMap$KeySpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentSkipListMap"
};

$Object* allocate$ConcurrentSkipListMap$KeySpliterator($Class* clazz) {
	return $of($alloc(ConcurrentSkipListMap$KeySpliterator));
}

int64_t ConcurrentSkipListMap$KeySpliterator::estimateSize() {
	 return this->$ConcurrentSkipListMap$CSLMSpliterator::estimateSize();
}

int32_t ConcurrentSkipListMap$KeySpliterator::hashCode() {
	 return this->$ConcurrentSkipListMap$CSLMSpliterator::hashCode();
}

bool ConcurrentSkipListMap$KeySpliterator::equals(Object$* obj) {
	 return this->$ConcurrentSkipListMap$CSLMSpliterator::equals(obj);
}

$Object* ConcurrentSkipListMap$KeySpliterator::clone() {
	 return this->$ConcurrentSkipListMap$CSLMSpliterator::clone();
}

$String* ConcurrentSkipListMap$KeySpliterator::toString() {
	 return this->$ConcurrentSkipListMap$CSLMSpliterator::toString();
}

void ConcurrentSkipListMap$KeySpliterator::finalize() {
	this->$ConcurrentSkipListMap$CSLMSpliterator::finalize();
}

void ConcurrentSkipListMap$KeySpliterator::init$($Comparator* comparator, $ConcurrentSkipListMap$Index* row, $ConcurrentSkipListMap$Node* origin, Object$* fence, int64_t est) {
	$ConcurrentSkipListMap$CSLMSpliterator::init$(comparator, row, origin, fence, est);
}

$Spliterator* ConcurrentSkipListMap$KeySpliterator::trySplit() {
	$useLocalCurrentObjectStackCache();
	$var($ConcurrentSkipListMap$Node, e, nullptr);
	$var($Object, ek, nullptr);
	$var($Comparator, cmp, this->comparator);
	$var($Object, f, this->fence);
	bool var$0 = ($assign(e, this->current)) != nullptr;
	if (var$0 && ($assign(ek, $nc(e)->key)) != nullptr) {
		{
			$var($ConcurrentSkipListMap$Index, q, this->row);
			for (; q != nullptr; $assign(q, ($set(this, row, $nc(q)->down)))) {
				$var($ConcurrentSkipListMap$Index, s, nullptr);
				$var($ConcurrentSkipListMap$Node, b, nullptr);
				$var($ConcurrentSkipListMap$Node, n, nullptr);
				$var($Object, sk, nullptr);
				bool var$6 = ($assign(s, q->right)) != nullptr;
				bool var$5 = var$6 && ($assign(b, $nc(s)->node)) != nullptr;
				bool var$4 = var$5 && ($assign(n, $nc(b)->next)) != nullptr;
				bool var$3 = var$4 && $nc(n)->val != nullptr;
				bool var$2 = var$3 && ($assign(sk, n->key)) != nullptr;
				bool var$1 = var$2 && $ConcurrentSkipListMap::cpr(cmp, sk, ek) > 0;
				if (var$1 && (f == nullptr || $ConcurrentSkipListMap::cpr(cmp, sk, f) < 0)) {
					$set(this, current, n);
					$var($ConcurrentSkipListMap$Index, r, q->down);
					$set(this, row, ($nc(s)->right != nullptr) ? s : $nc(s)->down);
					this->est -= (int64_t)((uint64_t)this->est >> 2);
					return $new(ConcurrentSkipListMap$KeySpliterator, cmp, r, e, sk, this->est);
				}
			}
		}
	}
	return nullptr;
}

void ConcurrentSkipListMap$KeySpliterator::forEachRemaining($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($Comparator, cmp, this->comparator);
	$var($Object, f, this->fence);
	$var($ConcurrentSkipListMap$Node, e, this->current);
	$set(this, current, nullptr);
	for (; e != nullptr; $assign(e, $nc(e)->next)) {
		$var($Object, k, nullptr);
		bool var$0 = ($assign(k, e->key)) != nullptr && f != nullptr;
		if (var$0 && $ConcurrentSkipListMap::cpr(cmp, f, k) <= 0) {
			break;
		}
		if (e->val != nullptr) {
			$nc(action)->accept(k);
		}
	}
}

bool ConcurrentSkipListMap$KeySpliterator::tryAdvance($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($Comparator, cmp, this->comparator);
	$var($Object, f, this->fence);
	$var($ConcurrentSkipListMap$Node, e, this->current);
	for (; e != nullptr; $assign(e, $nc(e)->next)) {
		$var($Object, k, nullptr);
		bool var$0 = ($assign(k, e->key)) != nullptr && f != nullptr;
		if (var$0 && $ConcurrentSkipListMap::cpr(cmp, f, k) <= 0) {
			$assign(e, nullptr);
			break;
		}
		if (e->val != nullptr) {
			$set(this, current, e->next);
			$nc(action)->accept(k);
			return true;
		}
	}
	$set(this, current, e);
	return false;
}

int32_t ConcurrentSkipListMap$KeySpliterator::characteristics() {
	return ((($Spliterator::DISTINCT | $Spliterator::SORTED) | $Spliterator::ORDERED) | $Spliterator::CONCURRENT) | $Spliterator::NONNULL;
}

$Comparator* ConcurrentSkipListMap$KeySpliterator::getComparator() {
	return this->comparator;
}

ConcurrentSkipListMap$KeySpliterator::ConcurrentSkipListMap$KeySpliterator() {
}

$Class* ConcurrentSkipListMap$KeySpliterator::load$($String* name, bool initialize) {
	$loadClass(ConcurrentSkipListMap$KeySpliterator, name, initialize, &_ConcurrentSkipListMap$KeySpliterator_ClassInfo_, allocate$ConcurrentSkipListMap$KeySpliterator);
	return class$;
}

$Class* ConcurrentSkipListMap$KeySpliterator::class$ = nullptr;

		} // concurrent
	} // util
} // java