#include <java/util/concurrent/ConcurrentHashMap$EntrySetView.h>

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
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Set.h>
#include <java/util/Spliterator.h>
#include <java/util/concurrent/ConcurrentHashMap$CollectionView.h>
#include <java/util/concurrent/ConcurrentHashMap$EntryIterator.h>
#include <java/util/concurrent/ConcurrentHashMap$EntrySpliterator.h>
#include <java/util/concurrent/ConcurrentHashMap$MapEntry.h>
#include <java/util/concurrent/ConcurrentHashMap$Node.h>
#include <java/util/concurrent/ConcurrentHashMap$Traverser.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $ConcurrentHashMap$NodeArray = $Array<::java::util::concurrent::ConcurrentHashMap$Node>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $Spliterator = ::java::util::Spliterator;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentHashMap$CollectionView = ::java::util::concurrent::ConcurrentHashMap$CollectionView;
using $ConcurrentHashMap$EntryIterator = ::java::util::concurrent::ConcurrentHashMap$EntryIterator;
using $ConcurrentHashMap$EntrySpliterator = ::java::util::concurrent::ConcurrentHashMap$EntrySpliterator;
using $ConcurrentHashMap$MapEntry = ::java::util::concurrent::ConcurrentHashMap$MapEntry;
using $ConcurrentHashMap$Node = ::java::util::concurrent::ConcurrentHashMap$Node;
using $ConcurrentHashMap$Traverser = ::java::util::concurrent::ConcurrentHashMap$Traverser;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentHashMap$EntrySetView_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ConcurrentHashMap$EntrySetView, serialVersionUID)},
	{}
};

