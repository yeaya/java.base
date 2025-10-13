#include <java/util/TreeMap$NavigableSubMap$DescendingSubMapKeyIterator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Spliterator.h>
#include <java/util/TreeMap$Entry.h>
#include <java/util/TreeMap$NavigableSubMap$SubMapIterator.h>
#include <java/util/TreeMap$NavigableSubMap.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef DISTINCT
#undef MAX_VALUE
#undef ORDERED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $TreeMap$Entry = ::java::util::TreeMap$Entry;
using $TreeMap$NavigableSubMap = ::java::util::TreeMap$NavigableSubMap;
using $TreeMap$NavigableSubMap$SubMapIterator = ::java::util::TreeMap$NavigableSubMap$SubMapIterator;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$FieldInfo _TreeMap$NavigableSubMap$DescendingSubMapKeyIterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/TreeMap$NavigableSubMap;", nullptr, $FINAL | $SYNTHETIC, $field(TreeMap$NavigableSubMap$DescendingSubMapKeyIterator, this$0)},
	{}
};

$MethodInfo _TreeMap$NavigableSubMap$DescendingSubMapKeyIterator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/TreeMap$NavigableSubMap;Ljava/util/TreeMap$Entry;Ljava/util/TreeMap$Entry;)V", "(Ljava/util/TreeMap$Entry<TK;TV;>;Ljava/util/TreeMap$Entry<TK;TV;>;)V", 0, $method(static_cast<void(TreeMap$NavigableSubMap$DescendingSubMapKeyIterator::*)($TreeMap$NavigableSubMap*,$TreeMap$Entry*,$TreeMap$Entry*)>(&TreeMap$NavigableSubMap$DescendingSubMapKeyIterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TK;>;)V", $PUBLIC},
	{"next", "()Ljava/lang/Object;", "()TK;", $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TK;>;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TK;>;", $PUBLIC},
	{}
};

$InnerClassInfo _TreeMap$NavigableSubMap$DescendingSubMapKeyIterator_InnerClassesInfo_[] = {
	{"java.util.TreeMap$NavigableSubMap", "java.util.TreeMap", "NavigableSubMap", $STATIC | $ABSTRACT},
	{"java.util.TreeMap$NavigableSubMap$DescendingSubMapKeyIterator", "java.util.TreeMap$NavigableSubMap", "DescendingSubMapKeyIterator", $FINAL},
	{"java.util.TreeMap$NavigableSubMap$SubMapIterator", "java.util.TreeMap$NavigableSubMap", "SubMapIterator", $ABSTRACT},
	{}
};

$ClassInfo _TreeMap$NavigableSubMap$DescendingSubMapKeyIterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.TreeMap$NavigableSubMap$DescendingSubMapKeyIterator",
	"java.util.TreeMap$NavigableSubMap$SubMapIterator",
	"java.util.Spliterator",
	_TreeMap$NavigableSubMap$DescendingSubMapKeyIterator_FieldInfo_,
	_TreeMap$NavigableSubMap$DescendingSubMapKeyIterator_MethodInfo_,
	"Ljava/util/TreeMap$NavigableSubMap<TK;TV;>.SubMapIterator<TK;>;Ljava/util/Spliterator<TK;>;",
	nullptr,
	_TreeMap$NavigableSubMap$DescendingSubMapKeyIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.TreeMap"
};

$Object* allocate$TreeMap$NavigableSubMap$DescendingSubMapKeyIterator($Class* clazz) {
	return $of($alloc(TreeMap$NavigableSubMap$DescendingSubMapKeyIterator));
}

int32_t TreeMap$NavigableSubMap$DescendingSubMapKeyIterator::hashCode() {
	 return this->$TreeMap$NavigableSubMap$SubMapIterator::hashCode();
}

bool TreeMap$NavigableSubMap$DescendingSubMapKeyIterator::equals(Object$* obj) {
	 return this->$TreeMap$NavigableSubMap$SubMapIterator::equals(obj);
}

$Object* TreeMap$NavigableSubMap$DescendingSubMapKeyIterator::clone() {
	 return this->$TreeMap$NavigableSubMap$SubMapIterator::clone();
}

$String* TreeMap$NavigableSubMap$DescendingSubMapKeyIterator::toString() {
	 return this->$TreeMap$NavigableSubMap$SubMapIterator::toString();
}

void TreeMap$NavigableSubMap$DescendingSubMapKeyIterator::finalize() {
	this->$TreeMap$NavigableSubMap$SubMapIterator::finalize();
}

void TreeMap$NavigableSubMap$DescendingSubMapKeyIterator::init$($TreeMap$NavigableSubMap* this$0, $TreeMap$Entry* last, $TreeMap$Entry* fence) {
	$set(this, this$0, this$0);
	$TreeMap$NavigableSubMap$SubMapIterator::init$(this$0, last, fence);
}

$Object* TreeMap$NavigableSubMap$DescendingSubMapKeyIterator::next() {
	return $of($nc($(prevEntry()))->key);
}

void TreeMap$NavigableSubMap$DescendingSubMapKeyIterator::remove() {
	removeDescending();
}

$Spliterator* TreeMap$NavigableSubMap$DescendingSubMapKeyIterator::trySplit() {
	return nullptr;
}

void TreeMap$NavigableSubMap$DescendingSubMapKeyIterator::forEachRemaining($Consumer* action) {
	while (hasNext()) {
		$nc(action)->accept($(next()));
	}
}

bool TreeMap$NavigableSubMap$DescendingSubMapKeyIterator::tryAdvance($Consumer* action) {
	if (hasNext()) {
		$nc(action)->accept($(next()));
		return true;
	}
	return false;
}

int64_t TreeMap$NavigableSubMap$DescendingSubMapKeyIterator::estimateSize() {
	return $Long::MAX_VALUE;
}

int32_t TreeMap$NavigableSubMap$DescendingSubMapKeyIterator::characteristics() {
	return $Spliterator::DISTINCT | $Spliterator::ORDERED;
}

TreeMap$NavigableSubMap$DescendingSubMapKeyIterator::TreeMap$NavigableSubMap$DescendingSubMapKeyIterator() {
}

$Class* TreeMap$NavigableSubMap$DescendingSubMapKeyIterator::load$($String* name, bool initialize) {
	$loadClass(TreeMap$NavigableSubMap$DescendingSubMapKeyIterator, name, initialize, &_TreeMap$NavigableSubMap$DescendingSubMapKeyIterator_ClassInfo_, allocate$TreeMap$NavigableSubMap$DescendingSubMapKeyIterator);
	return class$;
}

$Class* TreeMap$NavigableSubMap$DescendingSubMapKeyIterator::class$ = nullptr;

	} // util
} // java