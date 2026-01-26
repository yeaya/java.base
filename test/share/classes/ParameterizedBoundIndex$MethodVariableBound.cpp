#include <ParameterizedBoundIndex$MethodVariableBound.h>

#include <ParameterizedBoundIndex.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

$TypeAnnotation _ParameterizedBoundIndex$MethodVariableBound_TypeAnnotations_[] = {
	{"LParameterizedBoundIndex$TypeAnnotation;", nullptr, "CLASS_TYPE_PARAMETER_BOUND, param_index = 1, bound_index = 0"},
	{}
};

$TypeAnnotation _ParameterizedBoundIndex$MethodVariableBound_MethodTypeAnnotations_m1[] = {
	{"LParameterizedBoundIndex$TypeAnnotation;", nullptr, "METHOD_TYPE_PARAMETER_BOUND, param_index = 1, bound_index = 0"},
	{}
};

$MethodInfo _ParameterizedBoundIndex$MethodVariableBound_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(ParameterizedBoundIndex$MethodVariableBound, init$, void)},
	{"m", "()V", "<T:Ljava/lang/Object;S:TT;>()V", 0, $virtualMethod(ParameterizedBoundIndex$MethodVariableBound, m, void), nullptr, nullptr, nullptr, _ParameterizedBoundIndex$MethodVariableBound_MethodTypeAnnotations_m1},
	{}
};

$InnerClassInfo _ParameterizedBoundIndex$MethodVariableBound_InnerClassesInfo_[] = {
	{"ParameterizedBoundIndex$MethodVariableBound", "ParameterizedBoundIndex", "MethodVariableBound", $STATIC},
	{}
};

$ClassInfo _ParameterizedBoundIndex$MethodVariableBound_ClassInfo_ = {
	$ACC_SUPER,
	"ParameterizedBoundIndex$MethodVariableBound",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ParameterizedBoundIndex$MethodVariableBound_MethodInfo_,
	"<T:Ljava/lang/Object;S:TT;>Ljava/lang/Object;",
	nullptr,
	_ParameterizedBoundIndex$MethodVariableBound_InnerClassesInfo_,
	nullptr,
	_ParameterizedBoundIndex$MethodVariableBound_TypeAnnotations_,
	nullptr,
	"ParameterizedBoundIndex"
};

$Object* allocate$ParameterizedBoundIndex$MethodVariableBound($Class* clazz) {
	return $of($alloc(ParameterizedBoundIndex$MethodVariableBound));
}

void ParameterizedBoundIndex$MethodVariableBound::init$() {
}

void ParameterizedBoundIndex$MethodVariableBound::m() {
}

ParameterizedBoundIndex$MethodVariableBound::ParameterizedBoundIndex$MethodVariableBound() {
}

$Class* ParameterizedBoundIndex$MethodVariableBound::load$($String* name, bool initialize) {
	$loadClass(ParameterizedBoundIndex$MethodVariableBound, name, initialize, &_ParameterizedBoundIndex$MethodVariableBound_ClassInfo_, allocate$ParameterizedBoundIndex$MethodVariableBound);
	return class$;
}

$Class* ParameterizedBoundIndex$MethodVariableBound::class$ = nullptr;