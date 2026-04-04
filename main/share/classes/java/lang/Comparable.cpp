#include <java/lang/Comparable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$Class* Comparable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"compareTo", "(Ljava/lang/Object;)I", "(TT;)I", $PUBLIC | $ABSTRACT, $virtualMethod(Comparable, compareTo, int32_t, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.lang.Comparable",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;"
	};
	$loadClass(Comparable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Comparable);
	});
	return class$;
}

$Class* Comparable::class$ = nullptr;

	} // lang
} // java