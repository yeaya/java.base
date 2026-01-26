#include <ParameterizedBoundIndex$TypeInterfaceBound.h>

#include <ParameterizedBoundIndex.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

$TypeAnnotation _ParameterizedBoundIndex$TypeInterfaceBound_TypeAnnotations_[] = {
	{"LParameterizedBoundIndex$TypeAnnotation;", nullptr, "CLASS_TYPE_PARAMETER_BOUND, param_index = 0, bound_index = 1"},
	{}
};

$MethodInfo _ParameterizedBoundIndex$TypeInterfaceBound_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(ParameterizedBoundIndex$TypeInterfaceBound, init$, void)},
	{}
};

$InnerClassInfo _ParameterizedBoundIndex$TypeInterfaceBound_InnerClassesInfo_[] = {
	{"ParameterizedBoundIndex$TypeInterfaceBound", "ParameterizedBoundIndex", "TypeInterfaceBound", $STATIC},
	{}
};

$ClassInfo _ParameterizedBoundIndex$TypeInterfaceBound_ClassInfo_ = {
	$ACC_SUPER,
	"ParameterizedBoundIndex$TypeInterfaceBound",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ParameterizedBoundIndex$TypeInterfaceBound_MethodInfo_,
	"<T::Ljava/lang/Runnable;>Ljava/lang/Object;",
	nullptr,
	_ParameterizedBoundIndex$TypeInterfaceBound_InnerClassesInfo_,
	nullptr,
	_ParameterizedBoundIndex$TypeInterfaceBound_TypeAnnotations_,
	nullptr,
	"ParameterizedBoundIndex"
};

$Object* allocate$ParameterizedBoundIndex$TypeInterfaceBound($Class* clazz) {
	return $of($alloc(ParameterizedBoundIndex$TypeInterfaceBound));
}

void ParameterizedBoundIndex$TypeInterfaceBound::init$() {
}

ParameterizedBoundIndex$TypeInterfaceBound::ParameterizedBoundIndex$TypeInterfaceBound() {
}

$Class* ParameterizedBoundIndex$TypeInterfaceBound::load$($String* name, bool initialize) {
	$loadClass(ParameterizedBoundIndex$TypeInterfaceBound, name, initialize, &_ParameterizedBoundIndex$TypeInterfaceBound_ClassInfo_, allocate$ParameterizedBoundIndex$TypeInterfaceBound);
	return class$;
}

$Class* ParameterizedBoundIndex$TypeInterfaceBound::class$ = nullptr;