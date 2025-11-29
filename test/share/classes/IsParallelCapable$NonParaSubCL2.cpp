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

$MethodInfo _IsParallelCapable$NonParaSubCL2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IsParallelCapable$NonParaSubCL2::*)()>(&IsParallelCapable$NonParaSubCL2::init$))},
	{"expectCapable", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _IsParallelCapable$NonParaSubCL2_InnerClassesInfo_[] = {
	{"IsParallelCapable$NonParaSubCL2", "IsParallelCapable", "NonParaSubCL2", $PUBLIC | $STATIC},
	{"IsParallelCapable$NonParaCL", "IsParallelCapable", "NonParaCL", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _IsParallelCapable$NonParaSubCL2_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"IsParallelCapable$NonParaSubCL2",
	"IsParallelCapable$NonParaCL",
	nullptr,
	nullptr,
	_IsParallelCapable$NonParaSubCL2_MethodInfo_,
	nullptr,
	nullptr,
	_IsParallelCapable$NonParaSubCL2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"IsParallelCapable"
};

$Object* allocate$IsParallelCapable$NonParaSubCL2($Class* clazz) {
	return $of($alloc(IsParallelCapable$NonParaSubCL2));
}

void IsParallelCapable$NonParaSubCL2::init$() {
	$IsParallelCapable$NonParaCL::init$();
}

bool IsParallelCapable$NonParaSubCL2::expectCapable() {
	return false;
}

void clinit$IsParallelCapable$NonParaSubCL2($Class* class$) {
	$beforeCallerSensitive();
	{
		$ClassLoader::registerAsParallelCapable();
	}
}

IsParallelCapable$NonParaSubCL2::IsParallelCapable$NonParaSubCL2() {
}

$Class* IsParallelCapable$NonParaSubCL2::load$($String* name, bool initialize) {
	$loadClass(IsParallelCapable$NonParaSubCL2, name, initialize, &_IsParallelCapable$NonParaSubCL2_ClassInfo_, clinit$IsParallelCapable$NonParaSubCL2, allocate$IsParallelCapable$NonParaSubCL2);
	return class$;
}

$Class* IsParallelCapable$NonParaSubCL2::class$ = nullptr;