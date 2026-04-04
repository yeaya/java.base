#include <FinalizeOverride$NoOverride.h>
#include <FinalizeOverride$PrivateFinalize.h>
#include <FinalizeOverride.h>
#include <jcpp.h>

using $FinalizeOverride$PrivateFinalize = ::FinalizeOverride$PrivateFinalize;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void FinalizeOverride$NoOverride::init$(int32_t v) {
	$FinalizeOverride$PrivateFinalize::init$(v);
}

FinalizeOverride$NoOverride::FinalizeOverride$NoOverride() {
}

$Class* FinalizeOverride$NoOverride::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(FinalizeOverride$NoOverride, init$, void, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FinalizeOverride$NoOverride", "FinalizeOverride", "NoOverride", $STATIC},
		{"FinalizeOverride$PrivateFinalize", "FinalizeOverride", "PrivateFinalize", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"FinalizeOverride$NoOverride",
		"FinalizeOverride$PrivateFinalize",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"FinalizeOverride"
	};
	$loadClass(FinalizeOverride$NoOverride, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FinalizeOverride$NoOverride);
	});
	return class$;
}

$Class* FinalizeOverride$NoOverride::class$ = nullptr;