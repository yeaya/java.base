#include <SampleNest$DeepNest1.h>
#include <SampleNest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void SampleNest$DeepNest1::init$() {
}

SampleNest$DeepNest1::SampleNest$DeepNest1() {
}

$Class* SampleNest$DeepNest1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SampleNest$DeepNest1, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SampleNest$DeepNest1", "SampleNest", "DeepNest1", $STATIC},
		{"SampleNest$DeepNest1$DeepNest2", "SampleNest$DeepNest1", "DeepNest2", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SampleNest$DeepNest1",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"SampleNest"
	};
	$loadClass(SampleNest$DeepNest1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SampleNest$DeepNest1);
	});
	return class$;
}

$Class* SampleNest$DeepNest1::class$ = nullptr;