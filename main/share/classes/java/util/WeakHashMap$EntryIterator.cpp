#include <java/util/WeakHashMap$EntryIterator.h>
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

void WeakHashMap$EntryIterator::init$($WeakHashMap* this$0) {
	$set(this, this$0, this$0);
	$WeakHashMap$HashIterator::init$(this$0);
}

$Object* WeakHashMap$EntryIterator::next() {
	return $of(nextEntry());
}

WeakHashMap$EntryIterator::WeakHashMap$EntryIterator() {
}

$Class* WeakHashMap$EntryIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/WeakHashMap;", nullptr, $FINAL | $SYNTHETIC, $field(WeakHashMap$EntryIterator, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/WeakHashMap;)V", nullptr, $PRIVATE, $method(WeakHashMap$EntryIterator, init$, void, $WeakHashMap*)},
		{"next", "()Ljava/util/Map$Entry;", "()Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC, $virtualMethod(WeakHashMap$EntryIterator, next, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.WeakHashMap$EntryIterator", "java.util.WeakHashMap", "EntryIterator", $PRIVATE},
		{"java.util.WeakHashMap$HashIterator", "java.util.WeakHashMap", "HashIterator", $PRIVATE | $ABSTRACT},
		{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.WeakHashMap$EntryIterator",
		"java.util.WeakHashMap$HashIterator",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/WeakHashMap<TK;TV;>.HashIterator<Ljava/util/Map$Entry<TK;TV;>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.WeakHashMap"
	};
	$loadClass(WeakHashMap$EntryIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WeakHashMap$EntryIterator);
	});
	return class$;
}

$Class* WeakHashMap$EntryIterator::class$ = nullptr;

	} // util
} // java