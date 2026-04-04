#include <FinalizeOverride$Subclass.h>
#include <FinalizeOverride$Base.h>
#include <FinalizeOverride.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <jcpp.h>

using $FinalizeOverride = ::FinalizeOverride;
using $FinalizeOverride$Base = ::FinalizeOverride$Base;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void FinalizeOverride$Subclass::init$(int32_t v) {
	$FinalizeOverride$Base::init$(v);
}

void FinalizeOverride$Subclass::finalize() {
	$nc($System::out)->println("Subclass.finalize() sum += 0"_s);
	$init($FinalizeOverride);
	$nc($FinalizeOverride::finalizedCount)->incrementAndGet();
}

FinalizeOverride$Subclass::FinalizeOverride$Subclass() {
}

$Class* FinalizeOverride$Subclass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(FinalizeOverride$Subclass, init$, void, int32_t)},
		{"finalize", "()V", nullptr, $PROTECTED, $virtualMethod(FinalizeOverride$Subclass, finalize, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FinalizeOverride$Subclass", "FinalizeOverride", "Subclass", $STATIC},
		{"FinalizeOverride$Base", "FinalizeOverride", "Base", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"FinalizeOverride$Subclass",
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
	$loadClass(FinalizeOverride$Subclass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FinalizeOverride$Subclass);
	});
	return class$;
}

$Class* FinalizeOverride$Subclass::class$ = nullptr;