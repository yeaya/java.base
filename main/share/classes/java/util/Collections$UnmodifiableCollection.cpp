#include <java/util/Collections$UnmodifiableCollection.h>

#include <java/lang/Iterable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Collection.h>
#include <java/util/Collections$UnmodifiableCollection$1.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Collection = ::java::util::Collection;
using $Collections$UnmodifiableCollection$1 = ::java::util::Collections$UnmodifiableCollection$1;
using $Iterator = ::java::util::Iterator;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace util {

$FieldInfo _Collections$UnmodifiableCollection_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$UnmodifiableCollection, serialVersionUID)},
	{"c", "Ljava/util/Collection;", "Ljava/util/Collection<+TE;>;", $FINAL, $field(Collections$UnmodifiableCollection, c)},
	{}
};

$MethodInfo _Collections$UnmodifiableCollection_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "(Ljava/util/Collection;)V", "(Ljava/util/Collection<+TE;>;)V", 0, $method(static_cast<void(Collections$UnmodifiableCollection::*)($Collection*)>(&Collections$UnmodifiableCollection::init$))},
	{"add", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC},
	{"addAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<+TE;>;)Z", $PUBLIC},
	{"clear", "()V", nullptr, $PUBLIC},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"containsAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC},
	{"parallelStream", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<TE;>;", $PUBLIC},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"removeAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"removeIf", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<-TE;>;)Z", $PUBLIC},
	{"retainAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE;>;", $PUBLIC},
	{"stream", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<TE;>;", $PUBLIC},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC},
	{"toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/util/function/IntFunction<[TT;>;)[TT;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Collections$UnmodifiableCollection_InnerClassesInfo_[] = {
	{"java.util.Collections$UnmodifiableCollection", "java.util.Collections", "UnmodifiableCollection", $STATIC},
	{"java.util.Collections$UnmodifiableCollection$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Collections$UnmodifiableCollection_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$UnmodifiableCollection",
	"java.lang.Object",
	"java.util.Collection,java.io.Serializable",
	_Collections$UnmodifiableCollection_FieldInfo_,
	_Collections$UnmodifiableCollection_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Collection<TE;>;Ljava/io/Serializable;",
	nullptr,
	_Collections$UnmodifiableCollection_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$UnmodifiableCollection($Class* clazz) {
	return $of($alloc(Collections$UnmodifiableCollection));
}

bool Collections$UnmodifiableCollection::equals(Object$* o) {
	 return this->$Collection::equals(o);
}

int32_t Collections$UnmodifiableCollection::hashCode() {
	 return this->$Collection::hashCode();
}

$Object* Collections$UnmodifiableCollection::clone() {
	 return this->$Collection::clone();
}

void Collections$UnmodifiableCollection::finalize() {
	this->$Collection::finalize();
}

void Collections$UnmodifiableCollection::init$($Collection* c) {
	if (c == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, c, c);
}

int32_t Collections$UnmodifiableCollection::size() {
	return $nc(this->c)->size();
}

bool Collections$UnmodifiableCollection::isEmpty() {
	return $nc(this->c)->isEmpty();
}

bool Collections$UnmodifiableCollection::contains(Object$* o) {
	return $nc(this->c)->contains(o);
}

$ObjectArray* Collections$UnmodifiableCollection::toArray() {
	return $nc(this->c)->toArray();
}

$ObjectArray* Collections$UnmodifiableCollection::toArray($ObjectArray* a) {
	return $nc(this->c)->toArray(a);
}

$ObjectArray* Collections$UnmodifiableCollection::toArray($IntFunction* f) {
	return $nc(this->c)->toArray(f);
}

$String* Collections$UnmodifiableCollection::toString() {
	return $nc($of(this->c))->toString();
}

$Iterator* Collections$UnmodifiableCollection::iterator() {
	return $new($Collections$UnmodifiableCollection$1, this);
}

bool Collections$UnmodifiableCollection::add(Object$* e) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool Collections$UnmodifiableCollection::remove(Object$* o) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool Collections$UnmodifiableCollection::containsAll($Collection* coll) {
	return $nc(this->c)->containsAll(coll);
}

bool Collections$UnmodifiableCollection::addAll($Collection* coll) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool Collections$UnmodifiableCollection::removeAll($Collection* coll) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool Collections$UnmodifiableCollection::retainAll($Collection* coll) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

void Collections$UnmodifiableCollection::clear() {
	$throwNew($UnsupportedOperationException);
}

void Collections$UnmodifiableCollection::forEach($Consumer* action) {
	$nc(this->c)->forEach(action);
}

bool Collections$UnmodifiableCollection::removeIf($Predicate* filter) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Spliterator* Collections$UnmodifiableCollection::spliterator() {
	return $nc(this->c)->spliterator();
}

$Stream* Collections$UnmodifiableCollection::stream() {
	return $nc(this->c)->stream();
}

$Stream* Collections$UnmodifiableCollection::parallelStream() {
	return $nc(this->c)->parallelStream();
}

Collections$UnmodifiableCollection::Collections$UnmodifiableCollection() {
}

$Class* Collections$UnmodifiableCollection::load$($String* name, bool initialize) {
	$loadClass(Collections$UnmodifiableCollection, name, initialize, &_Collections$UnmodifiableCollection_ClassInfo_, allocate$Collections$UnmodifiableCollection);
	return class$;
}

$Class* Collections$UnmodifiableCollection::class$ = nullptr;

	} // util
} // java