#include <java/util/TreeMap$NavigableSubMap$SubMapKeyIterator.h>

#include <java/util/Comparator.h>
#include <java/util/SortedMap.h>
#include <java/util/Spliterator.h>
#include <java/util/TreeMap$Entry.h>
#include <java/util/TreeMap$NavigableSubMap$SubMapIterator.h>
#include <java/util/TreeMap$NavigableSubMap.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef DISTINCT
#undef MAX_VALUE
#undef ORDERED
#undef SORTED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $Spliterator = ::java::util::Spliterator;
using $TreeMap$Entry = ::java::util::TreeMap$Entry;
using $TreeMap$NavigableSubMap = ::java::util::TreeMap$NavigableSubMap;
using $TreeMap$NavigableSubMap$SubMapIterator = ::java::util::TreeMap$NavigableSubMap$SubMapIterator;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$FieldInfo _TreeMap$NavigableSubMap$SubMapKeyIterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/TreeMap$NavigableSubMap;", nullptr, $FINAL | $SYNTHETIC, $field(TreeMap$NavigableSubMap$SubMapKeyIterator, this$0)},
	{}
};

$MethodInfo _TreeMap$NavigableSubMap$SubMapKeyIterator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/TreeMap$NavigableSubMap;Ljava/util/TreeMap$Entry;Ljava/util/TreeMap$Entry;)V", "(Ljava/util/TreeMap$Entry<TK;TV;>;Ljava/util/TreeMap$Entry<TK;TV;>;)V", 0, $method(TreeMap$NavigableSubMap$SubMapKeyIterator, init$, void, $TreeMap$NavigableSubMap*, $TreeMap$Entry*, $TreeMap$Entry*)},
	{"characteristics", "()I", nullptr, $PUBLIC, $virtualMethod(TreeMap$NavigableSubMap$SubMapKeyIterator, characteristics, int32_t)},
	{"estimateSize", "()J", nullptr, $PUBLIC, $virtualMethod(TreeMap$NavigableSubMap$SubMapKeyIterator, estimateSize, int64_t)},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TK;>;)V", $PUBLIC, $virtualMethod(TreeMap$NavigableSubMap$SubMapKeyIterator, forEachRemaining, void, $Consumer*)},
	{"getComparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<-TK;>;", $PUBLIC | $FINAL, $virtualMethod(TreeMap$NavigableSubMap$SubMapKeyIterator, getComparator, $Comparator*)},
	{"next", "()Ljava/lang/Object;", "()TK;", $PUBLIC, $virtualMethod(TreeMap$NavigableSubMap$SubMapKeyIterator, next, $Object*)},
	{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(TreeMap$NavigableSubMap$SubMapKeyIterator, remove, void)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TK;>;)Z", $PUBLIC, $virtualMethod(TreeMap$NavigableSubMap$SubMapKeyIterator, tryAdvance, bool, $Consumer*)},
	{"trySplit", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TK;>;", $PUBLIC, $virtualMethod(TreeMap$NavigableSubMap$SubMapKeyIterator, trySplit, $Spliterator*)},
	{}
};

$InnerClassInfo _TreeMap$NavigableSubMap$SubMapKeyIterator_InnerClassesInfo_[] = {
	{"java.util.TreeMap$NavigableSubMap", "java.util.TreeMap", "NavigableSubMap", $STATIC | $ABSTRACT},
	{"java.util.TreeMap$NavigableSubMap$SubMapKeyIterator", "java.util.TreeMap$NavigableSubMap", "SubMapKeyIterator", $FINAL},
	{"java.util.TreeMap$NavigableSubMap$SubMapIterator", "java.util.TreeMap$NavigableSubMap", "SubMapIterator", $ABSTRACT},
	{}
};

