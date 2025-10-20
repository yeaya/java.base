#include <java/util/Hashtable$EntrySet.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractSet = ::java::util::AbstractSet;
using $Hashtable = ::java::util::Hashtable;
using $Hashtable$Entry = ::java::util::Hashtable$Entry;
using $Iterator = ::java::util::Iterator;
using $Map$Entry = ::java::util::Map$Entry;

namespace java {
	namespace util {

$FieldInfo _Hashtable$EntrySet_FieldInfo_[] = {
	{"this$0", "Ljava/util/Hashtable;", nullptr, $FINAL | $SYNTHETIC, $field(Hashtable$EntrySet, this$0)},
	{}
};

$MethodInfo _Hashtable$EntrySet_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Hashtable;)V", nullptr, $PRIVATE, $method(static_cast<void(Hashtable$EntrySet::*)($Hashtable*)>(&Hashtable$EntrySet::init$))},
	{"add", "(Ljava/util/Map$Entry;)Z", "(Ljava/util/Map$Entry<TK;TV;>;)Z", $PUBLIC},
	{"add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"clear", "()V", nullptr, $PUBLIC},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/util/Map$Entry<TK;TV;>;>;", $PUBLIC},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Hashtable$EntrySet_InnerClassesInfo_[] = {
	{"java.util.Hashtable$EntrySet", "java.util.Hashtable", "EntrySet", $PRIVATE},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Hashtable$EntrySet_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Hashtable$EntrySet",
	"java.util.AbstractSet",
	nullptr,
	_Hashtable$EntrySet_FieldInfo_,
	_Hashtable$EntrySet_MethodInfo_,
	"Ljava/util/AbstractSet<Ljava/util/Map$Entry<TK;TV;>;>;",
	nullptr,
	_Hashtable$EntrySet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Hashtable"
};

$Object* allocate$Hashtable$EntrySet($Class* clazz) {
	return $of($alloc(Hashtable$EntrySet));
}

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
	$useLocalCurrentObjectStackCache();
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
	int32_t hash = $nc($of(key))->hashCode();
	int32_t index = $mod(((int32_t)(hash & (uint32_t)0x7FFFFFFF)), $nc(tab)->length);
	{
		$var($Hashtable$Entry, e, tab->get(index));
		for (; e != nullptr; $assign(e, $nc(e)->next)) {
			if (e->hash == hash && e->equals(entry)) {
				return true;
			}
		}
	}
	return false;
}

bool Hashtable$EntrySet::remove(Object$* o) {
	$useLocalCurrentObjectStackCache();
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
	int32_t hash = $nc($of(key))->hashCode();
	int32_t index = $mod(((int32_t)(hash & (uint32_t)0x7FFFFFFF)), $nc(tab)->length);
	$var($Hashtable$Entry, e, tab->get(index));
	{
		$var($Hashtable$Entry, prev, nullptr);
		for (; e != nullptr; $assign(prev, e), $assign(e, $nc(e)->next)) {
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
	$loadClass(Hashtable$EntrySet, name, initialize, &_Hashtable$EntrySet_ClassInfo_, allocate$Hashtable$EntrySet);
	return class$;
}

$Class* Hashtable$EntrySet::class$ = nullptr;

	} // util
} // java