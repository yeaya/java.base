#include <test/FindSpecial$MyComparator.h>
#include <java/lang/Error.h>
#include <java/util/Comparator.h>
#include <test/FindSpecial.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;

namespace test {

void FindSpecial$MyComparator::init$() {
}

int32_t FindSpecial$MyComparator::compare(Object$* o1, Object$* o2) {
	return 0;
}

$Comparator* FindSpecial$MyComparator::reversed() {
	$throwNew($Error, "should not reach here"_s);
	$shouldNotReachHere();
}

FindSpecial$MyComparator::FindSpecial$MyComparator() {
}

$Class* FindSpecial$MyComparator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FindSpecial$MyComparator, init$, void)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(FindSpecial$MyComparator, compare, int32_t, Object$*, Object$*)},
		{"reversed", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<Ljava/lang/Object;>;", $PUBLIC, $virtualMethod(FindSpecial$MyComparator, reversed, $Comparator*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"test.FindSpecial$MyComparator", "test.FindSpecial", "MyComparator", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"test.FindSpecial$MyComparator",
		"java.lang.Object",
		"java.util.Comparator",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Comparator<Ljava/lang/Object;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"test.FindSpecial"
	};
	$loadClass(FindSpecial$MyComparator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FindSpecial$MyComparator);
	});
	return class$;
}

$Class* FindSpecial$MyComparator::class$ = nullptr;

} // test