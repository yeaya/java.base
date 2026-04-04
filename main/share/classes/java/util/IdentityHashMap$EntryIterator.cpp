#include <java/util/IdentityHashMap$EntryIterator.h>
#include <java/util/IdentityHashMap$EntryIterator$Entry.h>
#include <java/util/IdentityHashMap$IdentityHashMapIterator.h>
#include <java/util/IdentityHashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IdentityHashMap = ::java::util::IdentityHashMap;
using $IdentityHashMap$EntryIterator$Entry = ::java::util::IdentityHashMap$EntryIterator$Entry;
using $IdentityHashMap$IdentityHashMapIterator = ::java::util::IdentityHashMap$IdentityHashMapIterator;

namespace java {
	namespace util {

void IdentityHashMap$EntryIterator::init$($IdentityHashMap* this$0) {
	$set(this, this$0, this$0);
	$IdentityHashMap$IdentityHashMapIterator::init$(this$0);
}

$Object* IdentityHashMap$EntryIterator::next() {
	$set(this, lastReturnedEntry, $new($IdentityHashMap$EntryIterator$Entry, this, nextIndex()));
	return this->lastReturnedEntry;
}

void IdentityHashMap$EntryIterator::remove() {
	this->lastReturnedIndex = ((nullptr == this->lastReturnedEntry) ? -1 : this->lastReturnedEntry->index);
	$IdentityHashMap$IdentityHashMapIterator::remove();
	$nc(this->lastReturnedEntry)->index = this->lastReturnedIndex;
	$set(this, lastReturnedEntry, nullptr);
}

IdentityHashMap$EntryIterator::IdentityHashMap$EntryIterator() {
}

$Class* IdentityHashMap$EntryIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/IdentityHashMap;", nullptr, $FINAL | $SYNTHETIC, $field(IdentityHashMap$EntryIterator, this$0)},
		{"lastReturnedEntry", "Ljava/util/IdentityHashMap$EntryIterator$Entry;", "Ljava/util/IdentityHashMap<TK;TV;>.EntryIterator.Entry;", $PRIVATE, $field(IdentityHashMap$EntryIterator, lastReturnedEntry)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/IdentityHashMap;)V", nullptr, $PRIVATE, $method(IdentityHashMap$EntryIterator, init$, void, $IdentityHashMap*)},
		{"next", "()Ljava/util/Map$Entry;", "()Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC, $virtualMethod(IdentityHashMap$EntryIterator, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(IdentityHashMap$EntryIterator, remove, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.IdentityHashMap$EntryIterator", "java.util.IdentityHashMap", "EntryIterator", $PRIVATE},
		{"java.util.IdentityHashMap$IdentityHashMapIterator", "java.util.IdentityHashMap", "IdentityHashMapIterator", $PRIVATE | $ABSTRACT},
		{"java.util.IdentityHashMap$EntryIterator$Entry", "java.util.IdentityHashMap$EntryIterator", "Entry", $PRIVATE},
		{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.IdentityHashMap$EntryIterator",
		"java.util.IdentityHashMap$IdentityHashMapIterator",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/IdentityHashMap<TK;TV;>.IdentityHashMapIterator<Ljava/util/Map$Entry<TK;TV;>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.IdentityHashMap"
	};
	$loadClass(IdentityHashMap$EntryIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IdentityHashMap$EntryIterator);
	});
	return class$;
}

$Class* IdentityHashMap$EntryIterator::class$ = nullptr;

	} // util
} // java