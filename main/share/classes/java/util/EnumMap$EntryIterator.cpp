#include <java/util/EnumMap$EntryIterator.h>
#include <java/util/EnumMap$EntryIterator$Entry.h>
#include <java/util/EnumMap$EnumMapIterator.h>
#include <java/util/EnumMap.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumMap = ::java::util::EnumMap;
using $EnumMap$EntryIterator$Entry = ::java::util::EnumMap$EntryIterator$Entry;
using $EnumMap$EnumMapIterator = ::java::util::EnumMap$EnumMapIterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace util {

void EnumMap$EntryIterator::init$($EnumMap* this$0) {
	$set(this, this$0, this$0);
	$EnumMap$EnumMapIterator::init$(this$0);
}

$Object* EnumMap$EntryIterator::next() {
	if (!hasNext()) {
		$throwNew($NoSuchElementException);
	}
	$set(this, lastReturnedEntry, $new($EnumMap$EntryIterator$Entry, this, this->index++));
	return this->lastReturnedEntry;
}

void EnumMap$EntryIterator::remove() {
	this->lastReturnedIndex = ((nullptr == this->lastReturnedEntry) ? -1 : this->lastReturnedEntry->index);
	$EnumMap$EnumMapIterator::remove();
	$nc(this->lastReturnedEntry)->index = this->lastReturnedIndex;
	$set(this, lastReturnedEntry, nullptr);
}

EnumMap$EntryIterator::EnumMap$EntryIterator() {
}

$Class* EnumMap$EntryIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/EnumMap;", nullptr, $FINAL | $SYNTHETIC, $field(EnumMap$EntryIterator, this$0)},
		{"lastReturnedEntry", "Ljava/util/EnumMap$EntryIterator$Entry;", "Ljava/util/EnumMap<TK;TV;>.EntryIterator.Entry;", $PRIVATE, $field(EnumMap$EntryIterator, lastReturnedEntry)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/EnumMap;)V", nullptr, $PRIVATE, $method(EnumMap$EntryIterator, init$, void, $EnumMap*)},
		{"next", "()Ljava/util/Map$Entry;", "()Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC, $virtualMethod(EnumMap$EntryIterator, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(EnumMap$EntryIterator, remove, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.EnumMap$EntryIterator", "java.util.EnumMap", "EntryIterator", $PRIVATE},
		{"java.util.EnumMap$EnumMapIterator", "java.util.EnumMap", "EnumMapIterator", $PRIVATE | $ABSTRACT},
		{"java.util.EnumMap$EntryIterator$Entry", "java.util.EnumMap$EntryIterator", "Entry", $PRIVATE},
		{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.EnumMap$EntryIterator",
		"java.util.EnumMap$EnumMapIterator",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/EnumMap<TK;TV;>.EnumMapIterator<Ljava/util/Map$Entry<TK;TV;>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.EnumMap"
	};
	$loadClass(EnumMap$EntryIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EnumMap$EntryIterator);
	});
	return class$;
}

$Class* EnumMap$EntryIterator::class$ = nullptr;

	} // util
} // java