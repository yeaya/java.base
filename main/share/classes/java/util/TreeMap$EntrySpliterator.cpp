#include <java/util/TreeMap$EntrySpliterator.h>

#include <java/io/Serializable.h>
#include <java/lang/Comparable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/SerializedLambda.h>
#include <java/util/Comparator.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/Map$Entry.h>
#include <java/util/Spliterator.h>
#include <java/util/TreeMap$Entry.h>
#include <java/util/TreeMap$TreeMapSpliterator.h>
#include <java/util/TreeMap.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef DISTINCT
#undef ORDERED
#undef SIZED
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
using $Comparator = ::java::util::Comparator;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $Map$Entry = ::java::util::Map$Entry;
using $Spliterator = ::java::util::Spliterator;
using $TreeMap = ::java::util::TreeMap;
using $TreeMap$Entry = ::java::util::TreeMap$Entry;
using $TreeMap$TreeMapSpliterator = ::java::util::TreeMap$TreeMapSpliterator;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

class TreeMap$EntrySpliterator$$Lambda$lambda$getComparator$d5a01062$1 : public $Comparator, public $Serializable {
	$class(TreeMap$EntrySpliterator$$Lambda$lambda$getComparator$d5a01062$1, $NO_CLASS_INIT, $Comparator, $Serializable)
public:
	void init$() {
	}
	virtual int32_t compare(Object$* e1, Object$* e2) override {
		 return TreeMap$EntrySpliterator::lambda$getComparator$d5a01062$1($cast($Map$Entry, e1), $cast($Map$Entry, e2));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TreeMap$EntrySpliterator$$Lambda$lambda$getComparator$d5a01062$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TreeMap$EntrySpliterator$$Lambda$lambda$getComparator$d5a01062$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TreeMap$EntrySpliterator$$Lambda$lambda$getComparator$d5a01062$1::*)()>(&TreeMap$EntrySpliterator$$Lambda$lambda$getComparator$d5a01062$1::init$))},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{}
};
$ClassInfo TreeMap$EntrySpliterator$$Lambda$lambda$getComparator$d5a01062$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.TreeMap$EntrySpliterator$$Lambda$lambda$getComparator$d5a01062$1",
	"java.lang.Object",
	"java.util.Comparator,java.io.Serializable",
	nullptr,
	methodInfos
};
$Class* TreeMap$EntrySpliterator$$Lambda$lambda$getComparator$d5a01062$1::load$($String* name, bool initialize) {
	$loadClass(TreeMap$EntrySpliterator$$Lambda$lambda$getComparator$d5a01062$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TreeMap$EntrySpliterator$$Lambda$lambda$getComparator$d5a01062$1::class$ = nullptr;

$MethodInfo _TreeMap$EntrySpliterator_MethodInfo_[] = {
	{"$deserializeLambda$", "(Ljava/lang/invoke/SerializedLambda;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($SerializedLambda*)>(&TreeMap$EntrySpliterator::$deserializeLambda$))},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*estimateSize", "()J", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/TreeMap;Ljava/util/TreeMap$Entry;Ljava/util/TreeMap$Entry;III)V", "(Ljava/util/TreeMap<TK;TV;>;Ljava/util/TreeMap$Entry<TK;TV;>;Ljava/util/TreeMap$Entry<TK;TV;>;III)V", 0, $method(static_cast<void(TreeMap$EntrySpliterator::*)($TreeMap*,$TreeMap$Entry*,$TreeMap$Entry*,int32_t,int32_t,int32_t)>(&TreeMap$EntrySpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-Ljava/util/Map$Entry<TK;TV;>;>;)V", $PUBLIC},
	{"getComparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<Ljava/util/Map$Entry<TK;TV;>;>;", $PUBLIC},
	{"lambda$getComparator$d5a01062$1", "(Ljava/util/Map$Entry;Ljava/util/Map$Entry;)I", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)($Map$Entry*,$Map$Entry*)>(&TreeMap$EntrySpliterator::lambda$getComparator$d5a01062$1))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-Ljava/util/Map$Entry<TK;TV;>;>;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/TreeMap$EntrySpliterator;", "()Ljava/util/TreeMap$EntrySpliterator<TK;TV;>;", $PUBLIC},
	{}
};

$InnerClassInfo _TreeMap$EntrySpliterator_InnerClassesInfo_[] = {
	{"java.util.TreeMap$EntrySpliterator", "java.util.TreeMap", "EntrySpliterator", $STATIC | $FINAL},
	{"java.util.TreeMap$TreeMapSpliterator", "java.util.TreeMap", "TreeMapSpliterator", $STATIC},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TreeMap$EntrySpliterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.TreeMap$EntrySpliterator",
	"java.util.TreeMap$TreeMapSpliterator",
	"java.util.Spliterator",
	nullptr,
	_TreeMap$EntrySpliterator_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/TreeMap$TreeMapSpliterator<TK;TV;>;Ljava/util/Spliterator<Ljava/util/Map$Entry<TK;TV;>;>;",
	nullptr,
	_TreeMap$EntrySpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.TreeMap"
};

$Object* allocate$TreeMap$EntrySpliterator($Class* clazz) {
	return $of($alloc(TreeMap$EntrySpliterator));
}

