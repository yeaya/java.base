#include <java/util/concurrent/ConcurrentHashMap$KeySetView.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <java/util/Spliterator.h>
#include <java/util/concurrent/ConcurrentHashMap$CollectionView.h>
#include <java/util/concurrent/ConcurrentHashMap$KeyIterator.h>
#include <java/util/concurrent/ConcurrentHashMap$KeySpliterator.h>
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
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $Spliterator = ::java::util::Spliterator;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentHashMap$CollectionView = ::java::util::concurrent::ConcurrentHashMap$CollectionView;
using $ConcurrentHashMap$KeyIterator = ::java::util::concurrent::ConcurrentHashMap$KeyIterator;
using $ConcurrentHashMap$KeySpliterator = ::java::util::concurrent::ConcurrentHashMap$KeySpliterator;
using $ConcurrentHashMap$Node = ::java::util::concurrent::ConcurrentHashMap$Node;
using $ConcurrentHashMap$Traverser = ::java::util::concurrent::ConcurrentHashMap$Traverser;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentHashMap$KeySetView_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ConcurrentHashMap$KeySetView, serialVersionUID)},
	{"value", "Ljava/lang/Object;", "TV;", $PRIVATE | $FINAL, $field(ConcurrentHashMap$KeySetView, value)},
	{}
};

$MethodInfo _ConcurrentHashMap$KeySetView_MethodInfo_[] = {
	{"*clear", "()V", nullptr, $PUBLIC | $FINAL},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*containsAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/util/concurrent/ConcurrentHashMap;Ljava/lang/Object;)V", "(Ljava/util/concurrent/ConcurrentHashMap<TK;TV;>;TV;)V", 0, $method(static_cast<void(ConcurrentHashMap$KeySetView::*)($ConcurrentHashMap*,Object$*)>(&ConcurrentHashMap$KeySetView::init$))},
	{"add", "(Ljava/lang/Object;)Z", "(TK;)Z", $PUBLIC},
	{"addAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<+TK;>;)Z", $PUBLIC},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TK;>;)V", $PUBLIC},
	{"getMap", "()Ljava/util/concurrent/ConcurrentHashMap;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getMappedValue", "()Ljava/lang/Object;", "()TV;", $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"*isEmpty", "()Z", nullptr, $PUBLIC | $FINAL},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TK;>;", $PUBLIC},
	{"*parallelStream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"removeAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"*removeIf", "(Ljava/util/function/Predicate;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*retainAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC | $FINAL},
	{"*size", "()I", nullptr, $PUBLIC | $FINAL},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TK;>;", $PUBLIC},
	{"*toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL},
	{"*toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _ConcurrentHashMap$KeySetView_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentHashMap$KeySetView", "java.util.concurrent.ConcurrentHashMap", "KeySetView", $PUBLIC | $STATIC},
	{"java.util.concurrent.ConcurrentHashMap$CollectionView", "java.util.concurrent.ConcurrentHashMap", "CollectionView", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentHashMap$KeySetView_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.ConcurrentHashMap$KeySetView",
	"java.util.concurrent.ConcurrentHashMap$CollectionView",
	"java.util.Set",
	_ConcurrentHashMap$KeySetView_FieldInfo_,
	_ConcurrentHashMap$KeySetView_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/concurrent/ConcurrentHashMap$CollectionView<TK;TV;TK;>;Ljava/util/Set<TK;>;Ljava/io/Serializable;",
	nullptr,
	_ConcurrentHashMap$KeySetView_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentHashMap"
};

$Object* allocate$ConcurrentHashMap$KeySetView($Class* clazz) {
	return $of($alloc(ConcurrentHashMap$KeySetView));
}

void ConcurrentHashMap$KeySetView::clear() {
	this->$ConcurrentHashMap$CollectionView::clear();
}

int32_t ConcurrentHashMap$KeySetView::size() {
	 return this->$ConcurrentHashMap$CollectionView::size();
}

bool ConcurrentHashMap$KeySetView::isEmpty() {
	 return this->$ConcurrentHashMap$CollectionView::isEmpty();
}

$ObjectArray* ConcurrentHashMap$KeySetView::toArray() {
	 return this->$ConcurrentHashMap$CollectionView::toArray();
}

$ObjectArray* ConcurrentHashMap$KeySetView::toArray($ObjectArray* a) {
	 return this->$ConcurrentHashMap$CollectionView::toArray(a);
}

$String* ConcurrentHashMap$KeySetView::toString() {
	 return this->$ConcurrentHashMap$CollectionView::toString();
}

bool ConcurrentHashMap$KeySetView::containsAll($Collection* c) {
	 return this->$ConcurrentHashMap$CollectionView::containsAll(c);
}

bool ConcurrentHashMap$KeySetView::retainAll($Collection* c) {
	 return this->$ConcurrentHashMap$CollectionView::retainAll(c);
}

$ObjectArray* ConcurrentHashMap$KeySetView::toArray($IntFunction* generator) {
	 return this->$ConcurrentHashMap$CollectionView::toArray(generator);
}

bool ConcurrentHashMap$KeySetView::removeIf($Predicate* filter) {
	 return this->$ConcurrentHashMap$CollectionView::removeIf(filter);
}

$Stream* ConcurrentHashMap$KeySetView::stream() {
	 return this->$ConcurrentHashMap$CollectionView::stream();
}

$Stream* ConcurrentHashMap$KeySetView::parallelStream() {
	 return this->$ConcurrentHashMap$CollectionView::parallelStream();
}

$Object* ConcurrentHashMap$KeySetView::clone() {
	 return this->$ConcurrentHashMap$CollectionView::clone();
}

void ConcurrentHashMap$KeySetView::finalize() {
	this->$ConcurrentHashMap$CollectionView::finalize();
}

void ConcurrentHashMap$KeySetView::init$($ConcurrentHashMap* map, Object$* value) {
	$ConcurrentHashMap$CollectionView::init$(map);
	$set(this, value, value);
}

$Object* ConcurrentHashMap$KeySetView::getMappedValue() {
	return $of(this->value);
}

bool ConcurrentHashMap$KeySetView::contains(Object$* o) {
	return $nc(this->map)->containsKey(o);
}

bool ConcurrentHashMap$KeySetView::remove(Object$* o) {
	return $nc(this->map)->remove(o) != nullptr;
}

$Iterator* ConcurrentHashMap$KeySetView::iterator() {
	$useLocalCurrentObjectStackCache();
	$var($ConcurrentHashMap$NodeArray, t, nullptr);
	$var($ConcurrentHashMap, m, this->map);
	int32_t f = ($assign(t, $nc(m)->table)) == nullptr ? 0 : $nc(t)->length;
	return $new($ConcurrentHashMap$KeyIterator, t, f, 0, f, m);
}

bool ConcurrentHashMap$KeySetView::add(Object$* e) {
	$var($Object, v, nullptr);
	if (($assign(v, this->value)) == nullptr) {
		$throwNew($UnsupportedOperationException);
	}
	return $nc(this->map)->putVal(e, v, true) == nullptr;
}

bool ConcurrentHashMap$KeySetView::addAll($Collection* c) {
	$useLocalCurrentObjectStackCache();
	bool added = false;
	$var($Object, v, nullptr);
	if (($assign(v, this->value)) == nullptr) {
		$throwNew($UnsupportedOperationException);
	}
	{
		$var($Iterator, i$, $nc(c)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, e, i$->next());
			{
				if ($nc(this->map)->putVal(e, v, true) == nullptr) {
					added = true;
				}
			}
		}
	}
	return added;
}

int32_t ConcurrentHashMap$KeySetView::hashCode() {
	$useLocalCurrentObjectStackCache();
	int32_t h = 0;
	{
		$var($Iterator, i$, this->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, e, i$->next());
			h += $nc($of(e))->hashCode();
		}
	}
	return h;
}

