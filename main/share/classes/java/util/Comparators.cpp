#include <java/util/Comparators.h>
#include <java/lang/AssertionError.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

void Comparators::init$() {
	$throwNew($AssertionError, $of("no instances"_s));
}

Comparators::Comparators() {
}

$Class* Comparators::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Comparators, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Comparators$NullComparator", "java.util.Comparators", "NullComparator", $STATIC | $FINAL},
		{"java.util.Comparators$NaturalOrderComparator", "java.util.Comparators", "NaturalOrderComparator", $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.Comparators",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.util.Comparators$NullComparator,java.util.Comparators$NaturalOrderComparator"
	};
	$loadClass(Comparators, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Comparators);
	});
	return class$;
}

$Class* Comparators::class$ = nullptr;

	} // util
} // java