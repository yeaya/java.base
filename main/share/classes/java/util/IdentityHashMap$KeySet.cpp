#include <java/util/IdentityHashMap$KeySet.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Array.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/IdentityHashMap$IdentityHashMapIterator.h>
#include <java/util/IdentityHashMap$KeyIterator.h>
#include <java/util/IdentityHashMap$KeySpliterator.h>
#include <java/util/IdentityHashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $1Array = ::java::lang::reflect::Array;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $IdentityHashMap = ::java::util::IdentityHashMap;
using $IdentityHashMap$IdentityHashMapIterator = ::java::util::IdentityHashMap$IdentityHashMapIterator;
using $IdentityHashMap$KeyIterator = ::java::util::IdentityHashMap$KeyIterator;
using $IdentityHashMap$KeySpliterator = ::java::util::IdentityHashMap$KeySpliterator;
using $Iterator = ::java::util::Iterator;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;

namespace java {
	namespace util {

$FieldInfo _IdentityHashMap$KeySet_FieldInfo_[] = {
	{"this$0", "Ljava/util/IdentityHashMap;", nullptr, $FINAL | $SYNTHETIC, $field(IdentityHashMap$KeySet, this$0)},
	{}
};

$MethodInfo _IdentityHashMap$KeySet_MethodInfo_[] = {
	{"<init>", "(Ljava/util/IdentityHashMap;)V", nullptr, $PRIVATE, $method(static_cast<void(IdentityHashMap$KeySet::*)($IdentityHashMap*)>(&IdentityHashMap$KeySet::init$))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TK;>;", $PUBLIC},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"removeAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TK;>;", $PUBLIC},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC},
	{}
};

$InnerClassInfo _IdentityHashMap$KeySet_InnerClassesInfo_[] = {
	{"java.util.IdentityHashMap$KeySet", "java.util.IdentityHashMap", "KeySet", $PRIVATE},
	{}
};

$ClassInfo _IdentityHashMap$KeySet_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.IdentityHashMap$KeySet",
	"java.util.AbstractSet",
	nullptr,
	_IdentityHashMap$KeySet_FieldInfo_,
	_IdentityHashMap$KeySet_MethodInfo_,
	"Ljava/util/AbstractSet<TK;>;",
	nullptr,
	_IdentityHashMap$KeySet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.IdentityHashMap"
};

$Object* allocate$IdentityHashMap$KeySet($Class* clazz) {
	return $of($alloc(IdentityHashMap$KeySet));
}

void IdentityHashMap$KeySet::init$($IdentityHashMap* this$0) {
	$set(this, this$0, this$0);
	$AbstractSet::init$();
}

$Iterator* IdentityHashMap$KeySet::iterator() {
	return $new($IdentityHashMap$KeyIterator, this->this$0);
}

int32_t IdentityHashMap$KeySet::size() {
	return this->this$0->size$;
}

bool IdentityHashMap$KeySet::contains(Object$* o) {
	return this->this$0->containsKey(o);
}

bool IdentityHashMap$KeySet::remove(Object$* o) {
	int32_t oldSize = this->this$0->size$;
	this->this$0->remove(o);
	return this->this$0->size$ != oldSize;
}

bool IdentityHashMap$KeySet::removeAll($Collection* c) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(c);
	bool modified = false;
	{
		$var($Iterator, i, iterator());
		for (; $nc(i)->hasNext();) {
			if (c->contains($(i->next()))) {
				i->remove();
				modified = true;
			}
		}
	}
	return modified;
}

void IdentityHashMap$KeySet::clear() {
	this->this$0->clear();
}

int32_t IdentityHashMap$KeySet::hashCode() {
	$useLocalCurrentObjectStackCache();
	int32_t result = 0;
	{
		$var($Iterator, i$, this->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, key, i$->next());
			result += $System::identityHashCode(key);
		}
	}
	return result;
}

$ObjectArray* IdentityHashMap$KeySet::toArray() {
	return toArray($$new($ObjectArray, 0));
}

$ObjectArray* IdentityHashMap$KeySet::toArray($ObjectArray* a$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, a, a$renamed);
	int32_t expectedModCount = this->this$0->modCount;
	int32_t size = this->size();
	if ($nc(a)->length < size) {
		$assign(a, $cast($ObjectArray, $1Array::newInstance($of(a)->getClass()->getComponentType(), size)));
	}
	$var($ObjectArray, tab, this->this$0->table);
	int32_t ti = 0;
	for (int32_t si = 0; si < $nc(tab)->length; si += 2) {
		$var($Object, key, nullptr);
		if (($assign(key, tab->get(si))) != nullptr) {
			if (ti >= size) {
				$throwNew($ConcurrentModificationException);
			}
			$nc(a)->set(ti++, $($IdentityHashMap::unmaskNull(key)));
		}
	}
	if (ti < size || expectedModCount != this->this$0->modCount) {
		$throwNew($ConcurrentModificationException);
	}
	if (ti < $nc(a)->length) {
		a->set(ti, nullptr);
	}
	return a;
}

$Spliterator* IdentityHashMap$KeySet::spliterator() {
	return $new($IdentityHashMap$KeySpliterator, this->this$0, 0, -1, 0, 0);
}

IdentityHashMap$KeySet::IdentityHashMap$KeySet() {
}

$Class* IdentityHashMap$KeySet::load$($String* name, bool initialize) {
	$loadClass(IdentityHashMap$KeySet, name, initialize, &_IdentityHashMap$KeySet_ClassInfo_, allocate$IdentityHashMap$KeySet);
	return class$;
}

$Class* IdentityHashMap$KeySet::class$ = nullptr;

	} // util
} // java