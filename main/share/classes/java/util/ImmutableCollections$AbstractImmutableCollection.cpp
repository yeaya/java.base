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
using $NullPointerException = ::java::lang::NullPointerException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AbstractCollection = ::java::util::AbstractCollection;
using $Collection = ::java::util::Collection;
using $ImmutableCollections = ::java::util::ImmutableCollections;
using $Predicate = ::java::util::function::Predicate;

namespace java {
	namespace util {

$CompoundAttribute _ImmutableCollections$AbstractImmutableCollection_Annotations_[] = {
	{"Ljdk/internal/ValueBased;", nullptr},
	{}
};

$MethodInfo _ImmutableCollections$AbstractImmutableCollection_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ImmutableCollections$AbstractImmutableCollection::*)()>(&ImmutableCollections$AbstractImmutableCollection::init$))},
	{"add", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC},
	{"addAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<+TE;>;)Z", $PUBLIC},
	{"clear", "()V", nullptr, $PUBLIC},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"removeAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"removeIf", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<-TE;>;)Z", $PUBLIC},
	{"retainAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{}
};

$InnerClassInfo _ImmutableCollections$AbstractImmutableCollection_InnerClassesInfo_[] = {
	{"java.util.ImmutableCollections$AbstractImmutableCollection", "java.util.ImmutableCollections", "AbstractImmutableCollection", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ImmutableCollections$AbstractImmutableCollection_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.ImmutableCollections$AbstractImmutableCollection",
	"java.util.AbstractCollection",
	nullptr,
	nullptr,
	_ImmutableCollections$AbstractImmutableCollection_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/AbstractCollection<TE;>;",
	nullptr,
	_ImmutableCollections$AbstractImmutableCollection_InnerClassesInfo_,
	_ImmutableCollections$AbstractImmutableCollection_Annotations_,
	nullptr,
	nullptr,
	"java.util.ImmutableCollections"
};

$Object* allocate$ImmutableCollections$AbstractImmutableCollection($Class* clazz) {
	return $of($alloc(ImmutableCollections$AbstractImmutableCollection));
}

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
	$loadClass(ImmutableCollections$AbstractImmutableCollection, name, initialize, &_ImmutableCollections$AbstractImmutableCollection_ClassInfo_, allocate$ImmutableCollections$AbstractImmutableCollection);
	return class$;
}

$Class* ImmutableCollections$AbstractImmutableCollection::class$ = nullptr;

	} // util
} // java