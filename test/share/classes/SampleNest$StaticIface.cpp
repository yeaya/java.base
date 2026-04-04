#include <SampleNest$StaticIface.h>
#include <SampleNest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

$Class* SampleNest$StaticIface::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SampleNest$StaticIface", "SampleNest", "StaticIface", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"SampleNest$StaticIface",
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
	$loadClass(SampleNest$StaticIface, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SampleNest$StaticIface);
	});
	return class$;
}

$Class* SampleNest$StaticIface::class$ = nullptr;