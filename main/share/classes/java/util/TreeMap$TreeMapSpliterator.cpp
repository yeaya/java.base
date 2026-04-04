#include <java/util/TreeMap$TreeMapSpliterator.h>
#include <java/util/TreeMap$Entry.h>
#include <java/util/TreeMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TreeMap = ::java::util::TreeMap;
using $TreeMap$Entry = ::java::util::TreeMap$Entry;

namespace java {
	namespace util {

void TreeMap$TreeMapSpliterator::init$($TreeMap* tree, $TreeMap$Entry* origin, $TreeMap$Entry* fence, int32_t side, int32_t est, int32_t expectedModCount) {
	$set(this, tree, tree);
	$set(this, current, origin);
	$set(this, fence, fence);
	this->side = side;
	this->est = est;
	this->expectedModCount = expectedModCount;
}

int32_t TreeMap$TreeMapSpliterator::getEstimate() {
	int32_t s = 0;
	$var($TreeMap, t, nullptr);
	if ((s = this->est) < 0) {
		if (($assign(t, this->tree)) != nullptr) {
			$set(this, current, (s == -1) ? $nc(t)->getFirstEntry() : $nc(t)->getLastEntry());
			s = (this->est = $nc(t)->size$);
			this->expectedModCount = t->modCount;
		} else {
			s = (this->est = 0);
		}
	}
	return s;
}

int64_t TreeMap$TreeMapSpliterator::estimateSize() {
	return (int64_t)getEstimate();
}

TreeMap$TreeMapSpliterator::TreeMap$TreeMapSpliterator() {
}

$Class* TreeMap$TreeMapSpliterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"tree", "Ljava/util/TreeMap;", "Ljava/util/TreeMap<TK;TV;>;", $FINAL, $field(TreeMap$TreeMapSpliterator, tree)},
		{"current", "Ljava/util/TreeMap$Entry;", "Ljava/util/TreeMap$Entry<TK;TV;>;", 0, $field(TreeMap$TreeMapSpliterator, current)},
		{"fence", "Ljava/util/TreeMap$Entry;", "Ljava/util/TreeMap$Entry<TK;TV;>;", 0, $field(TreeMap$TreeMapSpliterator, fence)},
		{"side", "I", nullptr, 0, $field(TreeMap$TreeMapSpliterator, side)},
		{"est", "I", nullptr, 0, $field(TreeMap$TreeMapSpliterator, est)},
		{"expectedModCount", "I", nullptr, 0, $field(TreeMap$TreeMapSpliterator, expectedModCount)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/TreeMap;Ljava/util/TreeMap$Entry;Ljava/util/TreeMap$Entry;III)V", "(Ljava/util/TreeMap<TK;TV;>;Ljava/util/TreeMap$Entry<TK;TV;>;Ljava/util/TreeMap$Entry<TK;TV;>;III)V", 0, $method(TreeMap$TreeMapSpliterator, init$, void, $TreeMap*, $TreeMap$Entry*, $TreeMap$Entry*, int32_t, int32_t, int32_t)},
		{"estimateSize", "()J", nullptr, $PUBLIC | $FINAL, $method(TreeMap$TreeMapSpliterator, estimateSize, int64_t)},
		{"getEstimate", "()I", nullptr, $FINAL, $method(TreeMap$TreeMapSpliterator, getEstimate, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.TreeMap$TreeMapSpliterator", "java.util.TreeMap", "TreeMapSpliterator", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.TreeMap$TreeMapSpliterator",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.TreeMap"
	};
	$loadClass(TreeMap$TreeMapSpliterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TreeMap$TreeMapSpliterator);
	});
	return class$;
}

$Class* TreeMap$TreeMapSpliterator::class$ = nullptr;

	} // util
} // java