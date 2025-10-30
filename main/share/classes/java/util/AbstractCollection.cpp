#include <java/util/AbstractCollection.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Array.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/Objects.h>
#include <jdk/internal/util/ArraysSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $1Array = ::java::lang::reflect::Array;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $Objects = ::java::util::Objects;
using $ArraysSupport = ::jdk::internal::util::ArraysSupport;

namespace java {
	namespace util {

$MethodInfo _AbstractCollection_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(AbstractCollection::*)()>(&AbstractCollection::init$))},
	{"add", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC},
	{"addAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<+TE;>;)Z", $PUBLIC},
	{"clear", "()V", nullptr, $PUBLIC},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"containsAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"finishToArray", "([Ljava/lang/Object;Ljava/util/Iterator;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;Ljava/util/Iterator<*>;)[TT;", $PRIVATE | $STATIC, $method(static_cast<$ObjectArray*(*)($ObjectArray*,$Iterator*)>(&AbstractCollection::finishToArray))},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"removeAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"retainAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AbstractCollection_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.util.AbstractCollection",
	"java.lang.Object",
	"java.util.Collection",
	nullptr,
	_AbstractCollection_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Collection<TE;>;"
};

$Object* allocate$AbstractCollection($Class* clazz) {
	return $of($alloc(AbstractCollection));
}

void AbstractCollection::init$() {
}

bool AbstractCollection::isEmpty() {
	return size() == 0;
}

bool AbstractCollection::contains(Object$* o) {
	$useLocalCurrentObjectStackCache();
	$var($Iterator, it, iterator());
	if (o == nullptr) {
		while ($nc(it)->hasNext()) {
			if (it->next() == nullptr) {
				return true;
			}
		}
	} else {
		while ($nc(it)->hasNext()) {
			if ($nc($of(o))->equals($(it->next()))) {
				return true;
			}
		}
	}
	return false;
}

$ObjectArray* AbstractCollection::toArray() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, r, $new($ObjectArray, size()));
	$var($Iterator, it, iterator());
	for (int32_t i = 0; i < r->length; ++i) {
		if (!$nc(it)->hasNext()) {
			return $Arrays::copyOf(r, i);
		}
		r->set(i, $($nc(it)->next()));
	}
	return $nc(it)->hasNext() ? finishToArray(r, it) : r;
}

$ObjectArray* AbstractCollection::toArray($ObjectArray* a) {
	$useLocalCurrentObjectStackCache();
	int32_t size = this->size();
	$var($ObjectArray, r, $nc(a)->length >= size ? a : $cast($ObjectArray, $1Array::newInstance($nc($of(a))->getClass()->getComponentType(), size)));
	$var($Iterator, it, iterator());
	for (int32_t i = 0; i < $nc(r)->length; ++i) {
		if (!$nc(it)->hasNext()) {
			if (a == r) {
				r->set(i, nullptr);
			} else if ($nc(a)->length < i) {
				return $Arrays::copyOf(r, i);
			} else {
				$System::arraycopy(r, 0, a, 0, i);
				if (a->length > i) {
					a->set(i, nullptr);
				}
			}
			return a;
		}
		r->set(i, $($nc(it)->next()));
	}
	return $nc(it)->hasNext() ? finishToArray(r, it) : r;
}

$ObjectArray* AbstractCollection::finishToArray($ObjectArray* r$renamed, $Iterator* it) {
	$init(AbstractCollection);
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, r, r$renamed);
	int32_t len = $nc(r)->length;
	int32_t i = len;
	while ($nc(it)->hasNext()) {
		if (i == len) {
			len = $ArraysSupport::newLength(len, 1, (len >> 1) + 1);
			$assign(r, $Arrays::copyOf(r, len));
		}
		r->set(i++, $(it->next()));
	}
	return (i == len) ? r : $Arrays::copyOf(r, i);
}

bool AbstractCollection::add(Object$* e) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool AbstractCollection::remove(Object$* o) {
	$useLocalCurrentObjectStackCache();
	$var($Iterator, it, iterator());
	if (o == nullptr) {
		while ($nc(it)->hasNext()) {
			if (it->next() == nullptr) {
				it->remove();
				return true;
			}
		}
	} else {
		while ($nc(it)->hasNext()) {
			if ($nc($of(o))->equals($(it->next()))) {
				it->remove();
				return true;
			}
		}
	}
	return false;
}

bool AbstractCollection::containsAll($Collection* c) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(c)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, e, i$->next());
			if (!contains(e)) {
				return false;
			}
		}
	}
	return true;
}

bool AbstractCollection::addAll($Collection* c) {
	$useLocalCurrentObjectStackCache();
	bool modified = false;
	{
		$var($Iterator, i$, $nc(c)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, e, i$->next());
			if (add(e)) {
				modified = true;
			}
		}
	}
	return modified;
}

bool AbstractCollection::removeAll($Collection* c) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(c);
	bool modified = false;
	$var($Iterator, it, iterator());
	while ($nc(it)->hasNext()) {
		if (c->contains($(it->next()))) {
			it->remove();
			modified = true;
		}
	}
	return modified;
}

bool AbstractCollection::retainAll($Collection* c) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(c);
	bool modified = false;
	$var($Iterator, it, iterator());
	while ($nc(it)->hasNext()) {
		if (!c->contains($(it->next()))) {
			it->remove();
			modified = true;
		}
	}
	return modified;
}

void AbstractCollection::clear() {
	$var($Iterator, it, iterator());
	while ($nc(it)->hasNext()) {
		it->next();
		it->remove();
	}
}

$String* AbstractCollection::toString() {
	$useLocalCurrentObjectStackCache();
	$var($Iterator, it, iterator());
	if (!$nc(it)->hasNext()) {
		return "[]"_s;
	}
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append(u'[');
	for (;;) {
		$var($Object, e, $nc(it)->next());
		sb->append($equals(e, this) ? $of("(this Collection)"_s) : e);
		if (!it->hasNext()) {
			return sb->append(u']')->toString();
		}
		sb->append(u',')->append(u' ');
	}
}

AbstractCollection::AbstractCollection() {
}

$Class* AbstractCollection::load$($String* name, bool initialize) {
	$loadClass(AbstractCollection, name, initialize, &_AbstractCollection_ClassInfo_, allocate$AbstractCollection);
	return class$;
}

$Class* AbstractCollection::class$ = nullptr;

	} // util
} // java