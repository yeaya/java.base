#include <java/util/PrimitiveIterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

$Class* PrimitiveIterator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"forEachRemaining", "(Ljava/lang/Object;)V", "(TT_CONS;)V", $PUBLIC | $ABSTRACT, $virtualMethod(PrimitiveIterator, forEachRemaining, void, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.PrimitiveIterator$OfDouble", "java.util.PrimitiveIterator", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"java.util.PrimitiveIterator$OfLong", "java.util.PrimitiveIterator", "OfLong", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"java.util.PrimitiveIterator$OfInt", "java.util.PrimitiveIterator", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.PrimitiveIterator",
		nullptr,
		"java.util.Iterator",
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;T_CONS:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Iterator<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.util.PrimitiveIterator$OfDouble,java.util.PrimitiveIterator$OfLong,java.util.PrimitiveIterator$OfInt"
	};
	$loadClass(PrimitiveIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrimitiveIterator);
	});
	return class$;
}

$Class* PrimitiveIterator::class$ = nullptr;

	} // util
} // java