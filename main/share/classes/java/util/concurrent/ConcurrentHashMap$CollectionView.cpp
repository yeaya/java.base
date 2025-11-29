#include <java/util/concurrent/ConcurrentHashMap$CollectionView.h>

#include <java/lang/OutOfMemoryError.h>
#include <java/lang/reflect/Array.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <java/util/concurrent/ConcurrentHashMap$Node.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <jcpp.h>

#undef OOME_MSG

using $ConcurrentHashMap$NodeArray = $Array<::java::util::concurrent::ConcurrentHashMap$Node>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $1Array = ::java::lang::reflect::Array;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentHashMap$CollectionView_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ConcurrentHashMap$CollectionView, serialVersionUID)},
	{"map", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<TK;TV;>;", $FINAL, $field(ConcurrentHashMap$CollectionView, map)},
	{"OOME_MSG", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ConcurrentHashMap$CollectionView, OOME_MSG)},
	{}
};

$MethodInfo _ConcurrentHashMap$CollectionView_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "(Ljava/util/concurrent/ConcurrentHashMap;)V", "(Ljava/util/concurrent/ConcurrentHashMap<TK;TV;>;)V", 0, $method(static_cast<void(ConcurrentHashMap$CollectionView::*)($ConcurrentHashMap*)>(&ConcurrentHashMap$CollectionView::init$))},
	{"clear", "()V", nullptr, $PUBLIC | $FINAL},
	{"containsAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC | $FINAL},
	{"getMap", "()Ljava/util/concurrent/ConcurrentHashMap;", "()Ljava/util/concurrent/ConcurrentHashMap<TK;TV;>;", $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC | $FINAL},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"removeAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"retainAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC | $FINAL},
	{"size", "()I", nullptr, $PUBLIC | $FINAL},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC | $FINAL},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _ConcurrentHashMap$CollectionView_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentHashMap$CollectionView", "java.util.concurrent.ConcurrentHashMap", "CollectionView", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentHashMap$CollectionView_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.concurrent.ConcurrentHashMap$CollectionView",
	"java.lang.Object",
	"java.util.Collection,java.io.Serializable",
	_ConcurrentHashMap$CollectionView_FieldInfo_,
	_ConcurrentHashMap$CollectionView_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;E:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Collection<TE;>;Ljava/io/Serializable;",
	nullptr,
	_ConcurrentHashMap$CollectionView_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentHashMap"
};

$Object* allocate$ConcurrentHashMap$CollectionView($Class* clazz) {
	return $of($alloc(ConcurrentHashMap$CollectionView));
}

bool ConcurrentHashMap$CollectionView::equals(Object$* o) {
	 return this->$Collection::equals(o);
}

int32_t ConcurrentHashMap$CollectionView::hashCode() {
	 return this->$Collection::hashCode();
}

$Object* ConcurrentHashMap$CollectionView::clone() {
	 return this->$Collection::clone();
}

void ConcurrentHashMap$CollectionView::finalize() {
	this->$Collection::finalize();
}

$String* ConcurrentHashMap$CollectionView::OOME_MSG = nullptr;

void ConcurrentHashMap$CollectionView::init$($ConcurrentHashMap* map) {
	$set(this, map, map);
}

$ConcurrentHashMap* ConcurrentHashMap$CollectionView::getMap() {
	return this->map;
}

void ConcurrentHashMap$CollectionView::clear() {
	$nc(this->map)->clear();
}

int32_t ConcurrentHashMap$CollectionView::size() {
	return $nc(this->map)->size();
}

bool ConcurrentHashMap$CollectionView::isEmpty() {
	return $nc(this->map)->isEmpty();
}

$ObjectArray* ConcurrentHashMap$CollectionView::toArray() {
	$useLocalCurrentObjectStackCache();
	int64_t sz = $nc(this->map)->mappingCount();
	if (sz > 0x7FFFFFF7) {
		$throwNew($OutOfMemoryError, ConcurrentHashMap$CollectionView::OOME_MSG);
	}
	int32_t n = (int32_t)sz;
	$var($ObjectArray, r, $new($ObjectArray, n));
	int32_t i = 0;
	{
		$var($Iterator, i$, this->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, e, i$->next());
			{
				if (i == n) {
					if (n >= 0x7FFFFFF7) {
						$throwNew($OutOfMemoryError, ConcurrentHashMap$CollectionView::OOME_MSG);
					}
					if (n >= 0x7FFFFFF7 - ((int32_t)((uint32_t)0x7FFFFFF7 >> 1)) - 1) {
						n = 0x7FFFFFF7;
					} else {
						n += ((int32_t)((uint32_t)n >> 1)) + 1;
					}
					$assign(r, $Arrays::copyOf(r, n));
				}
				r->set(i++, e);
			}
		}
	}
	return (i == n) ? r : $Arrays::copyOf(r, i);
}

