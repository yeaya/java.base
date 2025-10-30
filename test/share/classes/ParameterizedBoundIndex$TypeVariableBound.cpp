#include <ParameterizedBoundIndex$TypeVariableBound.h>

#include <ParameterizedBoundIndex.h>
#include <jcpp.h>

using $ParameterizedBoundIndex = ::ParameterizedBoundIndex;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

$TypeAnnotation _ParameterizedBoundIndex$TypeVariableBound_TypeAnnotations_[] = {
	{"LParameterizedBoundIndex$TypeAnnotation;", nullptr, "CLASS_TYPE_PARAMETER_BOUND, param_index = 1, bound_index = 0"},
	{}
};

$MethodInfo _ParameterizedBoundIndex$TypeVariableBound_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ParameterizedBoundIndex$TypeVariableBound::*)()>(&ParameterizedBoundIndex$TypeVariableBound::init$))},
	{}
};

$InnerClassInfo _ParameterizedBoundIndex$TypeVariableBound_InnerClassesInfo_[] = {
	{"ParameterizedBoundIndex$TypeVariableBound", "ParameterizedBoundIndex", "TypeVariableBound", $STATIC},
	{}
};

$ClassInfo _ParameterizedBoundIndex$TypeVariableBound_ClassInfo_ = {
	$ACC_SUPER,
	"ParameterizedBoundIndex$TypeVariableBound",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ParameterizedBoundIndex$TypeVariableBound_MethodInfo_,
	"<T:Ljava/lang/Object;S:TT;>Ljava/lang/Object;",
	nullptr,
	_ParameterizedBoundIndex$TypeVariableBound_InnerClassesInfo_,
	nullptr,
	_ParameterizedBoundIndex$TypeVariableBound_TypeAnnotations_,
	nullptr,
	"ParameterizedBoundIndex"
};

$Object* allocate$ParameterizedBoundIndex$TypeVariableBound($Class* clazz) {
	return $of($alloc(ParameterizedBoundIndex$TypeVariableBound));
}

void ParameterizedBoundIndex$TypeVariableBound::init$() {
}

ParameterizedBoundIndex$TypeVariableBound::ParameterizedBoundIndex$TypeVariableBound() {
}

$Class* ParameterizedBoundIndex$TypeVariableBound::load$($String* name, bool initialize) {
	$loadClass(ParameterizedBoundIndex$TypeVariableBound, name, initialize, &_ParameterizedBoundIndex$TypeVariableBound_ClassInfo_, allocate$ParameterizedBoundIndex$TypeVariableBound);
	return class$;
}

$Class* ParameterizedBoundIndex$TypeVariableBound::class$ = nullptr;