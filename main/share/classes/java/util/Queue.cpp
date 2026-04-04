#include <java/util/Queue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

$Class* Queue::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
		{"element", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $ABSTRACT, $virtualMethod(Queue, element, $Object*)},
		{"offer", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC | $ABSTRACT, $virtualMethod(Queue, offer, bool, Object$*)},
		{"peek", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $ABSTRACT, $virtualMethod(Queue, peek, $Object*)},
		{"poll", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $ABSTRACT, $virtualMethod(Queue, poll, $Object*)},
		{"remove", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $ABSTRACT, $virtualMethod(Queue, remove, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.Queue",
		nullptr,
		"java.util.Collection",
		nullptr,
		methodInfos$$,
		"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Collection<TE;>;"
	};
	$loadClass(Queue, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Queue);
	});
	return class$;
}

$Class* Queue::class$ = nullptr;

	} // util
} // java