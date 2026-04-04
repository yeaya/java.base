#include <IsParallelCapable$ParaCL.h>
#include <IsParallelCapable$TestCL.h>
#include <IsParallelCapable.h>
#include <java/lang/ClassLoader.h>
#include <jcpp.h>

using $IsParallelCapable$TestCL = ::IsParallelCapable$TestCL;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void IsParallelCapable$ParaCL::init$() {
	$IsParallelCapable$TestCL::init$();
}

bool IsParallelCapable$ParaCL::expectCapable() {
	return true;
}

void IsParallelCapable$ParaCL::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	{
		$ClassLoader::registerAsParallelCapable();
	}
}

IsParallelCapable$ParaCL::IsParallelCapable$ParaCL() {
}

$Class* IsParallelCapable$ParaCL::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IsParallelCapable$ParaCL, init$, void)},
		{"expectCapable", "()Z", nullptr, $PUBLIC, $virtualMethod(IsParallelCapable$ParaCL, expectCapable, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"IsParallelCapable$ParaCL", "IsParallelCapable", "ParaCL", $PUBLIC | $STATIC},
		{"IsParallelCapable$TestCL", "IsParallelCapable", "TestCL", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"IsParallelCapable$ParaCL",
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
	$loadClass(IsParallelCapable$ParaCL, name, initialize, &classInfo$$, IsParallelCapable$ParaCL::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IsParallelCapable$ParaCL);
	});
	return class$;
}

$Class* IsParallelCapable$ParaCL::class$ = nullptr;