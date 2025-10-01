#include <ParameterizedBoundIndex$ConstructorInterfaceBound.h>

#include <ParameterizedBoundIndex.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/TypeAnnotation.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ParameterizedBoundIndex = ::ParameterizedBoundIndex;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

$TypeAnnotation _ParameterizedBoundIndex$ConstructorInterfaceBound_MethodTypeAnnotations_init$0[] = {
	{"LParameterizedBoundIndex$TypeAnnotation;", nullptr, "METHOD_TYPE_PARAMETER_BOUND, param_index = 0, bound_index = 1"},
	{}
};

$MethodInfo _ParameterizedBoundIndex$ConstructorInterfaceBound_MethodInfo_[] = {
	{"<init>", "()V", "<T::Ljava/lang/Runnable;>()V", 0, $method(static_cast<void(ParameterizedBoundIndex$ConstructorInterfaceBound::*)()>(&ParameterizedBoundIndex$ConstructorInterfaceBound::init$)), nullptr, nullptr, nullptr, _ParameterizedBoundIndex$ConstructorInterfaceBound_MethodTypeAnnotations_init$0},
	{}
};

$InnerClassInfo _ParameterizedBoundIndex$ConstructorInterfaceBound_InnerClassesInfo_[] = {
	{"ParameterizedBoundIndex$ConstructorInterfaceBound", "ParameterizedBoundIndex", "ConstructorInterfaceBound", $STATIC},
	{}
};

$ClassInfo _ParameterizedBoundIndex$ConstructorInterfaceBound_ClassInfo_ = {
	$ACC_SUPER,
	"ParameterizedBoundIndex$ConstructorInterfaceBound",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ParameterizedBoundIndex$ConstructorInterfaceBound_MethodInfo_,
	nullptr,
	nullptr,
	_ParameterizedBoundIndex$ConstructorInterfaceBound_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ParameterizedBoundIndex"
};

$Object* allocate$ParameterizedBoundIndex$ConstructorInterfaceBound($Class* clazz) {
	return $of($alloc(ParameterizedBoundIndex$ConstructorInterfaceBound));
}

void ParameterizedBoundIndex$ConstructorInterfaceBound::init$() {
}

ParameterizedBoundIndex$ConstructorInterfaceBound::ParameterizedBoundIndex$ConstructorInterfaceBound() {
}

$Class* ParameterizedBoundIndex$ConstructorInterfaceBound::load$($String* name, bool initialize) {
	$loadClass(ParameterizedBoundIndex$ConstructorInterfaceBound, name, initialize, &_ParameterizedBoundIndex$ConstructorInterfaceBound_ClassInfo_, allocate$ParameterizedBoundIndex$ConstructorInterfaceBound);
	return class$;
}

$Class* ParameterizedBoundIndex$ConstructorInterfaceBound::class$ = nullptr;