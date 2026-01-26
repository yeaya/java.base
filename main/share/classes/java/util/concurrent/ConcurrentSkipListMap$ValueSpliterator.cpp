#include <java/util/concurrent/ConcurrentSkipListMap$ValueSpliterator.h>

#include <java/util/Comparator.h>
#include <java/util/Spliterator.h>
#include <java/util/concurrent/ConcurrentSkipListMap$CSLMSpliterator.h>
#include <java/util/concurrent/ConcurrentSkipListMap$Index.h>
#include <java/util/concurrent/ConcurrentSkipListMap$Node.h>
#include <java/util/concurrent/ConcurrentSkipListMap.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef CONCURRENT
#undef NONNULL
#undef ORDERED

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

$MethodInfo _ConcurrentSkipListMap$ValueSpliterator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*estimateSize", "()J", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/Comparator;Ljava/util/concurrent/ConcurrentSkipListMap$Index;Ljava/util/concurrent/ConcurrentSkipListMap$Node;Ljava/lang/Object;J)V", "(Ljava/util/Comparator<-TK;>;Ljava/util/concurrent/ConcurrentSkipListMap$Index<TK;TV;>;Ljava/util/concurrent/ConcurrentSkipListMap$Node<TK;TV;>;TK;J)V", 0, $method(ConcurrentSkipListMap$ValueSpliterator, init$, void, $Comparator*, $ConcurrentSkipListMap$Index*, $ConcurrentSkipListMap$Node*, Object$*, int64_t)},
	{"characteristics", "()I", nullptr, $PUBLIC, $virtualMethod(ConcurrentSkipListMap$ValueSpliterator, characteristics, int32_t)},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TV;>;)V", $PUBLIC, $virtualMethod(ConcurrentSkipListMap$ValueSpliterator, forEachRemaining, void, $Consumer*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TV;>;)Z", $PUBLIC, $virtualMethod(ConcurrentSkipListMap$ValueSpliterator, tryAdvance, bool, $Consumer*)},
	{"trySplit", "()Ljava/util/concurrent/ConcurrentSkipListMap$ValueSpliterator;", "()Ljava/util/concurrent/ConcurrentSkipListMap$ValueSpliterator<TK;TV;>;", $PUBLIC, $virtualMethod(ConcurrentSkipListMap$ValueSpliterator, trySplit, $Spliterator*)},
	{}
};

$InnerClassInfo _ConcurrentSkipListMap$ValueSpliterator_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentSkipListMap$ValueSpliterator", "java.util.concurrent.ConcurrentSkipListMap", "ValueSpliterator", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentSkipListMap$CSLMSpliterator", "java.util.concurrent.ConcurrentSkipListMap", "CSLMSpliterator", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentSkipListMap$ValueSpliterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentSkipListMap$ValueSpliterator",
	"java.util.concurrent.ConcurrentSkipListMap$CSLMSpliterator",
	"java.util.Spliterator",
	nullptr,
	_ConcurrentSkipListMap$ValueSpliterator_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/concurrent/ConcurrentSkipListMap$CSLMSpliterator<TK;TV;>;Ljava/util/Spliterator<TV;>;",
	nullptr,
	_ConcurrentSkipListMap$ValueSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentSkipListMap"
};

$Object* allocate$ConcurrentSkipListMap$ValueSpliterator($Class* clazz) {
	return $of($alloc(ConcurrentSkipListMap$ValueSpliterator));
}

int64_t ConcurrentSkipListMap$ValueSpliterator::estimateSize() {
	 return this->$ConcurrentSkipListMap$CSLMSpliterator::estimateSize();
}

int32_t ConcurrentSkipListMap$ValueSpliterator::hashCode() {
	 return this->$ConcurrentSkipListMap$CSLMSpliterator::hashCode();
}

bool ConcurrentSkipListMap$ValueSpliterator::equals(Object$* obj) {
	 return this->$ConcurrentSkipListMap$CSLMSpliterator::equals(obj);
}

$Object* ConcurrentSkipListMap$ValueSpliterator::clone() {
	 return this->$ConcurrentSkipListMap$CSLMSpliterator::clone();
}

$String* ConcurrentSkipListMap$ValueSpliterator::toString() {
	 return this->$ConcurrentSkipListMap$CSLMSpliterator::toString();
}

void ConcurrentSkipListMap$ValueSpliterator::finalize() {
	this->$ConcurrentSkipListMap$CSLMSpliterator::finalize();
}

void ConcurrentSkipListMap$ValueSpliterator::init$($Comparator* comparator, $ConcurrentSkipListMap$Index* row, $ConcurrentSkipListMap$Node* origin, Object$* fence, int64_t est) {
	$ConcurrentSkipListMap$CSLMSpliterator::init$(comparator, row, origin, fence, est);
}

$Spliterator* ConcurrentSkipListMap$ValueSpliterator::trySplit() {
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
					return $new(ConcurrentSkipListMap$ValueSpliterator, cmp, r, e, sk, this->est);
				}
			}
		}
	}
	return nullptr;
}

void ConcurrentSkipListMap$ValueSpliterator::forEachRemaining($Consumer* action) {
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
		$var($Object, v, nullptr);
		bool var$0 = ($assign(k, e->key)) != nullptr && f != nullptr;
		if (var$0 && $ConcurrentSkipListMap::cpr(cmp, f, k) <= 0) {
			break;
		}
		if (($assign(v, e->val)) != nullptr) {
			$nc(action)->accept(v);
		}
	}
}

bool ConcurrentSkipListMap$ValueSpliterator::tryAdvance($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($Comparator, cmp, this->comparator);
	$var($Object, f, this->fence);
	$var($ConcurrentSkipListMap$Node, e, this->current);
	for (; e != nullptr; $assign(e, $nc(e)->next)) {
		$var($Object, k, nullptr);
		$var($Object, v, nullptr);
		bool var$0 = ($assign(k, e->key)) != nullptr && f != nullptr;
		if (var$0 && $ConcurrentSkipListMap::cpr(cmp, f, k) <= 0) {
			$assign(e, nullptr);
			break;
		}
		if (($assign(v, e->val)) != nullptr) {
			$set(this, current, e->next);
			$nc(action)->accept(v);
			return true;
		}
	}
	$set(this, current, e);
	return false;
}

int32_t ConcurrentSkipListMap$ValueSpliterator::characteristics() {
	return ($Spliterator::CONCURRENT | $Spliterator::ORDERED) | $Spliterator::NONNULL;
}

ConcurrentSkipListMap$ValueSpliterator::ConcurrentSkipListMap$ValueSpliterator() {
}

$Class* ConcurrentSkipListMap$ValueSpliterator::load$($String* name, bool initialize) {
	$loadClass(ConcurrentSkipListMap$ValueSpliterator, name, initialize, &_ConcurrentSkipListMap$ValueSpliterator_ClassInfo_, allocate$ConcurrentSkipListMap$ValueSpliterator);
	return class$;
}

$Class* ConcurrentSkipListMap$ValueSpliterator::class$ = nullptr;

		} // concurrent
	} // util
} // java