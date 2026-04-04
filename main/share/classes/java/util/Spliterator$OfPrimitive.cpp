#include <java/util/Spliterator$OfPrimitive.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

void Spliterator$OfPrimitive::forEachRemaining(Object$* action) {
	do {
	} while (tryAdvance(action));
}

$Class* Spliterator$OfPrimitive::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"forEachRemaining", "(Ljava/lang/Object;)V", "(TT_CONS;)V", $PUBLIC, $virtualMethod(Spliterator$OfPrimitive, forEachRemaining, void, Object$*)},
		{"tryAdvance", "(Ljava/lang/Object;)Z", "(TT_CONS;)Z", $PUBLIC | $ABSTRACT, $virtualMethod(Spliterator$OfPrimitive, tryAdvance, bool, Object$*)},
		{"trySplit", "()Ljava/util/Spliterator;", nullptr, $PUBLIC | $ABSTRACT},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Spliterator$OfPrimitive", "java.util.Spliterator", "OfPrimitive", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.Spliterator$OfPrimitive",
		nullptr,
		"java.util.Spliterator",
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;T_CONS:Ljava/lang/Object;T_SPLITR::Ljava/util/Spliterator$OfPrimitive<TT;TT_CONS;TT_SPLITR;>;>Ljava/lang/Object;Ljava/util/Spliterator<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.Spliterator"
	};
	$loadClass(Spliterator$OfPrimitive, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Spliterator$OfPrimitive);
	});
	return class$;
}

$Class* Spliterator$OfPrimitive::class$ = nullptr;

	} // util
} // java