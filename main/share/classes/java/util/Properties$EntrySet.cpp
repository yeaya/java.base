#include <java/util/Properties$EntrySet.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Properties.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $Map$Entry = ::java::util::Map$Entry;
using $Properties = ::java::util::Properties;
using $Set = ::java::util::Set;

namespace java {
	namespace util {

$FieldInfo _Properties$EntrySet_FieldInfo_[] = {
	{"entrySet", "Ljava/util/Set;", "Ljava/util/Set<Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/lang/Object;>;>;", $PRIVATE, $field(Properties$EntrySet, entrySet)},
	{}
};

$MethodInfo _Properties$EntrySet_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Set;)V", "(Ljava/util/Set<Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/lang/Object;>;>;)V", $PRIVATE, $method(static_cast<void(Properties$EntrySet::*)($Set*)>(&Properties$EntrySet::init$))},
	{"add", "(Ljava/util/Map$Entry;)Z", "(Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/lang/Object;>;)Z", $PUBLIC},
	{"add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"addAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<+Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/lang/Object;>;>;)Z", $PUBLIC},
	{"clear", "()V", nullptr, $PUBLIC},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"containsAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/lang/Object;>;>;", $PUBLIC},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"removeAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"retainAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Properties$EntrySet_InnerClassesInfo_[] = {
	{"java.util.Properties$EntrySet", "java.util.Properties", "EntrySet", $PRIVATE | $STATIC},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Properties$EntrySet_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Properties$EntrySet",
	"java.lang.Object",
	"java.util.Set",
	_Properties$EntrySet_FieldInfo_,
	_Properties$EntrySet_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Set<Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/lang/Object;>;>;",
	nullptr,
	_Properties$EntrySet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Properties"
};

$Object* allocate$Properties$EntrySet($Class* clazz) {
	return $of($alloc(Properties$EntrySet));
}

void Properties$EntrySet::init$($Set* entrySet) {
	$set(this, entrySet, entrySet);
}

int32_t Properties$EntrySet::size() {
	return $nc(this->entrySet)->size();
}

bool Properties$EntrySet::isEmpty() {
	return $nc(this->entrySet)->isEmpty();
}

bool Properties$EntrySet::contains(Object$* o) {
	return $nc(this->entrySet)->contains(o);
}

$ObjectArray* Properties$EntrySet::toArray() {
	return $nc(this->entrySet)->toArray();
}

$ObjectArray* Properties$EntrySet::toArray($ObjectArray* a) {
	return $nc(this->entrySet)->toArray(a);
}

void Properties$EntrySet::clear() {
	$nc(this->entrySet)->clear();
}

bool Properties$EntrySet::remove(Object$* o) {
	return $nc(this->entrySet)->remove(o);
}

bool Properties$EntrySet::add($Map$Entry* e) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool Properties$EntrySet::addAll($Collection* c) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool Properties$EntrySet::containsAll($Collection* c) {
	return $nc(this->entrySet)->containsAll(c);
}

bool Properties$EntrySet::equals(Object$* o) {
	return $equals(o, this) || $nc(this->entrySet)->equals(o);
}

int32_t Properties$EntrySet::hashCode() {
	return $nc(this->entrySet)->hashCode();
}

$String* Properties$EntrySet::toString() {
	return $nc($of(this->entrySet))->toString();
}

bool Properties$EntrySet::removeAll($Collection* c) {
	return $nc(this->entrySet)->removeAll(c);
}

bool Properties$EntrySet::retainAll($Collection* c) {
	return $nc(this->entrySet)->retainAll(c);
}

$Iterator* Properties$EntrySet::iterator() {
	return $nc(this->entrySet)->iterator();
}

bool Properties$EntrySet::add(Object$* e) {
	return this->add($cast($Map$Entry, e));
}

Properties$EntrySet::Properties$EntrySet() {
}

$Class* Properties$EntrySet::load$($String* name, bool initialize) {
	$loadClass(Properties$EntrySet, name, initialize, &_Properties$EntrySet_ClassInfo_, allocate$Properties$EntrySet);
	return class$;
}

$Class* Properties$EntrySet::class$ = nullptr;

	} // util
} // java