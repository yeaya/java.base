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

$MethodInfo _IsParallelCapable$ParaCL_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(IsParallelCapable$ParaCL, init$, void)},
	{"expectCapable", "()Z", nullptr, $PUBLIC, $virtualMethod(IsParallelCapable$ParaCL, expectCapable, bool)},
	{}
};

$InnerClassInfo _IsParallelCapable$ParaCL_InnerClassesInfo_[] = {
	{"IsParallelCapable$ParaCL", "IsParallelCapable", "ParaCL", $PUBLIC | $STATIC},
	{"IsParallelCapable$TestCL", "IsParallelCapable", "TestCL", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _IsParallelCapable$ParaCL_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"IsParallelCapable$ParaCL",
	"IsParallelCapable$TestCL",
	nullptr,
	nullptr,
	_IsParallelCapable$ParaCL_MethodInfo_,
	nullptr,
	nullptr,
	_IsParallelCapable$ParaCL_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"IsParallelCapable"
};

$Object* allocate$IsParallelCapable$ParaCL($Class* clazz) {
	return $of($alloc(IsParallelCapable$ParaCL));
}

void IsParallelCapable$ParaCL::init$() {
	$IsParallelCapable$TestCL::init$();
}

bool IsParallelCapable$ParaCL::expectCapable() {
	return true;
}

void clinit$IsParallelCapable$ParaCL($Class* class$) {
	$beforeCallerSensitive();
	{
		$ClassLoader::registerAsParallelCapable();
	}
}

IsParallelCapable$ParaCL::IsParallelCapable$ParaCL() {
}

$Class* IsParallelCapable$ParaCL::load$($String* name, bool initialize) {
	$loadClass(IsParallelCapable$ParaCL, name, initialize, &_IsParallelCapable$ParaCL_ClassInfo_, clinit$IsParallelCapable$ParaCL, allocate$IsParallelCapable$ParaCL);
	return class$;
}

$Class* IsParallelCapable$ParaCL::class$ = nullptr;