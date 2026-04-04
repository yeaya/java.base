#include <java/util/LinkedHashMap$LinkedValues.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Collection.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap$Entry.h>
#include <java/util/LinkedHashMap$LinkedValueIterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef ORDERED
#undef SIZED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractCollection = ::java::util::AbstractCollection;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $LinkedHashMap$Entry = ::java::util::LinkedHashMap$Entry;
using $LinkedHashMap$LinkedValueIterator = ::java::util::LinkedHashMap$LinkedValueIterator;
using $Spliterator = ::java::util::Spliterator;
using $Spliterators = ::java::util::Spliterators;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

void LinkedHashMap$LinkedValues::init$($LinkedHashMap* this$0) {
	$set(this, this$0, this$0);
	$AbstractCollection::init$();
}

int32_t LinkedHashMap$LinkedValues::size() {
	return this->this$0->$HashMap::size$;
}

void LinkedHashMap$LinkedValues::clear() {
	this->this$0->clear();
}

$Iterator* LinkedHashMap$LinkedValues::iterator() {
	return $new($LinkedHashMap$LinkedValueIterator, this->this$0);
}

bool LinkedHashMap$LinkedValues::contains(Object$* o) {
	return this->this$0->containsValue(o);
}

$Spliterator* LinkedHashMap$LinkedValues::spliterator() {
	return $Spliterators::spliterator(this, $Spliterator::SIZED | $Spliterator::ORDERED);
}

$ObjectArray* LinkedHashMap$LinkedValues::toArray() {
	return this->this$0->valuesToArray($$new($ObjectArray, this->this$0->$HashMap::size$));
}

$ObjectArray* LinkedHashMap$LinkedValues::toArray($ObjectArray* a) {
	return this->this$0->valuesToArray($(this->this$0->prepareArray(a)));
}

void LinkedHashMap$LinkedValues::forEach($Consumer* action) {
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	int32_t mc = this->this$0->modCount;
	{
		$var($LinkedHashMap$Entry, e, this->this$0->head);
		for (; e != nullptr; $assign(e, e->after)) {
			$nc(action)->accept(e->value);
		}
	}
	if (this->this$0->modCount != mc) {
		$throwNew($ConcurrentModificationException);
	}
}

LinkedHashMap$LinkedValues::LinkedHashMap$LinkedValues() {
}

$Class* LinkedHashMap$LinkedValues::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/LinkedHashMap;", nullptr, $FINAL | $SYNTHETIC, $field(LinkedHashMap$LinkedValues, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/LinkedHashMap;)V", nullptr, 0, $method(LinkedHashMap$LinkedValues, init$, void, $LinkedHashMap*)},
		{"clear", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(LinkedHashMap$LinkedValues, clear, void)},
		{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(LinkedHashMap$LinkedValues, contains, bool, Object$*)},
		{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TV;>;)V", $PUBLIC | $FINAL, $virtualMethod(LinkedHashMap$LinkedValues, forEach, void, $Consumer*)},
		{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TV;>;", $PUBLIC | $FINAL, $virtualMethod(LinkedHashMap$LinkedValues, iterator, $Iterator*)},
		{"size", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(LinkedHashMap$LinkedValues, size, int32_t)},
		{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TV;>;", $PUBLIC | $FINAL, $virtualMethod(LinkedHashMap$LinkedValues, spliterator, $Spliterator*)},
		{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(LinkedHashMap$LinkedValues, toArray, $ObjectArray*)},
		{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC, $virtualMethod(LinkedHashMap$LinkedValues, toArray, $ObjectArray*, $ObjectArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.LinkedHashMap$LinkedValues", "java.util.LinkedHashMap", "LinkedValues", $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.LinkedHashMap$LinkedValues",
		"java.util.AbstractCollection",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/AbstractCollection<TV;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.LinkedHashMap"
	};
	$loadClass(LinkedHashMap$LinkedValues, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LinkedHashMap$LinkedValues);
	});
	return class$;
}

$Class* LinkedHashMap$LinkedValues::class$ = nullptr;

	} // util
} // java