bool ConcurrentHashMap$KeySetView::equals(Object$* o) {
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

$Spliterator* ConcurrentHashMap$KeySetView::spliterator() {
	$useLocalCurrentObjectStackCache();
	$var($ConcurrentHashMap$NodeArray, t, nullptr);
	$var($ConcurrentHashMap, m, this->map);
	int64_t n = $nc(m)->sumCount();
	int32_t f = ($assign(t, m->table)) == nullptr ? 0 : $nc(t)->length;
	return $new($ConcurrentHashMap$KeySpliterator, t, f, 0, f, n < (int64_t)0 ? (int64_t)0 : n);
}

void ConcurrentHashMap$KeySetView::forEach($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($ConcurrentHashMap$NodeArray, t, nullptr);
	if (($assign(t, $nc(this->map)->table)) != nullptr) {
		$var($ConcurrentHashMap$Traverser, it, $new($ConcurrentHashMap$Traverser, t, $nc(t)->length, 0, t->length));
		{
			$var($ConcurrentHashMap$Node, p, nullptr);
			for (; ($assign(p, it->advance())) != nullptr;) {
				$nc(action)->accept($nc(p)->key);
			}
		}
	}
}

bool ConcurrentHashMap$KeySetView::removeAll($Collection* c) {
	return $ConcurrentHashMap$CollectionView::removeAll(c);
}

$ConcurrentHashMap* ConcurrentHashMap$KeySetView::getMap() {
	return $ConcurrentHashMap$CollectionView::getMap();
}

ConcurrentHashMap$KeySetView::ConcurrentHashMap$KeySetView() {
}

$Class* ConcurrentHashMap$KeySetView::load$($String* name, bool initialize) {
	$loadClass(ConcurrentHashMap$KeySetView, name, initialize, &_ConcurrentHashMap$KeySetView_ClassInfo_, allocate$ConcurrentHashMap$KeySetView);
	return class$;
}

$Class* ConcurrentHashMap$KeySetView::class$ = nullptr;

		} // concurrent
	} // util
} // java