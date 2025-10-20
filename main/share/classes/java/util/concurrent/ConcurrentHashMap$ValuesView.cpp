#include <java/util/concurrent/ConcurrentHashMap$ValuesView.h>

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
#include <java/util/Spliterator.h>
#include <java/util/concurrent/ConcurrentHashMap$CollectionView.h>
#include <java/util/concurrent/ConcurrentHashMap$Node.h>
#include <java/util/concurrent/ConcurrentHashMap$Traverser.h>
#include <java/util/concurrent/ConcurrentHashMap$ValueIterator.h>
#include <java/util/concurrent/ConcurrentHashMap$ValueSpliterator.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Predicate.h>
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
using $Spliterator = ::java::util::Spliterator;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentHashMap$CollectionView = ::java::util::concurrent::ConcurrentHashMap$CollectionView;
using $ConcurrentHashMap$Node = ::java::util::concurrent::ConcurrentHashMap$Node;
using $ConcurrentHashMap$Traverser = ::java::util::concurrent::ConcurrentHashMap$Traverser;
using $ConcurrentHashMap$ValueIterator = ::java::util::concurrent::ConcurrentHashMap$ValueIterator;
using $ConcurrentHashMap$ValueSpliterator = ::java::util::concurrent::ConcurrentHashMap$ValueSpliterator;
using $Consumer = ::java::util::function::Consumer;
using $Predicate = ::java::util::function::Predicate;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentHashMap$ValuesView_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ConcurrentHashMap$ValuesView, serialVersionUID)},
	{}
};

$MethodInfo _ConcurrentHashMap$ValuesView_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ConcurrentHashMap;)V", "(Ljava/util/concurrent/ConcurrentHashMap<TK;TV;>;)V", 0, $method(static_cast<void(ConcurrentHashMap$ValuesView::*)($ConcurrentHashMap*)>(&ConcurrentHashMap$ValuesView::init$))},
	{"add", "(Ljava/lang/Object;)Z", "(TV;)Z", $PUBLIC | $FINAL},
	{"addAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<+TV;>;)Z", $PUBLIC | $FINAL},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TV;>;)V", $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TV;>;", $PUBLIC | $FINAL},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"removeAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"removeIf", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<-TV;>;)Z", $PUBLIC},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TV;>;", $PUBLIC},
	{}
};

$InnerClassInfo _ConcurrentHashMap$ValuesView_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentHashMap$ValuesView", "java.util.concurrent.ConcurrentHashMap", "ValuesView", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$CollectionView", "java.util.concurrent.ConcurrentHashMap", "CollectionView", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentHashMap$ValuesView_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentHashMap$ValuesView",
	"java.util.concurrent.ConcurrentHashMap$CollectionView",
	nullptr,
	_ConcurrentHashMap$ValuesView_FieldInfo_,
	_ConcurrentHashMap$ValuesView_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/concurrent/ConcurrentHashMap$CollectionView<TK;TV;TV;>;Ljava/util/Collection<TV;>;Ljava/io/Serializable;",
	nullptr,
	_ConcurrentHashMap$ValuesView_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentHashMap"
};

$Object* allocate$ConcurrentHashMap$ValuesView($Class* clazz) {
	return $of($alloc(ConcurrentHashMap$ValuesView));
}

void ConcurrentHashMap$ValuesView::init$($ConcurrentHashMap* map) {
	$ConcurrentHashMap$CollectionView::init$(map);
}

bool ConcurrentHashMap$ValuesView::contains(Object$* o) {
	return $nc(this->map)->containsValue(o);
}

bool ConcurrentHashMap$ValuesView::remove(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if (o != nullptr) {
		{
			$var($Iterator, it, iterator());
			for (; $nc(it)->hasNext();) {
				if ($of(o)->equals($(it->next()))) {
					it->remove();
					return true;
				}
			}
		}
	}
	return false;
}

$Iterator* ConcurrentHashMap$ValuesView::iterator() {
	$useLocalCurrentObjectStackCache();
	$var($ConcurrentHashMap, m, this->map);
	$var($ConcurrentHashMap$NodeArray, t, nullptr);
	int32_t f = ($assign(t, $nc(m)->table)) == nullptr ? 0 : $nc(t)->length;
	return $new($ConcurrentHashMap$ValueIterator, t, f, 0, f, m);
}

bool ConcurrentHashMap$ValuesView::add(Object$* e) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool ConcurrentHashMap$ValuesView::addAll($Collection* c) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool ConcurrentHashMap$ValuesView::removeAll($Collection* c) {
	$useLocalCurrentObjectStackCache();
	if (c == nullptr) {
		$throwNew($NullPointerException);
	}
	bool modified = false;
	{
		$var($Iterator, it, iterator());
		for (; $nc(it)->hasNext();) {
			if ($nc(c)->contains($(it->next()))) {
				it->remove();
				modified = true;
			}
		}
	}
	return modified;
}

bool ConcurrentHashMap$ValuesView::removeIf($Predicate* filter) {
	return $nc(this->map)->removeValueIf(filter);
}

$Spliterator* ConcurrentHashMap$ValuesView::spliterator() {
	$useLocalCurrentObjectStackCache();
	$var($ConcurrentHashMap$NodeArray, t, nullptr);
	$var($ConcurrentHashMap, m, this->map);
	int64_t n = $nc(m)->sumCount();
	int32_t f = ($assign(t, m->table)) == nullptr ? 0 : $nc(t)->length;
	return $new($ConcurrentHashMap$ValueSpliterator, t, f, 0, f, n < (int64_t)0 ? (int64_t)0 : n);
}

void ConcurrentHashMap$ValuesView::forEach($Consumer* action) {
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
				$nc(action)->accept($nc(p)->val);
			}
		}
	}
}

ConcurrentHashMap$ValuesView::ConcurrentHashMap$ValuesView() {
}

$Class* ConcurrentHashMap$ValuesView::load$($String* name, bool initialize) {
	$loadClass(ConcurrentHashMap$ValuesView, name, initialize, &_ConcurrentHashMap$ValuesView_ClassInfo_, allocate$ConcurrentHashMap$ValuesView);
	return class$;
}

$Class* ConcurrentHashMap$ValuesView::class$ = nullptr;

		} // concurrent
	} // util
} // java