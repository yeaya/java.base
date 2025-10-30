#include <ParameterizedBoundIndex$ConstructorParameterizedInterfaceBound.h>

#include <ParameterizedBoundIndex.h>
#include <jcpp.h>

using $ParameterizedBoundIndex = ::ParameterizedBoundIndex;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

$TypeAnnotation _ParameterizedBoundIndex$ConstructorParameterizedInterfaceBound_TypeAnnotations_[] = {
	{"LParameterizedBoundIndex$TypeAnnotation;", nullptr, "CLASS_TYPE_PARAMETER_BOUND, param_index = 0, bound_index = 1"},
	{}
};

$TypeAnnotation _ParameterizedBoundIndex$ConstructorParameterizedInterfaceBound_MethodTypeAnnotations_init$0[] = {
	{"LParameterizedBoundIndex$TypeAnnotation;", nullptr, "METHOD_TYPE_PARAMETER_BOUND, param_index = 0, bound_index = 1"},
	{}
};

$MethodInfo _ParameterizedBoundIndex$ConstructorParameterizedInterfaceBound_MethodInfo_[] = {
	{"<init>", "()V", "<T::Ljava/util/List<*>;>()V", 0, $method(static_cast<void(ParameterizedBoundIndex$ConstructorParameterizedInterfaceBound::*)()>(&ParameterizedBoundIndex$ConstructorParameterizedInterfaceBound::init$)), nullptr, nullptr, nullptr, _ParameterizedBoundIndex$ConstructorParameterizedInterfaceBound_MethodTypeAnnotations_init$0},
	{}
};

$InnerClassInfo _ParameterizedBoundIndex$ConstructorParameterizedInterfaceBound_InnerClassesInfo_[] = {
	{"ParameterizedBoundIndex$ConstructorParameterizedInterfaceBound", "ParameterizedBoundIndex", "ConstructorParameterizedInterfaceBound", $STATIC},
	{}
};

$ClassInfo _ParameterizedBoundIndex$ConstructorParameterizedInterfaceBound_ClassInfo_ = {
	$ACC_SUPER,
	"ParameterizedBoundIndex$ConstructorParameterizedInterfaceBound",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ParameterizedBoundIndex$ConstructorParameterizedInterfaceBound_MethodInfo_,
	"<T::Ljava/util/List<*>;>Ljava/lang/Object;",
	nullptr,
	_ParameterizedBoundIndex$ConstructorParameterizedInterfaceBound_InnerClassesInfo_,
	nullptr,
	_ParameterizedBoundIndex$ConstructorParameterizedInterfaceBound_TypeAnnotations_,
	nullptr,
	"ParameterizedBoundIndex"
};

$Object* allocate$ParameterizedBoundIndex$ConstructorParameterizedInterfaceBound($Class* clazz) {
	return $of($alloc(ParameterizedBoundIndex$ConstructorParameterizedInterfaceBound));
}

void ParameterizedBoundIndex$ConstructorParameterizedInterfaceBound::init$() {
}

ParameterizedBoundIndex$ConstructorParameterizedInterfaceBound::ParameterizedBoundIndex$ConstructorParameterizedInterfaceBound() {
}

$Class* ParameterizedBoundIndex$ConstructorParameterizedInterfaceBound::load$($String* name, bool initialize) {
	$loadClass(ParameterizedBoundIndex$ConstructorParameterizedInterfaceBound, name, initialize, &_ParameterizedBoundIndex$ConstructorParameterizedInterfaceBound_ClassInfo_, allocate$ParameterizedBoundIndex$ConstructorParameterizedInterfaceBound);
	return class$;
}

$Class* ParameterizedBoundIndex$ConstructorParameterizedInterfaceBound::class$ = nullptr;