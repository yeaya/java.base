#include <java/util/concurrent/ConcurrentSkipListMap$EntrySpliterator.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Comparable.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/SerializedLambda.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap$SimpleImmutableEntry.h>
#include <java/util/Comparator.h>
#include <java/util/Map$Entry.h>
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

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $SerializedLambda = ::java::lang::invoke::SerializedLambda;
using $AbstractMap$SimpleImmutableEntry = ::java::util::AbstractMap$SimpleImmutableEntry;
using $Comparator = ::java::util::Comparator;
using $Map$Entry = ::java::util::Map$Entry;
using $Spliterator = ::java::util::Spliterator;
using $ConcurrentSkipListMap = ::java::util::concurrent::ConcurrentSkipListMap;
using $ConcurrentSkipListMap$CSLMSpliterator = ::java::util::concurrent::ConcurrentSkipListMap$CSLMSpliterator;
using $ConcurrentSkipListMap$Index = ::java::util::concurrent::ConcurrentSkipListMap$Index;
using $ConcurrentSkipListMap$Node = ::java::util::concurrent::ConcurrentSkipListMap$Node;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {
		namespace concurrent {

class ConcurrentSkipListMap$EntrySpliterator$$Lambda$lambda$getComparator$d5a01062$1 : public $Comparator, public $Serializable {
	$class(ConcurrentSkipListMap$EntrySpliterator$$Lambda$lambda$getComparator$d5a01062$1, $NO_CLASS_INIT, $Comparator, $Serializable)
public:
virtual $Object0* toObject0$() const override {return ($Object0*)(void*)this;}
	void init$() {
	}
	virtual int32_t compare(Object$* e1, Object$* e2) override {
		 return ConcurrentSkipListMap$EntrySpliterator::lambda$getComparator$d5a01062$1($cast($Map$Entry, e1), $cast($Map$Entry, e2));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ConcurrentSkipListMap$EntrySpliterator$$Lambda$lambda$getComparator$d5a01062$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ConcurrentSkipListMap$EntrySpliterator$$Lambda$lambda$getComparator$d5a01062$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ConcurrentSkipListMap$EntrySpliterator$$Lambda$lambda$getComparator$d5a01062$1::*)()>(&ConcurrentSkipListMap$EntrySpliterator$$Lambda$lambda$getComparator$d5a01062$1::init$))},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{}
};
$ClassInfo ConcurrentSkipListMap$EntrySpliterator$$Lambda$lambda$getComparator$d5a01062$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.concurrent.ConcurrentSkipListMap$EntrySpliterator$$Lambda$lambda$getComparator$d5a01062$1",
	"java.lang.Object",
	"java.util.Comparator,java.io.Serializable",
	nullptr,
	methodInfos
};
$Class* ConcurrentSkipListMap$EntrySpliterator$$Lambda$lambda$getComparator$d5a01062$1::load$($String* name, bool initialize) {
	$loadClass(ConcurrentSkipListMap$EntrySpliterator$$Lambda$lambda$getComparator$d5a01062$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ConcurrentSkipListMap$EntrySpliterator$$Lambda$lambda$getComparator$d5a01062$1::class$ = nullptr;

$MethodInfo _ConcurrentSkipListMap$EntrySpliterator_MethodInfo_[] = {
	{"$deserializeLambda$", "(Ljava/lang/invoke/SerializedLambda;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($SerializedLambda*)>(&ConcurrentSkipListMap$EntrySpliterator::$deserializeLambda$))},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*estimateSize", "()J", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/Comparator;Ljava/util/concurrent/ConcurrentSkipListMap$Index;Ljava/util/concurrent/ConcurrentSkipListMap$Node;Ljava/lang/Object;J)V", "(Ljava/util/Comparator<-TK;>;Ljava/util/concurrent/ConcurrentSkipListMap$Index<TK;TV;>;Ljava/util/concurrent/ConcurrentSkipListMap$Node<TK;TV;>;TK;J)V", 0, $method(static_cast<void(ConcurrentSkipListMap$EntrySpliterator::*)($Comparator*,$ConcurrentSkipListMap$Index*,$ConcurrentSkipListMap$Node*,Object$*,int64_t)>(&ConcurrentSkipListMap$EntrySpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-Ljava/util/Map$Entry<TK;TV;>;>;)V", $PUBLIC},
	{"getComparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<Ljava/util/Map$Entry<TK;TV;>;>;", $PUBLIC | $FINAL},
	{"lambda$getComparator$d5a01062$1", "(Ljava/util/Map$Entry;Ljava/util/Map$Entry;)I", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)($Map$Entry*,$Map$Entry*)>(&ConcurrentSkipListMap$EntrySpliterator::lambda$getComparator$d5a01062$1))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-Ljava/util/Map$Entry<TK;TV;>;>;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/concurrent/ConcurrentSkipListMap$EntrySpliterator;", "()Ljava/util/concurrent/ConcurrentSkipListMap$EntrySpliterator<TK;TV;>;", $PUBLIC},
	{}
};

