#include <ParameterizedBoundIndex$MethodParameterizedInterfaceBound.h>

#include <ParameterizedBoundIndex.h>
#include <jcpp.h>

using $ParameterizedBoundIndex = ::ParameterizedBoundIndex;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

$TypeAnnotation _ParameterizedBoundIndex$MethodParameterizedInterfaceBound_TypeAnnotations_[] = {
	{"LParameterizedBoundIndex$TypeAnnotation;", nullptr, "CLASS_TYPE_PARAMETER_BOUND, param_index = 0, bound_index = 1"},
	{}
};

$TypeAnnotation _ParameterizedBoundIndex$MethodParameterizedInterfaceBound_MethodTypeAnnotations_m1[] = {
	{"LParameterizedBoundIndex$TypeAnnotation;", nullptr, "METHOD_TYPE_PARAMETER_BOUND, param_index = 0, bound_index = 1"},
	{}
};

$MethodInfo _ParameterizedBoundIndex$MethodParameterizedInterfaceBound_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ParameterizedBoundIndex$MethodParameterizedInterfaceBound::*)()>(&ParameterizedBoundIndex$MethodParameterizedInterfaceBound::init$))},
	{"m", "()V", "<T::Ljava/util/List<*>;>()V", 0, nullptr, nullptr, nullptr, nullptr, _ParameterizedBoundIndex$MethodParameterizedInterfaceBound_MethodTypeAnnotations_m1},
	{}
};

$InnerClassInfo _ParameterizedBoundIndex$MethodParameterizedInterfaceBound_InnerClassesInfo_[] = {
	{"ParameterizedBoundIndex$MethodParameterizedInterfaceBound", "ParameterizedBoundIndex", "MethodParameterizedInterfaceBound", $STATIC},
	{}
};

$ClassInfo _ParameterizedBoundIndex$MethodParameterizedInterfaceBound_ClassInfo_ = {
	$ACC_SUPER,
	"ParameterizedBoundIndex$MethodParameterizedInterfaceBound",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ParameterizedBoundIndex$MethodParameterizedInterfaceBound_MethodInfo_,
	"<T::Ljava/util/List<*>;>Ljava/lang/Object;",
	nullptr,
	_ParameterizedBoundIndex$MethodParameterizedInterfaceBound_InnerClassesInfo_,
	nullptr,
	_ParameterizedBoundIndex$MethodParameterizedInterfaceBound_TypeAnnotations_,
	nullptr,
	"ParameterizedBoundIndex"
};

$Object* allocate$ParameterizedBoundIndex$MethodParameterizedInterfaceBound($Class* clazz) {
	return $of($alloc(ParameterizedBoundIndex$MethodParameterizedInterfaceBound));
}

void ParameterizedBoundIndex$MethodParameterizedInterfaceBound::init$() {
}

void ParameterizedBoundIndex$MethodParameterizedInterfaceBound::m() {
}

ParameterizedBoundIndex$MethodParameterizedInterfaceBound::ParameterizedBoundIndex$MethodParameterizedInterfaceBound() {
}

$Class* ParameterizedBoundIndex$MethodParameterizedInterfaceBound::load$($String* name, bool initialize) {
	$loadClass(ParameterizedBoundIndex$MethodParameterizedInterfaceBound, name, initialize, &_ParameterizedBoundIndex$MethodParameterizedInterfaceBound_ClassInfo_, allocate$ParameterizedBoundIndex$MethodParameterizedInterfaceBound);
	return class$;
}

$Class* ParameterizedBoundIndex$MethodParameterizedInterfaceBound::class$ = nullptr;