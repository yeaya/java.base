#include <FinalizeOverride$SubSubclass.h>
#include <FinalizeOverride$Base.h>
#include <FinalizeOverride$Subclass.h>
#include <FinalizeOverride.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <jcpp.h>

using $FinalizeOverride = ::FinalizeOverride;
using $FinalizeOverride$Subclass = ::FinalizeOverride$Subclass;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void FinalizeOverride$SubSubclass::init$(int32_t v) {
	$FinalizeOverride$Subclass::init$(v);
}

void FinalizeOverride$SubSubclass::finalize() {
	$useLocalObjectStack();
	$init($FinalizeOverride);
	$nc($FinalizeOverride::finalizedSum)->addAndGet(this->value);
	$nc($System::out)->println($$str({"SubSubclass.finalize() sum +="_s, $$str(this->value)}));
	$nc($FinalizeOverride::finalizedCount)->incrementAndGet();
}

FinalizeOverride$SubSubclass::FinalizeOverride$SubSubclass() {
}

$Class* FinalizeOverride$SubSubclass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(FinalizeOverride$SubSubclass, init$, void, int32_t)},
		{"finalize", "()V", nullptr, $PROTECTED | $FINAL, $virtualMethod(FinalizeOverride$SubSubclass, finalize, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FinalizeOverride$SubSubclass", "FinalizeOverride", "SubSubclass", $STATIC},
		{"FinalizeOverride$Subclass", "FinalizeOverride", "Subclass", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"FinalizeOverride$SubSubclass",
		"FinalizeOverride$Subclass",
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
	$loadClass(FinalizeOverride$SubSubclass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FinalizeOverride$SubSubclass);
	});
	return class$;
}

$Class* FinalizeOverride$SubSubclass::class$ = nullptr;