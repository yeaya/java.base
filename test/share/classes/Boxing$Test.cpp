#include <Boxing$Test.h>
#include <Boxing.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* Boxing$Test::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"m", "(BCDFIJSZ)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Boxing$Test, m, void, int8_t, char16_t, double, float, int32_t, int64_t, int16_t, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Boxing$Test", "Boxing", "Test", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"Boxing$Test",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Boxing"
	};
	$loadClass(Boxing$Test, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Boxing$Test);
	});
	return class$;
}

$Class* Boxing$Test::class$ = nullptr;