$InnerClassInfo _ConcurrentSkipListMap$EntrySpliterator_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentSkipListMap$EntrySpliterator", "java.util.concurrent.ConcurrentSkipListMap", "EntrySpliterator", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentSkipListMap$CSLMSpliterator", "java.util.concurrent.ConcurrentSkipListMap", "CSLMSpliterator", $STATIC | $ABSTRACT},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentSkipListMap$EntrySpliterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentSkipListMap$EntrySpliterator",
	"java.util.concurrent.ConcurrentSkipListMap$CSLMSpliterator",
	"java.util.Spliterator",
	nullptr,
	_ConcurrentSkipListMap$EntrySpliterator_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/concurrent/ConcurrentSkipListMap$CSLMSpliterator<TK;TV;>;Ljava/util/Spliterator<Ljava/util/Map$Entry<TK;TV;>;>;",
	nullptr,
	_ConcurrentSkipListMap$EntrySpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentSkipListMap"
};

$Object* allocate$ConcurrentSkipListMap$EntrySpliterator($Class* clazz) {
	return $of($alloc(ConcurrentSkipListMap$EntrySpliterator));
}

int64_t ConcurrentSkipListMap$EntrySpliterator::estimateSize() {
	 return this->$ConcurrentSkipListMap$CSLMSpliterator::estimateSize();
}

int32_t ConcurrentSkipListMap$EntrySpliterator::hashCode() {
	 return this->$ConcurrentSkipListMap$CSLMSpliterator::hashCode();
}

bool ConcurrentSkipListMap$EntrySpliterator::equals(Object$* obj) {
	 return this->$ConcurrentSkipListMap$CSLMSpliterator::equals(obj);
}

$Object* ConcurrentSkipListMap$EntrySpliterator::clone() {
	 return this->$ConcurrentSkipListMap$CSLMSpliterator::clone();
}

$String* ConcurrentSkipListMap$EntrySpliterator::toString() {
	 return this->$ConcurrentSkipListMap$CSLMSpliterator::toString();
}

void ConcurrentSkipListMap$EntrySpliterator::finalize() {
	this->$ConcurrentSkipListMap$CSLMSpliterator::finalize();
}

void ConcurrentSkipListMap$EntrySpliterator::init$($Comparator* comparator, $ConcurrentSkipListMap$Index* row, $ConcurrentSkipListMap$Node* origin, Object$* fence, int64_t est) {
	$ConcurrentSkipListMap$CSLMSpliterator::init$(comparator, row, origin, fence, est);
}

$Spliterator* ConcurrentSkipListMap$EntrySpliterator::trySplit() {
	$var($ConcurrentSkipListMap$Node, e, nullptr);
	$var($Object, ek, nullptr);
	$var($Comparator, cmp, this->comparator);
	$var($Object, f, this->fence);
	bool var$0 = ($assign(e, this->current)) != nullptr;
	if (var$0 && ($assign(ek, $nc(e)->key)) != nullptr) {
		{
			$var($ConcurrentSkipListMap$Index, q, this->row);
			for (; q != nullptr; $assign(q, ($assignField(this, row, $nc(q)->down)))) {
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
					return $new(ConcurrentSkipListMap$EntrySpliterator, cmp, r, e, sk, this->est);
				}
			}
		}
	}
	return nullptr;
}