int64_t TreeMap$EntrySpliterator::estimateSize() {
	 return this->$TreeMap$TreeMapSpliterator::estimateSize();
}

int32_t TreeMap$EntrySpliterator::hashCode() {
	 return this->$TreeMap$TreeMapSpliterator::hashCode();
}

bool TreeMap$EntrySpliterator::equals(Object$* obj) {
	 return this->$TreeMap$TreeMapSpliterator::equals(obj);
}

$Object* TreeMap$EntrySpliterator::clone() {
	 return this->$TreeMap$TreeMapSpliterator::clone();
}

$String* TreeMap$EntrySpliterator::toString() {
	 return this->$TreeMap$TreeMapSpliterator::toString();
}

void TreeMap$EntrySpliterator::finalize() {
	this->$TreeMap$TreeMapSpliterator::finalize();
}

void TreeMap$EntrySpliterator::init$($TreeMap* tree, $TreeMap$Entry* origin, $TreeMap$Entry* fence, int32_t side, int32_t est, int32_t expectedModCount) {
	$TreeMap$TreeMapSpliterator::init$(tree, origin, fence, side, est, expectedModCount);
}

$Spliterator* TreeMap$EntrySpliterator::trySplit() {
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
		return $new(TreeMap$EntrySpliterator, this->tree, e, $set(this, current, s), -1, $usrAssign(this->est, 1), this->expectedModCount);
	}
	return nullptr;
}

void TreeMap$EntrySpliterator::forEachRemaining($Consumer* action) {
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
			$nc(action)->accept(e);
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

bool TreeMap$EntrySpliterator::tryAdvance($Consumer* action) {
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
	$nc(action)->accept(e);
	if ($nc(this->tree)->modCount != this->expectedModCount) {
		$throwNew($ConcurrentModificationException);
	}
	return true;
}

int32_t TreeMap$EntrySpliterator::characteristics() {
	return (((this->side == 0 ? $Spliterator::SIZED : 0) | $Spliterator::DISTINCT) | $Spliterator::SORTED) | $Spliterator::ORDERED;
}

$Comparator* TreeMap$EntrySpliterator::getComparator() {
	if ($nc(this->tree)->comparator$ != nullptr) {
		return $Map$Entry::comparingByKey($nc(this->tree)->comparator$);
	} else {
		return $cast($Comparator, $cast($Serializable, static_cast<$Comparator*>($new(TreeMap$EntrySpliterator$$Lambda$lambda$getComparator$d5a01062$1))));
	}
}

$Object* TreeMap$EntrySpliterator::$deserializeLambda$($SerializedLambda* lambda) {
	$init(TreeMap$EntrySpliterator);
	$useLocalCurrentObjectStackCache();
	{
		$var($String, s117542$, $nc(lambda)->getImplMethodName());
		int32_t tmp117542$ = -1;
		switch ($nc(s117542$)->hashCode()) {
		case 0x609257FD:
			{
				if (s117542$->equals("lambda$getComparator$d5a01062$1"_s)) {
					tmp117542$ = 0;
				}
				break;
			}
		}
		switch (tmp117542$) {
		case 0:
			{
				bool var$4 = lambda->getImplMethodKind() == 6;
				bool var$3 = var$4 && $nc($of($(lambda->getFunctionalInterfaceClass())))->equals("java/util/Comparator"_s);
				bool var$2 = var$3 && $nc($of($(lambda->getFunctionalInterfaceMethodName())))->equals("compare"_s);
				bool var$1 = var$2 && $nc($of($(lambda->getFunctionalInterfaceMethodSignature())))->equals("(Ljava/lang/Object;Ljava/lang/Object;)I"_s);
				bool var$0 = var$1 && $nc($of($(lambda->getImplClass())))->equals("java/util/TreeMap$EntrySpliterator"_s);
				if (var$0 && $nc($of($(lambda->getImplMethodSignature())))->equals("(Ljava/util/Map$Entry;Ljava/util/Map$Entry;)I"_s)) {
					return $of(static_cast<$Comparator*>($new(TreeMap$EntrySpliterator$$Lambda$lambda$getComparator$d5a01062$1)));
				}
				break;
			}
		}
	}
	$throwNew($IllegalArgumentException, "Invalid lambda deserialization"_s);
}

int32_t TreeMap$EntrySpliterator::lambda$getComparator$d5a01062$1($Map$Entry* e1, $Map$Entry* e2) {
	$init(TreeMap$EntrySpliterator);
	$useLocalCurrentObjectStackCache();
	$var($Comparable, k1, $cast($Comparable, $nc(e1)->getKey()));
	return $nc(k1)->compareTo($($nc(e2)->getKey()));
}

TreeMap$EntrySpliterator::TreeMap$EntrySpliterator() {
}

$Class* TreeMap$EntrySpliterator::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TreeMap$EntrySpliterator$$Lambda$lambda$getComparator$d5a01062$1::classInfo$.name)) {
			return TreeMap$EntrySpliterator$$Lambda$lambda$getComparator$d5a01062$1::load$(name, initialize);
		}
	}
	$loadClass(TreeMap$EntrySpliterator, name, initialize, &_TreeMap$EntrySpliterator_ClassInfo_, allocate$TreeMap$EntrySpliterator);
	return class$;
}

$Class* TreeMap$EntrySpliterator::class$ = nullptr;

	} // util
} // java