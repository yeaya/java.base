#include <java/util/TreeMap$NavigableSubMap$SubMapEntryIterator.h>

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

$FieldInfo _TreeMap$NavigableSubMap$SubMapEntryIterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/TreeMap$NavigableSubMap;", nullptr, $FINAL | $SYNTHETIC, $field(TreeMap$NavigableSubMap$SubMapEntryIterator, this$0)},
	{}
};

$MethodInfo _TreeMap$NavigableSubMap$SubMapEntryIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/TreeMap$NavigableSubMap;Ljava/util/TreeMap$Entry;Ljava/util/TreeMap$Entry;)V", "(Ljava/util/TreeMap$Entry<TK;TV;>;Ljava/util/TreeMap$Entry<TK;TV;>;)V", 0, $method(static_cast<void(TreeMap$NavigableSubMap$SubMapEntryIterator::*)($TreeMap$NavigableSubMap*,$TreeMap$Entry*,$TreeMap$Entry*)>(&TreeMap$NavigableSubMap$SubMapEntryIterator::init$))},
	{"next", "()Ljava/util/Map$Entry;", "()Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TreeMap$NavigableSubMap$SubMapEntryIterator_InnerClassesInfo_[] = {
	{"java.util.TreeMap$NavigableSubMap", "java.util.TreeMap", "NavigableSubMap", $STATIC | $ABSTRACT},
	{"java.util.TreeMap$NavigableSubMap$SubMapEntryIterator", "java.util.TreeMap$NavigableSubMap", "SubMapEntryIterator", $FINAL},
	{"java.util.TreeMap$NavigableSubMap$SubMapIterator", "java.util.TreeMap$NavigableSubMap", "SubMapIterator", $ABSTRACT},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TreeMap$NavigableSubMap$SubMapEntryIterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.TreeMap$NavigableSubMap$SubMapEntryIterator",
	"java.util.TreeMap$NavigableSubMap$SubMapIterator",
	nullptr,
	_TreeMap$NavigableSubMap$SubMapEntryIterator_FieldInfo_,
	_TreeMap$NavigableSubMap$SubMapEntryIterator_MethodInfo_,
	"Ljava/util/TreeMap$NavigableSubMap<TK;TV;>.SubMapIterator<Ljava/util/Map$Entry<TK;TV;>;>;",
	nullptr,
	_TreeMap$NavigableSubMap$SubMapEntryIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.TreeMap"
};

$Object* allocate$TreeMap$NavigableSubMap$SubMapEntryIterator($Class* clazz) {
	return $of($alloc(TreeMap$NavigableSubMap$SubMapEntryIterator));
}

void TreeMap$NavigableSubMap$SubMapEntryIterator::init$($TreeMap$NavigableSubMap* this$0, $TreeMap$Entry* first, $TreeMap$Entry* fence) {
	$set(this, this$0, this$0);
	$TreeMap$NavigableSubMap$SubMapIterator::init$(this$0, first, fence);
}

$Object* TreeMap$NavigableSubMap$SubMapEntryIterator::next() {
	return $of(nextEntry());
}

void TreeMap$NavigableSubMap$SubMapEntryIterator::remove() {
	removeAscending();
}

TreeMap$NavigableSubMap$SubMapEntryIterator::TreeMap$NavigableSubMap$SubMapEntryIterator() {
}

$Class* TreeMap$NavigableSubMap$SubMapEntryIterator::load$($String* name, bool initialize) {
	$loadClass(TreeMap$NavigableSubMap$SubMapEntryIterator, name, initialize, &_TreeMap$NavigableSubMap$SubMapEntryIterator_ClassInfo_, allocate$TreeMap$NavigableSubMap$SubMapEntryIterator);
	return class$;
}

$Class* TreeMap$NavigableSubMap$SubMapEntryIterator::class$ = nullptr;

	} // util
} // java