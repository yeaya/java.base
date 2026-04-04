#include <java/util/WeakHashMap$KeyIterator.h>
#include <java/util/WeakHashMap$Entry.h>
#include <java/util/WeakHashMap$HashIterator.h>
#include <java/util/WeakHashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakHashMap = ::java::util::WeakHashMap;
using $WeakHashMap$HashIterator = ::java::util::WeakHashMap$HashIterator;

namespace java {
	namespace util {

void WeakHashMap$KeyIterator::init$($WeakHashMap* this$0) {
	$set(this, this$0, this$0);
	$WeakHashMap$HashIterator::init$(this$0);
}

$Object* WeakHashMap$KeyIterator::next() {
	return $$nc(nextEntry())->getKey();
}

WeakHashMap$KeyIterator::WeakHashMap$KeyIterator() {
}

$Class* WeakHashMap$KeyIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/WeakHashMap;", nullptr, $FINAL | $SYNTHETIC, $field(WeakHashMap$KeyIterator, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/WeakHashMap;)V", nullptr, $PRIVATE, $method(WeakHashMap$KeyIterator, init$, void, $WeakHashMap*)},
		{"next", "()Ljava/lang/Object;", "()TK;", $PUBLIC, $virtualMethod(WeakHashMap$KeyIterator, next, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.WeakHashMap$KeyIterator", "java.util.WeakHashMap", "KeyIterator", $PRIVATE},
		{"java.util.WeakHashMap$HashIterator", "java.util.WeakHashMap", "HashIterator", $PRIVATE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.WeakHashMap$KeyIterator",
		"java.util.WeakHashMap$HashIterator",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/WeakHashMap<TK;TV;>.HashIterator<TK;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.WeakHashMap"
	};
	$loadClass(WeakHashMap$KeyIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WeakHashMap$KeyIterator);
	});
	return class$;
}

$Class* WeakHashMap$KeyIterator::class$ = nullptr;

	} // util
} // java