#include <java/util/TreeMap$ValueIterator.h>
#include <java/util/TreeMap$Entry.h>
#include <java/util/TreeMap$PrivateEntryIterator.h>
#include <java/util/TreeMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TreeMap = ::java::util::TreeMap;
using $TreeMap$Entry = ::java::util::TreeMap$Entry;
using $TreeMap$PrivateEntryIterator = ::java::util::TreeMap$PrivateEntryIterator;

namespace java {
	namespace util {

void TreeMap$ValueIterator::init$($TreeMap* this$0, $TreeMap$Entry* first) {
	$set(this, this$0, this$0);
	$TreeMap$PrivateEntryIterator::init$(this$0, first);
}

$Object* TreeMap$ValueIterator::next() {
	return $nc($(nextEntry()))->value;
}

TreeMap$ValueIterator::TreeMap$ValueIterator() {
}

$Class* TreeMap$ValueIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/TreeMap;", nullptr, $FINAL | $SYNTHETIC, $field(TreeMap$ValueIterator, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/TreeMap;Ljava/util/TreeMap$Entry;)V", "(Ljava/util/TreeMap$Entry<TK;TV;>;)V", 0, $method(TreeMap$ValueIterator, init$, void, $TreeMap*, $TreeMap$Entry*)},
		{"next", "()Ljava/lang/Object;", "()TV;", $PUBLIC, $virtualMethod(TreeMap$ValueIterator, next, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.TreeMap$ValueIterator", "java.util.TreeMap", "ValueIterator", $FINAL},
		{"java.util.TreeMap$PrivateEntryIterator", "java.util.TreeMap", "PrivateEntryIterator", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.TreeMap$ValueIterator",
		"java.util.TreeMap$PrivateEntryIterator",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/TreeMap<TK;TV;>.PrivateEntryIterator<TV;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.TreeMap"
	};
	$loadClass(TreeMap$ValueIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TreeMap$ValueIterator);
	});
	return class$;
}

$Class* TreeMap$ValueIterator::class$ = nullptr;

	} // util
} // java