#include <IsParallelCapable$ParaSubCL.h>
#include <IsParallelCapable$ParaCL.h>
#include <IsParallelCapable.h>
#include <java/lang/ClassLoader.h>
#include <jcpp.h>

using $IsParallelCapable$ParaCL = ::IsParallelCapable$ParaCL;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void IsParallelCapable$ParaSubCL::init$() {
	$IsParallelCapable$ParaCL::init$();
}

bool IsParallelCapable$ParaSubCL::expectCapable() {
	return true;
}

void IsParallelCapable$ParaSubCL::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	{
		$ClassLoader::registerAsParallelCapable();
	}
}

IsParallelCapable$ParaSubCL::IsParallelCapable$ParaSubCL() {
}

$Class* IsParallelCapable$ParaSubCL::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IsParallelCapable$ParaSubCL, init$, void)},
		{"expectCapable", "()Z", nullptr, $PUBLIC, $virtualMethod(IsParallelCapable$ParaSubCL, expectCapable, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"IsParallelCapable$ParaSubCL", "IsParallelCapable", "ParaSubCL", $PUBLIC | $STATIC},
		{"IsParallelCapable$ParaCL", "IsParallelCapable", "ParaCL", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"IsParallelCapable$ParaSubCL",
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
	$loadClass(IsParallelCapable$ParaSubCL, name, initialize, &classInfo$$, IsParallelCapable$ParaSubCL::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IsParallelCapable$ParaSubCL);
	});
	return class$;
}

$Class* IsParallelCapable$ParaSubCL::class$ = nullptr;