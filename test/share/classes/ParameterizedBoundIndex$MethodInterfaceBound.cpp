#include <ParameterizedBoundIndex$MethodInterfaceBound.h>

#include <ParameterizedBoundIndex.h>
#include <jcpp.h>

using $ParameterizedBoundIndex = ::ParameterizedBoundIndex;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

$TypeAnnotation _ParameterizedBoundIndex$MethodInterfaceBound_MethodTypeAnnotations_m1[] = {
	{"LParameterizedBoundIndex$TypeAnnotation;", nullptr, "METHOD_TYPE_PARAMETER_BOUND, param_index = 0, bound_index = 1"},
	{}
};

$MethodInfo _ParameterizedBoundIndex$MethodInterfaceBound_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ParameterizedBoundIndex$MethodInterfaceBound::*)()>(&ParameterizedBoundIndex$MethodInterfaceBound::init$))},
	{"m", "()V", "<T::Ljava/lang/Runnable;>()V", 0, nullptr, nullptr, nullptr, nullptr, _ParameterizedBoundIndex$MethodInterfaceBound_MethodTypeAnnotations_m1},
	{}
};

$InnerClassInfo _ParameterizedBoundIndex$MethodInterfaceBound_InnerClassesInfo_[] = {
	{"ParameterizedBoundIndex$MethodInterfaceBound", "ParameterizedBoundIndex", "MethodInterfaceBound", $STATIC},
	{}
};

$ClassInfo _ParameterizedBoundIndex$MethodInterfaceBound_ClassInfo_ = {
	$ACC_SUPER,
	"ParameterizedBoundIndex$MethodInterfaceBound",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ParameterizedBoundIndex$MethodInterfaceBound_MethodInfo_,
	nullptr,
	nullptr,
	_ParameterizedBoundIndex$MethodInterfaceBound_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ParameterizedBoundIndex"
};

$Object* allocate$ParameterizedBoundIndex$MethodInterfaceBound($Class* clazz) {
	return $of($alloc(ParameterizedBoundIndex$MethodInterfaceBound));
}

void ParameterizedBoundIndex$MethodInterfaceBound::init$() {
}

void ParameterizedBoundIndex$MethodInterfaceBound::m() {
}

ParameterizedBoundIndex$MethodInterfaceBound::ParameterizedBoundIndex$MethodInterfaceBound() {
}

$Class* ParameterizedBoundIndex$MethodInterfaceBound::load$($String* name, bool initialize) {
	$loadClass(ParameterizedBoundIndex$MethodInterfaceBound, name, initialize, &_ParameterizedBoundIndex$MethodInterfaceBound_ClassInfo_, allocate$ParameterizedBoundIndex$MethodInterfaceBound);
	return class$;
}

$Class* ParameterizedBoundIndex$MethodInterfaceBound::class$ = nullptr;