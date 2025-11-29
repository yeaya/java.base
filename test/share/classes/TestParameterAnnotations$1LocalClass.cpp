#include <TestParameterAnnotations$1LocalClass.h>

#include <TestParameterAnnotations.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParameterAnnotation = ::java::lang::ParameterAnnotation;

$ParameterAnnotation _TestParameterAnnotations$1LocalClass_MethodParamAnnotations_init$0[] = {
	{"LMarker;", nullptr, 0},
	{}
};

$MethodInfo _TestParameterAnnotations$1LocalClass_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(TestParameterAnnotations$1LocalClass::*)(int32_t)>(&TestParameterAnnotations$1LocalClass::init$)), nullptr, nullptr, nullptr, nullptr, _TestParameterAnnotations$1LocalClass_MethodParamAnnotations_init$0},
	{}
};

$EnclosingMethodInfo _TestParameterAnnotations$1LocalClass_EnclosingMethodInfo_ = {
	"TestParameterAnnotations",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _TestParameterAnnotations$1LocalClass_InnerClassesInfo_[] = {
	{"TestParameterAnnotations$1LocalClass", nullptr, "LocalClass", 0},
	{}
};

$ClassInfo _TestParameterAnnotations$1LocalClass_ClassInfo_ = {
	$ACC_SUPER,
	"TestParameterAnnotations$1LocalClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestParameterAnnotations$1LocalClass_MethodInfo_,
	nullptr,
	&_TestParameterAnnotations$1LocalClass_EnclosingMethodInfo_,
	_TestParameterAnnotations$1LocalClass_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestParameterAnnotations"
};

$Object* allocate$TestParameterAnnotations$1LocalClass($Class* clazz) {
	return $of($alloc(TestParameterAnnotations$1LocalClass));
}

void TestParameterAnnotations$1LocalClass::init$(int32_t i) {
}

TestParameterAnnotations$1LocalClass::TestParameterAnnotations$1LocalClass() {
}

$Class* TestParameterAnnotations$1LocalClass::load$($String* name, bool initialize) {
	$loadClass(TestParameterAnnotations$1LocalClass, name, initialize, &_TestParameterAnnotations$1LocalClass_ClassInfo_, allocate$TestParameterAnnotations$1LocalClass);
	return class$;
}

$Class* TestParameterAnnotations$1LocalClass::class$ = nullptr;