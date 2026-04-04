#include <java/util/TreeMap$NavigableSubMap$EntrySetView.h>
#include <java/util/AbstractSet.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Set.h>
#include <java/util/TreeMap$Entry.h>
#include <java/util/TreeMap$NavigableSubMap.h>
#include <java/util/TreeMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $Iterator = ::java::util::Iterator;
using $Map$Entry = ::java::util::Map$Entry;
using $TreeMap = ::java::util::TreeMap;
using $TreeMap$Entry = ::java::util::TreeMap$Entry;
using $TreeMap$NavigableSubMap = ::java::util::TreeMap$NavigableSubMap;

namespace java {
	namespace util {

void TreeMap$NavigableSubMap$EntrySetView::init$($TreeMap$NavigableSubMap* this$0) {
	$set(this, this$0, this$0);
	$AbstractSet::init$();
	this->size$ = -1;
}

int32_t TreeMap$NavigableSubMap$EntrySetView::size() {
	if (this->this$0->fromStart && this->this$0->toEnd) {
		return $nc(this->this$0->m)->size();
	}
	if (this->size$ == -1 || this->sizeModCount != $nc(this->this$0->m)->modCount) {
		this->sizeModCount = $nc(this->this$0->m)->modCount;
		this->size$ = 0;
		$var($Iterator, i, iterator());
		while ($nc(i)->hasNext()) {
			++this->size$;
			i->next();
		}
	}
	return this->size$;
}

bool TreeMap$NavigableSubMap$EntrySetView::isEmpty() {
	$var($TreeMap$Entry, n, this->this$0->absLowest());
	return n == nullptr || this->this$0->tooHigh(n->key);
}

bool TreeMap$NavigableSubMap$EntrySetView::contains(Object$* o) {
	$useLocalObjectStack();
	$var($Map$Entry, entry, nullptr);
	bool var$0 = $instanceOf($Map$Entry, o);
	if (var$0) {
		$assign(entry, $cast($Map$Entry, o));
		var$0 = true;
	}
	if (!(var$0)) {
		return false;
	}
	$var($Object, key, $nc(entry)->getKey());
	if (!this->this$0->inRange(key)) {
		return false;
	}
	$var($TreeMap$Entry, node, $nc(this->this$0->m)->getEntry(key));
	bool var$1 = node != nullptr;
	if (var$1) {
		$var($Object, var$2, node->getValue());
		var$1 = $TreeMap::valEquals(var$2, $(entry->getValue()));
	}
	return var$1;
}

bool TreeMap$NavigableSubMap$EntrySetView::remove(Object$* o) {
	$useLocalObjectStack();
	$var($Map$Entry, entry, nullptr);
	bool var$0 = $instanceOf($Map$Entry, o);
	if (var$0) {
		$assign(entry, $cast($Map$Entry, o));
		var$0 = true;
	}
	if (!(var$0)) {
		return false;
	}
	$var($Object, key, $nc(entry)->getKey());
	if (!this->this$0->inRange(key)) {
		return false;
	}
	$var($TreeMap$Entry, node, $nc(this->this$0->m)->getEntry(key));
	bool var$1 = node != nullptr;
	if (var$1) {
		$var($Object, var$2, node->getValue());
		var$1 = $TreeMap::valEquals(var$2, $(entry->getValue()));
	}
	if (var$1) {
		this->this$0->m->deleteEntry(node);
		return true;
	}
	return false;
}

TreeMap$NavigableSubMap$EntrySetView::TreeMap$NavigableSubMap$EntrySetView() {
}

$Class* TreeMap$NavigableSubMap$EntrySetView::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/TreeMap$NavigableSubMap;", nullptr, $FINAL | $SYNTHETIC, $field(TreeMap$NavigableSubMap$EntrySetView, this$0)},
		{"size", "I", nullptr, $PRIVATE | $TRANSIENT, $field(TreeMap$NavigableSubMap$EntrySetView, size$)},
		{"sizeModCount", "I", nullptr, $PRIVATE | $TRANSIENT, $field(TreeMap$NavigableSubMap$EntrySetView, sizeModCount)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/TreeMap$NavigableSubMap;)V", nullptr, 0, $method(TreeMap$NavigableSubMap$EntrySetView, init$, void, $TreeMap$NavigableSubMap*)},
		{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(TreeMap$NavigableSubMap$EntrySetView, contains, bool, Object$*)},
		{"isEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(TreeMap$NavigableSubMap$EntrySetView, isEmpty, bool)},
		{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(TreeMap$NavigableSubMap$EntrySetView, remove, bool, Object$*)},
		{"size", "()I", nullptr, $PUBLIC, $virtualMethod(TreeMap$NavigableSubMap$EntrySetView, size, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.TreeMap$NavigableSubMap", "java.util.TreeMap", "NavigableSubMap", $STATIC | $ABSTRACT},
		{"java.util.TreeMap$NavigableSubMap$EntrySetView", "java.util.TreeMap$NavigableSubMap", "EntrySetView", $ABSTRACT},
		{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"java.util.TreeMap$NavigableSubMap$EntrySetView",
		"java.util.AbstractSet",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/AbstractSet<Ljava/util/Map$Entry<TK;TV;>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.TreeMap"
	};
	$loadClass(TreeMap$NavigableSubMap$EntrySetView, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TreeMap$NavigableSubMap$EntrySetView));
	});
	return class$;
}

$Class* TreeMap$NavigableSubMap$EntrySetView::class$ = nullptr;

	} // util
} // java