#include <java/util/Hashtable$EntrySet.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractSet.h>
#include <java/util/Hashtable$Entry.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <jcpp.h>

using $Hashtable$EntryArray = $Array<::java::util::Hashtable$Entry>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $Hashtable = ::java::util::Hashtable;
using $Hashtable$Entry = ::java::util::Hashtable$Entry;
using $Iterator = ::java::util::Iterator;
using $Map$Entry = ::java::util::Map$Entry;

namespace java {
	namespace util {

void Hashtable$EntrySet::init$($Hashtable* this$0) {
	$set(this, this$0, this$0);
	$AbstractSet::init$();
}

$Iterator* Hashtable$EntrySet::iterator() {
	return this->this$0->getIterator(2);
}

bool Hashtable$EntrySet::add($Map$Entry* o) {
	return $AbstractSet::add(o);
}

bool Hashtable$EntrySet::contains(Object$* o) {
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
	$var($Hashtable$EntryArray, tab, this->this$0->table);
	int32_t hash = $nc(key)->hashCode();
	int32_t index = $mod((hash & 0x7fffffff), $nc(tab)->length);
	{
		$var($Hashtable$Entry, e, tab->get(index));
		for (; e != nullptr; $assign(e, e->next)) {
			if (e->hash == hash && e->equals(entry)) {
				return true;
			}
		}
	}
	return false;
}

bool Hashtable$EntrySet::remove(Object$* o) {
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
	$var($Hashtable$EntryArray, tab, this->this$0->table);
	int32_t hash = $nc(key)->hashCode();
	int32_t index = $mod((hash & 0x7fffffff), $nc(tab)->length);
	$var($Hashtable$Entry, e, tab->get(index));
	{
		$var($Hashtable$Entry, prev, nullptr);
		for (; e != nullptr; $assign(prev, e), $assign(e, e->next)) {
			if (e->hash == hash && e->equals(entry)) {
				if (prev != nullptr) {
					$set(prev, next, e->next);
				} else {
					tab->set(index, e->next);
				}
				$set(e, value, nullptr);
				++this->this$0->modCount;
				--this->this$0->count;
				return true;
			}
		}
	}
	return false;
}

int32_t Hashtable$EntrySet::size() {
	return this->this$0->count;
}

void Hashtable$EntrySet::clear() {
	this->this$0->clear();
}

bool Hashtable$EntrySet::add(Object$* o) {
	return this->add($cast($Map$Entry, o));
}

Hashtable$EntrySet::Hashtable$EntrySet() {
}

$Class* Hashtable$EntrySet::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/Hashtable;", nullptr, $FINAL | $SYNTHETIC, $field(Hashtable$EntrySet, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Hashtable;)V", nullptr, $PRIVATE, $method(Hashtable$EntrySet, init$, void, $Hashtable*)},
		{"add", "(Ljava/util/Map$Entry;)Z", "(Ljava/util/Map$Entry<TK;TV;>;)Z", $PUBLIC, $virtualMethod(Hashtable$EntrySet, add, bool, $Map$Entry*)},
		{"add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Hashtable$EntrySet, add, bool, Object$*)},
		{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(Hashtable$EntrySet, clear, void)},
		{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Hashtable$EntrySet, contains, bool, Object$*)},
		{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/util/Map$Entry<TK;TV;>;>;", $PUBLIC, $virtualMethod(Hashtable$EntrySet, iterator, $Iterator*)},
		{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Hashtable$EntrySet, remove, bool, Object$*)},
		{"size", "()I", nullptr, $PUBLIC, $virtualMethod(Hashtable$EntrySet, size, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Hashtable$EntrySet", "java.util.Hashtable", "EntrySet", $PRIVATE},
		{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.Hashtable$EntrySet",
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
		"java.util.Hashtable"
	};
	$loadClass(Hashtable$EntrySet, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Hashtable$EntrySet));
	});
	return class$;
}

$Class* Hashtable$EntrySet::class$ = nullptr;

	} // util
} // java