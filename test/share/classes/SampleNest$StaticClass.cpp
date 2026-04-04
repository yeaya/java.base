#include <SampleNest$StaticClass.h>
#include <SampleNest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void SampleNest$StaticClass::init$() {
}

SampleNest$StaticClass::SampleNest$StaticClass() {
}

$Class* SampleNest$StaticClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SampleNest$StaticClass, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SampleNest$StaticClass", "SampleNest", "StaticClass", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SampleNest$StaticClass",
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
	$loadClass(SampleNest$StaticClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SampleNest$StaticClass);
	});
	return class$;
}

$Class* SampleNest$StaticClass::class$ = nullptr;