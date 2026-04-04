#include <java/util/ArraysParallelSortHelpers$EmptyCompleter.h>
#include <java/util/ArraysParallelSortHelpers.h>
#include <java/util/concurrent/CountedCompleter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CountedCompleter = ::java::util::concurrent::CountedCompleter;

namespace java {
	namespace util {

void ArraysParallelSortHelpers$EmptyCompleter::init$($CountedCompleter* p) {
	$CountedCompleter::init$(p);
}

void ArraysParallelSortHelpers$EmptyCompleter::compute() {
}

ArraysParallelSortHelpers$EmptyCompleter::ArraysParallelSortHelpers$EmptyCompleter() {
}

$Class* ArraysParallelSortHelpers$EmptyCompleter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ArraysParallelSortHelpers$EmptyCompleter, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/CountedCompleter;)V", "(Ljava/util/concurrent/CountedCompleter<*>;)V", 0, $method(ArraysParallelSortHelpers$EmptyCompleter, init$, void, $CountedCompleter*)},
		{"compute", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(ArraysParallelSortHelpers$EmptyCompleter, compute, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.ArraysParallelSortHelpers$EmptyCompleter", "java.util.ArraysParallelSortHelpers", "EmptyCompleter", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.ArraysParallelSortHelpers$EmptyCompleter",
		"java.util.concurrent.CountedCompleter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/concurrent/CountedCompleter<Ljava/lang/Void;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.ArraysParallelSortHelpers"
	};
	$loadClass(ArraysParallelSortHelpers$EmptyCompleter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ArraysParallelSortHelpers$EmptyCompleter));
	});
	return class$;
}

$Class* ArraysParallelSortHelpers$EmptyCompleter::class$ = nullptr;

	} // util
} // java