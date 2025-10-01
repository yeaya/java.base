#include <IsParallelCapable$ParaSubCL.h>

#include <IsParallelCapable$ParaCL.h>
#include <IsParallelCapable.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $IsParallelCapable = ::IsParallelCapable;
using $IsParallelCapable$ParaCL = ::IsParallelCapable$ParaCL;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _IsParallelCapable$ParaSubCL_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IsParallelCapable$ParaSubCL::*)()>(&IsParallelCapable$ParaSubCL::init$))},
	{"expectCapable", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _IsParallelCapable$ParaSubCL_InnerClassesInfo_[] = {
	{"IsParallelCapable$ParaSubCL", "IsParallelCapable", "ParaSubCL", $PUBLIC | $STATIC},
	{"IsParallelCapable$ParaCL", "IsParallelCapable", "ParaCL", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _IsParallelCapable$ParaSubCL_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"IsParallelCapable$ParaSubCL",
	"IsParallelCapable$ParaCL",
	nullptr,
	nullptr,
	_IsParallelCapable$ParaSubCL_MethodInfo_,
	nullptr,
	nullptr,
	_IsParallelCapable$ParaSubCL_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"IsParallelCapable"
};

$Object* allocate$IsParallelCapable$ParaSubCL($Class* clazz) {
	return $of($alloc(IsParallelCapable$ParaSubCL));
}

void IsParallelCapable$ParaSubCL::init$() {
	$IsParallelCapable$ParaCL::init$();
}

bool IsParallelCapable$ParaSubCL::expectCapable() {
	return true;
}

void clinit$IsParallelCapable$ParaSubCL($Class* class$) {
	$beforeCallerSensitive();
	{
		$ClassLoader::registerAsParallelCapable();
	}
}

IsParallelCapable$ParaSubCL::IsParallelCapable$ParaSubCL() {
}

$Class* IsParallelCapable$ParaSubCL::load$($String* name, bool initialize) {
	$loadClass(IsParallelCapable$ParaSubCL, name, initialize, &_IsParallelCapable$ParaSubCL_ClassInfo_, clinit$IsParallelCapable$ParaSubCL, allocate$IsParallelCapable$ParaSubCL);
	return class$;
}

$Class* IsParallelCapable$ParaSubCL::class$ = nullptr;