#include <java/util/Collection.h>

#include <java/lang/Iterable.h>
#include <java/util/Iterator.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <java/util/stream/StreamSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Spliterators = ::java::util::Spliterators;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;
using $StreamSupport = ::java::util::stream::StreamSupport;

namespace java {
	namespace util {

$MethodInfo _Collection_MethodInfo_[] = {
	{"add", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC | $ABSTRACT, $virtualMethod(Collection, add, bool, Object$*)},
	{"addAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<+TE;>;)Z", $PUBLIC | $ABSTRACT, $virtualMethod(Collection, addAll, bool, Collection*)},
	{"clear", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Collection, clear, void)},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Collection, contains, bool, Object$*)},
	{"containsAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC | $ABSTRACT, $virtualMethod(Collection, containsAll, bool, Collection*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"isEmpty", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Collection, isEmpty, bool)},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"parallelStream", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<TE;>;", $PUBLIC, $virtualMethod(Collection, parallelStream, $Stream*)},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Collection, remove, bool, Object$*)},
	{"removeAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC | $ABSTRACT, $virtualMethod(Collection, removeAll, bool, Collection*)},
	{"removeIf", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<-TE;>;)Z", $PUBLIC, $virtualMethod(Collection, removeIf, bool, $Predicate*)},
	{"retainAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC | $ABSTRACT, $virtualMethod(Collection, retainAll, bool, Collection*)},
	{"size", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Collection, size, int32_t)},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE;>;", $PUBLIC, $virtualMethod(Collection, spliterator, $Spliterator*)},
	{"stream", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<TE;>;", $PUBLIC, $virtualMethod(Collection, stream, $Stream*)},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Collection, toArray, $ObjectArray*)},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC | $ABSTRACT, $virtualMethod(Collection, toArray, $ObjectArray*, $ObjectArray*)},
	{"toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/util/function/IntFunction<[TT;>;)[TT;", $PUBLIC, $virtualMethod(Collection, toArray, $ObjectArray*, $IntFunction*)},
	{}
};

$ClassInfo _Collection_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.Collection",
	nullptr,
	"java.lang.Iterable",
	nullptr,
	_Collection_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljava/lang/Iterable<TE;>;"
};

$Object* allocate$Collection($Class* clazz) {
	return $of($alloc(Collection));
}

bool Collection::equals(Object$* o) {
	 return this->$Iterable::equals(o);
}

int32_t Collection::hashCode() {
	 return this->$Iterable::hashCode();
}

$ObjectArray* Collection::toArray($IntFunction* generator) {
	return toArray($cast($ObjectArray, $($nc(generator)->apply(0))));
}

bool Collection::removeIf($Predicate* filter) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(filter);
	bool removed = false;
	$var($Iterator, each, iterator());
	while ($nc(each)->hasNext()) {
		if (filter->test($(each->next()))) {
			each->remove();
			removed = true;
		}
	}
	return removed;
}

$Spliterator* Collection::spliterator() {
	return $Spliterators::spliterator(this, 0);
}

$Stream* Collection::stream() {
	return $StreamSupport::stream($(spliterator()), false);
}

$Stream* Collection::parallelStream() {
	return $StreamSupport::stream($(spliterator()), true);
}

$Class* Collection::load$($String* name, bool initialize) {
	$loadClass(Collection, name, initialize, &_Collection_ClassInfo_, allocate$Collection);
	return class$;
}

$Class* Collection::class$ = nullptr;

	} // util
} // java