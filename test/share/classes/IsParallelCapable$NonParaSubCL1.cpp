#include <IsParallelCapable$NonParaSubCL1.h>

#include <IsParallelCapable$ParaCL.h>
#include <IsParallelCapable.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $IsParallelCapable = ::IsParallelCapable;
using $IsParallelCapable$ParaCL = ::IsParallelCapable$ParaCL;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _IsParallelCapable$NonParaSubCL1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IsParallelCapable$NonParaSubCL1::*)()>(&IsParallelCapable$NonParaSubCL1::init$))},
	{"expectCapable", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _IsParallelCapable$NonParaSubCL1_InnerClassesInfo_[] = {
	{"IsParallelCapable$NonParaSubCL1", "IsParallelCapable", "NonParaSubCL1", $PUBLIC | $STATIC},
	{"IsParallelCapable$ParaCL", "IsParallelCapable", "ParaCL", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _IsParallelCapable$NonParaSubCL1_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"IsParallelCapable$NonParaSubCL1",
	"IsParallelCapable$ParaCL",
	nullptr,
	nullptr,
	_IsParallelCapable$NonParaSubCL1_MethodInfo_,
	nullptr,
	nullptr,
	_IsParallelCapable$NonParaSubCL1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"IsParallelCapable"
};

$Object* allocate$IsParallelCapable$NonParaSubCL1($Class* clazz) {
	return $of($alloc(IsParallelCapable$NonParaSubCL1));
}

void IsParallelCapable$NonParaSubCL1::init$() {
	$IsParallelCapable$ParaCL::init$();
}

bool IsParallelCapable$NonParaSubCL1::expectCapable() {
	return false;
}

IsParallelCapable$NonParaSubCL1::IsParallelCapable$NonParaSubCL1() {
}

$Class* IsParallelCapable$NonParaSubCL1::load$($String* name, bool initialize) {
	$loadClass(IsParallelCapable$NonParaSubCL1, name, initialize, &_IsParallelCapable$NonParaSubCL1_ClassInfo_, allocate$IsParallelCapable$NonParaSubCL1);
	return class$;
}

$Class* IsParallelCapable$NonParaSubCL1::class$ = nullptr;