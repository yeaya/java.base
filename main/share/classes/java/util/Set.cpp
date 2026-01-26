#include <java/util/Set.h>

#include <java/util/Collection.h>
#include <java/util/HashSet.h>
#include <java/util/ImmutableCollections$AbstractImmutableSet.h>
#include <java/util/ImmutableCollections$Set12.h>
#include <java/util/ImmutableCollections$SetN.h>
#include <java/util/ImmutableCollections.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators.h>
#include <jcpp.h>

#undef DISTINCT
#undef EMPTY_SET

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $HashSet = ::java::util::HashSet;
using $ImmutableCollections = ::java::util::ImmutableCollections;
using $ImmutableCollections$AbstractImmutableSet = ::java::util::ImmutableCollections$AbstractImmutableSet;
using $ImmutableCollections$Set12 = ::java::util::ImmutableCollections$Set12;
using $ImmutableCollections$SetN = ::java::util::ImmutableCollections$SetN;
using $Spliterator = ::java::util::Spliterator;
using $Spliterators = ::java::util::Spliterators;

namespace java {
	namespace util {

$CompoundAttribute _Set_MethodAnnotations_of12[] = {
	{"Ljava/lang/SafeVarargs;", nullptr},
	{}
};

$MethodInfo _Set_MethodInfo_[] = {
	{"add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"addAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"clear", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"containsAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"copyOf", "(Ljava/util/Collection;)Ljava/util/Set;", "<E:Ljava/lang/Object;>(Ljava/util/Collection<+TE;>;)Ljava/util/Set<TE;>;", $PUBLIC | $STATIC, $staticMethod(Set, copyOf, Set*, $Collection*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"isEmpty", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"of", "()Ljava/util/Set;", "<E:Ljava/lang/Object;>()Ljava/util/Set<TE;>;", $PUBLIC | $STATIC, $staticMethod(Set, of, Set*)},
	{"of", "(Ljava/lang/Object;)Ljava/util/Set;", "<E:Ljava/lang/Object;>(TE;)Ljava/util/Set<TE;>;", $PUBLIC | $STATIC, $staticMethod(Set, of, Set*, Object$*)},
	{"of", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;", "<E:Ljava/lang/Object;>(TE;TE;)Ljava/util/Set<TE;>;", $PUBLIC | $STATIC, $staticMethod(Set, of, Set*, Object$*, Object$*)},
	{"of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;", "<E:Ljava/lang/Object;>(TE;TE;TE;)Ljava/util/Set<TE;>;", $PUBLIC | $STATIC, $staticMethod(Set, of, Set*, Object$*, Object$*, Object$*)},
	{"of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;", "<E:Ljava/lang/Object;>(TE;TE;TE;TE;)Ljava/util/Set<TE;>;", $PUBLIC | $STATIC, $staticMethod(Set, of, Set*, Object$*, Object$*, Object$*, Object$*)},
	{"of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;", "<E:Ljava/lang/Object;>(TE;TE;TE;TE;TE;)Ljava/util/Set<TE;>;", $PUBLIC | $STATIC, $staticMethod(Set, of, Set*, Object$*, Object$*, Object$*, Object$*, Object$*)},
	{"of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;", "<E:Ljava/lang/Object;>(TE;TE;TE;TE;TE;TE;)Ljava/util/Set<TE;>;", $PUBLIC | $STATIC, $staticMethod(Set, of, Set*, Object$*, Object$*, Object$*, Object$*, Object$*, Object$*)},
	{"of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;", "<E:Ljava/lang/Object;>(TE;TE;TE;TE;TE;TE;TE;)Ljava/util/Set<TE;>;", $PUBLIC | $STATIC, $staticMethod(Set, of, Set*, Object$*, Object$*, Object$*, Object$*, Object$*, Object$*, Object$*)},
	{"of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;", "<E:Ljava/lang/Object;>(TE;TE;TE;TE;TE;TE;TE;TE;)Ljava/util/Set<TE;>;", $PUBLIC | $STATIC, $staticMethod(Set, of, Set*, Object$*, Object$*, Object$*, Object$*, Object$*, Object$*, Object$*, Object$*)},
	{"of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;", "<E:Ljava/lang/Object;>(TE;TE;TE;TE;TE;TE;TE;TE;TE;)Ljava/util/Set<TE;>;", $PUBLIC | $STATIC, $staticMethod(Set, of, Set*, Object$*, Object$*, Object$*, Object$*, Object$*, Object$*, Object$*, Object$*, Object$*)},
	{"of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;", "<E:Ljava/lang/Object;>(TE;TE;TE;TE;TE;TE;TE;TE;TE;TE;)Ljava/util/Set<TE;>;", $PUBLIC | $STATIC, $staticMethod(Set, of, Set*, Object$*, Object$*, Object$*, Object$*, Object$*, Object$*, Object$*, Object$*, Object$*, Object$*)},
	{"of", "([Ljava/lang/Object;)Ljava/util/Set;", "<E:Ljava/lang/Object;>([TE;)Ljava/util/Set<TE;>;", $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(Set, of, Set*, $ObjectArray*), nullptr, nullptr, _Set_MethodAnnotations_of12},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"removeAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"retainAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"size", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE;>;", $PUBLIC, $virtualMethod(Set, spliterator, $Spliterator*)},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Set_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.Set",
	nullptr,
	"java.util.Collection",
	nullptr,
	_Set_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Collection<TE;>;"
};

$Object* allocate$Set($Class* clazz) {
	return $of($alloc(Set));
}

bool Set::equals(Object$* o) {
	 return this->$Collection::equals(o);
}

int32_t Set::hashCode() {
	 return this->$Collection::hashCode();
}

$Spliterator* Set::spliterator() {
	return $Spliterators::spliterator(static_cast<$Collection*>(this), $Spliterator::DISTINCT);
}

Set* Set::of() {
	$init(Set);
	$init($ImmutableCollections);
	return static_cast<Set*>($ImmutableCollections::EMPTY_SET);
}

Set* Set::of(Object$* e1) {
	$init(Set);
	return $new($ImmutableCollections$Set12, e1);
}

Set* Set::of(Object$* e1, Object$* e2) {
	$init(Set);
	return $new($ImmutableCollections$Set12, e1, e2);
}

Set* Set::of(Object$* e1, Object$* e2, Object$* e3) {
	$init(Set);
	return $new($ImmutableCollections$SetN, $$new($ObjectArray, {
		e1,
		e2,
		e3
	}));
}

Set* Set::of(Object$* e1, Object$* e2, Object$* e3, Object$* e4) {
	$init(Set);
	return $new($ImmutableCollections$SetN, $$new($ObjectArray, {
		e1,
		e2,
		e3,
		e4
	}));
}

Set* Set::of(Object$* e1, Object$* e2, Object$* e3, Object$* e4, Object$* e5) {
	$init(Set);
	return $new($ImmutableCollections$SetN, $$new($ObjectArray, {
		e1,
		e2,
		e3,
		e4,
		e5
	}));
}

Set* Set::of(Object$* e1, Object$* e2, Object$* e3, Object$* e4, Object$* e5, Object$* e6) {
	$init(Set);
	return $new($ImmutableCollections$SetN, $$new($ObjectArray, {
		e1,
		e2,
		e3,
		e4,
		e5,
		e6
	}));
}

Set* Set::of(Object$* e1, Object$* e2, Object$* e3, Object$* e4, Object$* e5, Object$* e6, Object$* e7) {
	$init(Set);
	return $new($ImmutableCollections$SetN, $$new($ObjectArray, {
		e1,
		e2,
		e3,
		e4,
		e5,
		e6,
		e7
	}));
}

Set* Set::of(Object$* e1, Object$* e2, Object$* e3, Object$* e4, Object$* e5, Object$* e6, Object$* e7, Object$* e8) {
	$init(Set);
	return $new($ImmutableCollections$SetN, $$new($ObjectArray, {
		e1,
		e2,
		e3,
		e4,
		e5,
		e6,
		e7,
		e8
	}));
}

Set* Set::of(Object$* e1, Object$* e2, Object$* e3, Object$* e4, Object$* e5, Object$* e6, Object$* e7, Object$* e8, Object$* e9) {
	$init(Set);
	return $new($ImmutableCollections$SetN, $$new($ObjectArray, {
		e1,
		e2,
		e3,
		e4,
		e5,
		e6,
		e7,
		e8,
		e9
	}));
}

Set* Set::of(Object$* e1, Object$* e2, Object$* e3, Object$* e4, Object$* e5, Object$* e6, Object$* e7, Object$* e8, Object$* e9, Object$* e10) {
	$init(Set);
	return $new($ImmutableCollections$SetN, $$new($ObjectArray, {
		e1,
		e2,
		e3,
		e4,
		e5,
		e6,
		e7,
		e8,
		e9,
		e10
	}));
}

Set* Set::of($ObjectArray* elements) {
	$init(Set);
	{
		$var(Set, set, nullptr)
		switch ($nc(elements)->length) {
		case 0:
			{
				$init($ImmutableCollections);
				$assign(set, static_cast<Set*>($ImmutableCollections::EMPTY_SET));
				return set;
			}
		case 1:
			{
				return $new($ImmutableCollections$Set12, elements->get(0));
			}
		case 2:
			{
				return $new($ImmutableCollections$Set12, elements->get(0), elements->get(1));
			}
		default:
			{
				return $new($ImmutableCollections$SetN, elements);
			}
		}
	}
}

Set* Set::copyOf($Collection* coll) {
	$init(Set);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($ImmutableCollections$AbstractImmutableSet, coll)) {
		return $cast(Set, coll);
	} else {
		return Set::of($($$new($HashSet, coll)->toArray()));
	}
}

$Class* Set::load$($String* name, bool initialize) {
	$loadClass(Set, name, initialize, &_Set_ClassInfo_, allocate$Set);
	return class$;
}

$Class* Set::class$ = nullptr;

	} // util
} // java