void ConcurrentSkipListMap$EntrySpliterator::forEachRemaining($Consumer* action) {
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
			$nc(action)->accept($$new($AbstractMap$SimpleImmutableEntry, k, v));
		}
	}
}

bool ConcurrentSkipListMap$EntrySpliterator::tryAdvance($Consumer* action) {
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
			$nc(action)->accept($$new($AbstractMap$SimpleImmutableEntry, k, v));
			return true;
		}
	}
	$set(this, current, e);
	return false;
}

int32_t ConcurrentSkipListMap$EntrySpliterator::characteristics() {
	return ((($Spliterator::DISTINCT | $Spliterator::SORTED) | $Spliterator::ORDERED) | $Spliterator::CONCURRENT) | $Spliterator::NONNULL;
}

$Comparator* ConcurrentSkipListMap$EntrySpliterator::getComparator() {
	if (this->comparator != nullptr) {
		return $Map$Entry::comparingByKey(this->comparator);
	} else {
		return $cast($Comparator, $cast($Serializable, static_cast<$Comparator*>($new(ConcurrentSkipListMap$EntrySpliterator$$Lambda$lambda$getComparator$d5a01062$1))));
	}
}

$Object* ConcurrentSkipListMap$EntrySpliterator::$deserializeLambda$($SerializedLambda* lambda) {
	$init(ConcurrentSkipListMap$EntrySpliterator);
	{
		$var($String, s124769$, $nc(lambda)->getImplMethodName());
		int32_t tmp124769$ = -1;
		switch ($nc(s124769$)->hashCode()) {
		case 0x609257FD:
			{
				if (s124769$->equals("lambda$getComparator$d5a01062$1"_s)) {
					tmp124769$ = 0;
				}
				break;
			}
		}
		switch (tmp124769$) {
		case 0:
			{
				bool var$4 = lambda->getImplMethodKind() == 6;
				bool var$3 = var$4 && $nc($of($(lambda->getFunctionalInterfaceClass())))->equals("java/util/Comparator"_s);
				bool var$2 = var$3 && $nc($of($(lambda->getFunctionalInterfaceMethodName())))->equals("compare"_s);
				bool var$1 = var$2 && $nc($of($(lambda->getFunctionalInterfaceMethodSignature())))->equals("(Ljava/lang/Object;Ljava/lang/Object;)I"_s);
				bool var$0 = var$1 && $nc($of($(lambda->getImplClass())))->equals("java/util/concurrent/ConcurrentSkipListMap$EntrySpliterator"_s);
				if (var$0 && $nc($of($(lambda->getImplMethodSignature())))->equals("(Ljava/util/Map$Entry;Ljava/util/Map$Entry;)I"_s)) {
					return $of(static_cast<$Comparator*>($new(ConcurrentSkipListMap$EntrySpliterator$$Lambda$lambda$getComparator$d5a01062$1)));
				}
				break;
			}
		}
	}
	$throwNew($IllegalArgumentException, "Invalid lambda deserialization"_s);
}

int32_t ConcurrentSkipListMap$EntrySpliterator::lambda$getComparator$d5a01062$1($Map$Entry* e1, $Map$Entry* e2) {
	$init(ConcurrentSkipListMap$EntrySpliterator);
	$var($Comparable, k1, $cast($Comparable, $nc(e1)->getKey()));
	return $nc(k1)->compareTo($($nc(e2)->getKey()));
}

ConcurrentSkipListMap$EntrySpliterator::ConcurrentSkipListMap$EntrySpliterator() {
}

$Class* ConcurrentSkipListMap$EntrySpliterator::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ConcurrentSkipListMap$EntrySpliterator$$Lambda$lambda$getComparator$d5a01062$1::classInfo$.name)) {
			return ConcurrentSkipListMap$EntrySpliterator$$Lambda$lambda$getComparator$d5a01062$1::load$(name, initialize);
		}
	}
	$loadClass(ConcurrentSkipListMap$EntrySpliterator, name, initialize, &_ConcurrentSkipListMap$EntrySpliterator_ClassInfo_, allocate$ConcurrentSkipListMap$EntrySpliterator);
	return class$;
}

$Class* ConcurrentSkipListMap$EntrySpliterator::class$ = nullptr;

		} // concurrent
	} // util
} // java