#include <TestParameterAnnotations$Inner.h>

#include <TestParameterAnnotations.h>
#include <jcpp.h>

using $TestParameterAnnotations = ::TestParameterAnnotations;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParameterAnnotation = ::java::lang::ParameterAnnotation;

$ParameterAnnotation _TestParameterAnnotations$Inner_MethodParamAnnotations_init$0[] = {
	{"LMarker;", nullptr, 1},
	{}
};

$FieldInfo _TestParameterAnnotations$Inner_FieldInfo_[] = {
	{"this$0", "LTestParameterAnnotations;", nullptr, $FINAL | $SYNTHETIC, $field(TestParameterAnnotations$Inner, this$0)},
	{}
};

$MethodInfo _TestParameterAnnotations$Inner_MethodInfo_[] = {
	{"<init>", "(LTestParameterAnnotations;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(TestParameterAnnotations$Inner, init$, void, $TestParameterAnnotations*, Object$*), nullptr, nullptr, nullptr, nullptr, _TestParameterAnnotations$Inner_MethodParamAnnotations_init$0},
	{}
};

$InnerClassInfo _TestParameterAnnotations$Inner_InnerClassesInfo_[] = {
	{"TestParameterAnnotations$Inner", "TestParameterAnnotations", "Inner", 0},
	{}
};

$ClassInfo _TestParameterAnnotations$Inner_ClassInfo_ = {
	$ACC_SUPER,
	"TestParameterAnnotations$Inner",
	"java.lang.Object",
	nullptr,
	_TestParameterAnnotations$Inner_FieldInfo_,
	_TestParameterAnnotations$Inner_MethodInfo_,
	nullptr,
	nullptr,
	_TestParameterAnnotations$Inner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestParameterAnnotations"
};

$Object* allocate$TestParameterAnnotations$Inner($Class* clazz) {
	return $of($alloc(TestParameterAnnotations$Inner));
}

void TestParameterAnnotations$Inner::init$($TestParameterAnnotations* this$0, Object$* o) {
	$set(this, this$0, this$0);
}

TestParameterAnnotations$Inner::TestParameterAnnotations$Inner() {
}

$Class* TestParameterAnnotations$Inner::load$($String* name, bool initialize) {
	$loadClass(TestParameterAnnotations$Inner, name, initialize, &_TestParameterAnnotations$Inner_ClassInfo_, allocate$TestParameterAnnotations$Inner);
	return class$;
}

$Class* TestParameterAnnotations$Inner::class$ = nullptr;