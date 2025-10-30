#include <java/util/Collections$EmptySet.h>

#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

#undef EMPTY_SET

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $Spliterator = ::java::util::Spliterator;
using $Spliterators = ::java::util::Spliterators;
using $Consumer = ::java::util::function::Consumer;
using $Predicate = ::java::util::function::Predicate;

namespace java {
	namespace util {

$FieldInfo _Collections$EmptySet_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$EmptySet, serialVersionUID)},
	{}
};

$MethodInfo _Collections$EmptySet_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Collections$EmptySet::*)()>(&Collections$EmptySet::init$))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"containsAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC},
	{"readResolve", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(Collections$EmptySet::*)()>(&Collections$EmptySet::readResolve))},
	{"removeIf", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<-TE;>;)Z", $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE;>;", $PUBLIC},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Collections$EmptySet_InnerClassesInfo_[] = {
	{"java.util.Collections$EmptySet", "java.util.Collections", "EmptySet", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Collections$EmptySet_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$EmptySet",
	"java.util.AbstractSet",
	"java.io.Serializable",
	_Collections$EmptySet_FieldInfo_,
	_Collections$EmptySet_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/AbstractSet<TE;>;Ljava/io/Serializable;",
	nullptr,
	_Collections$EmptySet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$EmptySet($Class* clazz) {
	return $of($alloc(Collections$EmptySet));
}

bool Collections$EmptySet::equals(Object$* o) {
	 return this->$AbstractSet::equals(o);
}

$String* Collections$EmptySet::toString() {
	 return this->$AbstractSet::toString();
}

$Object* Collections$EmptySet::clone() {
	 return this->$AbstractSet::clone();
}

void Collections$EmptySet::finalize() {
	this->$AbstractSet::finalize();
}

void Collections$EmptySet::init$() {
	$AbstractSet::init$();
}

$Iterator* Collections$EmptySet::iterator() {
	return $Collections::emptyIterator();
}

int32_t Collections$EmptySet::size() {
	return 0;
}

bool Collections$EmptySet::isEmpty() {
	return true;
}

void Collections$EmptySet::clear() {
}

bool Collections$EmptySet::contains(Object$* obj) {
	return false;
}

bool Collections$EmptySet::containsAll($Collection* c) {
	return $nc(c)->isEmpty();
}

$ObjectArray* Collections$EmptySet::toArray() {
	return $new($ObjectArray, 0);
}

$ObjectArray* Collections$EmptySet::toArray($ObjectArray* a) {
	if ($nc(a)->length > 0) {
		a->set(0, nullptr);
	}
	return a;
}

void Collections$EmptySet::forEach($Consumer* action) {
	$Objects::requireNonNull(action);
}

bool Collections$EmptySet::removeIf($Predicate* filter) {
	$Objects::requireNonNull(filter);
	return false;
}

$Spliterator* Collections$EmptySet::spliterator() {
	return $Spliterators::emptySpliterator();
}

$Object* Collections$EmptySet::readResolve() {
	$init($Collections);
	return $of($Collections::EMPTY_SET);
}

int32_t Collections$EmptySet::hashCode() {
	return 0;
}

Collections$EmptySet::Collections$EmptySet() {
}

$Class* Collections$EmptySet::load$($String* name, bool initialize) {
	$loadClass(Collections$EmptySet, name, initialize, &_Collections$EmptySet_ClassInfo_, allocate$Collections$EmptySet);
	return class$;
}

$Class* Collections$EmptySet::class$ = nullptr;

	} // util
} // java