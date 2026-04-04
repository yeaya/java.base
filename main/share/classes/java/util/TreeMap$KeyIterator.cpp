#include <java/util/TreeMap$KeyIterator.h>
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

void TreeMap$KeyIterator::init$($TreeMap* this$0, $TreeMap$Entry* first) {
	$set(this, this$0, this$0);
	$TreeMap$PrivateEntryIterator::init$(this$0, first);
}

$Object* TreeMap$KeyIterator::next() {
	return $nc($(nextEntry()))->key;
}

TreeMap$KeyIterator::TreeMap$KeyIterator() {
}

$Class* TreeMap$KeyIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/TreeMap;", nullptr, $FINAL | $SYNTHETIC, $field(TreeMap$KeyIterator, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/TreeMap;Ljava/util/TreeMap$Entry;)V", "(Ljava/util/TreeMap$Entry<TK;TV;>;)V", 0, $method(TreeMap$KeyIterator, init$, void, $TreeMap*, $TreeMap$Entry*)},
		{"next", "()Ljava/lang/Object;", "()TK;", $PUBLIC, $virtualMethod(TreeMap$KeyIterator, next, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.TreeMap$KeyIterator", "java.util.TreeMap", "KeyIterator", $FINAL},
		{"java.util.TreeMap$PrivateEntryIterator", "java.util.TreeMap", "PrivateEntryIterator", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.TreeMap$KeyIterator",
		"java.util.TreeMap$PrivateEntryIterator",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/TreeMap<TK;TV;>.PrivateEntryIterator<TK;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.TreeMap"
	};
	$loadClass(TreeMap$KeyIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TreeMap$KeyIterator);
	});
	return class$;
}

$Class* TreeMap$KeyIterator::class$ = nullptr;

	} // util
} // java