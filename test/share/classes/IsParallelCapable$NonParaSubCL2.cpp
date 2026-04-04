#include <IsParallelCapable$NonParaSubCL2.h>
#include <IsParallelCapable$NonParaCL.h>
#include <IsParallelCapable.h>
#include <java/lang/ClassLoader.h>
#include <jcpp.h>

using $IsParallelCapable$NonParaCL = ::IsParallelCapable$NonParaCL;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void IsParallelCapable$NonParaSubCL2::init$() {
	$IsParallelCapable$NonParaCL::init$();
}

bool IsParallelCapable$NonParaSubCL2::expectCapable() {
	return false;
}

void IsParallelCapable$NonParaSubCL2::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	{
		$ClassLoader::registerAsParallelCapable();
	}
}

IsParallelCapable$NonParaSubCL2::IsParallelCapable$NonParaSubCL2() {
}

$Class* IsParallelCapable$NonParaSubCL2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IsParallelCapable$NonParaSubCL2, init$, void)},
		{"expectCapable", "()Z", nullptr, $PUBLIC, $virtualMethod(IsParallelCapable$NonParaSubCL2, expectCapable, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"IsParallelCapable$NonParaSubCL2", "IsParallelCapable", "NonParaSubCL2", $PUBLIC | $STATIC},
		{"IsParallelCapable$NonParaCL", "IsParallelCapable", "NonParaCL", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"IsParallelCapable$NonParaSubCL2",
		"IsParallelCapable$NonParaCL",
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
	$loadClass(IsParallelCapable$NonParaSubCL2, name, initialize, &classInfo$$, IsParallelCapable$NonParaSubCL2::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IsParallelCapable$NonParaSubCL2);
	});
	return class$;
}

$Class* IsParallelCapable$NonParaSubCL2::class$ = nullptr;