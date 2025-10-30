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

$MethodInfo _Iterable_MethodInfo_[] = {
	{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TT;>;)V", $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TT;>;", $PUBLIC | $ABSTRACT},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TT;>;", $PUBLIC},
	{}
};

$ClassInfo _Iterable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.Iterable",
	nullptr,
	nullptr,
	nullptr,
	_Iterable_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;"
};

$Object* allocate$Iterable($Class* clazz) {
	return $of($alloc(Iterable));
}

void Iterable::forEach($Consumer* action) {
	$useLocalCurrentObjectStackCache();
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
	$loadClass(Iterable, name, initialize, &_Iterable_ClassInfo_, allocate$Iterable);
	return class$;
}

$Class* Iterable::class$ = nullptr;

	} // lang
} // java