#include <java/util/ArraysParallelSortHelpers$FJObject.h>
#include <java/util/ArraysParallelSortHelpers.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

void ArraysParallelSortHelpers$FJObject::init$() {
}

ArraysParallelSortHelpers$FJObject::ArraysParallelSortHelpers$FJObject() {
}

$Class* ArraysParallelSortHelpers$FJObject::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ArraysParallelSortHelpers$FJObject, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.ArraysParallelSortHelpers$FJObject", "java.util.ArraysParallelSortHelpers", "FJObject", $STATIC | $FINAL},
		{"java.util.ArraysParallelSortHelpers$FJObject$Merger", "java.util.ArraysParallelSortHelpers$FJObject", "Merger", $STATIC | $FINAL},
		{"java.util.ArraysParallelSortHelpers$FJObject$Sorter", "java.util.ArraysParallelSortHelpers$FJObject", "Sorter", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.ArraysParallelSortHelpers$FJObject",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.ArraysParallelSortHelpers"
	};
	$loadClass(ArraysParallelSortHelpers$FJObject, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ArraysParallelSortHelpers$FJObject);
	});
	return class$;
}

$Class* ArraysParallelSortHelpers$FJObject::class$ = nullptr;

	} // util
} // java