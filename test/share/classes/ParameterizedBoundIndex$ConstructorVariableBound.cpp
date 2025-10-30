#include <ParameterizedBoundIndex$ConstructorVariableBound.h>

#include <ParameterizedBoundIndex.h>
#include <jcpp.h>

using $ParameterizedBoundIndex = ::ParameterizedBoundIndex;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

$TypeAnnotation _ParameterizedBoundIndex$ConstructorVariableBound_TypeAnnotations_[] = {
	{"LParameterizedBoundIndex$TypeAnnotation;", nullptr, "CLASS_TYPE_PARAMETER_BOUND, param_index = 1, bound_index = 0"},
	{}
};

$TypeAnnotation _ParameterizedBoundIndex$ConstructorVariableBound_MethodTypeAnnotations_init$0[] = {
	{"LParameterizedBoundIndex$TypeAnnotation;", nullptr, "METHOD_TYPE_PARAMETER_BOUND, param_index = 1, bound_index = 0"},
	{}
};

$MethodInfo _ParameterizedBoundIndex$ConstructorVariableBound_MethodInfo_[] = {
	{"<init>", "()V", "<T:Ljava/lang/Object;S:TT;>()V", 0, $method(static_cast<void(ParameterizedBoundIndex$ConstructorVariableBound::*)()>(&ParameterizedBoundIndex$ConstructorVariableBound::init$)), nullptr, nullptr, nullptr, _ParameterizedBoundIndex$ConstructorVariableBound_MethodTypeAnnotations_init$0},
	{}
};

$InnerClassInfo _ParameterizedBoundIndex$ConstructorVariableBound_InnerClassesInfo_[] = {
	{"ParameterizedBoundIndex$ConstructorVariableBound", "ParameterizedBoundIndex", "ConstructorVariableBound", $STATIC},
	{}
};

$ClassInfo _ParameterizedBoundIndex$ConstructorVariableBound_ClassInfo_ = {
	$ACC_SUPER,
	"ParameterizedBoundIndex$ConstructorVariableBound",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ParameterizedBoundIndex$ConstructorVariableBound_MethodInfo_,
	"<T:Ljava/lang/Object;S:TT;>Ljava/lang/Object;",
	nullptr,
	_ParameterizedBoundIndex$ConstructorVariableBound_InnerClassesInfo_,
	nullptr,
	_ParameterizedBoundIndex$ConstructorVariableBound_TypeAnnotations_,
	nullptr,
	"ParameterizedBoundIndex"
};

$Object* allocate$ParameterizedBoundIndex$ConstructorVariableBound($Class* clazz) {
	return $of($alloc(ParameterizedBoundIndex$ConstructorVariableBound));
}

void ParameterizedBoundIndex$ConstructorVariableBound::init$() {
}

ParameterizedBoundIndex$ConstructorVariableBound::ParameterizedBoundIndex$ConstructorVariableBound() {
}

$Class* ParameterizedBoundIndex$ConstructorVariableBound::load$($String* name, bool initialize) {
	$loadClass(ParameterizedBoundIndex$ConstructorVariableBound, name, initialize, &_ParameterizedBoundIndex$ConstructorVariableBound_ClassInfo_, allocate$ParameterizedBoundIndex$ConstructorVariableBound);
	return class$;
}

$Class* ParameterizedBoundIndex$ConstructorVariableBound::class$ = nullptr;