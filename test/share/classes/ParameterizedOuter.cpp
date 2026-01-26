#include <ParameterizedOuter.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ParameterizedOuter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(ParameterizedOuter, init$, void)},
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