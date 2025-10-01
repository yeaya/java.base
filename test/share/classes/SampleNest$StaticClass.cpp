#include <SampleNest$StaticClass.h>

#include <SampleNest.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $SampleNest = ::SampleNest;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _SampleNest$StaticClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SampleNest$StaticClass::*)()>(&SampleNest$StaticClass::init$))},
	{}
};

$InnerClassInfo _SampleNest$StaticClass_InnerClassesInfo_[] = {
	{"SampleNest$StaticClass", "SampleNest", "StaticClass", $STATIC},
	{}
};

$ClassInfo _SampleNest$StaticClass_ClassInfo_ = {
	$ACC_SUPER,
	"SampleNest$StaticClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SampleNest$StaticClass_MethodInfo_,
	nullptr,
	nullptr,
	_SampleNest$StaticClass_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SampleNest"
};

$Object* allocate$SampleNest$StaticClass($Class* clazz) {
	return $of($alloc(SampleNest$StaticClass));
}

void SampleNest$StaticClass::init$() {
}

SampleNest$StaticClass::SampleNest$StaticClass() {
}

$Class* SampleNest$StaticClass::load$($String* name, bool initialize) {
	$loadClass(SampleNest$StaticClass, name, initialize, &_SampleNest$StaticClass_ClassInfo_, allocate$SampleNest$StaticClass);
	return class$;
}

$Class* SampleNest$StaticClass::class$ = nullptr;