#include <java/util/Collections$CheckedCollection.h>

#include <java/lang/Array.h>
#include <java/lang/ArrayStoreException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Iterable.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Collections$CheckedCollection$1.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ArrayStoreException = ::java::lang::ArrayStoreException;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Collections$CheckedCollection$1 = ::java::util::Collections$CheckedCollection$1;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace util {

$FieldInfo _Collections$CheckedCollection_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$CheckedCollection, serialVersionUID)},
	{"c", "Ljava/util/Collection;", "Ljava/util/Collection<TE;>;", $FINAL, $field(Collections$CheckedCollection, c)},
	{"type", "Ljava/lang/Class;", "Ljava/lang/Class<TE;>;", $FINAL, $field(Collections$CheckedCollection, type)},
	{"zeroLengthElementArray", "[Ljava/lang/Object;", "[TE;", $PRIVATE, $field(Collections$CheckedCollection, zeroLengthElementArray$)},
	{}
};

$MethodInfo _Collections$CheckedCollection_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "(Ljava/util/Collection;Ljava/lang/Class;)V", "(Ljava/util/Collection<TE;>;Ljava/lang/Class<TE;>;)V", 0, $method(static_cast<void(Collections$CheckedCollection::*)($Collection*,$Class*)>(&Collections$CheckedCollection::init$))},
	{"add", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC},
	{"addAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<+TE;>;)Z", $PUBLIC},
	{"badElementMsg", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Collections$CheckedCollection::*)(Object$*)>(&Collections$CheckedCollection::badElementMsg))},
	{"checkedCopyOf", "(Ljava/util/Collection;)Ljava/util/Collection;", "(Ljava/util/Collection<+TE;>;)Ljava/util/Collection<TE;>;", 0},
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
	{"typeCheck", "(Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Object;)TE;", 0},
	{"zeroLengthElementArray", "()[Ljava/lang/Object;", "()[TE;", $PRIVATE, $method(static_cast<$ObjectArray*(Collections$CheckedCollection::*)()>(&Collections$CheckedCollection::zeroLengthElementArray))},
	{}
};

