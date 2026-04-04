#include <java/util/HashMap$Values.h>
#include <java/util/AbstractCollection.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/HashMap$Node.h>
#include <java/util/HashMap$ValueIterator.h>
#include <java/util/HashMap$ValueSpliterator.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

using $HashMap$NodeArray = $Array<::java::util::HashMap$Node>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractCollection = ::java::util::AbstractCollection;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $HashMap = ::java::util::HashMap;
using $HashMap$Node = ::java::util::HashMap$Node;
using $HashMap$ValueIterator = ::java::util::HashMap$ValueIterator;
using $HashMap$ValueSpliterator = ::java::util::HashMap$ValueSpliterator;
using $Iterator = ::java::util::Iterator;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

void HashMap$Values::init$($HashMap* this$0) {
	$set(this, this$0, this$0);
	$AbstractCollection::init$();
}

int32_t HashMap$Values::size() {
	return this->this$0->size$;
}

void HashMap$Values::clear() {
	this->this$0->clear();
}

$Iterator* HashMap$Values::iterator() {
	return $new($HashMap$ValueIterator, this->this$0);
}

bool HashMap$Values::contains(Object$* o) {
	return this->this$0->containsValue(o);
}

$Spliterator* HashMap$Values::spliterator() {
	return $new($HashMap$ValueSpliterator, this->this$0, 0, -1, 0, 0);
}

$ObjectArray* HashMap$Values::toArray() {
	return this->this$0->valuesToArray($$new($ObjectArray, this->this$0->size$));
}

$ObjectArray* HashMap$Values::toArray($ObjectArray* a) {
	return this->this$0->valuesToArray($(this->this$0->prepareArray(a)));
}

void HashMap$Values::forEach($Consumer* action) {
	$useLocalObjectStack();
	$var($HashMap$NodeArray, tab, nullptr);
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	if (this->this$0->size$ > 0 && ($assign(tab, this->this$0->table)) != nullptr) {
		int32_t mc = this->this$0->modCount;
		{
			$var($HashMap$NodeArray, arr$, tab);
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				$var($HashMap$Node, e, arr$->get(i$));
				for (; e != nullptr; $assign(e, e->next)) {
					$nc(action)->accept(e->value);
				}
			}
		}
		if (this->this$0->modCount != mc) {
			$throwNew($ConcurrentModificationException);
		}
	}
}

HashMap$Values::HashMap$Values() {
}

$Class* HashMap$Values::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/HashMap;", nullptr, $FINAL | $SYNTHETIC, $field(HashMap$Values, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/HashMap;)V", nullptr, 0, $method(HashMap$Values, init$, void, $HashMap*)},
		{"clear", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(HashMap$Values, clear, void)},
		{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(HashMap$Values, contains, bool, Object$*)},
		{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TV;>;)V", $PUBLIC | $FINAL, $virtualMethod(HashMap$Values, forEach, void, $Consumer*)},
		{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TV;>;", $PUBLIC | $FINAL, $virtualMethod(HashMap$Values, iterator, $Iterator*)},
		{"size", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(HashMap$Values, size, int32_t)},
		{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TV;>;", $PUBLIC | $FINAL, $virtualMethod(HashMap$Values, spliterator, $Spliterator*)},
		{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HashMap$Values, toArray, $ObjectArray*)},
		{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC, $virtualMethod(HashMap$Values, toArray, $ObjectArray*, $ObjectArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.HashMap$Values", "java.util.HashMap", "Values", $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.HashMap$Values",
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
		"java.util.HashMap"
	};
	$loadClass(HashMap$Values, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HashMap$Values);
	});
	return class$;
}

$Class* HashMap$Values::class$ = nullptr;

	} // util
} // java