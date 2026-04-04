#include <IsParallelCapable$NonParaCL.h>
#include <IsParallelCapable$TestCL.h>
#include <IsParallelCapable.h>
#include <jcpp.h>

using $IsParallelCapable$TestCL = ::IsParallelCapable$TestCL;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void IsParallelCapable$NonParaCL::init$() {
	$IsParallelCapable$TestCL::init$();
}

bool IsParallelCapable$NonParaCL::expectCapable() {
	return false;
}

IsParallelCapable$NonParaCL::IsParallelCapable$NonParaCL() {
}

$Class* IsParallelCapable$NonParaCL::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IsParallelCapable$NonParaCL, init$, void)},
		{"expectCapable", "()Z", nullptr, $PUBLIC, $virtualMethod(IsParallelCapable$NonParaCL, expectCapable, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"IsParallelCapable$NonParaCL", "IsParallelCapable", "NonParaCL", $PUBLIC | $STATIC},
		{"IsParallelCapable$TestCL", "IsParallelCapable", "TestCL", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"IsParallelCapable$NonParaCL",
		"IsParallelCapable$TestCL",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"IsParallelCapable"
	};
	$loadClass(IsParallelCapable$NonParaCL, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IsParallelCapable$NonParaCL);
	});
	return class$;
}

$Class* IsParallelCapable$NonParaCL::class$ = nullptr;