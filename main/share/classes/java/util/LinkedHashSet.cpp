#include <java/util/LinkedHashSet.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/HashSet.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators.h>
#include <jcpp.h>

#undef DISTINCT
#undef ORDERED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $HashSet = ::java::util::HashSet;
using $Spliterator = ::java::util::Spliterator;
using $Spliterators = ::java::util::Spliterators;

namespace java {
	namespace util {

$FieldInfo _LinkedHashSet_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LinkedHashSet, serialVersionUID)},
	{}
};

$MethodInfo _LinkedHashSet_MethodInfo_[] = {
	{"<init>", "(IF)V", nullptr, $PUBLIC, $method(static_cast<void(LinkedHashSet::*)(int32_t,float)>(&LinkedHashSet::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(LinkedHashSet::*)(int32_t)>(&LinkedHashSet::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LinkedHashSet::*)()>(&LinkedHashSet::init$))},
	{"<init>", "(Ljava/util/Collection;)V", "(Ljava/util/Collection<+TE;>;)V", $PUBLIC, $method(static_cast<void(LinkedHashSet::*)($Collection*)>(&LinkedHashSet::init$))},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE;>;", $PUBLIC},
	{}
};

$ClassInfo _LinkedHashSet_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.LinkedHashSet",
	"java.util.HashSet",
	nullptr,
	_LinkedHashSet_FieldInfo_,
	_LinkedHashSet_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/HashSet<TE;>;Ljava/util/Set<TE;>;Ljava/lang/Cloneable;Ljava/io/Serializable;"
};

$Object* allocate$LinkedHashSet($Class* clazz) {
	return $of($alloc(LinkedHashSet));
}

void LinkedHashSet::init$(int32_t initialCapacity, float loadFactor) {
	$HashSet::init$(initialCapacity, loadFactor, true);
}

void LinkedHashSet::init$(int32_t initialCapacity) {
	$HashSet::init$(initialCapacity, 0.75f, true);
}

void LinkedHashSet::init$() {
	$HashSet::init$(16, 0.75f, true);
}

void LinkedHashSet::init$($Collection* c) {
	$HashSet::init$($Math::max(2 * $nc(c)->size(), 11), 0.75f, true);
	addAll(c);
}

$Spliterator* LinkedHashSet::spliterator() {
	return $Spliterators::spliterator(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>(static_cast<$HashSet*>(this)))), $Spliterator::DISTINCT | $Spliterator::ORDERED);
}

LinkedHashSet::LinkedHashSet() {
}

$Class* LinkedHashSet::load$($String* name, bool initialize) {
	$loadClass(LinkedHashSet, name, initialize, &_LinkedHashSet_ClassInfo_, allocate$LinkedHashSet);
	return class$;
}

$Class* LinkedHashSet::class$ = nullptr;

	} // util
} // java