#include <java/util/Iterator.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Objects.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Objects = ::java::util::Objects;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

void Iterator::remove() {
	$throwNew($UnsupportedOperationException, "remove"_s);
}

void Iterator::forEachRemaining($Consumer* action) {
	$useLocalObjectStack();
	$Objects::requireNonNull(action);
	while (hasNext()) {
		action->accept($(next()));
	}
}

$Class* Iterator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC, $virtualMethod(Iterator, forEachRemaining, void, $Consumer*)},
		{"hasNext", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Iterator, hasNext, bool)},
		{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $ABSTRACT, $virtualMethod(Iterator, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(Iterator, remove, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.Iterator",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<E:Ljava/lang/Object;>Ljava/lang/Object;"
	};
	$loadClass(Iterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Iterator);
	});
	return class$;
}

$Class* Iterator::class$ = nullptr;

	} // util
} // java