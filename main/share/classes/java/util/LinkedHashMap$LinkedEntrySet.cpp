#include <java/util/LinkedHashMap$LinkedEntrySet.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/HashMap$Node.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap$Entry.h>
#include <java/util/LinkedHashMap$LinkedEntryIterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map$Entry.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef ORDERED
#undef SIZED
#undef DISTINCT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $HashMap = ::java::util::HashMap;
using $HashMap$Node = ::java::util::HashMap$Node;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $LinkedHashMap$Entry = ::java::util::LinkedHashMap$Entry;
using $LinkedHashMap$LinkedEntryIterator = ::java::util::LinkedHashMap$LinkedEntryIterator;
using $Map$Entry = ::java::util::Map$Entry;
using $Spliterator = ::java::util::Spliterator;
using $Spliterators = ::java::util::Spliterators;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$FieldInfo _LinkedHashMap$LinkedEntrySet_FieldInfo_[] = {
	{"this$0", "Ljava/util/LinkedHashMap;", nullptr, $FINAL | $SYNTHETIC, $field(LinkedHashMap$LinkedEntrySet, this$0)},
	{}
};

$MethodInfo _LinkedHashMap$LinkedEntrySet_MethodInfo_[] = {
	{"<init>", "(Ljava/util/LinkedHashMap;)V", nullptr, 0, $method(static_cast<void(LinkedHashMap$LinkedEntrySet::*)($LinkedHashMap*)>(&LinkedHashMap$LinkedEntrySet::init$))},
	{"clear", "()V", nullptr, $PUBLIC | $FINAL},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-Ljava/util/Map$Entry<TK;TV;>;>;)V", $PUBLIC | $FINAL},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/util/Map$Entry<TK;TV;>;>;", $PUBLIC | $FINAL},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"size", "()I", nullptr, $PUBLIC | $FINAL},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<Ljava/util/Map$Entry<TK;TV;>;>;", $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _LinkedHashMap$LinkedEntrySet_InnerClassesInfo_[] = {
	{"java.util.LinkedHashMap$LinkedEntrySet", "java.util.LinkedHashMap", "LinkedEntrySet", $FINAL},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _LinkedHashMap$LinkedEntrySet_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.LinkedHashMap$LinkedEntrySet",
	"java.util.AbstractSet",
	nullptr,
	_LinkedHashMap$LinkedEntrySet_FieldInfo_,
	_LinkedHashMap$LinkedEntrySet_MethodInfo_,
	"Ljava/util/AbstractSet<Ljava/util/Map$Entry<TK;TV;>;>;",
	nullptr,
	_LinkedHashMap$LinkedEntrySet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.LinkedHashMap"
};

$Object* allocate$LinkedHashMap$LinkedEntrySet($Class* clazz) {
	return $of($alloc(LinkedHashMap$LinkedEntrySet));
}

void LinkedHashMap$LinkedEntrySet::init$($LinkedHashMap* this$0) {
	$set(this, this$0, this$0);
	$AbstractSet::init$();
}

int32_t LinkedHashMap$LinkedEntrySet::size() {
	return this->this$0->$HashMap::size$;
}

void LinkedHashMap$LinkedEntrySet::clear() {
	this->this$0->clear();
}

$Iterator* LinkedHashMap$LinkedEntrySet::iterator() {
	return $new($LinkedHashMap$LinkedEntryIterator, this->this$0);
}

bool LinkedHashMap$LinkedEntrySet::contains(Object$* o) {
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

bool LinkedHashMap$LinkedEntrySet::remove(Object$* o) {
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

$Spliterator* LinkedHashMap$LinkedEntrySet::spliterator() {
	return $Spliterators::spliterator(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>(this))), ($Spliterator::SIZED | $Spliterator::ORDERED) | $Spliterator::DISTINCT);
}

void LinkedHashMap$LinkedEntrySet::forEach($Consumer* action) {
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	int32_t mc = this->this$0->modCount;
	{
		$var($LinkedHashMap$Entry, e, this->this$0->head);
		for (; e != nullptr; $assign(e, $nc(e)->after)) {
			$nc(action)->accept(e);
		}
	}
	if (this->this$0->modCount != mc) {
		$throwNew($ConcurrentModificationException);
	}
}

LinkedHashMap$LinkedEntrySet::LinkedHashMap$LinkedEntrySet() {
}

$Class* LinkedHashMap$LinkedEntrySet::load$($String* name, bool initialize) {
	$loadClass(LinkedHashMap$LinkedEntrySet, name, initialize, &_LinkedHashMap$LinkedEntrySet_ClassInfo_, allocate$LinkedHashMap$LinkedEntrySet);
	return class$;
}

$Class* LinkedHashMap$LinkedEntrySet::class$ = nullptr;

	} // util
} // java