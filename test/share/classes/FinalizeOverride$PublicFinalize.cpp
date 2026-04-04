#include <FinalizeOverride$PublicFinalize.h>
#include <FinalizeOverride$Base.h>
#include <FinalizeOverride.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <jcpp.h>

using $FinalizeOverride = ::FinalizeOverride;
using $FinalizeOverride$Base = ::FinalizeOverride$Base;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void FinalizeOverride$PublicFinalize::init$(int32_t v) {
	$FinalizeOverride$Base::init$(v);
}

void FinalizeOverride$PublicFinalize::finalize() {
	$useLocalObjectStack();
	$init($FinalizeOverride);
	$nc($FinalizeOverride::finalizedSum)->addAndGet(this->value * 100);
	$nc($System::out)->println($$str({"PublicFinalize.finalize() sum += "_s, $$str(called()), "+"_s, $$str(this->value), "*100"_s}));
	$nc($FinalizeOverride::finalizedCount)->incrementAndGet();
}

FinalizeOverride$PublicFinalize::FinalizeOverride$PublicFinalize() {
}

$Class* FinalizeOverride$PublicFinalize::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(FinalizeOverride$PublicFinalize, init$, void, int32_t)},
		{"finalize", "()V", nullptr, $PUBLIC, $virtualMethod(FinalizeOverride$PublicFinalize, finalize, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FinalizeOverride$PublicFinalize", "FinalizeOverride", "PublicFinalize", $STATIC},
		{"FinalizeOverride$Base", "FinalizeOverride", "Base", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"FinalizeOverride$PublicFinalize",
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
	$loadClass(FinalizeOverride$PublicFinalize, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FinalizeOverride$PublicFinalize);
	});
	return class$;
}

$Class* FinalizeOverride$PublicFinalize::class$ = nullptr;