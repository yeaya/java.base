#include <SampleNest$InnerIface.h>
#include <SampleNest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

$Class* SampleNest$InnerIface::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SampleNest$InnerIface", "SampleNest", "InnerIface", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"SampleNest$InnerIface",
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"SampleNest"
	};
	$loadClass(SampleNest$InnerIface, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SampleNest$InnerIface);
	});
	return class$;
}

$Class* SampleNest$InnerIface::class$ = nullptr;