$MethodInfo _ConcurrentHashMap$EntrySetView_MethodInfo_[] = {
	{"*clear", "()V", nullptr, $PUBLIC | $FINAL},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*containsAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/util/concurrent/ConcurrentHashMap;)V", "(Ljava/util/concurrent/ConcurrentHashMap<TK;TV;>;)V", 0, $method(static_cast<void(ConcurrentHashMap$EntrySetView::*)($ConcurrentHashMap*)>(&ConcurrentHashMap$EntrySetView::init$))},
	{"add", "(Ljava/util/Map$Entry;)Z", "(Ljava/util/Map$Entry<TK;TV;>;)Z", $PUBLIC, $method(static_cast<bool(ConcurrentHashMap$EntrySetView::*)($Map$Entry*)>(&ConcurrentHashMap$EntrySetView::add))},
	{"add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"addAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<+Ljava/util/Map$Entry<TK;TV;>;>;)Z", $PUBLIC},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-Ljava/util/Map$Entry<TK;TV;>;>;)V", $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"*isEmpty", "()Z", nullptr, $PUBLIC | $FINAL},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/util/Map$Entry<TK;TV;>;>;", $PUBLIC},
	{"*parallelStream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*removeAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"removeIf", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<-Ljava/util/Map$Entry<TK;TV;>;>;)Z", $PUBLIC},
	{"*retainAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC | $FINAL},
	{"*size", "()I", nullptr, $PUBLIC | $FINAL},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<Ljava/util/Map$Entry<TK;TV;>;>;", $PUBLIC},
	{"*toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL},
	{"*toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _ConcurrentHashMap$EntrySetView_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentHashMap$EntrySetView", "java.util.concurrent.ConcurrentHashMap", "EntrySetView", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$CollectionView", "java.util.concurrent.ConcurrentHashMap", "CollectionView", $STATIC | $ABSTRACT},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentHashMap$EntrySetView_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentHashMap$EntrySetView",
	"java.util.concurrent.ConcurrentHashMap$CollectionView",
	"java.util.Set",
	_ConcurrentHashMap$EntrySetView_FieldInfo_,
	_ConcurrentHashMap$EntrySetView_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/concurrent/ConcurrentHashMap$CollectionView<TK;TV;Ljava/util/Map$Entry<TK;TV;>;>;Ljava/util/Set<Ljava/util/Map$Entry<TK;TV;>;>;Ljava/io/Serializable;",
	nullptr,
	_ConcurrentHashMap$EntrySetView_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentHashMap"
};

$Object* allocate$ConcurrentHashMap$EntrySetView($Class* clazz) {
	return $of($alloc(ConcurrentHashMap$EntrySetView));
}

void ConcurrentHashMap$EntrySetView::clear() {
	this->$ConcurrentHashMap$CollectionView::clear();
}

int32_t ConcurrentHashMap$EntrySetView::size() {
	 return this->$ConcurrentHashMap$CollectionView::size();
}

bool ConcurrentHashMap$EntrySetView::isEmpty() {
	 return this->$ConcurrentHashMap$CollectionView::isEmpty();
}

$ObjectArray* ConcurrentHashMap$EntrySetView::toArray() {
	 return this->$ConcurrentHashMap$CollectionView::toArray();
}

$ObjectArray* ConcurrentHashMap$EntrySetView::toArray($ObjectArray* a) {
	 return this->$ConcurrentHashMap$CollectionView::toArray(a);
}

$String* ConcurrentHashMap$EntrySetView::toString() {
	 return this->$ConcurrentHashMap$CollectionView::toString();
}

bool ConcurrentHashMap$EntrySetView::containsAll($Collection* c) {
	 return this->$ConcurrentHashMap$CollectionView::containsAll(c);
}

bool ConcurrentHashMap$EntrySetView::removeAll($Collection* c) {
	 return this->$ConcurrentHashMap$CollectionView::removeAll(c);
}

bool ConcurrentHashMap$EntrySetView::retainAll($Collection* c) {
	 return this->$ConcurrentHashMap$CollectionView::retainAll(c);
}

$ObjectArray* ConcurrentHashMap$EntrySetView::toArray($IntFunction* generator) {
	 return this->$ConcurrentHashMap$CollectionView::toArray(generator);
}

$Stream* ConcurrentHashMap$EntrySetView::stream() {
	 return this->$ConcurrentHashMap$CollectionView::stream();
}

$Stream* ConcurrentHashMap$EntrySetView::parallelStream() {
	 return this->$ConcurrentHashMap$CollectionView::parallelStream();
}

$Object* ConcurrentHashMap$EntrySetView::clone() {
	 return this->$ConcurrentHashMap$CollectionView::clone();
}

void ConcurrentHashMap$EntrySetView::finalize() {
	this->$ConcurrentHashMap$CollectionView::finalize();
}

void ConcurrentHashMap$EntrySetView::init$($ConcurrentHashMap* map) {
	$ConcurrentHashMap$CollectionView::init$(map);
}

bool ConcurrentHashMap$EntrySetView::contains(Object$* o) {
	$var($Object, k, nullptr);
	$var($Object, v, nullptr);
	$var($Object, r, nullptr);
	$var($Map$Entry, e, nullptr);
	bool var$2 = ($instanceOf($Map$Entry, o)) && ($assign(k, $nc(($assign(e, $cast($Map$Entry, o))))->getKey())) != nullptr;
	bool var$1 = var$2 && ($assign(r, $nc(this->map)->get(k))) != nullptr;
	bool var$0 = var$1 && ($assign(v, $nc(e)->getValue())) != nullptr;
	return (var$0 && ($equals(v, r) || $nc($of(v))->equals(r)));
}

bool ConcurrentHashMap$EntrySetView::remove(Object$* o) {
	$var($Object, k, nullptr);
	$var($Object, v, nullptr);
	$var($Map$Entry, e, nullptr);
	bool var$1 = ($instanceOf($Map$Entry, o)) && ($assign(k, $nc(($assign(e, $cast($Map$Entry, o))))->getKey())) != nullptr;
	bool var$0 = var$1 && ($assign(v, $nc(e)->getValue())) != nullptr;
	return (var$0 && $nc(this->map)->remove(k, v));
}

$Iterator* ConcurrentHashMap$EntrySetView::iterator() {
	$var($ConcurrentHashMap, m, this->map);
	$var($ConcurrentHashMap$NodeArray, t, nullptr);
	int32_t f = ($assign(t, $nc(m)->table)) == nullptr ? 0 : $nc(t)->length;
	return $new($ConcurrentHashMap$EntryIterator, t, f, 0, f, m);
}

bool ConcurrentHashMap$EntrySetView::add($Map$Entry* e) {
	$var($Object, var$0, $nc(e)->getKey());
	return $nc(this->map)->putVal(var$0, $(e->getValue()), false) == nullptr;
}

bool ConcurrentHashMap$EntrySetView::addAll($Collection* c) {
	bool added = false;
	{
		$var($Iterator, i$, $nc(c)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
			{
				if (add(e)) {
					added = true;
				}
			}
		}
	}
	return added;
}

bool ConcurrentHashMap$EntrySetView::removeIf($Predicate* filter) {
	return $nc(this->map)->removeEntryIf(filter);
}

int32_t ConcurrentHashMap$EntrySetView::hashCode() {
	int32_t h = 0;
	$var($ConcurrentHashMap$NodeArray, t, nullptr);
	if (($assign(t, $nc(this->map)->table)) != nullptr) {
		$var($ConcurrentHashMap$Traverser, it, $new($ConcurrentHashMap$Traverser, t, $nc(t)->length, 0, t->length));
		{
			$var($ConcurrentHashMap$Node, p, nullptr);
			for (; ($assign(p, it->advance())) != nullptr;) {
				h += $nc(p)->hashCode();
			}
		}
	}
	return h;
}

bool ConcurrentHashMap$EntrySetView::equals(Object$* o) {
	$var($Set, c, nullptr);
	bool var$0 = ($instanceOf($Set, o));
	if (var$0) {
		bool var$1 = $equals($assign(c, $cast($Set, o)), this);
		if (!var$1) {
			bool var$2 = containsAll(c);
			var$1 = (var$2 && $nc(c)->containsAll(static_cast<$Collection*>(static_cast<$ConcurrentHashMap$CollectionView*>(this))));
		}
		var$0 = (var$1);
	}
	return (var$0);
}

$Spliterator* ConcurrentHashMap$EntrySetView::spliterator() {
	$var($ConcurrentHashMap$NodeArray, t, nullptr);
	$var($ConcurrentHashMap, m, this->map);
	int64_t n = $nc(m)->sumCount();
	int32_t f = ($assign(t, m->table)) == nullptr ? 0 : $nc(t)->length;
	return $new($ConcurrentHashMap$EntrySpliterator, t, f, 0, f, n < (int64_t)0 ? (int64_t)0 : n, m);
}

void ConcurrentHashMap$EntrySetView::forEach($Consumer* action) {
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($ConcurrentHashMap$NodeArray, t, nullptr);
	if (($assign(t, $nc(this->map)->table)) != nullptr) {
		$var($ConcurrentHashMap$Traverser, it, $new($ConcurrentHashMap$Traverser, t, $nc(t)->length, 0, t->length));
		{
			$var($ConcurrentHashMap$Node, p, nullptr);
			for (; ($assign(p, it->advance())) != nullptr;) {
				$nc(action)->accept($$new($ConcurrentHashMap$MapEntry, $nc(p)->key, p->val, this->map));
			}
		}
	}
}

bool ConcurrentHashMap$EntrySetView::add(Object$* e) {
	return this->add($cast($Map$Entry, e));
}

ConcurrentHashMap$EntrySetView::ConcurrentHashMap$EntrySetView() {
}

$Class* ConcurrentHashMap$EntrySetView::load$($String* name, bool initialize) {
	$loadClass(ConcurrentHashMap$EntrySetView, name, initialize, &_ConcurrentHashMap$EntrySetView_ClassInfo_, allocate$ConcurrentHashMap$EntrySetView);
	return class$;
}

$Class* ConcurrentHashMap$EntrySetView::class$ = nullptr;

		} // concurrent
	} // util
} // java