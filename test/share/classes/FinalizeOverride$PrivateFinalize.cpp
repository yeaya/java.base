#include <FinalizeOverride$PrivateFinalize.h>
#include <FinalizeOverride$Base.h>
#include <FinalizeOverride.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <jcpp.h>

using $FinalizeOverride = ::FinalizeOverride;
using $FinalizeOverride$Base = ::FinalizeOverride$Base;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void FinalizeOverride$PrivateFinalize::init$(int32_t v) {
	$FinalizeOverride$Base::init$(v);
}

void FinalizeOverride$PrivateFinalize::f_nal_ze() {
	$nc($System::out)->println("Error: private finalize invoked!!"_s);
	$init($FinalizeOverride);
	$FinalizeOverride::privateFinalizeInvoked = true;
	$nc($FinalizeOverride::finalizedCount)->incrementAndGet();
}

FinalizeOverride$PrivateFinalize::FinalizeOverride$PrivateFinalize() {
}

$Class* FinalizeOverride$PrivateFinalize::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(FinalizeOverride$PrivateFinalize, init$, void, int32_t)},
		{"f_nal_ze", "()V", nullptr, $PRIVATE, $method(FinalizeOverride$PrivateFinalize, f_nal_ze, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FinalizeOverride$PrivateFinalize", "FinalizeOverride", "PrivateFinalize", $STATIC},
		{"FinalizeOverride$Base", "FinalizeOverride", "Base", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"FinalizeOverride$PrivateFinalize",
		"FinalizeOverride$Base",
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
	$loadClass(FinalizeOverride$PrivateFinalize, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FinalizeOverride$PrivateFinalize);
	});
	return class$;
}

$Class* FinalizeOverride$PrivateFinalize::class$ = nullptr;