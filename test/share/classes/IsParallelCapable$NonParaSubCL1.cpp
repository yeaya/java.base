#include <IsParallelCapable$NonParaSubCL1.h>
#include <IsParallelCapable$ParaCL.h>
#include <IsParallelCapable.h>
#include <jcpp.h>

using $IsParallelCapable$ParaCL = ::IsParallelCapable$ParaCL;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void IsParallelCapable$NonParaSubCL1::init$() {
	$IsParallelCapable$ParaCL::init$();
}

bool IsParallelCapable$NonParaSubCL1::expectCapable() {
	return false;
}

IsParallelCapable$NonParaSubCL1::IsParallelCapable$NonParaSubCL1() {
}

$Class* IsParallelCapable$NonParaSubCL1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IsParallelCapable$NonParaSubCL1, init$, void)},
		{"expectCapable", "()Z", nullptr, $PUBLIC, $virtualMethod(IsParallelCapable$NonParaSubCL1, expectCapable, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"IsParallelCapable$NonParaSubCL1", "IsParallelCapable", "NonParaSubCL1", $PUBLIC | $STATIC},
		{"IsParallelCapable$ParaCL", "IsParallelCapable", "ParaCL", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"IsParallelCapable$NonParaSubCL1",
		"IsParallelCapable$ParaCL",
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
	$loadClass(IsParallelCapable$NonParaSubCL1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IsParallelCapable$NonParaSubCL1);
	});
	return class$;
}

$Class* IsParallelCapable$NonParaSubCL1::class$ = nullptr;