$InnerClassInfo _Collections$CheckedCollection_InnerClassesInfo_[] = {
	{"java.util.Collections$CheckedCollection", "java.util.Collections", "CheckedCollection", $STATIC},
	{"java.util.Collections$CheckedCollection$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Collections$CheckedCollection_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$CheckedCollection",
	"java.lang.Object",
	"java.util.Collection,java.io.Serializable",
	_Collections$CheckedCollection_FieldInfo_,
	_Collections$CheckedCollection_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Collection<TE;>;Ljava/io/Serializable;",
	nullptr,
	_Collections$CheckedCollection_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$CheckedCollection($Class* clazz) {
	return $of($alloc(Collections$CheckedCollection));
}

bool Collections$CheckedCollection::equals(Object$* o) {
	 return this->$Collection::equals(o);
}

int32_t Collections$CheckedCollection::hashCode() {
	 return this->$Collection::hashCode();
}

$Object* Collections$CheckedCollection::clone() {
	 return this->$Collection::clone();
}

void Collections$CheckedCollection::finalize() {
	this->$Collection::finalize();
}

$Object* Collections$CheckedCollection::typeCheck(Object$* o) {
	if (o != nullptr && !$nc(this->type)->isInstance(o)) {
		$throwNew($ClassCastException, $(badElementMsg(o)));
	}
	return $of(o);
}

$String* Collections$CheckedCollection::badElementMsg(Object$* o) {
	return $str({"Attempt to insert "_s, $nc($of(o))->getClass(), " element into collection with element type "_s, this->type});
}

void Collections$CheckedCollection::init$($Collection* c, $Class* type) {
	$set(this, c, $cast($Collection, $Objects::requireNonNull($of(c), "c"_s)));
	$set(this, type, $cast($Class, $Objects::requireNonNull($of(type), "type"_s)));
}

int32_t Collections$CheckedCollection::size() {
	return $nc(this->c)->size();
}

bool Collections$CheckedCollection::isEmpty() {
	return $nc(this->c)->isEmpty();
}

bool Collections$CheckedCollection::contains(Object$* o) {
	return $nc(this->c)->contains(o);
}

$ObjectArray* Collections$CheckedCollection::toArray() {
	return $nc(this->c)->toArray();
}

$ObjectArray* Collections$CheckedCollection::toArray($ObjectArray* a) {
	return $nc(this->c)->toArray(a);
}

$ObjectArray* Collections$CheckedCollection::toArray($IntFunction* f) {
	return $nc(this->c)->toArray(f);
}

$String* Collections$CheckedCollection::toString() {
	return $nc($of(this->c))->toString();
}

bool Collections$CheckedCollection::remove(Object$* o) {
	return $nc(this->c)->remove(o);
}

void Collections$CheckedCollection::clear() {
	$nc(this->c)->clear();
}

bool Collections$CheckedCollection::containsAll($Collection* coll) {
	return $nc(this->c)->containsAll(coll);
}

bool Collections$CheckedCollection::removeAll($Collection* coll) {
	return $nc(this->c)->removeAll(coll);
}

bool Collections$CheckedCollection::retainAll($Collection* coll) {
	return $nc(this->c)->retainAll(coll);
}

$Iterator* Collections$CheckedCollection::iterator() {
	$var($Iterator, it, $nc(this->c)->iterator());
	return $new($Collections$CheckedCollection$1, this, it);
}

bool Collections$CheckedCollection::add(Object$* e) {
	return $nc(this->c)->add($(typeCheck(e)));
}

$ObjectArray* Collections$CheckedCollection::zeroLengthElementArray() {
	return this->zeroLengthElementArray$ != nullptr ? this->zeroLengthElementArray$ : ($assignField(this, zeroLengthElementArray$, $Collections::zeroLengthArray(this->type)));
}

$Collection* Collections$CheckedCollection::checkedCopyOf($Collection* coll) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, a, nullptr);
	try {
		$var($ObjectArray, z, zeroLengthElementArray());
		$assign(a, $nc(coll)->toArray(z));
		if ($nc($of(a))->getClass() != $nc($of(z))->getClass()) {
			$assign(a, $Arrays::copyOf(a, a->length, $of(z)->getClass()));
		}
	} catch ($ArrayStoreException&) {
		$var($ArrayStoreException, ignore, $catch());
		$assign(a, $cast($ObjectArray, $nc($($nc(coll)->toArray()))->clone()));
		{
			$var($ObjectArray, arr$, a);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Object0, o, arr$->get(i$));
				typeCheck(o);
			}
		}
	}
	return static_cast<$Collection*>($Arrays::asList(a));
}

bool Collections$CheckedCollection::addAll($Collection* coll) {
	return $nc(this->c)->addAll($(checkedCopyOf(coll)));
}

void Collections$CheckedCollection::forEach($Consumer* action) {
	$nc(this->c)->forEach(action);
}

bool Collections$CheckedCollection::removeIf($Predicate* filter) {
	return $nc(this->c)->removeIf(filter);
}

$Spliterator* Collections$CheckedCollection::spliterator() {
	return $nc(this->c)->spliterator();
}

$Stream* Collections$CheckedCollection::stream() {
	return $nc(this->c)->stream();
}

$Stream* Collections$CheckedCollection::parallelStream() {
	return $nc(this->c)->parallelStream();
}

Collections$CheckedCollection::Collections$CheckedCollection() {
}

$Class* Collections$CheckedCollection::load$($String* name, bool initialize) {
	$loadClass(Collections$CheckedCollection, name, initialize, &_Collections$CheckedCollection_ClassInfo_, allocate$Collections$CheckedCollection);
	return class$;
}

$Class* Collections$CheckedCollection::class$ = nullptr;

	} // util
} // java