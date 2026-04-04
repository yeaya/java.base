#include <java/util/TreeMap$NavigableSubMap$DescendingSubMapEntryIterator.h>
#include <java/util/TreeMap$Entry.h>
#include <java/util/TreeMap$NavigableSubMap$SubMapIterator.h>
#include <java/util/TreeMap$NavigableSubMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TreeMap$Entry = ::java::util::TreeMap$Entry;
using $TreeMap$NavigableSubMap = ::java::util::TreeMap$NavigableSubMap;
using $TreeMap$NavigableSubMap$SubMapIterator = ::java::util::TreeMap$NavigableSubMap$SubMapIterator;

namespace java {
	namespace util {

void TreeMap$NavigableSubMap$DescendingSubMapEntryIterator::init$($TreeMap$NavigableSubMap* this$0, $TreeMap$Entry* last, $TreeMap$Entry* fence) {
	$set(this, this$0, this$0);
	$TreeMap$NavigableSubMap$SubMapIterator::init$(this$0, last, fence);
}

$Object* TreeMap$NavigableSubMap$DescendingSubMapEntryIterator::next() {
	return prevEntry();
}

void TreeMap$NavigableSubMap$DescendingSubMapEntryIterator::remove() {
	removeDescending();
}

TreeMap$NavigableSubMap$DescendingSubMapEntryIterator::TreeMap$NavigableSubMap$DescendingSubMapEntryIterator() {
}

$Class* TreeMap$NavigableSubMap$DescendingSubMapEntryIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/TreeMap$NavigableSubMap;", nullptr, $FINAL | $SYNTHETIC, $field(TreeMap$NavigableSubMap$DescendingSubMapEntryIterator, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/TreeMap$NavigableSubMap;Ljava/util/TreeMap$Entry;Ljava/util/TreeMap$Entry;)V", "(Ljava/util/TreeMap$Entry<TK;TV;>;Ljava/util/TreeMap$Entry<TK;TV;>;)V", 0, $method(TreeMap$NavigableSubMap$DescendingSubMapEntryIterator, init$, void, $TreeMap$NavigableSubMap*, $TreeMap$Entry*, $TreeMap$Entry*)},
		{"next", "()Ljava/util/Map$Entry;", "()Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC, $virtualMethod(TreeMap$NavigableSubMap$DescendingSubMapEntryIterator, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(TreeMap$NavigableSubMap$DescendingSubMapEntryIterator, remove, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.TreeMap$NavigableSubMap", "java.util.TreeMap", "NavigableSubMap", $STATIC | $ABSTRACT},
		{"java.util.TreeMap$NavigableSubMap$DescendingSubMapEntryIterator", "java.util.TreeMap$NavigableSubMap", "DescendingSubMapEntryIterator", $FINAL},
		{"java.util.TreeMap$NavigableSubMap$SubMapIterator", "java.util.TreeMap$NavigableSubMap", "SubMapIterator", $ABSTRACT},
		{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.TreeMap$NavigableSubMap$DescendingSubMapEntryIterator",
		"java.util.TreeMap$NavigableSubMap$SubMapIterator",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/TreeMap$NavigableSubMap<TK;TV;>.SubMapIterator<Ljava/util/Map$Entry<TK;TV;>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.TreeMap"
	};
	$loadClass(TreeMap$NavigableSubMap$DescendingSubMapEntryIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TreeMap$NavigableSubMap$DescendingSubMapEntryIterator);
	});
	return class$;
}

$Class* TreeMap$NavigableSubMap$DescendingSubMapEntryIterator::class$ = nullptr;

	} // util
} // java