$ClassInfo _TreeMap$NavigableSubMap$SubMapKeyIterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.TreeMap$NavigableSubMap$SubMapKeyIterator",
	"java.util.TreeMap$NavigableSubMap$SubMapIterator",
	"java.util.Spliterator",
	_TreeMap$NavigableSubMap$SubMapKeyIterator_FieldInfo_,
	_TreeMap$NavigableSubMap$SubMapKeyIterator_MethodInfo_,
	"Ljava/util/TreeMap$NavigableSubMap<TK;TV;>.SubMapIterator<TK;>;Ljava/util/Spliterator<TK;>;",
	nullptr,
	_TreeMap$NavigableSubMap$SubMapKeyIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.TreeMap"
};

$Object* allocate$TreeMap$NavigableSubMap$SubMapKeyIterator($Class* clazz) {
	return $of($alloc(TreeMap$NavigableSubMap$SubMapKeyIterator));
}

int32_t TreeMap$NavigableSubMap$SubMapKeyIterator::hashCode() {
	 return this->$TreeMap$NavigableSubMap$SubMapIterator::hashCode();
}

bool TreeMap$NavigableSubMap$SubMapKeyIterator::equals(Object$* obj) {
	 return this->$TreeMap$NavigableSubMap$SubMapIterator::equals(obj);
}

$Object* TreeMap$NavigableSubMap$SubMapKeyIterator::clone() {
	 return this->$TreeMap$NavigableSubMap$SubMapIterator::clone();
}

$String* TreeMap$NavigableSubMap$SubMapKeyIterator::toString() {
	 return this->$TreeMap$NavigableSubMap$SubMapIterator::toString();
}

void TreeMap$NavigableSubMap$SubMapKeyIterator::finalize() {
	this->$TreeMap$NavigableSubMap$SubMapIterator::finalize();
}

void TreeMap$NavigableSubMap$SubMapKeyIterator::init$($TreeMap$NavigableSubMap* this$0, $TreeMap$Entry* first, $TreeMap$Entry* fence) {
	$set(this, this$0, this$0);
	$TreeMap$NavigableSubMap$SubMapIterator::init$(this$0, first, fence);
}

$Object* TreeMap$NavigableSubMap$SubMapKeyIterator::next() {
	return $of($nc($(nextEntry()))->key);
}

void TreeMap$NavigableSubMap$SubMapKeyIterator::remove() {
	removeAscending();
}

$Spliterator* TreeMap$NavigableSubMap$SubMapKeyIterator::trySplit() {
	return nullptr;
}

void TreeMap$NavigableSubMap$SubMapKeyIterator::forEachRemaining($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	while (hasNext()) {
		$nc(action)->accept($(next()));
	}
}

bool TreeMap$NavigableSubMap$SubMapKeyIterator::tryAdvance($Consumer* action) {
	if (hasNext()) {
		$nc(action)->accept($(next()));
		return true;
	}
	return false;
}

int64_t TreeMap$NavigableSubMap$SubMapKeyIterator::estimateSize() {
	return $Long::MAX_VALUE;
}

int32_t TreeMap$NavigableSubMap$SubMapKeyIterator::characteristics() {
	return ($Spliterator::DISTINCT | $Spliterator::ORDERED) | $Spliterator::SORTED;
}

$Comparator* TreeMap$NavigableSubMap$SubMapKeyIterator::getComparator() {
	return this->this$0->comparator();
}

TreeMap$NavigableSubMap$SubMapKeyIterator::TreeMap$NavigableSubMap$SubMapKeyIterator() {
}

$Class* TreeMap$NavigableSubMap$SubMapKeyIterator::load$($String* name, bool initialize) {
	$loadClass(TreeMap$NavigableSubMap$SubMapKeyIterator, name, initialize, &_TreeMap$NavigableSubMap$SubMapKeyIterator_ClassInfo_, allocate$TreeMap$NavigableSubMap$SubMapKeyIterator);
	return class$;
}

$Class* TreeMap$NavigableSubMap$SubMapKeyIterator::class$ = nullptr;

	} // util
} // java