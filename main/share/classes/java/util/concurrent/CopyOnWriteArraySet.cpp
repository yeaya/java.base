#include <java/util/concurrent/CopyOnWriteArraySet.h>

#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/concurrent/CopyOnWriteArrayList.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

#undef DISTINCT
#undef IMMUTABLE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $Spliterator = ::java::util::Spliterator;
using $Spliterators = ::java::util::Spliterators;
using $CopyOnWriteArrayList = ::java::util::concurrent::CopyOnWriteArrayList;
using $Consumer = ::java::util::function::Consumer;
using $Predicate = ::java::util::function::Predicate;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _CopyOnWriteArraySet_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CopyOnWriteArraySet, serialVersionUID)},
	{"al", "Ljava/util/concurrent/CopyOnWriteArrayList;", "Ljava/util/concurrent/CopyOnWriteArrayList<TE;>;", $PRIVATE | $FINAL, $field(CopyOnWriteArraySet, al)},
	{}
};

$MethodInfo _CopyOnWriteArraySet_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CopyOnWriteArraySet::*)()>(&CopyOnWriteArraySet::init$))},
	{"<init>", "(Ljava/util/Collection;)V", "(Ljava/util/Collection<+TE;>;)V", $PUBLIC, $method(static_cast<void(CopyOnWriteArraySet::*)($Collection*)>(&CopyOnWriteArraySet::init$))},
	{"add", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC},
	{"addAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<+TE;>;)Z", $PUBLIC},
	{"clear", "()V", nullptr, $PUBLIC},
	{"compareSets", "([Ljava/lang/Object;Ljava/util/Set;)I", "([Ljava/lang/Object;Ljava/util/Set<*>;)I", $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($ObjectArray*,$Set*)>(&CopyOnWriteArraySet::compareSets))},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"containsAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"removeAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"removeIf", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<-TE;>;)Z", $PUBLIC},
	{"retainAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE;>;", $PUBLIC},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CopyOnWriteArraySet_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.CopyOnWriteArraySet",
	"java.util.AbstractSet",
	"java.io.Serializable",
	_CopyOnWriteArraySet_FieldInfo_,
	_CopyOnWriteArraySet_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/AbstractSet<TE;>;Ljava/io/Serializable;"
};

$Object* allocate$CopyOnWriteArraySet($Class* clazz) {
	return $of($alloc(CopyOnWriteArraySet));
}

int32_t CopyOnWriteArraySet::hashCode() {
	 return this->$AbstractSet::hashCode();
}

$String* CopyOnWriteArraySet::toString() {
	 return this->$AbstractSet::toString();
}

$Object* CopyOnWriteArraySet::clone() {
	 return this->$AbstractSet::clone();
}

void CopyOnWriteArraySet::finalize() {
	this->$AbstractSet::finalize();
}

void CopyOnWriteArraySet::init$() {
	$AbstractSet::init$();
	$set(this, al, $new($CopyOnWriteArrayList));
}

void CopyOnWriteArraySet::init$($Collection* c) {
	$AbstractSet::init$();
	if ($nc($of(c))->getClass() == CopyOnWriteArraySet::class$) {
		$var(CopyOnWriteArraySet, cc, $cast(CopyOnWriteArraySet, c));
		$set(this, al, $new($CopyOnWriteArrayList, static_cast<$Collection*>(cc->al)));
	} else {
		$set(this, al, $new($CopyOnWriteArrayList));
		$nc(this->al)->addAllAbsent(c);
	}
}

int32_t CopyOnWriteArraySet::size() {
	return $nc(this->al)->size();
}

bool CopyOnWriteArraySet::isEmpty() {
	return $nc(this->al)->isEmpty();
}

bool CopyOnWriteArraySet::contains(Object$* o) {
	return $nc(this->al)->contains(o);
}

$ObjectArray* CopyOnWriteArraySet::toArray() {
	return $nc(this->al)->toArray();
}

$ObjectArray* CopyOnWriteArraySet::toArray($ObjectArray* a) {
	return $nc(this->al)->toArray(a);
}

void CopyOnWriteArraySet::clear() {
	$nc(this->al)->clear();
}

bool CopyOnWriteArraySet::remove(Object$* o) {
	return $nc(this->al)->remove(o);
}

bool CopyOnWriteArraySet::add(Object$* e) {
	return $nc(this->al)->addIfAbsent(e);
}

bool CopyOnWriteArraySet::containsAll($Collection* c) {
	return ($instanceOf($Set, c)) ? compareSets($($nc(this->al)->getArray()), $cast($Set, c)) >= 0 : $nc(this->al)->containsAll(c);
}

int32_t CopyOnWriteArraySet::compareSets($ObjectArray* snapshot, $Set* set) {
	$init(CopyOnWriteArraySet);
	$useLocalCurrentObjectStackCache();
	int32_t len = $nc(snapshot)->length;
	$var($booleans, matched, $new($booleans, len));
	int32_t j = 0;
	bool outer$continue = false;
	{
		$var($Iterator, i$, $nc(set)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, x, i$->next());
			{
				for (int32_t i = j; i < len; ++i) {
					if (!matched->get(i) && $Objects::equals(x, snapshot->get(i))) {
						matched->set(i, true);
						if (i == j) {
							do {
								++j;
							} while (j < len && matched->get(j));
						}
						outer$continue = true;
						break;
					}
				}
				if (outer$continue) {
					outer$continue = false;
					continue;
				}
				return -1;
			}
		}
	}
	return (j == len) ? 0 : 1;
}

bool CopyOnWriteArraySet::addAll($Collection* c) {
	return $nc(this->al)->addAllAbsent(c) > 0;
}

bool CopyOnWriteArraySet::removeAll($Collection* c) {
	return $nc(this->al)->removeAll(c);
}

bool CopyOnWriteArraySet::retainAll($Collection* c) {
	return $nc(this->al)->retainAll(c);
}

$Iterator* CopyOnWriteArraySet::iterator() {
	return $nc(this->al)->iterator();
}

bool CopyOnWriteArraySet::equals(Object$* o) {
	return ($equals(o, this)) || (($instanceOf($Set, o)) && compareSets($($nc(this->al)->getArray()), $cast($Set, o)) == 0);
}

bool CopyOnWriteArraySet::removeIf($Predicate* filter) {
	return $nc(this->al)->removeIf(filter);
}

void CopyOnWriteArraySet::forEach($Consumer* action) {
	$nc(this->al)->forEach(action);
}

$Spliterator* CopyOnWriteArraySet::spliterator() {
	return $Spliterators::spliterator($($nc(this->al)->getArray()), $Spliterator::IMMUTABLE | $Spliterator::DISTINCT);
}

CopyOnWriteArraySet::CopyOnWriteArraySet() {
}

$Class* CopyOnWriteArraySet::load$($String* name, bool initialize) {
	$loadClass(CopyOnWriteArraySet, name, initialize, &_CopyOnWriteArraySet_ClassInfo_, allocate$CopyOnWriteArraySet);
	return class$;
}

$Class* CopyOnWriteArraySet::class$ = nullptr;

		} // concurrent
	} // util
} // java