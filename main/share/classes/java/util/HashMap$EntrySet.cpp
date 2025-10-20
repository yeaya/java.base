#include <java/util/HashMap$EntrySet.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractSet.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/HashMap$EntryIterator.h>
#include <java/util/HashMap$EntrySpliterator.h>
#include <java/util/HashMap$Node.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

using $HashMap$NodeArray = $Array<::java::util::HashMap$Node>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractSet = ::java::util::AbstractSet;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $HashMap = ::java::util::HashMap;
using $HashMap$EntryIterator = ::java::util::HashMap$EntryIterator;
using $HashMap$EntrySpliterator = ::java::util::HashMap$EntrySpliterator;
using $HashMap$Node = ::java::util::HashMap$Node;
using $Iterator = ::java::util::Iterator;
using $Map$Entry = ::java::util::Map$Entry;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$FieldInfo _HashMap$EntrySet_FieldInfo_[] = {
	{"this$0", "Ljava/util/HashMap;", nullptr, $FINAL | $SYNTHETIC, $field(HashMap$EntrySet, this$0)},
	{}
};

$MethodInfo _HashMap$EntrySet_MethodInfo_[] = {
	{"<init>", "(Ljava/util/HashMap;)V", nullptr, 0, $method(static_cast<void(HashMap$EntrySet::*)($HashMap*)>(&HashMap$EntrySet::init$))},
	{"clear", "()V", nullptr, $PUBLIC | $FINAL},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-Ljava/util/Map$Entry<TK;TV;>;>;)V", $PUBLIC | $FINAL},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/util/Map$Entry<TK;TV;>;>;", $PUBLIC | $FINAL},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"size", "()I", nullptr, $PUBLIC | $FINAL},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<Ljava/util/Map$Entry<TK;TV;>;>;", $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _HashMap$EntrySet_InnerClassesInfo_[] = {
	{"java.util.HashMap$EntrySet", "java.util.HashMap", "EntrySet", $FINAL},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _HashMap$EntrySet_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.HashMap$EntrySet",
	"java.util.AbstractSet",
	nullptr,
	_HashMap$EntrySet_FieldInfo_,
	_HashMap$EntrySet_MethodInfo_,
	"Ljava/util/AbstractSet<Ljava/util/Map$Entry<TK;TV;>;>;",
	nullptr,
	_HashMap$EntrySet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.HashMap"
};

$Object* allocate$HashMap$EntrySet($Class* clazz) {
	return $of($alloc(HashMap$EntrySet));
}

void HashMap$EntrySet::init$($HashMap* this$0) {
	$set(this, this$0, this$0);
	$AbstractSet::init$();
}

int32_t HashMap$EntrySet::size() {
	return this->this$0->size$;
}

void HashMap$EntrySet::clear() {
	this->this$0->clear();
}

$Iterator* HashMap$EntrySet::iterator() {
	return $new($HashMap$EntryIterator, this->this$0);
}

bool HashMap$EntrySet::contains(Object$* o) {
	$useLocalCurrentObjectStackCache();
	$var($Map$Entry, e, nullptr);
	bool var$0 = $instanceOf($Map$Entry, o);
	if (var$0) {
		$assign(e, $cast($Map$Entry, o));
		var$0 = true;
	}
	if (!(var$0)) {
		return false;
	}
	$var($Object, key, $nc(e)->getKey());
	$var($HashMap$Node, candidate, this->this$0->getNode(key));
	return candidate != nullptr && candidate->equals(e);
}

bool HashMap$EntrySet::remove(Object$* o) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Map$Entry, e, nullptr);
		bool var$0 = $instanceOf($Map$Entry, o);
		if (var$0) {
			$assign(e, $cast($Map$Entry, o));
			var$0 = true;
		}
		if (var$0) {
			$var($Object, key, $nc(e)->getKey());
			$var($Object, value, e->getValue());
			return this->this$0->removeNode($HashMap::hash(key), key, value, true, true) != nullptr;
		}
	}
	return false;
}

$Spliterator* HashMap$EntrySet::spliterator() {
	return $new($HashMap$EntrySpliterator, this->this$0, 0, -1, 0, 0);
}

void HashMap$EntrySet::forEach($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	$var($HashMap$NodeArray, tab, nullptr);
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	if (this->this$0->size$ > 0 && ($assign(tab, this->this$0->table)) != nullptr) {
		int32_t mc = this->this$0->modCount;
		{
			$var($HashMap$NodeArray, arr$, tab);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($HashMap$Node, e, arr$->get(i$));
				{
					for (; e != nullptr; $assign(e, $nc(e)->next)) {
						$nc(action)->accept(e);
					}
				}
			}
		}
		if (this->this$0->modCount != mc) {
			$throwNew($ConcurrentModificationException);
		}
	}
}

HashMap$EntrySet::HashMap$EntrySet() {
}

$Class* HashMap$EntrySet::load$($String* name, bool initialize) {
	$loadClass(HashMap$EntrySet, name, initialize, &_HashMap$EntrySet_ClassInfo_, allocate$HashMap$EntrySet);
	return class$;
}

$Class* HashMap$EntrySet::class$ = nullptr;

	} // util
} // java