$ObjectArray* ConcurrentHashMap$CollectionView::toArray($ObjectArray* a) {
	$useLocalCurrentObjectStackCache();
	int64_t sz = $nc(this->map)->mappingCount();
	if (sz > 0x7FFFFFF7) {
		$throwNew($OutOfMemoryError, ConcurrentHashMap$CollectionView::OOME_MSG);
	}
	int32_t m = (int32_t)sz;
	$var($ObjectArray, r, ($nc(a)->length >= m) ? a : $cast($ObjectArray, $1Array::newInstance($nc($of(a))->getClass()->getComponentType(), m)));
	int32_t n = $nc(r)->length;
	int32_t i = 0;
	{
		$var($Iterator, i$, this->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, e, i$->next());
			{
				if (i == n) {
					if (n >= 0x7FFFFFF7) {
						$throwNew($OutOfMemoryError, ConcurrentHashMap$CollectionView::OOME_MSG);
					}
					if (n >= 0x7FFFFFF7 - ((int32_t)((uint32_t)0x7FFFFFF7 >> 1)) - 1) {
						n = 0x7FFFFFF7;
					} else {
						n += ((int32_t)((uint32_t)n >> 1)) + 1;
					}
					$assign(r, $Arrays::copyOf(r, n));
				}
				r->set(i++, e);
			}
		}
	}
	if (a == r && i < n) {
		r->set(i, nullptr);
		return r;
	}
	return (i == n) ? r : $Arrays::copyOf(r, i);
}

$String* ConcurrentHashMap$CollectionView::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append(u'[');
	$var($Iterator, it, iterator());
	if ($nc(it)->hasNext()) {
		for (;;) {
			$var($Object, e, it->next());
			sb->append($equals(e, this) ? $of("(this Collection)"_s) : e);
			if (!it->hasNext()) {
				break;
			}
			sb->append(u',')->append(u' ');
		}
	}
	return sb->append(u']')->toString();
}

bool ConcurrentHashMap$CollectionView::containsAll($Collection* c) {
	$useLocalCurrentObjectStackCache();
	if (!$equals(c, this)) {
		{
			$var($Iterator, i$, $nc(c)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Object, e, i$->next());
				{
					if (e == nullptr || !contains(e)) {
						return false;
					}
				}
			}
		}
	}
	return true;
}

bool ConcurrentHashMap$CollectionView::removeAll($Collection* c) {
	$useLocalCurrentObjectStackCache();
	if (c == nullptr) {
		$throwNew($NullPointerException);
	}
	bool modified = false;
	$var($ConcurrentHashMap$NodeArray, t, nullptr);
	if (($assign(t, $nc(this->map)->table)) == nullptr) {
		return false;
	} else if ($instanceOf($Set, c) && $nc(c)->size() > $nc(t)->length) {
		{
			$var($Iterator, it, iterator());
			for (; $nc(it)->hasNext();) {
				if (c->contains($(it->next()))) {
					it->remove();
					modified = true;
				}
			}
		}
	} else {
		{
			$var($Iterator, i$, c->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Object, e, i$->next());
				modified |= remove(e);
			}
		}
	}
	return modified;
}

bool ConcurrentHashMap$CollectionView::retainAll($Collection* c) {
	$useLocalCurrentObjectStackCache();
	if (c == nullptr) {
		$throwNew($NullPointerException);
	}
	bool modified = false;
	{
		$var($Iterator, it, iterator());
		for (; $nc(it)->hasNext();) {
			if (!$nc(c)->contains($(it->next()))) {
				it->remove();
				modified = true;
			}
		}
	}
	return modified;
}

ConcurrentHashMap$CollectionView::ConcurrentHashMap$CollectionView() {
}

void clinit$ConcurrentHashMap$CollectionView($Class* class$) {
	$assignStatic(ConcurrentHashMap$CollectionView::OOME_MSG, "Required array size too large"_s);
}

$Class* ConcurrentHashMap$CollectionView::load$($String* name, bool initialize) {
	$loadClass(ConcurrentHashMap$CollectionView, name, initialize, &_ConcurrentHashMap$CollectionView_ClassInfo_, clinit$ConcurrentHashMap$CollectionView, allocate$ConcurrentHashMap$CollectionView);
	return class$;
}

$Class* ConcurrentHashMap$CollectionView::class$ = nullptr;

		} // concurrent
	} // util
} // java