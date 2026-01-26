#include <TestParameterAnnotations$StaticNested.h>

#include <TestParameterAnnotations.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParameterAnnotation = ::java::lang::ParameterAnnotation;

$ParameterAnnotation _TestParameterAnnotations$StaticNested_MethodParamAnnotations_init$0[] = {
	{"LMarker;", nullptr, 0},
	{}
};

$MethodInfo _TestParameterAnnotations$StaticNested_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(TestParameterAnnotations$StaticNested, init$, void, Object$*), nullptr, nullptr, nullptr, nullptr, _TestParameterAnnotations$StaticNested_MethodParamAnnotations_init$0},
	{}
};

$InnerClassInfo _TestParameterAnnotations$StaticNested_InnerClassesInfo_[] = {
	{"TestParameterAnnotations$StaticNested", "TestParameterAnnotations", "StaticNested", $STATIC},
	{}
};

$ClassInfo _TestParameterAnnotations$StaticNested_ClassInfo_ = {
	$ACC_SUPER,
	"TestParameterAnnotations$StaticNested",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestParameterAnnotations$StaticNested_MethodInfo_,
	nullptr,
	nullptr,
	_TestParameterAnnotations$StaticNested_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestParameterAnnotations"
};

$Object* allocate$TestParameterAnnotations$StaticNested($Class* clazz) {
	return $of($alloc(TestParameterAnnotations$StaticNested));
}

void TestParameterAnnotations$StaticNested::init$(Object$* o) {
}

TestParameterAnnotations$StaticNested::TestParameterAnnotations$StaticNested() {
}

$Class* TestParameterAnnotations$StaticNested::load$($String* name, bool initialize) {
	$loadClass(TestParameterAnnotations$StaticNested, name, initialize, &_TestParameterAnnotations$StaticNested_ClassInfo_, allocate$TestParameterAnnotations$StaticNested);
	return class$;
}

$Class* TestParameterAnnotations$StaticNested::class$ = nullptr;