#include <java/util/IdentityHashMap$ValueIterator.h>
#include <java/util/IdentityHashMap$IdentityHashMapIterator.h>
#include <java/util/IdentityHashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IdentityHashMap = ::java::util::IdentityHashMap;
using $IdentityHashMap$IdentityHashMapIterator = ::java::util::IdentityHashMap$IdentityHashMapIterator;

namespace java {
	namespace util {

void IdentityHashMap$ValueIterator::init$($IdentityHashMap* this$0) {
	$set(this, this$0, this$0);
	$IdentityHashMap$IdentityHashMapIterator::init$(this$0);
}

$Object* IdentityHashMap$ValueIterator::next() {
	return $nc(this->traversalTable)->get(nextIndex() + 1);
}

IdentityHashMap$ValueIterator::IdentityHashMap$ValueIterator() {
}

$Class* IdentityHashMap$ValueIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/IdentityHashMap;", nullptr, $FINAL | $SYNTHETIC, $field(IdentityHashMap$ValueIterator, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/IdentityHashMap;)V", nullptr, $PRIVATE, $method(IdentityHashMap$ValueIterator, init$, void, $IdentityHashMap*)},
		{"next", "()Ljava/lang/Object;", "()TV;", $PUBLIC, $virtualMethod(IdentityHashMap$ValueIterator, next, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.IdentityHashMap$ValueIterator", "java.util.IdentityHashMap", "ValueIterator", $PRIVATE},
		{"java.util.IdentityHashMap$IdentityHashMapIterator", "java.util.IdentityHashMap", "IdentityHashMapIterator", $PRIVATE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.IdentityHashMap$ValueIterator",
		"java.util.IdentityHashMap$IdentityHashMapIterator",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/IdentityHashMap<TK;TV;>.IdentityHashMapIterator<TV;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.IdentityHashMap"
	};
	$loadClass(IdentityHashMap$ValueIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IdentityHashMap$ValueIterator);
	});
	return class$;
}

$Class* IdentityHashMap$ValueIterator::class$ = nullptr;

	} // util
} // java