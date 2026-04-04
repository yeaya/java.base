#include <java/lang/Iterable.h>
#include <java/util/Iterator.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Spliterators = ::java::util::Spliterators;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace lang {

void Iterable::forEach($Consumer* action) {
	$useLocalObjectStack();
	$Objects::requireNonNull(action);
	{
		$var($Iterator, i$, this->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, t, i$->next());
			{
				action->accept(t);
			}
		}
	}
}

$Spliterator* Iterable::spliterator() {
	return $Spliterators::spliteratorUnknownSize($(iterator()), 0);
}

$Class* Iterable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TT;>;)V", $PUBLIC, $virtualMethod(Iterable, forEach, void, $Consumer*)},
		{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TT;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Iterable, iterator, $Iterator*)},
		{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TT;>;", $PUBLIC, $virtualMethod(Iterable, spliterator, $Spliterator*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.lang.Iterable",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;"
	};
	$loadClass(Iterable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Iterable);
	});
	return class$;
}

$Class* Iterable::class$ = nullptr;

	} // lang
} // java