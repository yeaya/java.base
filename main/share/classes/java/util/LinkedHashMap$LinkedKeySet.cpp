#include <java/util/LinkedHashMap$LinkedKeySet.h>

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
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/HashMap$Node.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap$Entry.h>
#include <java/util/LinkedHashMap$LinkedKeyIterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef DISTINCT
#undef ORDERED
#undef SIZED

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
using $LinkedHashMap$LinkedKeyIterator = ::java::util::LinkedHashMap$LinkedKeyIterator;
using $Spliterator = ::java::util::Spliterator;
using $Spliterators = ::java::util::Spliterators;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$FieldInfo _LinkedHashMap$LinkedKeySet_FieldInfo_[] = {
	{"this$0", "Ljava/util/LinkedHashMap;", nullptr, $FINAL | $SYNTHETIC, $field(LinkedHashMap$LinkedKeySet, this$0)},
	{}
};

$MethodInfo _LinkedHashMap$LinkedKeySet_MethodInfo_[] = {
	{"<init>", "(Ljava/util/LinkedHashMap;)V", nullptr, 0, $method(static_cast<void(LinkedHashMap$LinkedKeySet::*)($LinkedHashMap*)>(&LinkedHashMap$LinkedKeySet::init$))},
	{"clear", "()V", nullptr, $PUBLIC | $FINAL},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TK;>;)V", $PUBLIC | $FINAL},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TK;>;", $PUBLIC | $FINAL},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"size", "()I", nullptr, $PUBLIC | $FINAL},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TK;>;", $PUBLIC | $FINAL},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC},
	{}
};

$InnerClassInfo _LinkedHashMap$LinkedKeySet_InnerClassesInfo_[] = {
	{"java.util.LinkedHashMap$LinkedKeySet", "java.util.LinkedHashMap", "LinkedKeySet", $FINAL},
	{}
};

$ClassInfo _LinkedHashMap$LinkedKeySet_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.LinkedHashMap$LinkedKeySet",
	"java.util.AbstractSet",
	nullptr,
	_LinkedHashMap$LinkedKeySet_FieldInfo_,
	_LinkedHashMap$LinkedKeySet_MethodInfo_,
	"Ljava/util/AbstractSet<TK;>;",
	nullptr,
	_LinkedHashMap$LinkedKeySet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.LinkedHashMap"
};

$Object* allocate$LinkedHashMap$LinkedKeySet($Class* clazz) {
	return $of($alloc(LinkedHashMap$LinkedKeySet));
}

void LinkedHashMap$LinkedKeySet::init$($LinkedHashMap* this$0) {
	$set(this, this$0, this$0);
	$AbstractSet::init$();
}

int32_t LinkedHashMap$LinkedKeySet::size() {
	return this->this$0->$HashMap::size$;
}

void LinkedHashMap$LinkedKeySet::clear() {
	this->this$0->clear();
}

$Iterator* LinkedHashMap$LinkedKeySet::iterator() {
	return $new($LinkedHashMap$LinkedKeyIterator, this->this$0);
}

bool LinkedHashMap$LinkedKeySet::contains(Object$* o) {
	return this->this$0->containsKey(o);
}

bool LinkedHashMap$LinkedKeySet::remove(Object$* key) {
	return this->this$0->removeNode($HashMap::hash(key), key, nullptr, false, true) != nullptr;
}

$Spliterator* LinkedHashMap$LinkedKeySet::spliterator() {
	return $Spliterators::spliterator(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>(this))), ($Spliterator::SIZED | $Spliterator::ORDERED) | $Spliterator::DISTINCT);
}

$ObjectArray* LinkedHashMap$LinkedKeySet::toArray() {
	return this->this$0->keysToArray($$new($ObjectArray, this->this$0->$HashMap::size$));
}

$ObjectArray* LinkedHashMap$LinkedKeySet::toArray($ObjectArray* a) {
	return this->this$0->keysToArray($(this->this$0->prepareArray(a)));
}

void LinkedHashMap$LinkedKeySet::forEach($Consumer* action) {
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	int32_t mc = this->this$0->modCount;
	{
		$var($LinkedHashMap$Entry, e, this->this$0->head);
		for (; e != nullptr; $assign(e, $nc(e)->after)) {
			$nc(action)->accept(e->key);
		}
	}
	if (this->this$0->modCount != mc) {
		$throwNew($ConcurrentModificationException);
	}
}

LinkedHashMap$LinkedKeySet::LinkedHashMap$LinkedKeySet() {
}

$Class* LinkedHashMap$LinkedKeySet::load$($String* name, bool initialize) {
	$loadClass(LinkedHashMap$LinkedKeySet, name, initialize, &_LinkedHashMap$LinkedKeySet_ClassInfo_, allocate$LinkedHashMap$LinkedKeySet);
	return class$;
}

$Class* LinkedHashMap$LinkedKeySet::class$ = nullptr;

	} // util
} // java