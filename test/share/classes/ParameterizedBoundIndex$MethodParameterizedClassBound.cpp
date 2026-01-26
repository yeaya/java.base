#include <ParameterizedBoundIndex$MethodParameterizedClassBound.h>

#include <ParameterizedBoundIndex.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

$TypeAnnotation _ParameterizedBoundIndex$MethodParameterizedClassBound_MethodTypeAnnotations_m1[] = {
	{"LParameterizedBoundIndex$TypeAnnotation;", nullptr, "METHOD_TYPE_PARAMETER_BOUND, param_index = 0, bound_index = 0"},
	{}
};

$MethodInfo _ParameterizedBoundIndex$MethodParameterizedClassBound_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(ParameterizedBoundIndex$MethodParameterizedClassBound, init$, void)},
	{"m", "()V", "<T:Ljava/util/ArrayList<*>;>()V", 0, $virtualMethod(ParameterizedBoundIndex$MethodParameterizedClassBound, m, void), nullptr, nullptr, nullptr, _ParameterizedBoundIndex$MethodParameterizedClassBound_MethodTypeAnnotations_m1},
	{}
};

$InnerClassInfo _ParameterizedBoundIndex$MethodParameterizedClassBound_InnerClassesInfo_[] = {
	{"ParameterizedBoundIndex$MethodParameterizedClassBound", "ParameterizedBoundIndex", "MethodParameterizedClassBound", $STATIC},
	{}
};

$ClassInfo _ParameterizedBoundIndex$MethodParameterizedClassBound_ClassInfo_ = {
	$ACC_SUPER,
	"ParameterizedBoundIndex$MethodParameterizedClassBound",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ParameterizedBoundIndex$MethodParameterizedClassBound_MethodInfo_,
	nullptr,
	nullptr,
	_ParameterizedBoundIndex$MethodParameterizedClassBound_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ParameterizedBoundIndex"
};

$Object* allocate$ParameterizedBoundIndex$MethodParameterizedClassBound($Class* clazz) {
	return $of($alloc(ParameterizedBoundIndex$MethodParameterizedClassBound));
}

void ParameterizedBoundIndex$MethodParameterizedClassBound::init$() {
}

void ParameterizedBoundIndex$MethodParameterizedClassBound::m() {
}

ParameterizedBoundIndex$MethodParameterizedClassBound::ParameterizedBoundIndex$MethodParameterizedClassBound() {
}

$Class* ParameterizedBoundIndex$MethodParameterizedClassBound::load$($String* name, bool initialize) {
	$loadClass(ParameterizedBoundIndex$MethodParameterizedClassBound, name, initialize, &_ParameterizedBoundIndex$MethodParameterizedClassBound_ClassInfo_, allocate$ParameterizedBoundIndex$MethodParameterizedClassBound);
	return class$;
}

$Class* ParameterizedBoundIndex$MethodParameterizedClassBound::class$ = nullptr;