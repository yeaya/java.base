#include <IsParallelCapable$NonParaCL.h>

#include <IsParallelCapable$TestCL.h>
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
using $IsParallelCapable$TestCL = ::IsParallelCapable$TestCL;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _IsParallelCapable$NonParaCL_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IsParallelCapable$NonParaCL::*)()>(&IsParallelCapable$NonParaCL::init$))},
	{"expectCapable", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _IsParallelCapable$NonParaCL_InnerClassesInfo_[] = {
	{"IsParallelCapable$NonParaCL", "IsParallelCapable", "NonParaCL", $PUBLIC | $STATIC},
	{"IsParallelCapable$TestCL", "IsParallelCapable", "TestCL", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _IsParallelCapable$NonParaCL_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"IsParallelCapable$NonParaCL",
	"IsParallelCapable$TestCL",
	nullptr,
	nullptr,
	_IsParallelCapable$NonParaCL_MethodInfo_,
	nullptr,
	nullptr,
	_IsParallelCapable$NonParaCL_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"IsParallelCapable"
};

$Object* allocate$IsParallelCapable$NonParaCL($Class* clazz) {
	return $of($alloc(IsParallelCapable$NonParaCL));
}

void IsParallelCapable$NonParaCL::init$() {
	$IsParallelCapable$TestCL::init$();
}

bool IsParallelCapable$NonParaCL::expectCapable() {
	return false;
}

IsParallelCapable$NonParaCL::IsParallelCapable$NonParaCL() {
}

$Class* IsParallelCapable$NonParaCL::load$($String* name, bool initialize) {
	$loadClass(IsParallelCapable$NonParaCL, name, initialize, &_IsParallelCapable$NonParaCL_ClassInfo_, allocate$IsParallelCapable$NonParaCL);
	return class$;
}

$Class* IsParallelCapable$NonParaCL::class$ = nullptr;