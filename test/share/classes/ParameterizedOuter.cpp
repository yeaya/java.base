#include <ParameterizedOuter.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ParameterizedOuter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ParameterizedOuter::*)()>(&ParameterizedOuter::init$))},
	{}
};

$InnerClassInfo _ParameterizedOuter_InnerClassesInfo_[] = {
	{"ParameterizedOuter$ParameterizedInner", "ParameterizedOuter", "ParameterizedInner", 0},
	{}
};

$ClassInfo _ParameterizedOuter_ClassInfo_ = {
	$ACC_SUPER,
	"ParameterizedOuter",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ParameterizedOuter_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_ParameterizedOuter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ParameterizedOuter$ParameterizedInner"
};

$Object* allocate$ParameterizedOuter($Class* clazz) {
	return $of($alloc(ParameterizedOuter));
}

void ParameterizedOuter::init$() {
}

ParameterizedOuter::ParameterizedOuter() {
}

$Class* ParameterizedOuter::load$($String* name, bool initialize) {
	$loadClass(ParameterizedOuter, name, initialize, &_ParameterizedOuter_ClassInfo_, allocate$ParameterizedOuter);
	return class$;
}

$Class* ParameterizedOuter::class$ = nullptr;