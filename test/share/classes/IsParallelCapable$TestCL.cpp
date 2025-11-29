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

$MethodInfo _IsParallelCapable$TestCL_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IsParallelCapable$TestCL::*)()>(&IsParallelCapable$TestCL::init$))},
	{"expectCapable", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"findClass", "(Ljava/lang/String;)Ljava/lang/Class;", nullptr, $PUBLIC, nullptr, "java.lang.ClassNotFoundException"},
	{}
};

$InnerClassInfo _IsParallelCapable$TestCL_InnerClassesInfo_[] = {
	{"IsParallelCapable$TestCL", "IsParallelCapable", "TestCL", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _IsParallelCapable$TestCL_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"IsParallelCapable$TestCL",
	"java.lang.ClassLoader",
	nullptr,
	nullptr,
	_IsParallelCapable$TestCL_MethodInfo_,
	nullptr,
	nullptr,
	_IsParallelCapable$TestCL_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"IsParallelCapable"
};

$Object* allocate$IsParallelCapable$TestCL($Class* clazz) {
	return $of($alloc(IsParallelCapable$TestCL));
}

void IsParallelCapable$TestCL::init$() {
	$ClassLoader::init$();
}

$Class* IsParallelCapable$TestCL::findClass($String* name) {
	$throwNew($ClassNotFoundException, "Why are you using this?"_s);
	$shouldNotReachHere();
}

void clinit$IsParallelCapable$TestCL($Class* class$) {
	$beforeCallerSensitive();
	{
		$ClassLoader::registerAsParallelCapable();
	}
}

IsParallelCapable$TestCL::IsParallelCapable$TestCL() {
}

$Class* IsParallelCapable$TestCL::load$($String* name, bool initialize) {
	$loadClass(IsParallelCapable$TestCL, name, initialize, &_IsParallelCapable$TestCL_ClassInfo_, clinit$IsParallelCapable$TestCL, allocate$IsParallelCapable$TestCL);
	return class$;
}

$Class* IsParallelCapable$TestCL::class$ = nullptr;