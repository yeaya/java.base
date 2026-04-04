#include <java/util/ArraysParallelSortHelpers.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

void ArraysParallelSortHelpers::init$() {
}

ArraysParallelSortHelpers::ArraysParallelSortHelpers() {
}

$Class* ArraysParallelSortHelpers::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ArraysParallelSortHelpers, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.ArraysParallelSortHelpers$FJObject", "java.util.ArraysParallelSortHelpers", "FJObject", $STATIC | $FINAL},
		{"java.util.ArraysParallelSortHelpers$Relay", "java.util.ArraysParallelSortHelpers", "Relay", $STATIC | $FINAL},
		{"java.util.ArraysParallelSortHelpers$EmptyCompleter", "java.util.ArraysParallelSortHelpers", "EmptyCompleter", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.ArraysParallelSortHelpers",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.util.ArraysParallelSortHelpers$FJObject,java.util.ArraysParallelSortHelpers$FJObject$Merger,java.util.ArraysParallelSortHelpers$FJObject$Sorter,java.util.ArraysParallelSortHelpers$Relay,java.util.ArraysParallelSortHelpers$EmptyCompleter"
	};
	$loadClass(ArraysParallelSortHelpers, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ArraysParallelSortHelpers);
	});
	return class$;
}

$Class* ArraysParallelSortHelpers::class$ = nullptr;

	} // util
} // java