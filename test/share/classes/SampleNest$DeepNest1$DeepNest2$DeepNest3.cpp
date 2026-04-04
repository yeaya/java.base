#include <SampleNest$DeepNest1$DeepNest2$DeepNest3.h>
#include <SampleNest$DeepNest1$DeepNest2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void SampleNest$DeepNest1$DeepNest2$DeepNest3::init$() {
}

SampleNest$DeepNest1$DeepNest2$DeepNest3::SampleNest$DeepNest1$DeepNest2$DeepNest3() {
}

$Class* SampleNest$DeepNest1$DeepNest2$DeepNest3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SampleNest$DeepNest1$DeepNest2$DeepNest3, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SampleNest$DeepNest1", "SampleNest", "DeepNest1", $STATIC},
		{"SampleNest$DeepNest1$DeepNest2", "SampleNest$DeepNest1", "DeepNest2", $STATIC},
		{"SampleNest$DeepNest1$DeepNest2$DeepNest3", "SampleNest$DeepNest1$DeepNest2", "DeepNest3", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SampleNest$DeepNest1$DeepNest2$DeepNest3",
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
	$loadClass(SampleNest$DeepNest1$DeepNest2$DeepNest3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SampleNest$DeepNest1$DeepNest2$DeepNest3);
	});
	return class$;
}

$Class* SampleNest$DeepNest1$DeepNest2$DeepNest3::class$ = nullptr;