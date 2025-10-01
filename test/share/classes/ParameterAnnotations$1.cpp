#include <ParameterAnnotations$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ParameterAnnotations$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ParameterAnnotations$1::*)()>(&ParameterAnnotations$1::init$))},
	{}
};

$EnclosingMethodInfo _ParameterAnnotations$1_EnclosingMethodInfo_ = {
	"ParameterAnnotations",
	nullptr,
	nullptr
};

$InnerClassInfo _ParameterAnnotations$1_InnerClassesInfo_[] = {
	{"ParameterAnnotations$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ParameterAnnotations$1_ClassInfo_ = {
	$ACC_SUPER,
	"ParameterAnnotations$1",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ParameterAnnotations$1_MethodInfo_,
	nullptr,
	&_ParameterAnnotations$1_EnclosingMethodInfo_,
	_ParameterAnnotations$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ParameterAnnotations"
};

$Object* allocate$ParameterAnnotations$1($Class* clazz) {
	return $of($alloc(ParameterAnnotations$1));
}

void ParameterAnnotations$1::init$() {
}

ParameterAnnotations$1::ParameterAnnotations$1() {
}

$Class* ParameterAnnotations$1::load$($String* name, bool initialize) {
	$loadClass(ParameterAnnotations$1, name, initialize, &_ParameterAnnotations$1_ClassInfo_, allocate$ParameterAnnotations$1);
	return class$;
}

$Class* ParameterAnnotations$1::class$ = nullptr;