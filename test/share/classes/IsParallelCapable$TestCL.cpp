#include <IsParallelCapable$TestCL.h>
#include <IsParallelCapable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void IsParallelCapable$TestCL::init$() {
	$ClassLoader::init$();
}

$Class* IsParallelCapable$TestCL::findClass($String* name) {
	$throwNew($ClassNotFoundException, "Why are you using this?"_s);
	$shouldNotReachHere();
}

void IsParallelCapable$TestCL::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	{
		$ClassLoader::registerAsParallelCapable();
	}
}

IsParallelCapable$TestCL::IsParallelCapable$TestCL() {
}

$Class* IsParallelCapable$TestCL::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IsParallelCapable$TestCL, init$, void)},
		{"expectCapable", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IsParallelCapable$TestCL, expectCapable, bool)},
		{"findClass", "(Ljava/lang/String;)Ljava/lang/Class;", nullptr, $PUBLIC, $virtualMethod(IsParallelCapable$TestCL, findClass, $Class*, $String*), "java.lang.ClassNotFoundException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"IsParallelCapable$TestCL", "IsParallelCapable", "TestCL", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"IsParallelCapable$TestCL",
		"java.lang.ClassLoader",
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
	$loadClass(IsParallelCapable$TestCL, name, initialize, &classInfo$$, IsParallelCapable$TestCL::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IsParallelCapable$TestCL);
	});
	return class$;
}

$Class* IsParallelCapable$TestCL::class$ = nullptr;