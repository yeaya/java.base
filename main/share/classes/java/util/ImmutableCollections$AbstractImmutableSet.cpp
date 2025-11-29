#include <java/util/ImmutableCollections$AbstractImmutableSet.h>

#include <java/util/AbstractCollection.h>
#include <java/util/Collection.h>
#include <java/util/ImmutableCollections$AbstractImmutableCollection.h>
#include <java/util/ImmutableCollections.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $ImmutableCollections$AbstractImmutableCollection = ::java::util::ImmutableCollections$AbstractImmutableCollection;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace util {

$CompoundAttribute _ImmutableCollections$AbstractImmutableSet_Annotations_[] = {
	{"Ljdk/internal/ValueBased;", nullptr},
	{}
};

$MethodInfo _ImmutableCollections$AbstractImmutableSet_MethodInfo_[] = {
	{"*add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*addAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*clear", "()V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*containsAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEach", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ImmutableCollections$AbstractImmutableSet::*)()>(&ImmutableCollections$AbstractImmutableSet::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*removeAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*removeIf", "(Ljava/util/function/Predicate;)Z", nullptr, $PUBLIC},
	{"*retainAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"*size", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"*toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"*parallelStream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _ImmutableCollections$AbstractImmutableSet_InnerClassesInfo_[] = {
	{"java.util.ImmutableCollections$AbstractImmutableSet", "java.util.ImmutableCollections", "AbstractImmutableSet", $STATIC | $ABSTRACT},
	{"java.util.ImmutableCollections$AbstractImmutableCollection", "java.util.ImmutableCollections", "AbstractImmutableCollection", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ImmutableCollections$AbstractImmutableSet_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.ImmutableCollections$AbstractImmutableSet",
	"java.util.ImmutableCollections$AbstractImmutableCollection",
	"java.util.Set",
	nullptr,
	_ImmutableCollections$AbstractImmutableSet_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/ImmutableCollections$AbstractImmutableCollection<TE;>;Ljava/util/Set<TE;>;",
	nullptr,
	_ImmutableCollections$AbstractImmutableSet_InnerClassesInfo_,
	_ImmutableCollections$AbstractImmutableSet_Annotations_,
	nullptr,
	nullptr,
	"java.util.ImmutableCollections"
};

$Object* allocate$ImmutableCollections$AbstractImmutableSet($Class* clazz) {
	return $of($alloc(ImmutableCollections$AbstractImmutableSet));
}

int32_t ImmutableCollections$AbstractImmutableSet::hashCode() {
	 return this->$ImmutableCollections$AbstractImmutableCollection::hashCode();
}

bool ImmutableCollections$AbstractImmutableSet::add(Object$* e) {
	 return this->$ImmutableCollections$AbstractImmutableCollection::add(e);
}

bool ImmutableCollections$AbstractImmutableSet::addAll($Collection* c) {
	 return this->$ImmutableCollections$AbstractImmutableCollection::addAll(c);
}

void ImmutableCollections$AbstractImmutableSet::clear() {
	this->$ImmutableCollections$AbstractImmutableCollection::clear();
}

bool ImmutableCollections$AbstractImmutableSet::remove(Object$* o) {
	 return this->$ImmutableCollections$AbstractImmutableCollection::remove(o);
}

bool ImmutableCollections$AbstractImmutableSet::removeAll($Collection* c) {
	 return this->$ImmutableCollections$AbstractImmutableCollection::removeAll(c);
}

bool ImmutableCollections$AbstractImmutableSet::removeIf($Predicate* filter) {
	 return this->$ImmutableCollections$AbstractImmutableCollection::removeIf(filter);
}

bool ImmutableCollections$AbstractImmutableSet::retainAll($Collection* c) {
	 return this->$ImmutableCollections$AbstractImmutableCollection::retainAll(c);
}

bool ImmutableCollections$AbstractImmutableSet::isEmpty() {
	 return this->$ImmutableCollections$AbstractImmutableCollection::isEmpty();
}

bool ImmutableCollections$AbstractImmutableSet::contains(Object$* o) {
	 return this->$ImmutableCollections$AbstractImmutableCollection::contains(o);
}

$ObjectArray* ImmutableCollections$AbstractImmutableSet::toArray() {
	 return this->$ImmutableCollections$AbstractImmutableCollection::toArray();
}

$ObjectArray* ImmutableCollections$AbstractImmutableSet::toArray($ObjectArray* a) {
	 return this->$ImmutableCollections$AbstractImmutableCollection::toArray(a);
}

bool ImmutableCollections$AbstractImmutableSet::containsAll($Collection* c) {
	 return this->$ImmutableCollections$AbstractImmutableCollection::containsAll(c);
}

$String* ImmutableCollections$AbstractImmutableSet::toString() {
	 return this->$ImmutableCollections$AbstractImmutableCollection::toString();
}

$ObjectArray* ImmutableCollections$AbstractImmutableSet::toArray($IntFunction* generator) {
	 return this->$ImmutableCollections$AbstractImmutableCollection::toArray(generator);
}

$Spliterator* ImmutableCollections$AbstractImmutableSet::spliterator() {
	 return this->$ImmutableCollections$AbstractImmutableCollection::spliterator();
}

$Stream* ImmutableCollections$AbstractImmutableSet::stream() {
	 return this->$ImmutableCollections$AbstractImmutableCollection::stream();
}

$Stream* ImmutableCollections$AbstractImmutableSet::parallelStream() {
	 return this->$ImmutableCollections$AbstractImmutableCollection::parallelStream();
}

void ImmutableCollections$AbstractImmutableSet::forEach($Consumer* action) {
	this->$ImmutableCollections$AbstractImmutableCollection::forEach(action);
}

$Object* ImmutableCollections$AbstractImmutableSet::clone() {
	 return this->$ImmutableCollections$AbstractImmutableCollection::clone();
}

void ImmutableCollections$AbstractImmutableSet::finalize() {
	this->$ImmutableCollections$AbstractImmutableCollection::finalize();
}

void ImmutableCollections$AbstractImmutableSet::init$() {
	$ImmutableCollections$AbstractImmutableCollection::init$();
}

bool ImmutableCollections$AbstractImmutableSet::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if ($equals(o, this)) {
		return true;
	} else if (!($instanceOf($Set, o))) {
		return false;
	}
	$var($Collection, c, $cast($Collection, o));
	int32_t var$0 = $nc(c)->size();
	if (var$0 != size()) {
		return false;
	}
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
	return true;
}

ImmutableCollections$AbstractImmutableSet::ImmutableCollections$AbstractImmutableSet() {
}

$Class* ImmutableCollections$AbstractImmutableSet::load$($String* name, bool initialize) {
	$loadClass(ImmutableCollections$AbstractImmutableSet, name, initialize, &_ImmutableCollections$AbstractImmutableSet_ClassInfo_, allocate$ImmutableCollections$AbstractImmutableSet);
	return class$;
}

$Class* ImmutableCollections$AbstractImmutableSet::class$ = nullptr;

	} // util
} // java