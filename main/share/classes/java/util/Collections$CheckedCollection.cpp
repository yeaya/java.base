#include <java/util/Collections$CheckedCollection.h>
#include <java/lang/ArrayStoreException.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/Iterable.h>
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

using $ArrayStoreException = ::java::lang::ArrayStoreException;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Collections$CheckedCollection$1 = ::java::util::Collections$CheckedCollection$1;
using $Iterator = ::java::util::Iterator;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace util {

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
	$set(this, c, $cast($Collection, $Objects::requireNonNull(c, "c"_s)));
	$set(this, type, $cast($Class, $Objects::requireNonNull(type, "type"_s)));
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
	return $nc(this->c)->toString();
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
	return this->zeroLengthElementArray$ != nullptr ? this->zeroLengthElementArray$ : ($set(this, zeroLengthElementArray$, $Collections::zeroLengthArray(this->type)));
}

$Collection* Collections$CheckedCollection::checkedCopyOf($Collection* coll) {
	$useLocalObjectStack();
	$var($ObjectArray, a, nullptr);
	try {
		$var($ObjectArray, z, zeroLengthElementArray());
		$assign(a, $nc(coll)->toArray(z));
		if ($nc(a)->getClass() != $nc(z)->getClass()) {
			$assign(a, $Arrays::copyOf(a, a->length, z->getClass()));
		}
	} catch ($ArrayStoreException& ignore) {
		$assign(a, $cast($ObjectArray, $$nc($nc(coll)->toArray())->clone()));
		{
			$var($ObjectArray, arr$, a);
			for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
				$var($Object0, o, arr$->get(i$));
				typeCheck(o);
			}
		}
	}
	return $cast($Collection, $Arrays::asList(a));
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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$CheckedCollection, serialVersionUID)},
		{"c", "Ljava/util/Collection;", "Ljava/util/Collection<TE;>;", $FINAL, $field(Collections$CheckedCollection, c)},
		{"type", "Ljava/lang/Class;", "Ljava/lang/Class<TE;>;", $FINAL, $field(Collections$CheckedCollection, type)},
		{"zeroLengthElementArray", "[Ljava/lang/Object;", "[TE;", $PRIVATE, $field(Collections$CheckedCollection, zeroLengthElementArray$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
		{"<init>", "(Ljava/util/Collection;Ljava/lang/Class;)V", "(Ljava/util/Collection<TE;>;Ljava/lang/Class<TE;>;)V", 0, $method(Collections$CheckedCollection, init$, void, $Collection*, $Class*)},
		{"add", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC, $virtualMethod(Collections$CheckedCollection, add, bool, Object$*)},
		{"addAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<+TE;>;)Z", $PUBLIC, $virtualMethod(Collections$CheckedCollection, addAll, bool, $Collection*)},
		{"badElementMsg", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PRIVATE, $method(Collections$CheckedCollection, badElementMsg, $String*, Object$*)},
		{"checkedCopyOf", "(Ljava/util/Collection;)Ljava/util/Collection;", "(Ljava/util/Collection<+TE;>;)Ljava/util/Collection<TE;>;", 0, $virtualMethod(Collections$CheckedCollection, checkedCopyOf, $Collection*, $Collection*)},
		{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(Collections$CheckedCollection, clear, void)},
		{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Collections$CheckedCollection, contains, bool, Object$*)},
		{"containsAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC, $virtualMethod(Collections$CheckedCollection, containsAll, bool, $Collection*)},
		{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC, $virtualMethod(Collections$CheckedCollection, forEach, void, $Consumer*)},
		{"isEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(Collections$CheckedCollection, isEmpty, bool)},
		{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC, $virtualMethod(Collections$CheckedCollection, iterator, $Iterator*)},
		{"parallelStream", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<TE;>;", $PUBLIC, $virtualMethod(Collections$CheckedCollection, parallelStream, $Stream*)},
		{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Collections$CheckedCollection, remove, bool, Object$*)},
		{"removeAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC, $virtualMethod(Collections$CheckedCollection, removeAll, bool, $Collection*)},
		{"removeIf", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<-TE;>;)Z", $PUBLIC, $virtualMethod(Collections$CheckedCollection, removeIf, bool, $Predicate*)},
		{"retainAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC, $virtualMethod(Collections$CheckedCollection, retainAll, bool, $Collection*)},
		{"size", "()I", nullptr, $PUBLIC, $virtualMethod(Collections$CheckedCollection, size, int32_t)},
		{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE;>;", $PUBLIC, $virtualMethod(Collections$CheckedCollection, spliterator, $Spliterator*)},
		{"stream", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<TE;>;", $PUBLIC, $virtualMethod(Collections$CheckedCollection, stream, $Stream*)},
		{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collections$CheckedCollection, toArray, $ObjectArray*)},
		{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC, $virtualMethod(Collections$CheckedCollection, toArray, $ObjectArray*, $ObjectArray*)},
		{"toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/util/function/IntFunction<[TT;>;)[TT;", $PUBLIC, $virtualMethod(Collections$CheckedCollection, toArray, $ObjectArray*, $IntFunction*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Collections$CheckedCollection, toString, $String*)},
		{"typeCheck", "(Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Object;)TE;", 0, $virtualMethod(Collections$CheckedCollection, typeCheck, $Object*, Object$*)},
		{"zeroLengthElementArray", "()[Ljava/lang/Object;", "()[TE;", $PRIVATE, $method(Collections$CheckedCollection, zeroLengthElementArray, $ObjectArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Collections$CheckedCollection", "java.util.Collections", "CheckedCollection", $STATIC},
		{"java.util.Collections$CheckedCollection$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.Collections$CheckedCollection",
		"java.lang.Object",
		"java.util.Collection,java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Collection<TE;>;Ljava/io/Serializable;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.Collections"
	};
	$loadClass(Collections$CheckedCollection, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Collections$CheckedCollection));
	});
	return class$;
}

$Class* Collections$CheckedCollection::class$ = nullptr;

	} // util
} // java