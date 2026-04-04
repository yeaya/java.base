#include <FinalizeOverride$Base.h>
#include <FinalizeOverride.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <jcpp.h>

using $FinalizeOverride = ::FinalizeOverride;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void FinalizeOverride$Base::init$(int32_t v) {
	this->value = v;
}

int32_t FinalizeOverride$Base::called() {
	$init($FinalizeOverride);
	$nc($FinalizeOverride::finalizedSum)->addAndGet(this->value);
	return this->value;
}

void FinalizeOverride$Base::finalize() {
	$useLocalObjectStack();
	$nc($System::out)->println($$str({"Base.finalize() sum += "_s, $$str(called())}));
	$init($FinalizeOverride);
	$nc($FinalizeOverride::finalizedCount)->incrementAndGet();
}

FinalizeOverride$Base::FinalizeOverride$Base() {
}

$Class* FinalizeOverride$Base::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"value", "I", nullptr, $PROTECTED, $field(FinalizeOverride$Base, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(FinalizeOverride$Base, init$, void, int32_t)},
		{"called", "()I", nullptr, 0, $virtualMethod(FinalizeOverride$Base, called, int32_t)},
		{"finalize", "()V", nullptr, $PROTECTED, $virtualMethod(FinalizeOverride$Base, finalize, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FinalizeOverride$Base", "FinalizeOverride", "Base", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"FinalizeOverride$Base",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"FinalizeOverride"
	};
	$loadClass(FinalizeOverride$Base, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FinalizeOverride$Base);
	});
	return class$;
}

$Class* FinalizeOverride$Base::class$ = nullptr;