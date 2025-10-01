#include <TestParameterAnnotations$1.h>

#include <TestParameterAnnotations.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $TestParameterAnnotations = ::TestParameterAnnotations;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _TestParameterAnnotations$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TestParameterAnnotations$1::*)()>(&TestParameterAnnotations$1::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TestParameterAnnotations$1_EnclosingMethodInfo_ = {
	"TestParameterAnnotations",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _TestParameterAnnotations$1_InnerClassesInfo_[] = {
	{"TestParameterAnnotations$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestParameterAnnotations$1_ClassInfo_ = {
	$ACC_SUPER,
	"TestParameterAnnotations$1",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestParameterAnnotations$1_MethodInfo_,
	nullptr,
	&_TestParameterAnnotations$1_EnclosingMethodInfo_,
	_TestParameterAnnotations$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestParameterAnnotations"
};

$Object* allocate$TestParameterAnnotations$1($Class* clazz) {
	return $of($alloc(TestParameterAnnotations$1));
}

void TestParameterAnnotations$1::init$() {
}

$String* TestParameterAnnotations$1::toString() {
	return "Anonymous"_s;
}

TestParameterAnnotations$1::TestParameterAnnotations$1() {
}

$Class* TestParameterAnnotations$1::load$($String* name, bool initialize) {
	$loadClass(TestParameterAnnotations$1, name, initialize, &_TestParameterAnnotations$1_ClassInfo_, allocate$TestParameterAnnotations$1);
	return class$;
}

$Class* TestParameterAnnotations$1::class$ = nullptr;