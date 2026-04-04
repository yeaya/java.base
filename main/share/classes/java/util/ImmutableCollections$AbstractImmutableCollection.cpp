#include <java/util/ImmutableCollections$AbstractImmutableCollection.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Collection.h>
#include <java/util/ImmutableCollections.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $Collection = ::java::util::Collection;
using $ImmutableCollections = ::java::util::ImmutableCollections;
using $Predicate = ::java::util::function::Predicate;

namespace java {
	namespace util {

void ImmutableCollections$AbstractImmutableCollection::init$() {
	$AbstractCollection::init$();
}

bool ImmutableCollections$AbstractImmutableCollection::add(Object$* e) {
	$throw($($ImmutableCollections::uoe()));
	$shouldNotReachHere();
}

bool ImmutableCollections$AbstractImmutableCollection::addAll($Collection* c) {
	$throw($($ImmutableCollections::uoe()));
	$shouldNotReachHere();
}

void ImmutableCollections$AbstractImmutableCollection::clear() {
	$throw($($ImmutableCollections::uoe()));
}

bool ImmutableCollections$AbstractImmutableCollection::remove(Object$* o) {
	$throw($($ImmutableCollections::uoe()));
	$shouldNotReachHere();
}

bool ImmutableCollections$AbstractImmutableCollection::removeAll($Collection* c) {
	$throw($($ImmutableCollections::uoe()));
	$shouldNotReachHere();
}

bool ImmutableCollections$AbstractImmutableCollection::removeIf($Predicate* filter) {
	$throw($($ImmutableCollections::uoe()));
	$shouldNotReachHere();
}

bool ImmutableCollections$AbstractImmutableCollection::retainAll($Collection* c) {
	$throw($($ImmutableCollections::uoe()));
	$shouldNotReachHere();
}

ImmutableCollections$AbstractImmutableCollection::ImmutableCollections$AbstractImmutableCollection() {
}

$Class* ImmutableCollections$AbstractImmutableCollection::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ImmutableCollections$AbstractImmutableCollection, init$, void)},
		{"add", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC, $virtualMethod(ImmutableCollections$AbstractImmutableCollection, add, bool, Object$*)},
		{"addAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<+TE;>;)Z", $PUBLIC, $virtualMethod(ImmutableCollections$AbstractImmutableCollection, addAll, bool, $Collection*)},
		{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(ImmutableCollections$AbstractImmutableCollection, clear, void)},
		{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ImmutableCollections$AbstractImmutableCollection, remove, bool, Object$*)},
		{"removeAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC, $virtualMethod(ImmutableCollections$AbstractImmutableCollection, removeAll, bool, $Collection*)},
		{"removeIf", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<-TE;>;)Z", $PUBLIC, $virtualMethod(ImmutableCollections$AbstractImmutableCollection, removeIf, bool, $Predicate*)},
		{"retainAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC, $virtualMethod(ImmutableCollections$AbstractImmutableCollection, retainAll, bool, $Collection*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.ImmutableCollections$AbstractImmutableCollection", "java.util.ImmutableCollections", "AbstractImmutableCollection", $STATIC | $ABSTRACT},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljdk/internal/ValueBased;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"java.util.ImmutableCollections$AbstractImmutableCollection",
		"java.util.AbstractCollection",
		nullptr,
		nullptr,
		methodInfos$$,
		"<E:Ljava/lang/Object;>Ljava/util/AbstractCollection<TE;>;",
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"java.util.ImmutableCollections"
	};
	$loadClass(ImmutableCollections$AbstractImmutableCollection, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImmutableCollections$AbstractImmutableCollection);
	});
	return class$;
}

$Class* ImmutableCollections$AbstractImmutableCollection::class$ = nullptr;

	} // util
} // java